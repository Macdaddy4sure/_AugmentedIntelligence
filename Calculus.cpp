/*
    Copyright(C) 2024 Tyler Crockett | Macdaddy4sure.com

    Licensed under the Apache License, Version 2.0 (the "License")
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
#include "Calculus.hpp"
#include "Large Language Models.hpp"
#include "Parsers.hpp"
#include "Utilities.hpp"

using namespace std;

string _Calculus::Terms::AbelsTest(string text)
{
    string model = "llama3";
    string definition = "A method of testing for the convergence of an infinite series.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Abels Test";
        }
    }

    return nullptr;
}

string _Calculus::Terms::AbsoluteConvergence(string text)
{
    string model = "llama3";
    string definition = "An infinite series of numbers is said to converge absolutely (or to be absolutely convergent) if the sum of the absolute values of the summands is finite.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Absolute Convergence";
        }
    }

    return nullptr;
}

string _Calculus::Terms::AbsoluteMaximum(string text)
{
    string model = "llama3";
    string definition = "The highest value a function attains.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "AbsoluteMaximum";
        }
    }

    return nullptr;
}

string _Calculus::Terms::AbsoluteMinimum(string text)
{
    string model = "llama3";
    string definition = "The lowest value a function attains.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "AbsoluteMinimum";
        }
    }

    return nullptr;
}

string _Calculus::Terms::AbsoluteValue(string text)
{
    string model = "llama3";
    string definition = "The absolute value or modulus |x| of a real number x is the non-negative value of x without regard to its sign.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "AbsoluteValue";
        }
    }

    return nullptr;
}

string _Calculus::Terms::AlternatingSeries(string text)
{
    string model = "llama3";
    string definition = "An infinite series whose terms alternate between positive and negative.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "AlternatingSeries";
        }
    }

    return nullptr;
}

string _Calculus::Terms::AlternatingSeriesTest(string text)
{
    string model = "llama3";
    string definition = "Is the method used to prove that an alternating series with terms that decrease in absolute value is a convergent series. The test was used by Gottfried Leibniz and is sometimes known as Leibniz's test, Leibniz's rule, or the Leibniz criterion.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "AlternatingSeriesTest";
        }
    }

    return nullptr;
}

string _Calculus::Terms::Annulus(string text)
{
    string model = "llama3";
    string definition = "A ring-shaped object, a region bounded by two concentric circles.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Annulus";
        }
    }

    return nullptr;
}

string _Calculus::Terms::Antiderivative(string text)
{
    string model = "llama3";
    string definition = "An antiderivative, primitive function, primitive integral or indefinite integral of a function f is a differentiable function F whose derivative is equal to the original function f. The process of solving for antiderivatives is called antidifferentiation (or indefinite integration) and its opposite operation is called differentiation, which is the process of finding a derivative.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Antiderivative";
        }
    }

    return nullptr;
}

string _Calculus::Terms::ArcSin(string text)
{
    string model = "llama3";
    string definition = "In mathematics, the inverse trigonometric functions (occasionally also called antitrigonometric, cyclometric, or arcus functions are the inverse functions of the trigonometric functions, under suitably restricted domains. Specifically, they are the inverses of the sine, cosine, tangent, cotangent, secant, and cosecant functions, and are used to obtain an angle from any of the angle's trigonometric ratios. Inverse trigonometric functions are widely used in engineering, navigation, physics, and geometry.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "ArcSin";
        }
    }

    return nullptr;
}

string _Calculus::Terms::AreaUnderTheCurve(string text)
{
    string model = "llama3";
    string definition = "In mathematics, an integral is the continuous analog of a sum, which is used to calculate areas, volumes, and their generalizations. Integration, the process of computing an integral, is one of the two fundamental operations of calculus,[a] the other being differentiation. Integration was initially used to solve problems in mathematics and physics, such as finding the area under a curve, or determining displacement from velocity. Usage of integration expanded to a wide variety of scientific fields thereafter. A definite integral computes the signed area of the region in the plane that is bounded by the graph of a given function between two points in the real line.Conventionally, areas above the horizontal axis of the plane are positive while areas below are negative.Integrals also refer to the concept of an antiderivative, a function whose derivative is the given function; in this case, they are also called indefinite integrals.The fundamental theorem of calculus relates definite integration to differentiation and provides a method to compute the definite integral of a function when its antiderivative is known; differentiation and integration are inverse operations.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "AreaUnderTheCurve";
        }
    }

    return nullptr;
}

string _Calculus::Terms::Asymptote(string text)
{
    string model = "llama3";
    string definition = "In analytic geometry, an asymptote of a curve is a line such that the distance between the curve and the line approaches zero as one or both of the x or y coordinates tends to infinity. Some sources include the requirement that the curve may not cross the line infinitely often, but this is unusual for modern authors. In projective geometry and related contexts, an asymptote of a curve is a line which is tangent to the curve at a point at infinity.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Calculus::Terms::AutomaticDifferentiation(string text)
{
    string model = "llama3";
    string definition = "In mathematics and computer algebra, automatic differentiation (AD), also called algorithmic differentiation or computational differentiation, is a set of techniques to numerically evaluate the derivative of a function specified by a computer program. AD exploits the fact that every computer program, no matter how complicated, executes a sequence of elementary arithmetic operations (addition, subtraction, multiplication, division, etc.) and elementary functions (exp, log, sin, cos, etc.). By applying the chain rule repeatedly to these operations, derivatives of arbitrary order can be computed automatically, accurately to working precision, and using at most a small constant factor more arithmetic operations than the original program.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "AutomaticDifferentiation";
        }
    }

    return nullptr;
}

string _Calculus::Terms::AverageRateOfChange(string text)
{
    string model = "llama3";
    string definition = "In mathematics, a rate is the quotient of two quantities, often represented as a fraction. If the divisor (or fraction denominator) in the rate is equal to one expressed as a single unit, and if it is assumed that this quantity can be changed systematically (i.e., is an independent variable), then the dividend (the fraction numerator) of the rate expresses the corresponding rate of change in the other (dependent) variable. In some cases, it may be regarded as a change to a value, which is caused by a change of a value in respect to another value. For example, acceleration is a change in velocity with respect to time";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "AverageRateOfChange";
        }
    }

    return nullptr;
}

string _Calculus::Terms::BinomialCoefficient(string text)
{
    string model = "llama3";
    string definition = "ny of the positive integers that occurs as a coefficient in the binomial theorem is a binomial coefficient. Commonly, a binomial coefficient is indexed by a pair of integers n >= k >= 0 and is written N over K";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "BinomialCoefficient";
        }
    }

    return nullptr;
}

string _Calculus::Terms::BinomialTheorem(string text)
{
    string model = "llama3";
    string definition = "Describes the algebraic expansion of powers of a binomial.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "BinomialTheorem";
        }
    }

    return nullptr;
}

string _Calculus::Terms::BoundedFunction(string text)
{
    string model = "llama3";
    string definition = "A function f defined on some set X with real or complex values is called bounded, if the set of its values is bounded.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "BoundedFunction";
        }
    }

    return nullptr;
}

string _Calculus::Terms::BoundedSequence(string text)
{
    string model = "llama3";
    string definition = "a function f defined on some set X with real or complex values is called bounded if the set of its values is bounded.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "BoundedSequence";
        }
    }

    return nullptr;
}

string _Calculus::Terms::Calculus(string text)
{
    string model = "llama3";
    string definition = "the mathematical study of continuous change, in the same way that geometry is the study of shape and algebra is the study of generalizations of arithmetic operations.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Calculus::Terms::CavalierisPrinciple(string text)
{
    string model = "llama3";
    string definition = "Cavalieri's principle, a modern implementation of the method of indivisibles, named after Bonaventura Cavalieri, is as follows: 2-dimensional case: Suppose two regions in a plane are included between two parallel lines in that plane. If every line parallel to these two lines intersects both regions in line segments of equal length, then the two regions have equal areas. 3-dimensional case: Suppose two regions in three-space (solids) are included between two parallel planes. If every plane parallel to these two planes intersects both regions in cross-sections of equal area, then the two regions have equal volumes.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "CavalierisPrinciple";
        }
    }

    return nullptr;
}

string _Calculus::Terms::ChainRule(string text)
{
    string model = "llama3";
    string definition = "The chain rule is a formula for computing the derivative of the composition of two or more functions. That is, if f and g are functions, then the chain rule expresses the derivative of their composition f of g (the function which maps x to f(g(x)) ) in terms of the derivatives of f and g and the product of functions as follows: The chain rule may be written in Leibniz's notation in the following way. If a variable z depends on the variable y, which itself depends on the variable x, so that y and z are therefore dependent variables, then z, via the intermediate variable of y, depends on x as well. The chain rule then states, dz/dx = dz/dy * dy/dx. In integration, the counterpart to the chain rule is the substitution rule.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "ChainRule";
        }
    }

    return nullptr;
}

string _Calculus::Terms::ChangeOfVariables(string text)
{
    string model = "llama3";
    string definition = "Is a basic technique used to simplify problems in which the original variables are replaced with functions of other variables. The intent is that when expressed in new variables, the problem may become simpler, or equivalent to a better understood problem.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "ChangeOfVariables";
        }
    }

    return nullptr;
}

string _Calculus::Terms::Cofunction(string text)
{
    string model = "llama3";
    string definition = "A function f is cofunction of a function g if f(A) = g(B) whenever A and B are complementary angles. This definition typically applies to trigonometric functions. ";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Calculus::Terms::ConcaveFunction(string text)
{
    string model = "llama3";
    string definition = "Is the negative of a convex function. A concave function is also synonymously called concave downwards, concave down, convex upwards, convex cap or upper convex.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "ConcaveFunction";
        }
    }

    return nullptr;
}

string _Calculus::Terms::ConstantOfIntegration(string text)
{
    string model = "llama3";
    string definition = "The indefinite integral of a given function (i.e., the set of all antiderivatives of the function) on a connected domain is only defined up to an additive constant, the constant of integration. This constant expresses an ambiguity inherent in the construction of antiderivatives. If a function f(x) is defined on an interval and F(x) is an antiderivative of f(x) then the set of all antiderivatives of f(x) is given by the function F(x) + C, where C is an arbitrary constant (meaning that any value for C makes F(x) + C a valid antiderivative).The constant of integration is sometimes omitted in lists of integrals for simplicity. ";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "ConstantOfIntegration";
        }
    }

    return nullptr;
}

string _Calculus::Terms::ContinuousFuction(string text)
{
    string model = "llama3";
    string definition = "Is a function for which sufficiently small changes in the input result in arbitrarily small changes in the output. Otherwise, a function is said to be a discontinuous function. A continuous function with a continuous inverse function is called a homeomorphism.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "ContinuousFuction";
        }
    }

    return nullptr;
}

string _Calculus::Terms::ContinuouslyDifferentiable(string text)
{
    string model = "llama3";
    string definition = "A function f is said to be continuously differentiable if the derivative f'(x) exists and is itself a continuous function.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "ContinuouslyDifferentiable";
        }
    }

    return nullptr;
}

string _Calculus::Terms::ContoutIntegration(string text)
{
    string model = "llama3";
    string definition = "In the mathematical field of complex analysis, contour integration is a method of evaluating certain integrals along paths in the complex plane.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "ContoutIntegration";
        }
    }

    return nullptr;
}

string _Calculus::Terms::ConvergenceTests(string text)
{
    string model = "llama3";
    string definition = "Are methods of testing for the convergence, conditional convergence, absolute convergence, interval of convergence or divergence of an infinite series.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "ConvergenceTests";
        }
    }

    return nullptr;
}

string _Calculus::Terms::ConvergentSeries(string text)
{
    string model = "llama3";
    string definition = "In mathematics, a series is the sum of the terms of an infinite sequence of numbers. Given an infinite sequence (a1, a2, a3, ...), the nth partial sum Sn is the sum of the first n terms of the sequence. A series is convergent if the sequence of its partial sums {S1, S2, S3, ...} tends to a limit; that means that the partial sums become closer and closer to a given number when the number of their terms increases. More precisely, a series converges, if there exists a number l such that for any arbitrarily small positive number eposlon , there is a (sufficiently large) integer N such that for all n >= N, |Sn - l| <= epsolon. If the series is convergent, the number l (necessarily unique) is called the sum of the series. Any series that is not convergent is said to be divergent.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "ConvergentSeries";
        }
    }

    return nullptr;
}

string _Calculus::Terms::ConvexFunction(string text)
{
    string model = "llama3";
    string definition = "In mathematics, a real-valued function defined on an n-dimensional interval is called convex (or convex downward or concave upward) if the line segment between any two points on the graph of the function lies above or on the graph, in a Euclidean space (or more generally a vector space) of at least two dimensions. Equivalently, a function is convex if its epigraph (the set of points on or above the graph of the function) is a convex set. For a twice differentiable function of a single variable, if the second derivative is always greater than or equal to zero for its entire domain then the function is convex.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "ConvexFunction";
        }
    }

    return nullptr;
}

string _Calculus::Terms::CramersRule(string text)
{
    string model = "llama3";
    string definition = "In linear algebra, Cramer's rule is an explicit formula for the solution of a system of linear equations with as many equations as unknowns, valid whenever the system has a unique solution. It expresses the solution in terms of the determinants of the (square) coefficient matrix and of matrices obtained from it by replacing one column by the column vector of right-hand-sides of the equations.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "CramersRule";
        }
    }

    return nullptr;

}

string _Calculus::Terms::CriticalPoint(string text)
{
    string model = "llama3";
    string definition = "A critical point or stationary point of a differentiable function of a real or complex variable is any value in its domain where its derivative is 0.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "CriticalPoint";
        }
    }

    return nullptr;
}

string _Calculus::Terms::Curve(string text)
{
    string model = "llama3";
    string definition = "A curve (also called a curved line in older texts) is, generally speaking, an object similar to a line but that need not be straight.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Curve";
        }
    }

    return nullptr;
}

string _Calculus::Terms::CurveSketching(string text)
{
    string model = "llama3";
    string definition = "In geometry, curve sketching (or curve tracing) includes techniques that can be used to produce a rough idea of overall shape of a plane curve given its equation without computing the large numbers of points required for a detailed plot. It is an application of the theory of curves to find their main features. Here input is an equation. In digital geometry it is a method of drawing a curve pixel by pixel. Here input is an array (digital image).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "CurveSketching";
        }
    }

    return nullptr;
}

string _Calculus::Terms::DampedSineWave(string text)
{
    string model = "llama3";
    string definition = "Is a sinusoidal function whose amplitude approaches zero as time increases.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "DampedSineWave";
        }
    }

    return nullptr;
}

string _Calculus::Terms::DegreeOfAPolynomial(string text)
{
    string model = "llama3";
    string definition = "Is the highest degree of its monomials (individual terms) with non-zero coefficients. The degree of a term is the sum of the exponents of the variables that appear in it, and thus is a non-negative integer.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "DegreeOfAPolynomial";
        }
    }

    return nullptr;
}

string _Calculus::Terms::Derivative(string text)
{
    string model = "llama3";
    string definition = "The derivative of a function of a real variable measures the sensitivity to change of the function value (output value) with respect to a change in its argument (input value). Derivatives are a fundamental tool of calculus. For example, the derivative of the position of a moving object with respect to time is the object's velocity: this measures how quickly the position of the object changes when time advances.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Calculus::Terms::DerivativeTest(string text)
{
    string model = "llama3";
    string definition = "A derivative test uses the derivatives of a function to locate the critical points of a function and determine whether each point is a local maximum, a local minimum, or a saddle point. Derivative tests can also give information about the concavity of a function.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "DerivativeTest";
        }
    }

    return nullptr;
}

string _Calculus::Terms::DifferentiableFunction(string text)
{
    string model = "llama3";
    string definition = "A differentiable function of one real variable is a function whose derivative exists at each point in its domain. As a result, the graph of a differentiable function must have a (non-vertical) tangent line at each point in its domain, be relatively smooth, and cannot contain any breaks, bends, or cusps.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "DifferentiableFunction";
        }
    }

    return nullptr;
}

string _Calculus::Terms::Differential(string text)
{
    string model = "llama3";
    string definition = "The term differential is used in calculus to refer to an infinitesimal (infinitely small) change in some varying quantity. For example, if x is a variable, then a change in the value of x is often denoted Δx (pronounced delta x). The differential dx represents an infinitely small change in the variable x. The idea of an infinitely small or infinitely slow change is extremely useful intuitively, and there are a number of ways to make the notion mathematically precise. Using calculus, it is possible to relate the infinitely small changes of various variables to each other mathematically using derivatives. If y is a function of x, then the differential dy of y is related to dx by the formula: dy = dy/dx dx, where dy/dx denotes the derivative of y with respect to x. This formula summarizes the intuitive idea that the derivative of y with respect to x is the limit of the ratio of differences Δy/Δx as Δx becomes infinitesimal.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Differential";
        }
    }

    return nullptr;
}

string _Calculus::Terms::DifferentialCalculus(string text)
{
    string model = "llama3";
    string definition = "Is a subfield of calculus concerned with the study of the rates at which quantities change. It is one of the two traditional divisions of calculus, the other being integral calculus, the study of the area beneath a curve.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "DifferentialCalculus";
        }
    }

    return nullptr;
}

string _Calculus::Terms::DifferentialEquation(string text)
{
    string model = "llama3";
    string definition = "Is a mathematical equation that relates some function with its derivatives. In applications, the functions usually represent physical quantities, the derivatives represent their rates of change, and the equation defines a relationship between the two.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "DifferentialEquation";
        }
    }

    return nullptr;
}

string _Calculus::Terms::DifferentialOperator(string text)
{
    string model = "llama3";
    string definition = "a differential operator is an operator defined as a function of the differentiation operator. It is helpful, as a matter of notation first, to consider differentiation as an abstract operation that accepts a function and returns another function (in the style of a higher-order function in computer science).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "DifferentialOperator";
        }
    }

    return nullptr;
}

string _Calculus::Terms::DifferentialOfAFunction(string text)
{
    string model = "llama3";
    string definition = "In calculus, the differential represents the principal part of the change in a function y = f(x) with respect to changes in the independent variable. dy=f'(x)dx, where f'(x) is the derivative of f with respect to x, and dx is an additional real variable (so that dy is a function of x and dx). The notation is such that the equation dy=dy/dx * dx holds, where the derivative is represented in the Leibniz notation dy/dx, and this is consistent with regarding the derivative as the quotient of the differentials. The precise meaning of the variables dy and dx depends on the context of the application and the required level of mathematical rigor. The domain of these variables may take on a particular geometrical significance if the differential is regarded as a particular differential form, or analytical significance if the differential is regarded as a linear approximation to the increment of a function. Traditionally, the variables dx and dy are considered to be very small (infinitesimal), and this interpretation is made rigorous in non-standard analysis.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "DifferentialOfAFunction";
        }
    }

    return nullptr;
}

string _Calculus::Terms::DifferentiationRules(string text)
{
    string model = "llama3";
    string definition = "DifferentiationRules";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "";
        }
    }

    return nullptr;
}

string _Calculus::Terms::DirectComparisonTest(string text)
{
    string model = "llama3";
    string definition = "A convergence test in which an infinite series or an improper integral is compared to one with known convergence properties.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "DirectComparisonTest";
        }
    }

    return nullptr;
}

string _Calculus::Terms::DirichletsTest(string text)
{
    string model = "llama3";
    string definition = "Is a method of testing for the convergence of a series. It is named after its author Peter Gustav Lejeune Dirichlet, and was published posthumously in the Journal de Mathématiques Pures et Appliquées in 1862.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "DirichletsTest";
        }
    }

    return nullptr;
}

string _Calculus::Terms::DiscIntegration(string text)
{
    string model = "llama3";
    string definition = "Also known in integral calculus as the disc method, is a means of calculating the volume of a solid of revolution of a solid-state material when integrating along an axis parallel to the axis of revolution.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "DiscIntegration";
        }
    }

    return nullptr;
}

string _Calculus::Terms::DivergentSeries(string text)
{
    string model = "llama3";
    string definition = "Is an infinite series that is not convergent, meaning that the infinite sequence of the partial sums of the series does not have a finite limit.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "DivergentSeries";
        }
    }

    return nullptr;
}

string _Calculus::Terms::Discontinuity(string text)
{
    string model = "llama3";
    string definition = "Continuous functions are of utmost importance in mathematics, functions and applications. However, not all functions are continuous. If a function is not continuous at a point in its domain, one says that it has a discontinuity there. The set of all points of discontinuity of a function may be a discrete set, a dense set, or even the entire domain of the function.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Discontinuity";
        }
    }

    return nullptr;
}

string _Calculus::Terms::DotProduct(string text)
{
    string model = "llama3";
    string definition = "In mathematics, the dot product or scalar product is an algebraic operation that takes two equal-length sequences of numbers (usually coordinate vectors) and returns a single number. In Euclidean geometry, the dot product of the Cartesian coordinates of two vectors is widely used and often called the inner product (or rarely projection product) of Euclidean space even though it is not the only inner product that can be defined on Euclidean space; see also inner product space.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "DotProduct";
        }
    }

    return nullptr;
}

string _Calculus::Terms::DoubleIntegral(string text)
{
    string model = "llama3";
    string definition = "The multiple integral is a definite integral of a function of more than one real variable, Integrals of a function of two variables over a region in R^2 are called double integrals, and integrals of a function of three variables over a region of R^3 are called triple integrals.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "DoubleIntegral";
        }
    }

    return nullptr;
}

string _Calculus::Terms::E(string text)
{
    string model = "llama3";
    string definition = "The number e is a mathematical constant that is the base of the natural logarithm: the unique number whose natural logarithm is equal to one. It is approximately equal to 2.71828, and is the limit of (1 + 1/n)n as n approaches infinity, an expression that arises in the study of compound interest.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Calculus::Terms::EllipticIntegral(string text)
{
    string model = "llama3";
    string definition = "originally arose in connection with the problem of giving the arc length of an ellipse.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "EllipticIntegral";
        }
    }

    return nullptr;
}

string _Calculus::Terms::EssentialDiscontinuity(string text)
{
    string model = "llama3";
    string definition = "For an essential discontinuity, only one of the two one-sided limits needs not exist or be infinite.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "EssentialDiscontinuity";
        }
    }

    return nullptr;
}

string _Calculus::Terms::EulerMethod(string text)
{
    string model = "llama3";
    string definition = "Euler's method is a numerical method to solve first order first degree differential equation with a given initial value. It is the most basic explicit method for numerical integration of ordinary differential equations and is the simplest Runge–Kutta method. The Euler method is named after Leonhard Euler, who treated it in his book Institutionum calculi integralis (published 1768–1870).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "EulerMethod";
        }
    }

    return nullptr;
}

string _Calculus::Terms::ExponentialFunction(string text)
{
    string model = "llama3";
    string definition = "a function of the form f(x) = ab^x, where b is a positive real number, and in which the argument x occurs as an exponent. For real numbers c and d, a function of the form f(x) = ab^cx+d is also an exponential function, ab^cx+d = (ab^d)(b^c)^x";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "ExponentialFunction";
        }
    }

    return nullptr;
}

string _Calculus::Terms::ExtremeValueTheorem(string text)
{
    string model = "llama3";
    string definition = "States that if a real-valued function f is continuous on the closed interval [a,b], then f must attain a maximum and a minimum, each at least once.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "ExtremeValueTheorem";
        }
    }

    return nullptr;
}

string _Calculus::Terms::Extremum(string text)
{
    string model = "llama3";
    string definition = "In mathematical analysis, the maxima and minima (the respective plurals of maximum and minimum) of a function, known collectively as extrema (the plural of extremum), are the largest and smallest value of the function, either within a given range (the local or relative extrema) or on the entire domain of a function (the global or absolute extrema).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Extremum";
        }
    }

    return nullptr;
}

string _Calculus::Terms::FaaDiBrunosFormula(string text)
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
            return "FaaDiBrunosFormula";
        }
    }

    return nullptr;
}

string _Calculus::Terms::FirstDegreePolynomial(string text)
{
    string model = "llama3";
    string definition = "the degree of a polynomial is the highest of the degrees of the polynomial's monomials (individual terms) with non-zero coefficients. The degree of a term is the sum of the exponents of the variables that appear in it, and thus is a non-negative integer. For a univariate polynomial, the degree of the polynomial is simply the highest exponent occurring in the polynomial. ";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "FirstDegreePolynomial";
        }
    }

    return nullptr;
}

string _Calculus::Terms::FirstDirivativeTest(string text)
{
    string model = "llama3";
    string definition = "The first derivative test examines a function's monotonic properties (where the function is increasing or decreasing) focusing on a particular point in its domain. If the function switches from increasing to decreasing at the point, then the function will achieve a highest value at that point. Similarly, if the function switches from decreasing to increasing at the point, then it will achieve a least value at that point. If the function fails to switch, and remains increasing or remains decreasing, then no highest or least value is achieved.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "FirstDirivativeTest";
        }
    }

    return nullptr;
}

string _Calculus::Terms::FractionCalculus(string text)
{
    string model = "llama3";
    string definition = "Is a branch of mathematical analysis that studies the several different possibilities of defining real number powers or complex number powers of the differentiation operator D. Df(x)=d/dx f(x)";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "FractionCalculus";
        }
    }

    return nullptr;
}

string _Calculus::Terms::Frustum(string text)
{
    string model = "llama3";
    string definition = "In geometry, a frustum (plural: frusta or frustums) is the portion of a solid (normally a cone or pyramid) that lies between one or two parallel planes cutting it. A right frustum is a parallel truncation of a right pyramid or right cone.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Frustum";
        }
    }

    return nullptr;
}

string _Calculus::Terms::Function(string text)
{
    string model = "llama3";
    string definition = "Is a process or a relation that associates each element x of a set X, the domain of the function, to a single element y of another set Y (possibly the same set), the codomain of the function. If the function is called f, this relation is denoted y = f (x), the element x is the argument or input of the function, and y is the value of the function, the output, or the image of x by f. The symbol that is used for representing the input is the variable of the function (one often says that f is a function of the variable x).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Calculus::Terms::FunctionComposition(string text)
{
    string model = "llama3";
    string definition = "Is an operation that takes two functions f and g and produces a function h such that h(x) = g(f(x)). In this operation, the function g is applied to the result of applying the function f to x.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "FunctionComposition";
        }
    }

    return nullptr;
}

string _Calculus::Terms::FundamentalTheoremOfCalculus(string text)
{
    string model = "llama3";
    string definition = "a theorem that links the concept of differentiating a function with the concept of integrating a function. The first part of the theorem, sometimes called the first fundamental theorem of calculus, states that one of the antiderivatives (also called indefinite integral), say F, of some function f may be obtained as the integral of f with a variable bound of integration. This implies the existence of antiderivatives for continuous functions.[44] Conversely, the second part of the theorem, sometimes called the second fundamental theorem of calculus, states that the integral of a function f over some interval can be computed by using any one, say F, of its infinitely many antiderivatives. This part of the theorem has key practical applications, because explicitly finding the antiderivative of a function by symbolic integration avoids numerical integration to compute integrals. This provides generally a better numerical accuracy.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "FundamentalTheoremOfCalculus";
        }
    }

    return nullptr;
}

string _Calculus::Terms::GeneralLeibnizRule(string text)
{
    string model = "llama3";
    string definition = "generalizes the product rule (which is also known as Leibniz's rule). It states that if f and g are n-times differentiable functions.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "GeneralLeibnizRule";
        }
    }

    return nullptr;
}

string _Calculus::Terms::GlobalMaximum(string text)
{
    string model = "llama3";
    string definition = "known collectively as extrema (the plural of extremum), are the largest and smallest value of the function, either within a given range (the local or relative extrema) or on the entire domain of a function (the global or absolute extrema).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "GlobalMaximum";
        }
    }

    return nullptr;
}

string _Calculus::Terms::GlobalMinimum(string text)
{
    string model = "llama3";
    string definition = "smallest value of the function, either within a given range (the local or relative extrema) or on the entire domain of a function (the global or absolute extrema).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "GlobalMinimum";
        }
    }

    return nullptr;
}

string _Calculus::Terms::GoldenSpiral(string text)
{
    string model = "llama3";
    string definition = "a golden spiral is a logarithmic spiral whose growth factor is phi, the golden ratio. That is, a golden spiral gets wider (or further from its origin) by a factor of phi for every quarter turn it makes.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "GoldenSpiral";
        }
    }

    return nullptr;
}

string _Calculus::Terms::Gradient(string text)
{
    string model = "llama3";
    string definition = "a multi-variable generalization of the derivative. While a derivative can be defined on functions of a single variable, for functions of several variables, the gradient takes its place. The gradient is a vector-valued function, as opposed to a derivative, which is scalar-valued.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Gradient";
        }
    }

    return nullptr;
}

string _Calculus::Terms::HarmonicProgression(string text)
{
    string model = "llama3";
    string definition = "a progression formed by taking the reciprocals of an arithmetic progression.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "HarmonicProgression";
        }
    }

    return nullptr;
}

string _Calculus::Terms::HigherDerivative(string text)
{
    string model = "llama3";
    string definition = "Let f be a differentiable function, and let f' be its derivative. The derivative of f' (if it has one) is written f'' and is called the second derivative of f. Similarly, the derivative of the second derivative, if it exists, is written f ′′′ and is called the third derivative of f. Continuing this process, one can define, if it exists, the nth derivative as the derivative of the (n-1)th derivative. These repeated derivatives are called higher-order derivatives. The nth derivative is also called the derivative of order n.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "HigherDerivative";
        }
    }

    return nullptr;
}

string _Calculus::Terms::HomogeneousLinearDifferentiaEquation(string text)
{
    string model = "llama3";
    string definition = "either of two respects. A first order differential equation is said to be homogeneous if it may be written f(x,y)dy = g(x,y)dx, where f and g are homogeneous functions of the same degree of x and y. In this case, the change of variable y = ux leads to an equation of the form dx/x=h(u)du, which is easy to solve by integration of the two members. Otherwise, a differential equation is homogeneous if it is a homogeneous function of the unknown function and its derivatives. In the case of linear differential equations, this means that there are no constant terms. The solutions of any linear ordinary differential equation of any order may be deduced by integration from the solution of the homogeneous equation obtained by removing the constant term.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "HomogeneousLinearDifferentiaEquation";
        }
    }

    return nullptr;
}

string _Calculus::Terms::HyperbolicFunctions(string text)
{
    string model = "llama3";
    string definition = "analogs of the ordinary trigonometric, or circular, functions.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "HyperbolicFunctions";
        }
    }

    return nullptr;
}

string _Calculus::Terms::IdentityFunction(string text)
{
    string model = "llama3";
    string definition = "Also called an identity relation or identity map or identity transformation, is a function that always returns the same value that was used as its argument. In equations, the function is given by f(x) = x.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "IdentityFunction";
        }
    }

    return nullptr;
}

string _Calculus::Terms::ImaginaryNumber(string text)
{
    string model = "llama3";
    string definition = "Is a complex number that can be written as a real number multiplied by the imaginary unit i, which is defined by its property i^2 = −1. The square of an imaginary number bi is −b^2";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "ImaginaryNumber";
        }
    }

    return nullptr;
}

string _Calculus::Terms::ImplicitFunction(string text)
{
    string model = "llama3";
    string definition = "relation of the form R(x1,...,xn)=0, where R is a function of several variables. An implicit function is a function that is defined implicitly by an implicit equation, by associating one of the variables (the value) with the others (the arguments).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "ImplicitFunction";
        }
    }

    return nullptr;
}

string _Calculus::Terms::ImproperFraction(string text)
{
    string model = "llama3";
    string definition = "Common fractions can be classified as either proper or improper. When the numerator and the denominator are both positive, the fraction is called proper if the numerator is less than the denominator, and improper otherwise. In general, a common fraction is said to be a proper fraction if the absolute value of the fraction is strictly less than one—that is, if the fraction is greater than −1 and less than 1. It is said to be an improper fraction, or sometimes top-heavy fraction, if the absolute value of the fraction is greater than or equal to 1. Examples of proper fractions are 2/3, –3/4, and 4/9; examples of improper fractions are 9/4, –4/3, and 3/3.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "ImproperFraction";
        }
    }

    return nullptr;
}

string _Calculus::Terms::ImproperIntegral(string text)
{
    string model = "llama3";
    string definition = "an improper integral is the limit of a definite integral as an endpoint of the interval(s) of integration approaches either a specified real number, infinite, -infinite, or in some instances as both endpoints approach limits. Such an integral is often written symbolically just like a standard definite integral, in some cases with infinity as a limit of integration.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "ImproperIntegral";
        }
    }

    return nullptr;
}

string _Calculus::Terms::InflectionPoint(string text)
{
    string model = "llama3";
    string definition = "an inflection point, point of inflection, flex, or inflection (British English: inflexion) is a point on a continuous plane curve at which the curve changes from being concave (concave downward) to convex (concave upward), or vice versa.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "InflectionPoint";
        }
    }

    return nullptr;
}

string _Calculus::Terms::InstantaneousRateOfChange(string text)
{
    string model = "llama3";
    string definition = "The derivative of a function of a single variable at a chosen input value, when it exists, is the slope of the tangent line to the graph of the function at that point. The tangent line is the best linear approximation of the function near that input value. For this reason, the derivative is often described as the instantaneous rate of change, the ratio of the instantaneous change in the dependent variable to that of the independent variable. .";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "InstantaneousRateOfChange";
        }
    }

    return nullptr;
}

string _Calculus::Terms::InstantaneousVelocity(string text)
{
    string model = "llama3";
    string definition = "If we consider v as velocity and x as the displacement (change in position) vector, then we can express the (instantaneous) velocity of a particle or object, at any particular time t, as the derivative of the position with respect to time";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "InstantaneousVelocity";
        }
    }

    return nullptr;
}

string _Calculus::Terms::Integral(string text)
{
    string model = "llama3";
    string definition = "An integral assigns numbers to functions in a way that can describe displacement, area, volume, and other concepts that arise by combining infinitesimal data. Integration is one of the two main operations of calculus, with its inverse operation, differentiation, being the other.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Calculus::Terms::Integrand(string text)
{
    string model = "llama3";
    string definition = "The function to be integrated in an integral.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Integrand";
        }
    }

    return nullptr;
}

string _Calculus::Terms::IntegrationByParts(string text)
{
    string model = "llama3";
    string definition = "In calculus, and more generally in mathematical analysis, integration by parts or partial integration is a process that finds the integral of a product of functions in terms of the integral of their derivative and antiderivative. It is frequently used to transform the antiderivative of a product of functions into an antiderivative for which a solution can be more easily found. The rule can be readily derived by integrating the product rule of differentiation.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "IntegrationByParts";
        }
    }

    return nullptr;

}

string _Calculus::Terms::IntegrationBySubstitution(string text)
{
    string model = "llama3";
    string definition = "Also known as u-substitution, is a method for solving integrals. Using the fundamental theorem of calculus often requires finding an antiderivative. For this and other reasons, integration by substitution is an important tool in mathematics. It is the counterpart to the chain rule for differentiation.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "IntegrationBySubstitution";
        }
    }

    return nullptr;
}

string _Calculus::Terms::IntermediateValueTheorem(string text)
{
    string model = "llama3";
    string definition = "the intermediate value theorem states that if a continuous function, f, with an interval, [a, b], as its domain, takes values f(a) and f(b) at each end of the interval, then it also takes any value between f(a) and f(b) at some point within the interval. This has two important corollaries: 1. If a continuous function has values of opposite sign inside an interval, then it has a root in that interval (Bolzano's theorem). 2. The image of a continuous function over an interval is itself an interval.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "IntermediateValueTheorem";
        }
    }

    return nullptr;
}

string _Calculus::Terms::InverseTrigonometricFunctions(string text)
{
    string model = "llama3";
    string definition = "the inverse functions of the trigonometric functions (with suitably restricted domains). Specifically, they are the inverses of the sine, cosine, tangent, cotangent, secant, and cosecant functions, and are used to obtain an angle from any of the angle's trigonometric ratios.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "InverseTrigonometricFunctions";
        }
    }

    return nullptr;
}

string _Calculus::Terms::JumpContinuity(string text)
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
            return "";
        }
    }

    return nullptr;
}

string _Calculus::Terms::LebesgueIntegration(string text)
{
    string model = "llama3";
    string definition = "the integral of a non-negative function of a single variable can be regarded, in the simplest case, as the area between the graph of that function and the x-axis. The Lebesgue integral extends the integral to a larger class of functions. It also extends the domains on which these functions can be defined.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "LebesgueIntegration";
        }
    }

    return nullptr;
}

string _Calculus::Terms::LHopitalsRule(string text)
{
    string model = "llama3";
    string definition = "uses derivatives to help evaluate limits involving indeterminate forms. Application (or repeated application) of the rule often converts an indeterminate form to an expression that can be evaluated by substitution, allowing easier evaluation of the limit.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "LHopitalsRule";
        }
    }

    return nullptr;
}

string _Calculus::Terms::LimitComparisonTest(string text)
{
    string model = "llama3";
    string definition = "The limit comparison test allows one to determine the convergence of one series based on the convergence of another.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "LimitComparisonTest";
        }
    }

    return nullptr;
}

string _Calculus::Terms::LimitOfAFunction(string text)
{
    string model = "llama3";
    string definition = "a fundamental concept in calculus and analysis concerning the behavior of that function near a particular input which may or may not be in the domain of the function.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "LimitOfAFunction";
        }
    }

    return nullptr;
}

string _Calculus::Terms::LimitOfIntegration(string text)
{
    string model = "llama3";
    string definition = "limits of integration (or bounds of integration) of the integral. Integral b and a f(x)dx.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "LimitOfIntegration";
        }
    }

    return nullptr;
}

string _Calculus::Terms::LinearCombination(string text)
{
    string model = "llama3";
    string definition = "n expression constructed from a set of terms by multiplying each term by a constant and adding the results (e.g. a linear combination of x and y would be any expression of the form ax + by, where a and b are constants).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "LinearCombination";
        }
    }

    return nullptr;
}

string _Calculus::Terms::LinearEquation(string text)
{
    string model = "llama3";
    string definition = "A linear equation is an equation relating two or more variables to each other in the form of a1x1 + ... + an xn + b = 0, with the highest power of each variable being 1.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "LinearEquation";
        }
    }

    return nullptr;
}

string _Calculus::Terms::LinearSystem(string text)
{
    string model = "llama3";
    string definition = "a mathematical model of a system based on the use of a linear operator. Linear systems typically exhibit features and properties that are much simpler than the nonlinear case. As a mathematical abstraction or idealization, linear systems find important applications in automatic control theory, signal processing, and telecommunications.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "LinearSystem";
        }
    }

    return nullptr;
}

string _Calculus::Terms::Logarithm(string text)
{
    string model = "llama3";
    string definition = "the logarithm to base b is the inverse function of exponentiation with base b. That means that the logarithm of a number x to the base b is the exponent to which b must be raised to produce x. For example, since 1000 = 10^3, the logarithm base 10 of 1000 is 3, or log10(1000) = 3. The The logarithm of x to base b is denoted as logb (x), or without parentheses, logb( x). When the base is clear from the context or is irrelevant it is sometimes written log x";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Calculus::Terms::LogarithmicDifferentiation(string text)
{
    string model = "llama3";
    string definition = "a method used to differentiate functions by employing the logarithmic derivative of a function";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "LogarithmicDifferentiation";
        }
    }

    return nullptr;
}

string _Calculus::Terms::LowerBound(string text)
{
    string model = "llama3";
    string definition = "Given a function f with domain D and a preordered set (K, <=) as codomain, an element y of K is an upper bound of f if y >= f(x) for each x in D. The upper bound is called sharp if equality holds for at least one value of x. It indicates that the constraint is optimal, and thus cannot be further reduced without invalidating the inequality.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "LowerBound";
        }
    }

    return nullptr;
}

string _Calculus::Terms::MeanValueTheorem(string text)
{
    string model = "llama3";
    string definition = "roughly, that for a given planar arc between two endpoints, there is at least one point at which the tangent to the arc is parallel to the secant through its endpoints. It is one of the most important results in real analysis. This theorem is used to prove statements about a function on an interval starting from local hypotheses about derivatives at points of the interval.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "MeanValueTheorem";
        }
    }

    return nullptr;
}

string _Calculus::Terms::MonotonicFunction(string text)
{
    string model = "llama3";
    string definition = "a function between ordered sets that preserves or reverses the given order. ";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "MonotonicFunction";
        }
    }

    return nullptr;
}

string _Calculus::Terms::MultipleIntegral(string text)
{
    string model = "llama3";
    string definition = "a definite integral of a function of several real variables,";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "MultipleIntegral";
        }
    }

    return nullptr;
}

string _Calculus::Terms::MultiplicativeCalculus(string text)
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
            return "MultiplicativeCalculus";
        }
    }

    return nullptr;
}

string _Calculus::Terms::MultivariableCalculus(string text)
{
    string model = "llama3";
    string definition = "the extension of calculus in one variable to calculus with functions of several variables: the differentiation and integration of functions involving multiple variables (multivariate), rather than just one.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "MultivariableCalculus";
        }
    }

    return nullptr;
}

string _Calculus::Terms::NaturalLogarithm(string text)
{
    string model = "llama3";
    string definition = "is its logarithm to the base of the mathematical constant e, where e is an irrational and transcendental number approximately equal to 2.718281828459. The natural logarithm of x is generally written as ln x, loge x, or sometimes, if the base e is implicit, simply log(x). Parentheses are sometimes added for clarity, giving ln(x), loge(x) or log(x). This is done in particular when the argument to the logarithm is not a single symbol, to prevent ambiguity.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "NaturalLogarithm";
        }
    }

    return nullptr;
}

string _Calculus::Terms::NonStandardCalculus(string text)
{
    string model = "llama3";
    string definition = "is the modern application of infinitesimals, in the sense of nonstandard analysis, to infinitesimal calculus. It provides a rigorous justification for some arguments in calculus that were previously considered merely heuristic.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "NonStandardCalculus";
        }
    }

    return nullptr;
}

string _Calculus::Terms::NotationForDifferentiation(string text)
{
    string model = "llama3";
    string definition = "In differential calculus, there is no single uniform notation for differentiation. Instead, various notations for the derivative of a function or variable have been proposed by various mathematicians. The usefulness of each notation varies with the context, and it is sometimes advantageous to use more than one notation in a given context. The most common notations for differentiation (and its opposite operation, the antidifferentiation or indefinite integration) are listed below.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "NotationForDifferentiation";
        }
    }

    return nullptr;
}

string _Calculus::Terms::NumericalIntegration(string text)
{
    string model = "llama3";
    string definition = "is more or less a synonym for numerical integration, especially as applied to one-dimensional integrals. Some authors refer to numerical integration over more than one dimension as cubature; others take quadrature to include higher-dimensional integration.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "NumericalIntegration";
        }
    }

    return nullptr;
}

string _Calculus::Terms::OneSidedLimit(string text)
{
    string model = "llama3";
    string definition = "either one of the two limits of a function f(x) of a real variable x as x approaches a specified point either from the left or from the right.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "OneSidedLimit";
        }
    }

    return nullptr;
}

string _Calculus::Terms::OrdinaryDifferentialEquation(string text)
{
    string model = "llama3";
    string definition = "a differential equation (DE) dependent on only a single independent variable. As with other DE, its unknown(s) consists of one (or more) function(s) and involves the derivatives of those functions. The term ordinary is used in contrast with partial differential equations (PDEs) which may be with respect to more than one independent variable, and, less commonly, in contrast with stochastic differential equations (SDEs) where the progression is random.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "OrdinaryDifferentialEquation";
        }
    }

    return nullptr;
}

string _Calculus::Terms::PappussCentroidTheorem(string text)
{
    string model = "llama3";
    string definition = "is either of two related theorems dealing with the surface areas and volumes of surfaces and solids of revolution.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "PappussCentroidTheorem";
        }
    }

    return nullptr;
}

string _Calculus::Terms::Parabola(string text)
{
    string model = "llama3";
    string definition = "a plane curve that is mirror-symmetrical and is approximately U-shaped. It fits several superficially different other mathematical descriptions, which can all be proved to define exactly the same curves.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Calculus::Terms::Paraboloid(string text)
{
    string model = "llama3";
    string definition = "a quadric surface that has exactly one axis of symmetry and no center of symmetry. The term paraboloid is derived from parabola, which refers to a conic section that has a similar property of symmetry.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Paraboloid";
        }
    }

    return nullptr;
}

string _Calculus::Terms::PartialDerivative(string text)
{
    string model = "llama3";
    string definition = "a function of several variables is its derivative with respect to one of those variables, with the others held constant (as opposed to the total derivative, in which all variables are allowed to vary). Partial derivatives are used in vector calculus and differential geometry.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "PartialDerivative";
        }
    }

    return nullptr;
}

string _Calculus::Terms::PartialDifferentialEquation(string text)
{
    string model = "llama3";
    string definition = "is an equation which computes a function between various partial derivatives of a multivariable function.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "PartialDifferentialEquation";
        }
    }

    return nullptr;
}

string _Calculus::Terms::ParticalFractionDecomposition(string text)
{
    string model = "llama3";
    string definition = "of a rational fraction (that is, a fraction such that the numerator and the denominator are both polynomials) is an operation that consists of expressing the fraction as a sum of a polynomial (possibly zero) and one or several fractions with a simpler denominator.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "ParticalFractionDecomposition";
        }
    }

    return nullptr;
}

string _Calculus::Terms::ParticularSolution(string text)
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
            return "ParticularSolution";
        }
    }

    return nullptr;
}

string _Calculus::Terms::PieceWiseDefininedFunction(string text)
{
    string model = "llama3";
    string definition = "A function defined by multiple sub-functions that apply to certain intervals of the function's domain.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "PieceWiseDefininedFunction";
        }
    }

    return nullptr;
}

string _Calculus::Terms::PositionVector(string text)
{
    string model = "llama3";
    string definition = "a Euclidean vector that represents a point P in space. Its length represents the distance in relation to an arbitrary reference origin O, and its direction represents the angular orientation with respect to given reference axes. Usually denoted x, r, or s, it corresponds to the straight line segment from O to P. In other words, it is the displacement or translation that maps the origin to P";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "PositionVector";
        }
    }

    return nullptr;
}

string _Calculus::Terms::PowerRule(string text)
{
    string model = "llama3";
    string definition = "used to differentiate functions of the form f(x)=x^r, whenever r is a real number. Since differentiation is a linear operation on the space of differentiable functions, polynomials can also be differentiated using this rule. The power rule underlies the Taylor series as it relates a power series with a function's derivatives.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "PowerRule";
        }
    }

    return nullptr;
}

string _Calculus::Terms::ProductIntegral(string text)
{
    string model = "llama3";
    string definition = "any product-based counterpart of the usual sum-based integral of calculus.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "ProductIntegral";
        }
    }

    return nullptr;
}

string _Calculus::Terms::ProductRule(string text)
{
    string model = "llama3";
    string definition = "a formula used to find the derivatives of products of two or more functions.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "ProductRule";
        }
    }

    return nullptr;
}

string _Calculus::Terms::ProperFraction(string text)
{
    string model = "llama3";
    string definition = "When the numerator and the denominator are both positive, the fraction is called proper.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "ProperFraction";
        }
    }

    return nullptr;
}

string _Calculus::Terms::ProperRationalFunction(string text)
{
    string model = "llama3";
    string definition = "any function that can be defined by a rational fraction, which is an algebraic fraction such that both the numerator and the denominator are polynomials. The coefficients of the polynomials need not be rational numbers; they may be taken in any field K. In this case, one speaks of a rational function and a rational fraction over K. The values of the variables may be taken in any field L containing K. Then the domain of the function is the set of the values of the variables for which the denominator is not zero, and the codomain is L.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "ProperRationalFunction";
        }
    }

    return nullptr;
}

string _Calculus::Terms::PythagoreanTheorem(string text)
{
    string model = "llama3";
    string definition = "a fundamental relation in Euclidean geometry between the three sides of a right triangle. It states that the area of the square whose side is the hypotenuse (the side opposite the right angle) is equal to the sum of the areas of the squares on the other two sides.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "PythagoreanTheorem";
        }
    }

    return nullptr;
}

string _Calculus::Terms::PythagoreanTrigonometricIdentity(string text)
{
    string model = "llama3";
    string definition = "an identity expressing the Pythagorean theorem in terms of trigonometric functions. Along with the sum-of-angles formulae, it is one of the basic relations between the sine and cosine functions.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "PythagoreanTrigonometricIdentity";
        }
    }

    return nullptr;
}

string _Calculus::Terms::QuadraticFunction(string text)
{
    string model = "llama3";
    string definition = "a polynomial function with one or more variables in which the highest-degree term is of the second degree.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "QuadraticFunction";
        }
    }

    return nullptr;
}

string _Calculus::Terms::QuadraticPolynomial(string text)
{
    string model = "llama3";
    string definition = "f(x)=ax^2 + bx + c";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "QuadraticPolynomial";
        }
    }

    return nullptr;
}

string _Calculus::Terms::QuotientRule(string text)
{
    string model = "llama3";
    string definition = "A formula for finding the derivative of a function that is the ratio of two functions.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "QuotientRule";
        }
    }

    return nullptr;
}

string _Calculus::Terms::Radian(string text)
{
    string model = "llama3";
    string definition = "the unit of angle in the International System of Units (SI) and is the standard unit of angular measure used in many areas of mathematics. It is defined such that one radian is the angle subtended at the centre of a circle by an arc that is equal in length to the radius.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Calculus::Terms::RatioTest(string text)
{
    string model = "llama3";
    string definition = "a test (or criterion) for the convergence of a series";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "RatioTest";
        }
    }

    return nullptr;
}

string _Calculus::Terms::ReciprocalFunction(string text)
{
    string model = "llama3";
    string definition = "a multiplicative inverse or reciprocal for a number x, denoted by 1/x or x^−1, is a number which when multiplied by x yields the multiplicative identity, 1. The multiplicative inverse of a fraction a/b is b/a. For the multiplicative inverse of a real number, divide 1 by the number. For example, the reciprocal of 5 is one fifth (1/5 or 0.2), and the reciprocal of 0.25 is 1 divided by 0.25, or 4. The reciprocal function, the function f(x) that maps x to 1/x, is one of the simplest examples of a function which is its own inverse (an involution).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "ReciprocalFunction";
        }
    }

    return nullptr;
}

//tring _Calculus::Terms::ReciprocalFunction(string text)
//{
//    string model = "llama3";
//    string definition = "";
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
//            return "";
//        }
//    }
//
//    return nullptr;
//}

string _Calculus::Terms::ReciprocalRule(string text)
{
    string model = "llama3";
    string definition = "he derivative of the reciprocal of a function f in terms of the derivative of f. The reciprocal rule can be used to show that the power rule holds for negative exponents if it has already been established for positive exponents. Also, one can readily deduce the quotient rule from the reciprocal rule and the product rule.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "ReciprocalRule";
        }
    }

    return nullptr;
}

string _Calculus::Terms::RiemannIntegral(string text)
{
    string model = "llama3";
    string definition = "he Riemann integral, created by Bernhard Riemann, was the first rigorous definition of the integral of a function on an interval.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "RiemannIntegral";
        }
    }

    return nullptr;
}

string _Calculus::Terms::RelatedRates(string text)
{
    string model = "llama3";
    string definition = "involve finding a rate at which a quantity changes by relating that quantity to other quantities whose rates of change are known. The rate of change is usually with respect to time. Because science and engineering often relate quantities to each other, the methods of related rates have broad applications in these fields. Differentiation with respect to time or one of the other variables requires application of the chain rule, since most problems involve several variables.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "RelatedRates";
        }
    }

    return nullptr;
}

string _Calculus::Terms::RemovableDiscontinuity(string text)
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
            return "RemovableDiscontinuity";
        }
    }

    return nullptr;
}

string _Calculus::Terms::RollesTheorem(string text)
{
    string model = "llama3";
    string definition = "any real-valued differentiable function that attains equal values at two distinct points must have at least one point, somewhere between them, at which the slope of the tangent line is zero. Such a point is known as a stationary point. It is a point at which the first derivative of the function is zero.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "RollesTheorem";
        }
    }

    return nullptr;
}

string _Calculus::Terms::RootTest(string text)
{
    string model = "llama3";
    string definition = "a criterion for the convergence (a convergence test) of an infinite series.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "RootTest";
        }
    }

    return nullptr;
}

string _Calculus::Terms::Scalar(string text)
{
    string model = "llama3";
    string definition = "an element of a field which is used to define a vector space. In linear algebra, real numbers or generally elements of a field are called scalars and relate to vectors in an associated vector space through the operation of scalar multiplication (defined in the vector space), in which a vector can be multiplied by a scalar in the defined way to produce another vector. Generally speaking, a vector space may be defined by using any field instead of real numbers (such as complex numbers). Then scalars of that vector space will be elements of the associated field (such as complex numbers).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Calculus::Terms::SecantLine(string text)
{
    string model = "llama3";
    string definition = "a line that intersects a curve at a minimum of two distinct points. In the case of a circle, a secant intersects the circle at exactly two points. A chord is the line segment determined by the two points, that is, the interval on the secant whose ends are the two points.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "SecantLine";
        }
    }

    return nullptr;
}

string _Calculus::Terms::SecondDegreePolynomial(string text)
{
    string model = "llama3";
    string definition = "a polynomial with a degree of 2.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "SecondDegreePolynomial";
        }
    }

    return nullptr;
}

string _Calculus::Terms::SecondDerivative(string text)
{
    string model = "llama3";
    string definition = "or the second-order derivative, of a function f is the derivative of the derivative of f. Informally, the second derivative can be phrased as the rate of change of the rate of change; for example, the second derivative of the position of an object with respect to time is the instantaneous acceleration of the object, or the rate at which the velocity of the object is changing with respect to time.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "SecondDerivative";
        }
    }

    return nullptr;
}

string _Calculus::Terms::SecondDerivativeTest(string text)
{
    string model = "llama3";
    string definition = "The relation between the second derivative and the graph can be used to test whether a stationary point for a function";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "SecondDerivativeTest";
        }
    }

    return nullptr;
}

string _Calculus::Terms::SecondOrderDifferentialEquation(string text)
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
            return "SecondOrderDifferentialEquation";
        }
    }

    return nullptr;
}

string _Calculus::Terms::Series(string text)
{
    string model = "llama3";
    string definition = "oughly speaking, an addition of infinitely many terms, one after the other. The study of series is a major part of calculus and its generalization, mathematical analysis. Series are used in most areas of mathematics, even for studying finite structures in combinatorics through generating functions. The mathematical properties of infinite series make them widely applicable in other quantitative disciplines such as physics, computer science, statistics and finance.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Series";
        }
    }

    return nullptr;
}

string _Calculus::Terms::ShellIntegration(string text)
{
    string model = "llama3";
    string definition = "a method for calculating the volume of a solid of revolution, when integrating along an axis perpendicular to the axis of revolution. This is in contrast to disc integration which integrates along the axis parallel to the axis of revolution.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "ShellIntegration";
        }
    }

    return nullptr;
}

string _Calculus::Terms::SimpsonsRule(string text)
{
    string model = "llama3";
    string definition = "are several approximations for definite integrals";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "SimpsonsRule";
        }
    }

    return nullptr;
}

string _Calculus::Terms::Sine(string text)
{
    string model = "llama3";
    string definition = " trigonometric functions of an angle. The sine and cosine of an acute angle are defined in the context of a right triangle: for the specified angle, its sine is the ratio of the length of the side that is opposite that angle to the length of the longest side of the triangle (the hypotenuse), and the cosine is the ratio of the length of the adjacent leg to that of the hypotenuse.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Calculus::Terms::SineWave(string text)
{
    string model = "llama3";
    string definition = "a periodic wave whose waveform (shape) is the trigonometric sine function. In mechanics, as a linear motion over time, this is simple harmonic motion; as rotation, it corresponds to uniform circular motion. Sine waves occur often in physics, including wind waves, sound waves, and light waves, such as monochromatic radiation. In engineering, signal processing, and mathematics, Fourier analysis decomposes general functions into a sum of sine waves of various frequencies, relative phases, and magnitudes.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "SineWave";
        }
    }

    return nullptr;
}

string _Calculus::Terms::SlopeField(string text)
{
    string model = "llama3";
    string definition = "a graphical representation of the solutions to a first-order differential equation of a scalar function. Solutions to a slope field are functions drawn as solid curves. A slope field shows the slope of a differential equation at certain vertical and horizontal intervals on the x-y plane, and can be used to determine the approximate tangent slope at a point on a curve, where the curve is some solution to the differential equation.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "SlopeField";
        }
    }

    return nullptr;
}

string _Calculus::Terms::SqueezeTheorem(string text)
{
    string model = "llama3";
    string definition = "a theorem regarding the limit of a function that is bounded between two other functions.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "SqueezeTheorem";
        }
    }

    return nullptr;
}

string _Calculus::Terms::SumRuleInDifferentiation(string text)
{
    string model = "llama3";
    string definition = "(f + g)' = f' of g'";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "SumRuleInDifferentiation";
        }
    }

    return nullptr;
}

string _Calculus::Terms::SumRuleInIntegration(string text)
{
    string model = "llama3";
    string definition = "forms a vector space under the operations of pointwise addition and multiplication by a scalar, and the operation of integration";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "SumRuleInIntegration";
        }
    }

    return nullptr;
}

string _Calculus::Terms::Summation(string text)
{
    string model = "llama3";
    string definition = "the addition of a sequence of numbers, called addends or summands; the result is their sum or total. Beside numbers, other types of values can be summed as well: functions, vectors, matrices, polynomials and, in general, elements of any type of mathematical objects on which an operation denoted '+' is defined.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Summation";
        }
    }

    return nullptr;
}

string _Calculus::Terms::SupplementaryAngle(string text)
{
    string model = "llama3";
    string definition = "If angles A and B are complementary, the following relationships hold: sin^2(A) + sin^2(B) = 1, cos^2(A) + Cos^2";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "SupplementaryAngle";
        }
    }

    return nullptr;
}

string _Calculus::Terms::SurfaceArea(string text)
{
    string model = "llama3";
    string definition = "a measure of the total area that the surface of the object occupies. The mathematical definition of surface area in the presence of curved surfaces is considerably more involved than the definition of arc length of one-dimensional curves, or of the surface area for polyhedra (i.e., objects with flat polygonal faces), for which the surface area is the sum of the areas of its faces. Smooth surfaces, such as a sphere, are assigned surface area using their representation as parametric surfaces. This definition of surface area is based on methods of infinitesimal calculus and involves partial derivatives and double integration.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "SurfaceArea";
        }
    }

    return nullptr;
}

string _Calculus::Terms::SystemOfLinearEquations(string text)
{
    string model = "llama3";
    string definition = "a collection of two or more linear equations involving the same variables.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "SystemOfLinearEquations";
        }
    }

    return nullptr;
}

string _Calculus::Terms::TaylorSeries(string text)
{
    string model = "llama3";
    string definition = "an infinite sum of terms that are expressed in terms of the function's derivatives at a single point. For most common functions, the function and the sum of its Taylor series are equal near this point. Taylor series are named after Brook Taylor, who introduced them in 1715. A Taylor series is also called a Maclaurin series when 0 is the point where the derivatives are considered, after Colin Maclaurin, who made extensive use of this special case of Taylor series in the 18th century.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "TaylorSeries";
        }
    }

    return nullptr;
}

string _Calculus::Terms::TaylorTheorem(string text)
{
    string model = "llama3";
    string definition = "approximation of a k-times differentiable function around a given point by a polynomial of degree k, called the k-th-order Taylor polynomial. For a smooth function, the Taylor polynomial is the truncation at the order k of the Taylor series of the function.The first - order Taylor polynomial is the linear approximation of the function, and the second - order Taylor polynomial is often referred to as the quadratic approximation. There are several versions of Taylor's theorem, some giving explicit estimates of the approximation error of the function by its Taylor polynomial.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "TaylorTheorem";
        }
    }

    return nullptr;
}

string _Calculus::Terms::Tangent(string text)
{
    string model = "llama3";
    string definition = "a plane curve at a given point is, intuitively, the straight line that just touches the curve at that point. Leibniz defined it as the line through a pair of infinitely close points on the curve. More precisely, a straight line is tangent to the curve y = f(x) at a point x = c if the line passes through the point (c, f(c)) on the curve and has slope f'(c), where f' is the derivative of f. A similar definition applies to space curves and curves in n-dimensional Euclidean space.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Tangent";
        }
    }

    return nullptr;
}

string _Calculus::Terms::ThirdDegreePolynomial(string text)
{
    string model = "llama3";
    string definition = "the highest of the degrees of the polynomial's monomials (individual terms) with non-zero coefficients. The degree of a term is the sum of the exponents of the variables that appear in it, and thus is a non-negative integer. For a univariate polynomial, the degree of the polynomial is simply the highest exponent occurring in the polynomial.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "ThirdDegreePolynomial";
        }
    }

    return nullptr;
}

string _Calculus::Terms::ThirdDerivative(string text)
{
    string model = "llama3";
    string definition = "the third derivative or third-order derivative is the rate at which the second derivative, or the rate of change of the rate of change, is changing. The third derivative of a function y = f(x) can be denoted by d^3y/dx^3, f'''(x), or d^3/dx^3/[f(x)].";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "ThirdDerivative";
        }
    }

    return nullptr;
}

string _Calculus::Terms::Toroid(string text)
{
    string model = "llama3";
    string definition = "a surface of revolution with a hole in the middle. The axis of revolution passes through the hole and so does not intersect the surface.[1] For example, when a rectangle is rotated around an axis parallel to one of its edges, then a hollow rectangle-section ring is produced. If the revolved figure is a circle, then the object is called a torus.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Toroid";
        }
    }

    return nullptr;
}

string _Calculus::Terms::TotalDifferential(string text)
{
    string model = "llama3";
    string definition = "The sum of the partial differentials with respect to all of the independent variables is the total differential.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "TotalDifferential";
        }
    }

    return nullptr;
}

string _Calculus::Terms::TrigonometricFunctions(string text)
{
    string model = "llama3";
    string definition = "are real functions which relate an angle of a right-angled triangle to ratios of two side lengths. They are widely used in all sciences that are related to geometry, such as navigation, solid mechanics, celestial mechanics, geodesy, and many others. They are among the simplest periodic functions, and as such are also widely used for studying periodic phenomena through Fourier analysis. The trigonometric functions most widely used in modern mathematics are the sine, the cosine, and the tangent functions. Their reciprocals are respectively the cosecant, the secant, and the cotangent functions, which are less used. Each of these six trigonometric functions has a corresponding inverse function, and an analog among the hyperbolic functions.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "TrigonometricFunctions";
        }
    }

    return nullptr;
}

string _Calculus::Terms::TrigonometricIdentities(string text)
{
    string model = "llama3";
    string definition = "equalities that involve trigonometric functions and are true for every value of the occurring variables for which both sides of the equality are defined. Geometrically, these are identities involving certain functions of one or more angles. They are distinct from triangle identities, which are identities potentially involving angles but also involving side lengths or other lengths of a triangle.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "TrigonometricIdentities";
        }
    }

    return nullptr;
}

string _Calculus::Terms::TrigonometricIntegral(string text)
{
    string model = "llama3";
    string definition = "a family of nonelementary integrals involving trigonometric functions.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "TrigonometricIntegral";
        }
    }

    return nullptr;
}

string _Calculus::Terms::TrigonometricSubstitution(string text)
{
    string model = "llama3";
    string definition = "replaces a trigonometric function for another expression. In calculus, trigonometric substitutions are a technique for evaluating integrals. In this case, an expression involving a radical function is replaced with a trigonometric one. Trigonometric identities may help simplify the answer. Like other methods of integration by substitution, when evaluating a definite integral, it may be simpler to completely deduce the antiderivative before applying the boundaries of integration.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "TrigonometricSubstitution";
        }
    }

    return nullptr;
}

string _Calculus::Terms::TripleIntegral(string text)
{
    string model = "llama3";
    string definition = "a definite integral of a function of several real variables, for instance, f(x, y) or f(x, y, z).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "";
        }
    }

    return nullptr;
}

string _Calculus::Terms::UpperBound(string text)
{
    string model = "llama3";
    string definition = "Given a function f with domain D and a preordered set (K, <=) as codomain, an element y of K is an upper bound of f if y >= f(x) for each x in D. The upper bound is called sharp if equality holds for at least one value of x. It indicates that the constraint is optimal, and thus cannot be further reduced without invalidating the inequality. Similarly, a function g defined on domain D and having the same codomain(K, <=) is an upper bound of f, if g(x) >= f(x) for each x in D.The function g is further said to be an upper bound of a set of functions, if it is an upper bound of each function in that set.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "TripleIntegral";
        }
    }

    return nullptr;
}

string _Calculus::Terms::Variable(string text)
{
    string model = "llama3";
    string definition = "a symbol, typically a letter, that holds a place for constants, often numbers. One say colloquially that the variable represents or denotes the object, and that the object is the value of the variable.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Calculus::Terms::Vector(string text)
{
    string model = "llama3";
    string definition = "a term that refers to quantities that cannot be expressed by a single number (a scalar), or to elements of some vector spaces. They have to be expressed by both magnitude and direction.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Calculus::Terms::VectorCalculus(string text)
{
    string model = "llama3";
    string definition = "a branch of mathematics concerned with the differentiation and integration of vector fields, primarily in three-dimensional Euclidean space. The term vector calculus is sometimes used as a synonym for the broader subject of multivariable calculus, which spans vector calculus as well as partial differentiation and multiple integration. Vector calculus plays an important role in differential geometry and in the study of partial differential equations. It is used extensively in physics and engineering, especially in the description of electromagnetic fields, gravitational fields, and fluid flow.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "VectorCalculus";
        }
    }

    return nullptr;
}

string _Calculus::Terms::Washer(string text)
{
    string model = "llama3";
    string definition = "To obtain a hollow solid of revolution (the “washer method”), the procedure would be to take the volume of the inner solid of revolution and subtract it from the volume of the outer solid of revolution. This can be calculated in a single integral similar to the following:";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Washer";
        }
    }

    return nullptr;
}

string _Calculus::Terms::WasherMethod(string text)
{
    string model = "llama3";
    string definition = "To obtain a hollow solid of revolution (the “washer method”), the procedure would be to take the volume of the inner solid of revolution and subtract it from the volume of the outer solid of revolution. This can be calculated in a single integral similar to the following:";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "WasherMethod";
        }
    }

    return nullptr;
}

string _Calculus::Terms::AbelsTestVision(string image_location)
{
    string model = "image";
    string definition = "A method of testing for the convergence of an infinite series.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Abels Test";
        }
    }

    return nullptr;
}

string _Calculus::Terms::AbsoluteConvergenceVision(string image_location)
{
    string model = "image";
    string definition = "An infinite series of numbers is said to converge absolutely (or to be absolutely convergent) if the sum of the absolute values of the summands is finite.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Absolute Convergence";
        }
    }

    return nullptr;
}

string _Calculus::Terms::AbsoluteMaximumVision(string image_location)
{
    string model = "image";
    string definition = "The highest value a function attains.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "AbsoluteMaximum";
        }
    }

    return nullptr;
}

string _Calculus::Terms::AbsoluteMinimumVision(string image_location)
{
    string model = "image";
    string definition = "The lowest value a function attains.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "AbsoluteMinimum";
        }
    }

    return nullptr;
}

string _Calculus::Terms::AbsoluteValueVision(string image_location)
{
    string model = "image";
    string definition = "The absolute value or modulus |x| of a real number x is the non-negative value of x without regard to its sign.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "AbsoluteValue";
        }
    }

    return nullptr;
}

string _Calculus::Terms::AlternatingSeriesVision(string image_location)
{
    string model = "image";
    string definition = "An infinite series whose terms alternate between positive and negative.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "AlternatingSeries";
        }
    }

    return nullptr;
}

string _Calculus::Terms::AlternatingSeriesTestVision(string image_location)
{
    string model = "image";
    string definition = "Is the method used to prove that an alternating series with terms that decrease in absolute value is a convergent series. The test was used by Gottfried Leibniz and is sometimes known as Leibniz's test, Leibniz's rule, or the Leibniz criterion.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "AlternatingSeriesTest";
        }
    }

    return nullptr;
}

string _Calculus::Terms::AnnulusVision(string image_location)
{
    string model = "image";
    string definition = "A ring-shaped object, a region bounded by two concentric circles.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Annulus";
        }
    }

    return nullptr;
}

string _Calculus::Terms::AntiderivativeVision(string image_location)
{
    string model = "image";
    string definition = "An antiderivative, primitive function, primitive integral or indefinite integral of a function f is a differentiable function F whose derivative is equal to the original function f. The process of solving for antiderivatives is called antidifferentiation (or indefinite integration) and its opposite operation is called differentiation, which is the process of finding a derivative.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Antiderivative";
        }
    }

    return nullptr;
}

string _Calculus::Terms::ArcSinVision(string image_location)
{
    string model = "image";
    string definition = "In mathematics, the inverse trigonometric functions (occasionally also called antitrigonometric, cyclometric, or arcus functions are the inverse functions of the trigonometric functions, under suitably restricted domains. Specifically, they are the inverses of the sine, cosine, tangent, cotangent, secant, and cosecant functions, and are used to obtain an angle from any of the angle's trigonometric ratios. Inverse trigonometric functions are widely used in engineering, navigation, physics, and geometry.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "ArcSin";
        }
    }

    return nullptr;
}

string _Calculus::Terms::AreaUnderTheCurveVision(string image_location)
{
    string model = "image";
    string definition = "In mathematics, an integral is the continuous analog of a sum, which is used to calculate areas, volumes, and their generalizations. Integration, the process of computing an integral, is one of the two fundamental operations of calculus,[a] the other being differentiation. Integration was initially used to solve problems in mathematics and physics, such as finding the area under a curve, or determining displacement from velocity. Usage of integration expanded to a wide variety of scientific fields thereafter. A definite integral computes the signed area of the region in the plane that is bounded by the graph of a given function between two points in the real line.Conventionally, areas above the horizontal axis of the plane are positive while areas below are negative.Integrals also refer to the concept of an antiderivative, a function whose derivative is the given function; in this case, they are also called indefinite integrals.The fundamental theorem of calculus relates definite integration to differentiation and provides a method to compute the definite integral of a function when its antiderivative is known; differentiation and integration are inverse operations.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "AreaUnderTheCurve";
        }
    }

    return nullptr;
}

string _Calculus::Terms::AsymptoteVision(string image_location)
{
    string model = "image";
    string definition = "In analytic geometry, an asymptote of a curve is a line such that the distance between the curve and the line approaches zero as one or both of the x or y coordinates tends to infinity. Some sources include the requirement that the curve may not cross the line infinitely often, but this is unusual for modern authors. In projective geometry and related contexts, an asymptote of a curve is a line which is tangent to the curve at a point at infinity.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
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

string _Calculus::Terms::AutomaticDifferentiationVision(string image_location)
{
    string model = "image";
    string definition = "In mathematics and computer algebra, automatic differentiation (AD), also called algorithmic differentiation or computational differentiation, is a set of techniques to numerically evaluate the derivative of a function specified by a computer program. AD exploits the fact that every computer program, no matter how complicated, executes a sequence of elementary arithmetic operations (addition, subtraction, multiplication, division, etc.) and elementary functions (exp, log, sin, cos, etc.). By applying the chain rule repeatedly to these operations, derivatives of arbitrary order can be computed automatically, accurately to working precision, and using at most a small constant factor more arithmetic operations than the original program.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "AutomaticDifferentiation";
        }
    }

    return nullptr;
}

string _Calculus::Terms::AverageRateOfChangeVision(string image_location)
{
    string model = "image";
    string definition = "In mathematics, a rate is the quotient of two quantities, often represented as a fraction. If the divisor (or fraction denominator) in the rate is equal to one expressed as a single unit, and if it is assumed that this quantity can be changed systematically (i.e., is an independent variable), then the dividend (the fraction numerator) of the rate expresses the corresponding rate of change in the other (dependent) variable. In some cases, it may be regarded as a change to a value, which is caused by a change of a value in respect to another value. For example, acceleration is a change in velocity with respect to time";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "AverageRateOfChange";
        }
    }

    return nullptr;
}

string _Calculus::Terms::BinomialCoefficientVision(string image_location)
{
    string model = "image";
    string definition = "ny of the positive integers that occurs as a coefficient in the binomial theorem is a binomial coefficient. Commonly, a binomial coefficient is indexed by a pair of integers n >= k >= 0 and is written N over K";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "BinomialCoefficient";
        }
    }

    return nullptr;
}

string _Calculus::Terms::BinomialTheoremVision(string image_location)
{
    string model = "image";
    string definition = "Describes the algebraic expansion of powers of a binomial.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "BinomialTheorem";
        }
    }

    return nullptr;
}

string _Calculus::Terms::BoundedFunctionVision(string image_location)
{
    string model = "image";
    string definition = "A function f defined on some set X with real or complex values is called bounded, if the set of its values is bounded.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "BoundedFunction";
        }
    }

    return nullptr;
}

string _Calculus::Terms::BoundedSequenceVision(string image_location)
{
    string model = "image";
    string definition = "a function f defined on some set X with real or complex values is called bounded if the set of its values is bounded.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "BoundedSequence";
        }
    }

    return nullptr;
}

string _Calculus::Terms::CalculusVision(string image_location)
{
    string model = "image";
    string definition = "the mathematical study of continuous change, in the same way that geometry is the study of shape and algebra is the study of generalizations of arithmetic operations.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
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

string _Calculus::Terms::CavalierisPrincipleVision(string image_location)
{
    string model = "image";
    string definition = "Cavalieri's principle, a modern implementation of the method of indivisibles, named after Bonaventura Cavalieri, is as follows: 2-dimensional case: Suppose two regions in a plane are included between two parallel lines in that plane. If every line parallel to these two lines intersects both regions in line segments of equal length, then the two regions have equal areas. 3-dimensional case: Suppose two regions in three-space (solids) are included between two parallel planes. If every plane parallel to these two planes intersects both regions in cross-sections of equal area, then the two regions have equal volumes.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "CavalierisPrinciple";
        }
    }

    return nullptr;
}

string _Calculus::Terms::ChainRuleVision(string image_location)
{
    string model = "image";
    string definition = "The chain rule is a formula for computing the derivative of the composition of two or more functions. That is, if f and g are functions, then the chain rule expresses the derivative of their composition f of g (the function which maps x to f(g(x)) ) in terms of the derivatives of f and g and the product of functions as follows: The chain rule may be written in Leibniz's notation in the following way. If a variable z depends on the variable y, which itself depends on the variable x, so that y and z are therefore dependent variables, then z, via the intermediate variable of y, depends on x as well. The chain rule then states, dz/dx = dz/dy * dy/dx. In integration, the counterpart to the chain rule is the substitution rule.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "ChainRule";
        }
    }

    return nullptr;
}

string _Calculus::Terms::ChangeOfVariablesVision(string image_location)
{
    string model = "image";
    string definition = "Is a basic technique used to simplify problems in which the original variables are replaced with functions of other variables. The intent is that when expressed in new variables, the problem may become simpler, or equivalent to a better understood problem.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "ChangeOfVariables";
        }
    }

    return nullptr;
}

string _Calculus::Terms::CofunctionVision(string image_location)
{
    string model = "image";
    string definition = "A function f is cofunction of a function g if f(A) = g(B) whenever A and B are complementary angles. This definition typically applies to trigonometric functions. ";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
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

string _Calculus::Terms::ConcaveFunctionVision(string image_location)
{
    string model = "image";
    string definition = "Is the negative of a convex function. A concave function is also synonymously called concave downwards, concave down, convex upwards, convex cap or upper convex.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "ConcaveFunction";
        }
    }

    return nullptr;
}

string _Calculus::Terms::ConstantOfIntegrationVision(string image_location)
{
    string model = "image";
    string definition = "The indefinite integral of a given function (i.e., the set of all antiderivatives of the function) on a connected domain is only defined up to an additive constant, the constant of integration. This constant expresses an ambiguity inherent in the construction of antiderivatives. If a function f(x) is defined on an interval and F(x) is an antiderivative of f(x) then the set of all antiderivatives of f(x) is given by the function F(x) + C, where C is an arbitrary constant (meaning that any value for C makes F(x) + C a valid antiderivative).The constant of integration is sometimes omitted in lists of integrals for simplicity. ";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "ConstantOfIntegration";
        }
    }

    return nullptr;
}

string _Calculus::Terms::ContinuousFuctionVision(string image_location)
{
    string model = "image";
    string definition = "Is a function for which sufficiently small changes in the input result in arbitrarily small changes in the output. Otherwise, a function is said to be a discontinuous function. A continuous function with a continuous inverse function is called a homeomorphism.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "ContinuousFuction";
        }
    }

    return nullptr;
}

string _Calculus::Terms::ContinuouslyDifferentiableVision(string image_location)
{
    string model = "image";
    string definition = "A function f is said to be continuously differentiable if the derivative f'(x) exists and is itself a continuous function.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "ContinuouslyDifferentiable";
        }
    }

    return nullptr;
}

string _Calculus::Terms::ContoutIntegrationVision(string image_location)
{
    string model = "image";
    string definition = "In the mathematical field of complex analysis, contour integration is a method of evaluating certain integrals along paths in the complex plane.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "ContoutIntegration";
        }
    }

    return nullptr;
}

string _Calculus::Terms::ConvergenceTestsVision(string image_location)
{
    string model = "image";
    string definition = "Are methods of testing for the convergence, conditional convergence, absolute convergence, interval of convergence or divergence of an infinite series.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "ConvergenceTests";
        }
    }

    return nullptr;
}

string _Calculus::Terms::ConvergentSeriesVision(string image_location)
{
    string model = "image";
    string definition = "In mathematics, a series is the sum of the terms of an infinite sequence of numbers. Given an infinite sequence (a1, a2, a3, ...), the nth partial sum Sn is the sum of the first n terms of the sequence. A series is convergent if the sequence of its partial sums {S1, S2, S3, ...} tends to a limit; that means that the partial sums become closer and closer to a given number when the number of their terms increases. More precisely, a series converges, if there exists a number l such that for any arbitrarily small positive number eposlon , there is a (sufficiently large) integer N such that for all n >= N, |Sn - l| <= epsolon. If the series is convergent, the number l (necessarily unique) is called the sum of the series. Any series that is not convergent is said to be divergent.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "ConvergentSeries";
        }
    }

    return nullptr;
}

string _Calculus::Terms::ConvexFunctionVision(string image_location)
{
    string model = "image";
    string definition = "In mathematics, a real-valued function defined on an n-dimensional interval is called convex (or convex downward or concave upward) if the line segment between any two points on the graph of the function lies above or on the graph, in a Euclidean space (or more generally a vector space) of at least two dimensions. Equivalently, a function is convex if its epigraph (the set of points on or above the graph of the function) is a convex set. For a twice differentiable function of a single variable, if the second derivative is always greater than or equal to zero for its entire domain then the function is convex.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "ConvexFunction";
        }
    }

    return nullptr;
}

string _Calculus::Terms::CramersRuleVision(string image_location)
{
    string model = "image";
    string definition = "In linear algebra, Cramer's rule is an explicit formula for the solution of a system of linear equations with as many equations as unknowns, valid whenever the system has a unique solution. It expresses the solution in terms of the determinants of the (square) coefficient matrix and of matrices obtained from it by replacing one column by the column vector of right-hand-sides of the equations.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "CramersRule";
        }
    }

    return nullptr;

}

string _Calculus::Terms::CriticalPointVision(string image_location)
{
    string model = "image";
    string definition = "A critical point or stationary point of a differentiable function of a real or complex variable is any value in its domain where its derivative is 0.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "CriticalPoint";
        }
    }

    return nullptr;
}

string _Calculus::Terms::CurveVision(string image_location)
{
    string model = "image";
    string definition = "A curve (also called a curved line in older texts) is, generally speaking, an object similar to a line but that need not be straight.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Curve";
        }
    }

    return nullptr;
}

string _Calculus::Terms::CurveSketchingVision(string image_location)
{
    string model = "image";
    string definition = "In geometry, curve sketching (or curve tracing) includes techniques that can be used to produce a rough idea of overall shape of a plane curve given its equation without computing the large numbers of points required for a detailed plot. It is an application of the theory of curves to find their main features. Here input is an equation. In digital geometry it is a method of drawing a curve pixel by pixel. Here input is an array (digital image).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "CurveSketching";
        }
    }

    return nullptr;
}

string _Calculus::Terms::DampedSineWaveVision(string image_location)
{
    string model = "image";
    string definition = "Is a sinusoidal function whose amplitude approaches zero as time increases.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "DampedSineWave";
        }
    }

    return nullptr;
}

string _Calculus::Terms::DegreeOfAPolynomialVision(string image_location)
{
    string model = "image";
    string definition = "Is the highest degree of its monomials (individual terms) with non-zero coefficients. The degree of a term is the sum of the exponents of the variables that appear in it, and thus is a non-negative integer.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "DegreeOfAPolynomial";
        }
    }

    return nullptr;
}

string _Calculus::Terms::DerivativeVision(string image_location)
{
    string model = "image";
    string definition = "The derivative of a function of a real variable measures the sensitivity to change of the function value (output value) with respect to a change in its argument (input value). Derivatives are a fundamental tool of calculus. For example, the derivative of the position of a moving object with respect to time is the object's velocity: this measures how quickly the position of the object changes when time advances.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
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

string _Calculus::Terms::DerivativeTestVision(string image_location)
{
    string model = "image";
    string definition = "A derivative test uses the derivatives of a function to locate the critical points of a function and determine whether each point is a local maximum, a local minimum, or a saddle point. Derivative tests can also give information about the concavity of a function.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "DerivativeTest";
        }
    }

    return nullptr;
}

string _Calculus::Terms::DifferentiableFunctionVision(string image_location)
{
    string model = "image";
    string definition = "A differentiable function of one real variable is a function whose derivative exists at each point in its domain. As a result, the graph of a differentiable function must have a (non-vertical) tangent line at each point in its domain, be relatively smooth, and cannot contain any breaks, bends, or cusps.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "DifferentiableFunction";
        }
    }

    return nullptr;
}

string _Calculus::Terms::DifferentialVision(string image_location)
{
    string model = "image";
    string definition = "The term differential is used in calculus to refer to an infinitesimal (infinitely small) change in some varying quantity. For example, if x is a variable, then a change in the value of x is often denoted Δx (pronounced delta x). The differential dx represents an infinitely small change in the variable x. The idea of an infinitely small or infinitely slow change is extremely useful intuitively, and there are a number of ways to make the notion mathematically precise. Using calculus, it is possible to relate the infinitely small changes of various variables to each other mathematically using derivatives. If y is a function of x, then the differential dy of y is related to dx by the formula: dy = dy/dx dx, where dy/dx denotes the derivative of y with respect to x. This formula summarizes the intuitive idea that the derivative of y with respect to x is the limit of the ratio of differences Δy/Δx as Δx becomes infinitesimal.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Differential";
        }
    }

    return nullptr;
}

string _Calculus::Terms::DifferentialCalculusVision(string image_location)
{
    string model = "image";
    string definition = "Is a subfield of calculus concerned with the study of the rates at which quantities change. It is one of the two traditional divisions of calculus, the other being integral calculus, the study of the area beneath a curve.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "DifferentialCalculus";
        }
    }

    return nullptr;
}

string _Calculus::Terms::DifferentialEquationVision(string image_location)
{
    string model = "image";
    string definition = "Is a mathematical equation that relates some function with its derivatives. In applications, the functions usually represent physical quantities, the derivatives represent their rates of change, and the equation defines a relationship between the two.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "DifferentialEquation";
        }
    }

    return nullptr;
}

string _Calculus::Terms::DifferentialOperatorVision(string image_location)
{
    string model = "image";
    string definition = "a differential operator is an operator defined as a function of the differentiation operator. It is helpful, as a matter of notation first, to consider differentiation as an abstract operation that accepts a function and returns another function (in the style of a higher-order function in computer science).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "DifferentialOperator";
        }
    }

    return nullptr;
}

string _Calculus::Terms::DifferentialOfAFunctionVision(string image_location)
{
    string model = "image";
    string definition = "In calculus, the differential represents the principal part of the change in a function y = f(x) with respect to changes in the independent variable. dy=f'(x)dx, where f'(x) is the derivative of f with respect to x, and dx is an additional real variable (so that dy is a function of x and dx). The notation is such that the equation dy=dy/dx * dx holds, where the derivative is represented in the Leibniz notation dy/dx, and this is consistent with regarding the derivative as the quotient of the differentials. The precise meaning of the variables dy and dx depends on the context of the application and the required level of mathematical rigor. The domain of these variables may take on a particular geometrical significance if the differential is regarded as a particular differential form, or analytical significance if the differential is regarded as a linear approximation to the increment of a function. Traditionally, the variables dx and dy are considered to be very small (infinitesimal), and this interpretation is made rigorous in non-standard analysis.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "DifferentialOfAFunction";
        }
    }

    return nullptr;
}

string _Calculus::Terms::DifferentiationRulesVision(string image_location)
{
    string model = "image";
    string definition = "DifferentiationRules";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "";
        }
    }

    return nullptr;
}

string _Calculus::Terms::DirectComparisonTestVision(string image_location)
{
    string model = "image";
    string definition = "A convergence test in which an infinite series or an improper integral is compared to one with known convergence properties.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "DirectComparisonTest";
        }
    }

    return nullptr;
}

string _Calculus::Terms::DirichletsTestVision(string image_location)
{
    string model = "image";
    string definition = "Is a method of testing for the convergence of a series. It is named after its author Peter Gustav Lejeune Dirichlet, and was published posthumously in the Journal de Mathématiques Pures et Appliquées in 1862.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "DirichletsTest";
        }
    }

    return nullptr;
}

string _Calculus::Terms::DiscIntegrationVision(string image_location)
{
    string model = "image";
    string definition = "Also known in integral calculus as the disc method, is a means of calculating the volume of a solid of revolution of a solid-state material when integrating along an axis parallel to the axis of revolution.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "DiscIntegration";
        }
    }

    return nullptr;
}

string _Calculus::Terms::DivergentSeriesVision(string image_location)
{
    string model = "image";
    string definition = "Is an infinite series that is not convergent, meaning that the infinite sequence of the partial sums of the series does not have a finite limit.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "DivergentSeries";
        }
    }

    return nullptr;
}

string _Calculus::Terms::DiscontinuityVision(string image_location)
{
    string model = "image";
    string definition = "Continuous functions are of utmost importance in mathematics, functions and applications. However, not all functions are continuous. If a function is not continuous at a point in its domain, one says that it has a discontinuity there. The set of all points of discontinuity of a function may be a discrete set, a dense set, or even the entire domain of the function.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Discontinuity";
        }
    }

    return nullptr;
}

string _Calculus::Terms::DotProductVision(string image_location)
{
    string model = "image";
    string definition = "In mathematics, the dot product or scalar product is an algebraic operation that takes two equal-length sequences of numbers (usually coordinate vectors) and returns a single number. In Euclidean geometry, the dot product of the Cartesian coordinates of two vectors is widely used and often called the inner product (or rarely projection product) of Euclidean space even though it is not the only inner product that can be defined on Euclidean space; see also inner product space.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "DotProduct";
        }
    }

    return nullptr;
}

string _Calculus::Terms::DoubleIntegralVision(string image_location)
{
    string model = "image";
    string definition = "The multiple integral is a definite integral of a function of more than one real variable, Integrals of a function of two variables over a region in R^2 are called double integrals, and integrals of a function of three variables over a region of R^3 are called triple integrals.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "DoubleIntegral";
        }
    }

    return nullptr;
}

string _Calculus::Terms::EVision(string image_location)
{
    string model = "image";
    string definition = "The number e is a mathematical constant that is the base of the natural logarithm: the unique number whose natural logarithm is equal to one. It is approximately equal to 2.71828, and is the limit of (1 + 1/n)n as n approaches infinity, an expression that arises in the study of compound interest.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
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

string _Calculus::Terms::EllipticIntegralVision(string image_location)
{
    string model = "image";
    string definition = "originally arose in connection with the problem of giving the arc length of an ellipse.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "EllipticIntegral";
        }
    }

    return nullptr;
}

string _Calculus::Terms::EssentialDiscontinuityVision(string image_location)
{
    string model = "image";
    string definition = "For an essential discontinuity, only one of the two one-sided limits needs not exist or be infinite.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "EssentialDiscontinuity";
        }
    }

    return nullptr;
}

string _Calculus::Terms::EulerMethodVision(string image_location)
{
    string model = "image";
    string definition = "Euler's method is a numerical method to solve first order first degree differential equation with a given initial value. It is the most basic explicit method for numerical integration of ordinary differential equations and is the simplest Runge–Kutta method. The Euler method is named after Leonhard Euler, who treated it in his book Institutionum calculi integralis (published 1768–1870).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "EulerMethod";
        }
    }

    return nullptr;
}

string _Calculus::Terms::ExponentialFunctionVision(string image_location)
{
    string model = "image";
    string definition = "a function of the form f(x) = ab^x, where b is a positive real number, and in which the argument x occurs as an exponent. For real numbers c and d, a function of the form f(x) = ab^cx+d is also an exponential function, ab^cx+d = (ab^d)(b^c)^x";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "ExponentialFunction";
        }
    }

    return nullptr;
}

string _Calculus::Terms::ExtremeValueTheoremVision(string image_location)
{
    string model = "image";
    string definition = "States that if a real-valued function f is continuous on the closed interval [a,b], then f must attain a maximum and a minimum, each at least once.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "ExtremeValueTheorem";
        }
    }

    return nullptr;
}

string _Calculus::Terms::ExtremumVision(string image_location)
{
    string model = "image";
    string definition = "In mathematical analysis, the maxima and minima (the respective plurals of maximum and minimum) of a function, known collectively as extrema (the plural of extremum), are the largest and smallest value of the function, either within a given range (the local or relative extrema) or on the entire domain of a function (the global or absolute extrema).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Extremum";
        }
    }

    return nullptr;
}

string _Calculus::Terms::FaaDiBrunosFormulaVision(string image_location)
{
    string model = "image";
    string definition = "";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "FaaDiBrunosFormula";
        }
    }

    return nullptr;
}

string _Calculus::Terms::FirstDegreePolynomialVision(string image_location)
{
    string model = "image";
    string definition = "the degree of a polynomial is the highest of the degrees of the polynomial's monomials (individual terms) with non-zero coefficients. The degree of a term is the sum of the exponents of the variables that appear in it, and thus is a non-negative integer. For a univariate polynomial, the degree of the polynomial is simply the highest exponent occurring in the polynomial. ";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "FirstDegreePolynomial";
        }
    }

    return nullptr;
}

string _Calculus::Terms::FirstDirivativeTestVision(string image_location)
{
    string model = "image";
    string definition = "The first derivative test examines a function's monotonic properties (where the function is increasing or decreasing) focusing on a particular point in its domain. If the function switches from increasing to decreasing at the point, then the function will achieve a highest value at that point. Similarly, if the function switches from decreasing to increasing at the point, then it will achieve a least value at that point. If the function fails to switch, and remains increasing or remains decreasing, then no highest or least value is achieved.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "FirstDirivativeTest";
        }
    }

    return nullptr;
}

string _Calculus::Terms::FractionCalculusVision(string image_location)
{
    string model = "image";
    string definition = "Is a branch of mathematical analysis that studies the several different possibilities of defining real number powers or complex number powers of the differentiation operator D. Df(x)=d/dx f(x)";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "FractionCalculus";
        }
    }

    return nullptr;
}

string _Calculus::Terms::FrustumVision(string image_location)
{
    string model = "image";
    string definition = "In geometry, a frustum (plural: frusta or frustums) is the portion of a solid (normally a cone or pyramid) that lies between one or two parallel planes cutting it. A right frustum is a parallel truncation of a right pyramid or right cone.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Frustum";
        }
    }

    return nullptr;
}

string _Calculus::Terms::FunctionVision(string image_location)
{
    string model = "image";
    string definition = "Is a process or a relation that associates each element x of a set X, the domain of the function, to a single element y of another set Y (possibly the same set), the codomain of the function. If the function is called f, this relation is denoted y = f (x), the element x is the argument or input of the function, and y is the value of the function, the output, or the image of x by f. The symbol that is used for representing the input is the variable of the function (one often says that f is a function of the variable x).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
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

string _Calculus::Terms::FunctionCompositionVision(string image_location)
{
    string model = "image";
    string definition = "Is an operation that takes two functions f and g and produces a function h such that h(x) = g(f(x)). In this operation, the function g is applied to the result of applying the function f to x.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "FunctionComposition";
        }
    }

    return nullptr;
}

string _Calculus::Terms::FundamentalTheoremOfCalculusVision(string image_location)
{
    string model = "image";
    string definition = "a theorem that links the concept of differentiating a function with the concept of integrating a function. The first part of the theorem, sometimes called the first fundamental theorem of calculus, states that one of the antiderivatives (also called indefinite integral), say F, of some function f may be obtained as the integral of f with a variable bound of integration. This implies the existence of antiderivatives for continuous functions.[44] Conversely, the second part of the theorem, sometimes called the second fundamental theorem of calculus, states that the integral of a function f over some interval can be computed by using any one, say F, of its infinitely many antiderivatives. This part of the theorem has key practical applications, because explicitly finding the antiderivative of a function by symbolic integration avoids numerical integration to compute integrals. This provides generally a better numerical accuracy.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "FundamentalTheoremOfCalculus";
        }
    }

    return nullptr;
}

string _Calculus::Terms::GeneralLeibnizRuleVision(string image_location)
{
    string model = "image";
    string definition = "generalizes the product rule (which is also known as Leibniz's rule). It states that if f and g are n-times differentiable functions.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "GeneralLeibnizRule";
        }
    }

    return nullptr;
}

string _Calculus::Terms::GlobalMaximumVision(string image_location)
{
    string model = "image";
    string definition = "known collectively as extrema (the plural of extremum), are the largest and smallest value of the function, either within a given range (the local or relative extrema) or on the entire domain of a function (the global or absolute extrema).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "GlobalMaximum";
        }
    }

    return nullptr;
}

string _Calculus::Terms::GlobalMinimumVision(string image_location)
{
    string model = "image";
    string definition = "smallest value of the function, either within a given range (the local or relative extrema) or on the entire domain of a function (the global or absolute extrema).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "GlobalMinimum";
        }
    }

    return nullptr;
}

string _Calculus::Terms::GoldenSpiralVision(string image_location)
{
    string model = "image";
    string definition = "a golden spiral is a logarithmic spiral whose growth factor is phi, the golden ratio. That is, a golden spiral gets wider (or further from its origin) by a factor of phi for every quarter turn it makes.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "GoldenSpiral";
        }
    }

    return nullptr;
}

string _Calculus::Terms::GradientVision(string image_location)
{
    string model = "image";
    string definition = "a multi-variable generalization of the derivative. While a derivative can be defined on functions of a single variable, for functions of several variables, the gradient takes its place. The gradient is a vector-valued function, as opposed to a derivative, which is scalar-valued.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Gradient";
        }
    }

    return nullptr;
}

string _Calculus::Terms::HarmonicProgressionVision(string image_location)
{
    string model = "image";
    string definition = "a progression formed by taking the reciprocals of an arithmetic progression.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "HarmonicProgression";
        }
    }

    return nullptr;
}

string _Calculus::Terms::HigherDerivativeVision(string image_location)
{
    string model = "image";
    string definition = "Let f be a differentiable function, and let f' be its derivative. The derivative of f' (if it has one) is written f'' and is called the second derivative of f. Similarly, the derivative of the second derivative, if it exists, is written f ′′′ and is called the third derivative of f. Continuing this process, one can define, if it exists, the nth derivative as the derivative of the (n-1)th derivative. These repeated derivatives are called higher-order derivatives. The nth derivative is also called the derivative of order n.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "HigherDerivative";
        }
    }

    return nullptr;
}

string _Calculus::Terms::HomogeneousLinearDifferentiaEquationVision(string image_location)
{
    string model = "image";
    string definition = "either of two respects. A first order differential equation is said to be homogeneous if it may be written f(x,y)dy = g(x,y)dx, where f and g are homogeneous functions of the same degree of x and y. In this case, the change of variable y = ux leads to an equation of the form dx/x=h(u)du, which is easy to solve by integration of the two members. Otherwise, a differential equation is homogeneous if it is a homogeneous function of the unknown function and its derivatives. In the case of linear differential equations, this means that there are no constant terms. The solutions of any linear ordinary differential equation of any order may be deduced by integration from the solution of the homogeneous equation obtained by removing the constant term.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "HomogeneousLinearDifferentiaEquation";
        }
    }

    return nullptr;
}

string _Calculus::Terms::HyperbolicFunctionsVision(string image_location)
{
    string model = "image";
    string definition = "analogs of the ordinary trigonometric, or circular, functions.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "HyperbolicFunctions";
        }
    }

    return nullptr;
}

string _Calculus::Terms::IdentityFunctionVision(string image_location)
{
    string model = "image";
    string definition = "Also called an identity relation or identity map or identity transformation, is a function that always returns the same value that was used as its argument. In equations, the function is given by f(x) = x.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "IdentityFunction";
        }
    }

    return nullptr;
}

string _Calculus::Terms::ImaginaryNumberVision(string image_location)
{
    string model = "image";
    string definition = "Is a complex number that can be written as a real number multiplied by the imaginary unit i, which is defined by its property i^2 = −1. The square of an imaginary number bi is −b^2";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "ImaginaryNumber";
        }
    }

    return nullptr;
}

string _Calculus::Terms::ImplicitFunctionVision(string image_location)
{
    string model = "image";
    string definition = "relation of the form R(x1,...,xn)=0, where R is a function of several variables. An implicit function is a function that is defined implicitly by an implicit equation, by associating one of the variables (the value) with the others (the arguments).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "ImplicitFunction";
        }
    }

    return nullptr;
}

string _Calculus::Terms::ImproperFractionVision(string image_location)
{
    string model = "image";
    string definition = "Common fractions can be classified as either proper or improper. When the numerator and the denominator are both positive, the fraction is called proper if the numerator is less than the denominator, and improper otherwise. In general, a common fraction is said to be a proper fraction if the absolute value of the fraction is strictly less than one—that is, if the fraction is greater than −1 and less than 1. It is said to be an improper fraction, or sometimes top-heavy fraction, if the absolute value of the fraction is greater than or equal to 1. Examples of proper fractions are 2/3, –3/4, and 4/9; examples of improper fractions are 9/4, –4/3, and 3/3.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "ImproperFraction";
        }
    }

    return nullptr;
}

string _Calculus::Terms::ImproperIntegralVision(string image_location)
{
    string model = "image";
    string definition = "an improper integral is the limit of a definite integral as an endpoint of the interval(s) of integration approaches either a specified real number, infinite, -infinite, or in some instances as both endpoints approach limits. Such an integral is often written symbolically just like a standard definite integral, in some cases with infinity as a limit of integration.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "ImproperIntegral";
        }
    }

    return nullptr;
}

string _Calculus::Terms::InflectionPointVision(string image_location)
{
    string model = "image";
    string definition = "an inflection point, point of inflection, flex, or inflection (British English: inflexion) is a point on a continuous plane curve at which the curve changes from being concave (concave downward) to convex (concave upward), or vice versa.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "InflectionPoint";
        }
    }

    return nullptr;
}

string _Calculus::Terms::InstantaneousRateOfChangeVision(string image_location)
{
    string model = "image";
    string definition = "The derivative of a function of a single variable at a chosen input value, when it exists, is the slope of the tangent line to the graph of the function at that point. The tangent line is the best linear approximation of the function near that input value. For this reason, the derivative is often described as the instantaneous rate of change, the ratio of the instantaneous change in the dependent variable to that of the independent variable. .";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "InstantaneousRateOfChange";
        }
    }

    return nullptr;
}

string _Calculus::Terms::InstantaneousVelocityVision(string image_location)
{
    string model = "image";
    string definition = "If we consider v as velocity and x as the displacement (change in position) vector, then we can express the (instantaneous) velocity of a particle or object, at any particular time t, as the derivative of the position with respect to time";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "InstantaneousVelocity";
        }
    }

    return nullptr;
}

string _Calculus::Terms::IntegralVision(string image_location)
{
    string model = "image";
    string definition = "An integral assigns numbers to functions in a way that can describe displacement, area, volume, and other concepts that arise by combining infinitesimal data. Integration is one of the two main operations of calculus, with its inverse operation, differentiation, being the other.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
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

string _Calculus::Terms::IntegrandVision(string image_location)
{
    string model = "image";
    string definition = "The function to be integrated in an integral.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Integrand";
        }
    }

    return nullptr;
}

string _Calculus::Terms::IntegrationByPartsVision(string image_location)
{
    string model = "image";
    string definition = "In calculus, and more generally in mathematical analysis, integration by parts or partial integration is a process that finds the integral of a product of functions in terms of the integral of their derivative and antiderivative. It is frequently used to transform the antiderivative of a product of functions into an antiderivative for which a solution can be more easily found. The rule can be readily derived by integrating the product rule of differentiation.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "IntegrationByParts";
        }
    }

    return nullptr;

}

string _Calculus::Terms::IntegrationBySubstitutionVision(string image_location)
{
    string model = "image";
    string definition = "Also known as u-substitution, is a method for solving integrals. Using the fundamental theorem of calculus often requires finding an antiderivative. For this and other reasons, integration by substitution is an important tool in mathematics. It is the counterpart to the chain rule for differentiation.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "IntegrationBySubstitution";
        }
    }

    return nullptr;
}

string _Calculus::Terms::IntermediateValueTheoremVision(string image_location)
{
    string model = "image";
    string definition = "the intermediate value theorem states that if a continuous function, f, with an interval, [a, b], as its domain, takes values f(a) and f(b) at each end of the interval, then it also takes any value between f(a) and f(b) at some point within the interval. This has two important corollaries: 1. If a continuous function has values of opposite sign inside an interval, then it has a root in that interval (Bolzano's theorem). 2. The image of a continuous function over an interval is itself an interval.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "IntermediateValueTheorem";
        }
    }

    return nullptr;
}

string _Calculus::Terms::InverseTrigonometricFunctionsVision(string image_location)
{
    string model = "image";
    string definition = "the inverse functions of the trigonometric functions (with suitably restricted domains). Specifically, they are the inverses of the sine, cosine, tangent, cotangent, secant, and cosecant functions, and are used to obtain an angle from any of the angle's trigonometric ratios.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "InverseTrigonometricFunctions";
        }
    }

    return nullptr;
}

string _Calculus::Terms::JumpContinuityVision(string image_location)
{
    string model = "image";
    string definition = "";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "";
        }
    }

    return nullptr;
}

string _Calculus::Terms::LebesgueIntegrationVision(string image_location)
{
    string model = "image";
    string definition = "the integral of a non-negative function of a single variable can be regarded, in the simplest case, as the area between the graph of that function and the x-axis. The Lebesgue integral extends the integral to a larger class of functions. It also extends the domains on which these functions can be defined.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "LebesgueIntegration";
        }
    }

    return nullptr;
}

string _Calculus::Terms::LHopitalsRuleVision(string image_location)
{
    string model = "image";
    string definition = "uses derivatives to help evaluate limits involving indeterminate forms. Application (or repeated application) of the rule often converts an indeterminate form to an expression that can be evaluated by substitution, allowing easier evaluation of the limit.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "LHopitalsRule";
        }
    }

    return nullptr;
}

string _Calculus::Terms::LimitComparisonTestVision(string image_location)
{
    string model = "image";
    string definition = "The limit comparison test allows one to determine the convergence of one series based on the convergence of another.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "LimitComparisonTest";
        }
    }

    return nullptr;
}

string _Calculus::Terms::LimitOfAFunctionVision(string image_location)
{
    string model = "image";
    string definition = "a fundamental concept in calculus and analysis concerning the behavior of that function near a particular input which may or may not be in the domain of the function.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "LimitOfAFunction";
        }
    }

    return nullptr;
}

string _Calculus::Terms::LimitOfIntegrationVision(string image_location)
{
    string model = "image";
    string definition = "limits of integration (or bounds of integration) of the integral. Integral b and a f(x)dx.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "LimitOfIntegration";
        }
    }

    return nullptr;
}

string _Calculus::Terms::LinearCombinationVision(string image_location)
{
    string model = "image";
    string definition = "n expression constructed from a set of terms by multiplying each term by a constant and adding the results (e.g. a linear combination of x and y would be any expression of the form ax + by, where a and b are constants).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "LinearCombination";
        }
    }

    return nullptr;
}

string _Calculus::Terms::LinearEquationVision(string image_location)
{
    string model = "image";
    string definition = "A linear equation is an equation relating two or more variables to each other in the form of a1x1 + ... + an xn + b = 0, with the highest power of each variable being 1.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "LinearEquation";
        }
    }

    return nullptr;
}

string _Calculus::Terms::LinearSystemVision(string image_location)
{
    string model = "image";
    string definition = "a mathematical model of a system based on the use of a linear operator. Linear systems typically exhibit features and properties that are much simpler than the nonlinear case. As a mathematical abstraction or idealization, linear systems find important applications in automatic control theory, signal processing, and telecommunications.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "LinearSystem";
        }
    }

    return nullptr;
}

string _Calculus::Terms::LogarithmVision(string image_location)
{
    string model = "image";
    string definition = "the logarithm to base b is the inverse function of exponentiation with base b. That means that the logarithm of a number x to the base b is the exponent to which b must be raised to produce x. For example, since 1000 = 10^3, the logarithm base 10 of 1000 is 3, or log10(1000) = 3. The The logarithm of x to base b is denoted as logb (x), or without parentheses, logb( x). When the base is clear from the context or is irrelevant it is sometimes written log x";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
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

string _Calculus::Terms::LogarithmicDifferentiationVision(string image_location)
{
    string model = "image";
    string definition = "a method used to differentiate functions by employing the logarithmic derivative of a function";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "LogarithmicDifferentiation";
        }
    }

    return nullptr;
}

string _Calculus::Terms::LowerBoundVision(string image_location)
{
    string model = "image";
    string definition = "Given a function f with domain D and a preordered set (K, <=) as codomain, an element y of K is an upper bound of f if y >= f(x) for each x in D. The upper bound is called sharp if equality holds for at least one value of x. It indicates that the constraint is optimal, and thus cannot be further reduced without invalidating the inequality.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "LowerBound";
        }
    }

    return nullptr;
}

string _Calculus::Terms::MeanValueTheoremVision(string image_location)
{
    string model = "image";
    string definition = "roughly, that for a given planar arc between two endpoints, there is at least one point at which the tangent to the arc is parallel to the secant through its endpoints. It is one of the most important results in real analysis. This theorem is used to prove statements about a function on an interval starting from local hypotheses about derivatives at points of the interval.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "MeanValueTheorem";
        }
    }

    return nullptr;
}

string _Calculus::Terms::MonotonicFunctionVision(string image_location)
{
    string model = "image";
    string definition = "a function between ordered sets that preserves or reverses the given order. ";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "MonotonicFunction";
        }
    }

    return nullptr;
}

string _Calculus::Terms::MultipleIntegralVision(string image_location)
{
    string model = "image";
    string definition = "a definite integral of a function of several real variables,";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "MultipleIntegral";
        }
    }

    return nullptr;
}

string _Calculus::Terms::MultiplicativeCalculusVision(string image_location)
{
    string model = "image";
    string definition = "";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "MultiplicativeCalculus";
        }
    }

    return nullptr;
}

string _Calculus::Terms::MultivariableCalculusVision(string image_location)
{
    string model = "image";
    string definition = "the extension of calculus in one variable to calculus with functions of several variables: the differentiation and integration of functions involving multiple variables (multivariate), rather than just one.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "MultivariableCalculus";
        }
    }

    return nullptr;
}

string _Calculus::Terms::NaturalLogarithmVision(string image_location)
{
    string model = "image";
    string definition = "is its logarithm to the base of the mathematical constant e, where e is an irrational and transcendental number approximately equal to 2.718281828459. The natural logarithm of x is generally written as ln x, loge x, or sometimes, if the base e is implicit, simply log(x). Parentheses are sometimes added for clarity, giving ln(x), loge(x) or log(x). This is done in particular when the argument to the logarithm is not a single symbol, to prevent ambiguity.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "NaturalLogarithm";
        }
    }

    return nullptr;
}

string _Calculus::Terms::NonStandardCalculusVision(string image_location)
{
    string model = "image";
    string definition = "is the modern application of infinitesimals, in the sense of nonstandard analysis, to infinitesimal calculus. It provides a rigorous justification for some arguments in calculus that were previously considered merely heuristic.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "NonStandardCalculus";
        }
    }

    return nullptr;
}

string _Calculus::Terms::NotationForDifferentiationVision(string image_location)
{
    string model = "image";
    string definition = "In differential calculus, there is no single uniform notation for differentiation. Instead, various notations for the derivative of a function or variable have been proposed by various mathematicians. The usefulness of each notation varies with the context, and it is sometimes advantageous to use more than one notation in a given context. The most common notations for differentiation (and its opposite operation, the antidifferentiation or indefinite integration) are listed below.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "NotationForDifferentiation";
        }
    }

    return nullptr;
}

string _Calculus::Terms::NumericalIntegrationVision(string image_location)
{
    string model = "image";
    string definition = "is more or less a synonym for numerical integration, especially as applied to one-dimensional integrals. Some authors refer to numerical integration over more than one dimension as cubature; others take quadrature to include higher-dimensional integration.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "NumericalIntegration";
        }
    }

    return nullptr;
}

string _Calculus::Terms::OneSidedLimitVision(string image_location)
{
    string model = "image";
    string definition = "either one of the two limits of a function f(x) of a real variable x as x approaches a specified point either from the left or from the right.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "OneSidedLimit";
        }
    }

    return nullptr;
}

string _Calculus::Terms::OrdinaryDifferentialEquationVision(string image_location)
{
    string model = "image";
    string definition = "a differential equation (DE) dependent on only a single independent variable. As with other DE, its unknown(s) consists of one (or more) function(s) and involves the derivatives of those functions. The term ordinary is used in contrast with partial differential equations (PDEs) which may be with respect to more than one independent variable, and, less commonly, in contrast with stochastic differential equations (SDEs) where the progression is random.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "OrdinaryDifferentialEquation";
        }
    }

    return nullptr;
}

string _Calculus::Terms::PappussCentroidTheoremVision(string image_location)
{
    string model = "image";
    string definition = "is either of two related theorems dealing with the surface areas and volumes of surfaces and solids of revolution.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "PappussCentroidTheorem";
        }
    }

    return nullptr;
}

string _Calculus::Terms::ParabolaVision(string image_location)
{
    string model = "image";
    string definition = "a plane curve that is mirror-symmetrical and is approximately U-shaped. It fits several superficially different other mathematical descriptions, which can all be proved to define exactly the same curves.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
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

string _Calculus::Terms::ParaboloidVision(string image_location)
{
    string model = "image";
    string definition = "a quadric surface that has exactly one axis of symmetry and no center of symmetry. The term paraboloid is derived from parabola, which refers to a conic section that has a similar property of symmetry.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Paraboloid";
        }
    }

    return nullptr;
}

string _Calculus::Terms::PartialDerivativeVision(string image_location)
{
    string model = "image";
    string definition = "a function of several variables is its derivative with respect to one of those variables, with the others held constant (as opposed to the total derivative, in which all variables are allowed to vary). Partial derivatives are used in vector calculus and differential geometry.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "PartialDerivative";
        }
    }

    return nullptr;
}

string _Calculus::Terms::PartialDifferentialEquationVision(string image_location)
{
    string model = "image";
    string definition = "is an equation which computes a function between various partial derivatives of a multivariable function.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "PartialDifferentialEquation";
        }
    }

    return nullptr;
}

string _Calculus::Terms::ParticalFractionDecompositionVision(string image_location)
{
    string model = "image";
    string definition = "of a rational fraction (that is, a fraction such that the numerator and the denominator are both polynomials) is an operation that consists of expressing the fraction as a sum of a polynomial (possibly zero) and one or several fractions with a simpler denominator.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "ParticalFractionDecomposition";
        }
    }

    return nullptr;
}

string _Calculus::Terms::ParticularSolutionVision(string image_location)
{
    string model = "image";
    string definition = "";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "ParticularSolution";
        }
    }

    return nullptr;
}

string _Calculus::Terms::PieceWiseDefininedFunctionVision(string image_location)
{
    string model = "image";
    string definition = "A function defined by multiple sub-functions that apply to certain intervals of the function's domain.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "PieceWiseDefininedFunction";
        }
    }

    return nullptr;
}

string _Calculus::Terms::PositionVectorVision(string image_location)
{
    string model = "image";
    string definition = "a Euclidean vector that represents a point P in space. Its length represents the distance in relation to an arbitrary reference origin O, and its direction represents the angular orientation with respect to given reference axes. Usually denoted x, r, or s, it corresponds to the straight line segment from O to P. In other words, it is the displacement or translation that maps the origin to P";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "PositionVector";
        }
    }

    return nullptr;
}

string _Calculus::Terms::PowerRuleVision(string image_location)
{
    string model = "image";
    string definition = "used to differentiate functions of the form f(x)=x^r, whenever r is a real number. Since differentiation is a linear operation on the space of differentiable functions, polynomials can also be differentiated using this rule. The power rule underlies the Taylor series as it relates a power series with a function's derivatives.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "PowerRule";
        }
    }

    return nullptr;
}

string _Calculus::Terms::ProductIntegralVision(string image_location)
{
    string model = "image";
    string definition = "any product-based counterpart of the usual sum-based integral of calculus.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "ProductIntegral";
        }
    }

    return nullptr;
}

string _Calculus::Terms::ProductRuleVision(string image_location)
{
    string model = "image";
    string definition = "a formula used to find the derivatives of products of two or more functions.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "ProductRule";
        }
    }

    return nullptr;
}

string _Calculus::Terms::ProperFractionVision(string image_location)
{
    string model = "image";
    string definition = "When the numerator and the denominator are both positive, the fraction is called proper.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "ProperFraction";
        }
    }

    return nullptr;
}

string _Calculus::Terms::ProperRationalFunctionVision(string image_location)
{
    string model = "image";
    string definition = "any function that can be defined by a rational fraction, which is an algebraic fraction such that both the numerator and the denominator are polynomials. The coefficients of the polynomials need not be rational numbers; they may be taken in any field K. In this case, one speaks of a rational function and a rational fraction over K. The values of the variables may be taken in any field L containing K. Then the domain of the function is the set of the values of the variables for which the denominator is not zero, and the codomain is L.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "ProperRationalFunction";
        }
    }

    return nullptr;
}

string _Calculus::Terms::PythagoreanTheoremVision(string image_location)
{
    string model = "image";
    string definition = "a fundamental relation in Euclidean geometry between the three sides of a right triangle. It states that the area of the square whose side is the hypotenuse (the side opposite the right angle) is equal to the sum of the areas of the squares on the other two sides.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "PythagoreanTheorem";
        }
    }

    return nullptr;
}

string _Calculus::Terms::PythagoreanTrigonometricIdentityVision(string image_location)
{
    string model = "image";
    string definition = "an identity expressing the Pythagorean theorem in terms of trigonometric functions. Along with the sum-of-angles formulae, it is one of the basic relations between the sine and cosine functions.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "PythagoreanTrigonometricIdentity";
        }
    }

    return nullptr;
}

string _Calculus::Terms::QuadraticFunctionVision(string image_location)
{
    string model = "image";
    string definition = "a polynomial function with one or more variables in which the highest-degree term is of the second degree.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "QuadraticFunction";
        }
    }

    return nullptr;
}

string _Calculus::Terms::QuadraticPolynomialVision(string image_location)
{
    string model = "image";
    string definition = "f(x)=ax^2 + bx + c";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "QuadraticPolynomial";
        }
    }

    return nullptr;
}

string _Calculus::Terms::QuotientRuleVision(string image_location)
{
    string model = "image";
    string definition = "A formula for finding the derivative of a function that is the ratio of two functions.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "QuotientRule";
        }
    }

    return nullptr;
}

string _Calculus::Terms::RadianVision(string image_location)
{
    string model = "image";
    string definition = "the unit of angle in the International System of Units (SI) and is the standard unit of angular measure used in many areas of mathematics. It is defined such that one radian is the angle subtended at the centre of a circle by an arc that is equal in length to the radius.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
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

string _Calculus::Terms::RatioTestVision(string image_location)
{
    string model = "image";
    string definition = "a test (or criterion) for the convergence of a series";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "RatioTest";
        }
    }

    return nullptr;
}

string _Calculus::Terms::ReciprocalFunctionVision(string image_location)
{
    string model = "image";
    string definition = "a multiplicative inverse or reciprocal for a number x, denoted by 1/x or x^−1, is a number which when multiplied by x yields the multiplicative identity, 1. The multiplicative inverse of a fraction a/b is b/a. For the multiplicative inverse of a real number, divide 1 by the number. For example, the reciprocal of 5 is one fifth (1/5 or 0.2), and the reciprocal of 0.25 is 1 divided by 0.25, or 4. The reciprocal function, the function f(x) that maps x to 1/x, is one of the simplest examples of a function which is its own inverse (an involution).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "ReciprocalFunction";
        }
    }

    return nullptr;
}

//tring _Calculus::Terms::ReciprocalFunctionVision(string image_location)
//{
//    string model = "image";
//    string definition = "";
//    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
//    string response = _LLM::OllamaAPI(model, prompt, image_location);
//    response = _Parsers::LLM::LLama3Parse(response);
//    string* words = _Utilities::String2Words(response);
//    words = _Utilities::RemovePunctuationArr(words);
//    words = _Utilities::ArrayOfStringsToLowercase(words);
//
//    for (int x = 0; x < sizeof(words); x++)
//    {
//        if (words[x] == "yes")
//        {
//            return "";
//        }
//    }
//
//    return nullptr;
//}

string _Calculus::Terms::ReciprocalRuleVision(string image_location)
{
    string model = "image";
    string definition = "he derivative of the reciprocal of a function f in terms of the derivative of f. The reciprocal rule can be used to show that the power rule holds for negative exponents if it has already been established for positive exponents. Also, one can readily deduce the quotient rule from the reciprocal rule and the product rule.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "ReciprocalRule";
        }
    }

    return nullptr;
}

string _Calculus::Terms::RiemannIntegralVision(string image_location)
{
    string model = "image";
    string definition = "he Riemann integral, created by Bernhard Riemann, was the first rigorous definition of the integral of a function on an interval.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "RiemannIntegral";
        }
    }

    return nullptr;
}

string _Calculus::Terms::RelatedRatesVision(string image_location)
{
    string model = "image";
    string definition = "involve finding a rate at which a quantity changes by relating that quantity to other quantities whose rates of change are known. The rate of change is usually with respect to time. Because science and engineering often relate quantities to each other, the methods of related rates have broad applications in these fields. Differentiation with respect to time or one of the other variables requires application of the chain rule, since most problems involve several variables.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "RelatedRates";
        }
    }

    return nullptr;
}

string _Calculus::Terms::RemovableDiscontinuityVision(string image_location)
{
    string model = "image";
    string definition = "";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "RemovableDiscontinuity";
        }
    }

    return nullptr;
}

string _Calculus::Terms::RollesTheoremVision(string image_location)
{
    string model = "image";
    string definition = "any real-valued differentiable function that attains equal values at two distinct points must have at least one point, somewhere between them, at which the slope of the tangent line is zero. Such a point is known as a stationary point. It is a point at which the first derivative of the function is zero.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "RollesTheorem";
        }
    }

    return nullptr;
}

string _Calculus::Terms::RootTestVision(string image_location)
{
    string model = "image";
    string definition = "a criterion for the convergence (a convergence test) of an infinite series.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "RootTest";
        }
    }

    return nullptr;
}

string _Calculus::Terms::ScalarVision(string image_location)
{
    string model = "image";
    string definition = "an element of a field which is used to define a vector space. In linear algebra, real numbers or generally elements of a field are called scalars and relate to vectors in an associated vector space through the operation of scalar multiplication (defined in the vector space), in which a vector can be multiplied by a scalar in the defined way to produce another vector. Generally speaking, a vector space may be defined by using any field instead of real numbers (such as complex numbers). Then scalars of that vector space will be elements of the associated field (such as complex numbers).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
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

string _Calculus::Terms::SecantLineVision(string image_location)
{
    string model = "image";
    string definition = "a line that intersects a curve at a minimum of two distinct points. In the case of a circle, a secant intersects the circle at exactly two points. A chord is the line segment determined by the two points, that is, the interval on the secant whose ends are the two points.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "SecantLine";
        }
    }

    return nullptr;
}

string _Calculus::Terms::SecondDegreePolynomialVision(string image_location)
{
    string model = "image";
    string definition = "a polynomial with a degree of 2.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "SecondDegreePolynomial";
        }
    }

    return nullptr;
}

string _Calculus::Terms::SecondDerivativeVision(string image_location)
{
    string model = "image";
    string definition = "or the second-order derivative, of a function f is the derivative of the derivative of f. Informally, the second derivative can be phrased as the rate of change of the rate of change; for example, the second derivative of the position of an object with respect to time is the instantaneous acceleration of the object, or the rate at which the velocity of the object is changing with respect to time.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "SecondDerivative";
        }
    }

    return nullptr;
}

string _Calculus::Terms::SecondDerivativeTestVision(string image_location)
{
    string model = "image";
    string definition = "The relation between the second derivative and the graph can be used to test whether a stationary point for a function";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "SecondDerivativeTest";
        }
    }

    return nullptr;
}

string _Calculus::Terms::SecondOrderDifferentialEquationVision(string image_location)
{
    string model = "image";
    string definition = "";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "SecondOrderDifferentialEquation";
        }
    }

    return nullptr;
}

string _Calculus::Terms::SeriesVision(string image_location)
{
    string model = "image";
    string definition = "oughly speaking, an addition of infinitely many terms, one after the other. The study of series is a major part of calculus and its generalization, mathematical analysis. Series are used in most areas of mathematics, even for studying finite structures in combinatorics through generating functions. The mathematical properties of infinite series make them widely applicable in other quantitative disciplines such as physics, computer science, statistics and finance.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Series";
        }
    }

    return nullptr;
}

string _Calculus::Terms::ShellIntegrationVision(string image_location)
{
    string model = "image";
    string definition = "a method for calculating the volume of a solid of revolution, when integrating along an axis perpendicular to the axis of revolution. This is in contrast to disc integration which integrates along the axis parallel to the axis of revolution.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "ShellIntegration";
        }
    }

    return nullptr;
}

string _Calculus::Terms::SimpsonsRuleVision(string image_location)
{
    string model = "image";
    string definition = "are several approximations for definite integrals";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "SimpsonsRule";
        }
    }

    return nullptr;
}

string _Calculus::Terms::SineVision(string image_location)
{
    string model = "image";
    string definition = " trigonometric functions of an angle. The sine and cosine of an acute angle are defined in the context of a right triangle: for the specified angle, its sine is the ratio of the length of the side that is opposite that angle to the length of the longest side of the triangle (the hypotenuse), and the cosine is the ratio of the length of the adjacent leg to that of the hypotenuse.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
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

string _Calculus::Terms::SineWaveVision(string image_location)
{
    string model = "image";
    string definition = "a periodic wave whose waveform (shape) is the trigonometric sine function. In mechanics, as a linear motion over time, this is simple harmonic motion; as rotation, it corresponds to uniform circular motion. Sine waves occur often in physics, including wind waves, sound waves, and light waves, such as monochromatic radiation. In engineering, signal processing, and mathematics, Fourier analysis decomposes general functions into a sum of sine waves of various frequencies, relative phases, and magnitudes.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "SineWave";
        }
    }

    return nullptr;
}

string _Calculus::Terms::SlopeFieldVision(string image_location)
{
    string model = "image";
    string definition = "a graphical representation of the solutions to a first-order differential equation of a scalar function. Solutions to a slope field are functions drawn as solid curves. A slope field shows the slope of a differential equation at certain vertical and horizontal intervals on the x-y plane, and can be used to determine the approximate tangent slope at a point on a curve, where the curve is some solution to the differential equation.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "SlopeField";
        }
    }

    return nullptr;
}

string _Calculus::Terms::SqueezeTheoremVision(string image_location)
{
    string model = "image";
    string definition = "a theorem regarding the limit of a function that is bounded between two other functions.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "SqueezeTheorem";
        }
    }

    return nullptr;
}

string _Calculus::Terms::SumRuleInDifferentiationVision(string image_location)
{
    string model = "image";
    string definition = "(f + g)' = f' of g'";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "SumRuleInDifferentiation";
        }
    }

    return nullptr;
}

string _Calculus::Terms::SumRuleInIntegrationVision(string image_location)
{
    string model = "image";
    string definition = "forms a vector space under the operations of pointwise addition and multiplication by a scalar, and the operation of integration";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "SumRuleInIntegration";
        }
    }

    return nullptr;
}

string _Calculus::Terms::SummationVision(string image_location)
{
    string model = "image";
    string definition = "the addition of a sequence of numbers, called addends or summands; the result is their sum or total. Beside numbers, other types of values can be summed as well: functions, vectors, matrices, polynomials and, in general, elements of any type of mathematical objects on which an operation denoted '+' is defined.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Summation";
        }
    }

    return nullptr;
}

string _Calculus::Terms::SupplementaryAngleVision(string image_location)
{
    string model = "image";
    string definition = "If angles A and B are complementary, the following relationships hold: sin^2(A) + sin^2(B) = 1, cos^2(A) + Cos^2";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "SupplementaryAngle";
        }
    }

    return nullptr;
}

string _Calculus::Terms::SurfaceAreaVision(string image_location)
{
    string model = "image";
    string definition = "a solid object is a measure of the total area that the surface of the object occupies. The mathematical definition of surface area in the presence of curved surfaces is considerably more involved than the definition of arc length of one-dimensional curves, or of the surface area for polyhedra (i.e., objects with flat polygonal faces), for which the surface area is the sum of the areas of its faces. Smooth surfaces, such as a sphere, are assigned surface area using their representation as parametric surfaces. This definition of surface area is based on methods of infinitesimal calculus and involves partial derivatives and double integration.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "SurfaceArea";
        }
    }

    return nullptr;
}

string _Calculus::Terms::SystemOfLinearEquationsVision(string image_location)
{
    string model = "image";
    string definition = "a collection of two or more linear equations involving the same variables.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "SystemOfLinearEquations";
        }
    }

    return nullptr;
}

string _Calculus::Terms::TaylorSeriesVision(string image_location)
{
    string model = "image";
    string definition = "an infinite sum of terms that are expressed in terms of the function's derivatives at a single point. For most common functions, the function and the sum of its Taylor series are equal near this point. Taylor series are named after Brook Taylor, who introduced them in 1715. A Taylor series is also called a Maclaurin series when 0 is the point where the derivatives are considered, after Colin Maclaurin, who made extensive use of this special case of Taylor series in the 18th century.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "TaylorSeries";
        }
    }

    return nullptr;
}

string _Calculus::Terms::TaylorTheoremVision(string image_location)
{
    string model = "image";
    string definition = "an approximation of a k-times differentiable function around a given point by a polynomial of degree k, called the k-th-order Taylor Polynomial. For a smooth function, the Taylor polynomial is the truncation at the order k of the Taylor series of the function. The first-order Taylor polynomial is the linear approximation of the function, and the second-order Taylor polynomial is often referred to as the quadratic approximation. There are several versions of Taylor's theorem, some giving explicit estimates of the approximation error of the function by its Taylor polynomial.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "TaylorTheorem";
        }
    }

    return nullptr;
}

string _Calculus::Terms::TangentVision(string image_location)
{
    string model = "image";
    string definition = "a plane curve at a given point is, intuitively, the straight line that just touches the curve at that point. Leibniz defined it as the line through a pair of infinitely close points on the curve. More precisely, a straight line is tangent to the curve y = f(x) at a point x = c if the line passes through the point (c, f(c)) on the curve and has slope f'(c), where f' is the derivative of f. A similar definition applies to space curves and curves in n-dimensional Euclidean space.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Tangent";
        }
    }

    return nullptr;
}

string _Calculus::Terms::ThirdDegreePolynomialVision(string image_location)
{
    string model = "image";
    string definition = "the highest of the degrees of the polynomial's monomials (individual terms) with non-zero coefficients. The degree of a term is the sum of the exponents of the variables that appear in it, and thus is a non-negative integer. For a univariate polynomial, the degree of the polynomial is simply the highest exponent occurring in the polynomial.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "ThirdDegreePolynomial";
        }
    }

    return nullptr;
}

string _Calculus::Terms::ThirdDerivativeVision(string image_location)
{
    string model = "image";
    string definition = "he rate at which the second derivative, or the rate of change of the rate of change, is changing.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "ThirdDerivative";
        }
    }

    return nullptr;
}

string _Calculus::Terms::ToroidVision(string image_location)
{
    string model = "image";
    string definition = "a surface of revolution with a hole in the middle. The axis of revolution passes through the hole and so does not intersect the surface. For example, when a rectangle is rotated around an axis parallel to one of its edges, then a hollow rectangle-section ring is produced. If the revolved figure is a circle, then the object is called a torus.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Toroid";
        }
    }

    return nullptr;
}

string _Calculus::Terms::TotalDifferentialVision(string image_location)
{
    string model = "image";
    string definition = "The sum of the partial differentials with respect to all of the independent variables is the total differential";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "TotalDifferential";
        }
    }

    return nullptr;
}

string _Calculus::Terms::TrigonometricFunctionsVision(string image_location)
{
    string model = "image";
    string definition = "real functions which relate an angle of a right-angled triangle to ratios of two side lengths. They are widely used in all sciences that are related to geometry, such as navigation, solid mechanics, celestial mechanics, geodesy, and many others. They are among the simplest periodic functions, and as such are also widely used for studying periodic phenomena through Fourier analysis.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "TrigonometricFunctions";
        }
    }

    return nullptr;
}

string _Calculus::Terms::TrigonometricIdentitiesVision(string image_location)
{
    string model = "image";
    string definition = "equalities that involve trigonometric functions and are true for every value of the occurring variables for which both sides of the equality are defined. Geometrically, these are identities involving certain functions of one or more angles. They are distinct from triangle identities, which are identities potentially involving angles but also involving side lengths or other lengths of a triangle.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "TrigonometricIdentities";
        }
    }

    return nullptr;
}

string _Calculus::Terms::TrigonometricIntegralVision(string image_location)
{
    string model = "image";
    string definition = "a family of nonelementary integrals involving trigonometric functions.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "TrigonometricIntegral";
        }
    }

    return nullptr;
}

string _Calculus::Terms::TrigonometricSubstitutionVision(string image_location)
{
    string model = "image";
    string definition = "replaces a trigonometric function for another expression. In calculus, trigonometric substitutions are a technique for evaluating integrals. In this case, an expression involving a radical function is replaced with a trigonometric one. Trigonometric identities may help simplify the answer.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "TrigonometricSubstitution";
        }
    }

    return nullptr;
}

string _Calculus::Terms::TripleIntegralVision(string image_location)
{
    string model = "image";
    string definition = " definite integral of a function of several real variables, for instance, f(x, y) or f(x, y, z). Integrals of a function of two variables over a region in (the real-number plane) are called double integrals, and integrals of a function of three variables over a region in (real-number 3D space) are called triple integrals.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "";
        }
    }

    return nullptr;
}

string _Calculus::Terms::UpperBoundVision(string image_location)
{
    string model = "image";
    string definition = "";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "TripleIntegral";
        }
    }

    return nullptr;
}

string _Calculus::Terms::VariableVision(string image_location)
{
    string model = "image";
    string definition = "a symbol, typically a letter, that holds a place for constants, often numbers. One say colloquially that the variable represents or denotes the object, and that the object is the value of the variable.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
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

string _Calculus::Terms::VectorVision(string image_location)
{
    string model = "image";
    string definition = "a term that refers to quantities that cannot be expressed by a single number (a scalar), or to elements of some vector spaces. They have to be expressed by both magnitude and direction.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
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

string _Calculus::Terms::VectorCalculusVision(string image_location)
{
    string model = "image";
    string definition = "a branch of mathematics concerned with the differentiation and integration of vector fields, primarily in three-dimensional Euclidean space,The term vector calculus is sometimes used as a synonym for the broader subject of multivariable calculus, which spans vector calculus as well as partial differentiation and multiple integration. Vector calculus plays an important role in differential geometry and in the study of partial differential equations. It is used extensively in physics and engineering, especially in the description of electromagnetic fields, gravitational fields, and fluid flow";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "VectorCalculus";
        }
    }

    return nullptr;
}

string _Calculus::Terms::WasherVision(string image_location)
{
    string model = "image";
    string definition = "To obtain a hollow solid of revolution (the “washer method”), the procedure would be to take the volume of the inner solid of revolution and subtract it from the volume of the outer solid of revolution. This can be calculated in a single integral similar to the following:";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Washer";
        }
    }

    return nullptr;
}

string _Calculus::Terms::WasherMethodVision(string image_location)
{
    string model = "image";
    string definition = "To obtain a hollow solid of revolution (the washer method), the procedure would be to take the volume of the inner solid of revolution and subtract it from the volume of the outer solid of revolution.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "WasherMethod";
        }
    }

    return nullptr;
}