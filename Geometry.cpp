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
#include "Geometry.hpp"
#include "Large Language Models.hpp"
#include "Parsers.hpp"
#include "Utilities.hpp"

using namespace std;

string _Geometry::Terms::AATriangleSimilarity(string text)
{
    string model = "llama3";
    string definition = "If there exists a one-to-one correspondence between the vertices of two triangles such that two angles of one triangle are congruent to the corresponding two angles of the second triangle, then the two triangles are similar.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "A A Triangle Similarity";
        }
    }

    return nullptr;
}

string _Geometry::Terms::AASTriangleCongruence(string text)
{
    string model = "llama3";
    string definition = "If there exists a one-to-one correspondence between the vertices of two triangles such that two angles and the side opposite one of them in one triangle are congruent to the corresponding parts of the second triangle, then two triangles are congruent.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "A A S Triangle Congruence";
        }
    }

    return nullptr;
}

string _Geometry::Terms::ASATriangleCongruence(string text)
{
    string model = "llama3";
    string definition = "If there exists a one-to-one correspondence between the vertices of two triangles such that two angles and the included side of one triangle are congruent to the corresponding parts of the second triangle, then two triangles are congruent.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "A S A Triangle Congruence";
        }
    }

    return nullptr;
}

string _Geometry::Terms::Abscissa(string text)
{
    string model = "llama3";
    string definition = "The horizontal or x-coordinate of a two-dimensional coordinate system.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

string _Geometry::Terms::AcuteAngle(string text)
{
    string model = "llama3";
    string definition = "An angle whose measure is greater than 0 degrees and less than 90 degrees.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Acute Angle";
        }
    }

    return nullptr;
}

string _Geometry::Terms::AcuteTriangle(string text)
{
    string model = "llama3";
    string definition = "A triangle that contains three acute angles.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Acute Triangle";
        }
    }

    return nullptr;
}

string _Geometry::Terms::AdditivePropertyOfEquality(string text)
{
    string model = "llama3";
    string definition = "If a, b, and c are real numbers such that a + c = b + c.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Additive Property Of Equality";
        }
    }

    return nullptr;
}

string _Geometry::Terms::AdjacentAngles(string text)
{
    string model = "llama3";
    string definition = "Two coplanar angles that share a common vertex and a common side but have no common interior points.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

string _Geometry::Terms::AdjacentSides(string text)
{
    string model = "llama3";
    string definition = "Two sides of any polygon that share a common vertex.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

string _Geometry::Terms::AlgebraicRepresentation(string text)
{
    string model = "llama3";
    string definition = "The use of an equation or algebraic expression to model a mathematical relationship.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

string _Geometry::Terms::Algorithm(string text)
{
    string model = "llama3";
    string definition = "a defined series of steps for carrying out a computation or process.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

string _Geometry::Terms::AlternateInteriorAngles(string text)
{
    string model = "llama3";
    string definition = " Any two nonadjacent angles that lie on opposite sides of a transversal and that are interior to the lines.  Note: As illustrated in the second example, the lines do not need to be parallel.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Alternate Interior Angles";
        }
    }

    return nullptr;
}

string _Geometry::Terms::AltitudeOfACone(string text)
{
    string model = "llama3";
    string definition = "A line segment drawn from the vertex of the cone perpendicular to the plane containing its base.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Altitude Of A Cone";
        }
    }

    return nullptr;
}

string _Geometry::Terms::AltitudeOfACylinder(string text)
{
    string model = "llama3";
    string definition = "A line segment drawn from any point on one base of a cylinder perpendicular to the plane containing its other base.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Altitude Of A Cylinder";
        }
    }

    return nullptr;
}

string _Geometry::Terms::AltitudeOfAPrism(string text)
{
    string model = "llama3";
    string definition = "A line segment drawn from any point of one base of the prism perpendicular to the plane containing its other base.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Altitude Of A Prism";
        }
    }

    return nullptr;
}

string _Geometry::Terms::AltitudeOfAPyramid(string text)
{
    string model = "llama3";
    string definition = "A line segment drawn from the vertex of the pyramid perpendicular to the plane containing its base.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Altitude Of A Pyramid";
        }
    }

    return nullptr;
}

string _Geometry::Terms::AltitudeOfATrapezoid(string text)
{
    string model = "llama3";
    string definition = "A line segment drawn from any point on one base of the trapezoid perpendicular to the other base.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Altitude Of A Trapezoid";
        }
    }

    return nullptr;
}

string _Geometry::Terms::AltitudeOfATriangle(string text)
{
    string model = "llama3";
    string definition = "A line segment drawn from any vertex of the triangle perpendicular to the line containing its opposite side.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Altitude Of A Triangle";
        }
    }

    return nullptr;
}

string _Geometry::Terms::AnalyticalGeometry(string text)
{
    string model = "llama3";
    string definition = "An approach to geometry in which the points of a figure are represented by coordinates on the Cartesian plane and algebraic methods of reasoning are used to study the figure.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Analytical Geometry";
        }
    }

    return nullptr;
}

string _Geometry::Terms::AnalyticalGeometricProof(string text)
{
    string model = "llama3";
    string definition = "A proof in geometry that employs the coordinate system and algebraic reasoning.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Analytical Geometric Proof";
        }
    }

    return nullptr;
}

string _Geometry::Terms::AnalyticalRepresentationOfATransformation(string text)
{
    string model = "llama3";
    string definition = "The functional notation of a transformation using analytical equations.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Analytical Representation Of A Transformation";
        }
    }

    return nullptr;
}

string _Geometry::Terms::Analyze(string text)
{
    string model = "llama3";
    string definition = "to examine methodically by separating into parts and studying their relationships.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

string _Geometry::Terms::Angle(string text)
{
    string model = "llama3";
    string definition = "A geometric figure formed by two rays that have a common endpoint.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

string _Geometry::Terms::AngleBisector(string text)
{
    string model = "llama3";
    string definition = "A ray that divides an angle into two adjacent congruent angles.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Angle Bisector";
        }
    }

    return nullptr;
}

string _Geometry::Terms::AngleMeasure(string text)
{
    string model = "llama3";
    string definition = "The number of degrees or radians in an angle.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Angle Measure";
        }
    }

    return nullptr;
}

string _Geometry::Terms::Antecedent(string text)
{
    string model = "llama3";
    string definition = " The \"if\" part of a conditional (if., then.) statement.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Antecedent";
        }
    }

    return nullptr;
}

string _Geometry::Terms::Apothem(string text)
{
    string model = "llama3";
    string definition = "A line segment drawn from the center of a regular polygon perpendicular to a side of the polygon.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Apothem";
        }
    }

    return nullptr;
}

string _Geometry::Terms::ArcLength(string text)
{
    string model = "llama3";
    string definition = "The distance on the circumference of a circle from one endpoint of an arc to the other endpoint, measured along the arc.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

string _Geometry::Terms::ArcMeasure(string text)
{
    string model = "llama3";
    string definition = "The measure of an arc of the circle in degrees or radians; a unique real number between 0 degrees and 360 degrees or between zero and 2pi radians";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Arc Measure";
        }
    }

    return nullptr;
}

string _Geometry::Terms::ArcOfACircle(string text)
{
    string model = "llama3";
    string definition = "See major arc, minor arc.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Arc Of A Circle";
        }
    }

    return nullptr;
}

string _Geometry::Terms::AreaOfAPolygon(string text)
{
    string model = "llama3";
    string definition = "The unique real number assigned to any polygon which indicates the number of  non-overlapping square units contained in the polygon\'s interior.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Area Of A Polygon";
        }
    }

    return nullptr;
}

string _Geometry::Terms::Argument(string text)
{
    string model = "llama3";
    string definition = "The communication, in verbal or written form, of the reasoning process that leads to a valid conclusion.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

string _Geometry::Terms::Axiom(string text)
{
    string model = "llama3";
    string definition = "A statement that is accepted without proof.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Axiom";
        }
    }

    return nullptr;
}

string _Geometry::Terms::AxisOfSymmetry(string text)
{
    string model = "llama3";
    string definition = "A line that divides a plane figure into two congruent reflected halves; Any line through a figure such that a point on one side of the line is the same distance to the axis as its corresponding point on the other side.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Axis Of Symmetry";
        }
    }

    return nullptr;
}

string _Geometry::Terms::Base(string text)
{
    string model = "llama3";
    string definition = "Any side or face of a geometric figure to which an altitude is drawn";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

string _Geometry::Terms::Betweeness(string text)
{
    string model = "llama3";
    string definition = "A point B is between points A and C if and only if AB + BC = AC";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Betweeness";
        }
    }

    return nullptr;
}

string _Geometry::Terms::Biconditional(string text)
{
    string model = "llama3";
    string definition = "A statement formed by the conjunction of a conditional statement and its converse; a statement that can be written in  \"if and only if\" form; a definition can always be written as a biconditional statement.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Biconditional";
        }
    }

    return nullptr;
}

string _Geometry::Terms::CartesianCoordinates(string text)
{
    string model = "llama3";
    string definition = "An ordered pair of real numbers that establishes the location or address of a point in a coordinate plane using the distances from two perpendicular intersecting lines called the coordinate axes.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Cartesian Coordinates";
        }
    }

    return nullptr;
}

string _Geometry::Terms::CartesianPlane(string text)
{
    string model = "llama3";
    string definition = "The set of all points in a plane designated by their Cartesian coordinates.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Cartesian Plane";
        }
    }

    return nullptr;
}

string _Geometry::Terms::CenterOfADilation(string text)
{
    string model = "llama3";
    string definition = "A fixed point in the plane about which all points are expanded or contracted;  the only invariant point under dilation.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Center Of A Dilation";
        }
    }

    return nullptr;
}

string _Geometry::Terms::CenterOfGravity(string text)
{
    string model = "llama3";
    string definition = "The balance point of an object";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

string _Geometry::Terms::CenterOfARegularPolygon(string text)
{
    string model = "llama3";
    string definition = "The center of the circle which circumscribes or inscribes a regular polygon.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Center Of A Regular Polygon";
        }
    }

    return nullptr;
}

string _Geometry::Terms::CenterOfARotation(string text)
{
    string model = "llama3";
    string definition = "A fixed point in the plane about which all points are rotated.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Center Of A Rotation";
        }
    }

    return nullptr;
}

string _Geometry::Terms::CentralAngle(string text)
{
    string model = "llama3";
    string definition = "An angle in a circle with vertex at the center of the circle and sides that are radii.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

string _Geometry::Terms::CentralAngleOfARegularPolygon(string text)
{
    string model = "llama3";
    string definition = "An angle in a regular polygon with vertex at the center of the polygon and sides that are radii of its circumcircle.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Central Angle Of A Regular Polygon";
        }
    }

    return nullptr;
}

string _Geometry::Terms::Centroid(string text)
{
    string model = "llama3";
    string definition = "The point of concurrency of the medians of a triangle; the center of gravity in a triangle.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Centroid";
        }
    }

    return nullptr;
}

string _Geometry::Terms::Chord(string text)
{
    string model = "llama3";
    string definition = "A line segment joining any two points on a circle.  The diameter is the largest chord of a circle.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Chord";
        }
    }

    return nullptr;
}

string _Geometry::Terms::Circle(string text)
{
    string model = "llama3";
    string definition = "The set of all points (or locus of points) in a plane that are a fixed distance, (called the radius) from a fixed point, (called the center).";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

string _Geometry::Terms::Circumcenter(string text)
{
    string model = "llama3";
    string definition = "The center of the circle circumscribed about a polygon; the point that is equidistant from the vertices of any polygon.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Circumcenter";
        }
    }

    return nullptr;
}

string _Geometry::Terms::Circumcircle(string text)
{
    string model = "llama3";
    string definition = "A circle that passes through all of the vertices of a polygon. Also called a circumscribed circle.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Circumcircle";
        }
    }

    return nullptr;
}

string _Geometry::Terms::Circumference(string text)
{
    string model = "llama3";
    string definition = "The length of or distance around a circle. The formula for circumference is: C = 2*pi*r = pi*d";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Circumference";
        }
    }

    return nullptr;
}

string _Geometry::Terms::Clockwise(string text)
{
    string model = "llama3";
    string definition = "The direction in which the hands of a clock move around the dial.  Used to indicate the orientation of a transformation.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Clockwise";
        }
    }

    return nullptr;
}

string _Geometry::Terms::Closure(string text)
{
    string model = "llama3";
    string definition = "A set \"S\" and a binary operation \"*\" are said to exhibit closure if applying the binary operation to any two elements in \"S\" produces a value that is a member of \"S\".";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

string _Geometry::Terms::CollinearPoints(string text)
{
    string model = "llama3";
    string definition = "Points that lie on the same line.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Collinear Points";
        }
    }

    return nullptr;
}

string _Geometry::Terms::CommonTangents(string text)
{
    string model = "llama3";
    string definition = "Lines that are tangent to two or more circles.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Common Tangents";
        }
    }

    return nullptr;
}

string _Geometry::Terms::ComplementaryAngles(string text)
{
    string model = "llama3";
    string definition = "Two angles the sum of whose measures is 90 degrees.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Complementary Angles";
        }
    }

    return nullptr;
}

string _Geometry::Terms::CompositionOfFunctions(string text)
{
    string model = "llama3";
    string definition = "A way of combining functions in which the output of one function is used as the input of another function; the formation of a new function h from functions f and g using the rule h(x) = g o f(x) = g for all x in the domain of f for which f(x) is in the domain of g.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

string _Geometry::Terms::CompoundLocus(string text)
{
    string model = "llama3";
    string definition = "A set of points satisfying  two or more locus conditions.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Compound Locus";
        }
    }

    return nullptr;
}

string _Geometry::Terms::CompoundStatement(string text)
{
    string model = "llama3";
    string definition = "A statement formed from two or more simple statements using the logic connectives, or, and, if...then, or if and only if.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Compound Statement";
        }
    }

    return nullptr;
}

string _Geometry::Terms::ConcavePolygon(string text)
{
    string model = "llama3";
    string definition = "A polygon that has at least one diagonal outside the polygon.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Concave Polygon";
        }
    }

    return nullptr;
}

string _Geometry::Terms::ConcentricCircles(string text)
{
    string model = "llama3";
    string definition = "Two or more circles having the same center and different radii.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Concentric Circles";
        }
    }

    return nullptr;
}

string _Geometry::Terms::Conclusion(string text)
{
    string model = "llama3";
    string definition = "An answer or solution arrived at through logical or mathematical reasoning; the \"then\" clause in an \"if-then\" statement;  the final statement in a proof which follows logically from previous true statements.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Conclusion";
        }
    }

    return nullptr;
}

string _Geometry::Terms::Concurrence(string text)
{
    string model = "llama3";
    string definition = "The concept of three or more lines intersecting in a single (common) point; having a single point of intersection.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Concurrence";
        }
    }

    return nullptr;
}

string _Geometry::Terms::ConditionalStatement(string text)
{
    string model = "llama3";
    string definition = "A statement formed from two given statements by connecting them in the form  if..., then...";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Conditional Statement";
        }
    }

    return nullptr;
}

string _Geometry::Terms::Cone(string text)
{
    string model = "llama3";
    string definition = "A solid formed by a circular region (the base) and the surface formed by the straight line segments connecting points on the boundary of the base with a fixed point (the vertex) not in the plane of the base.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Cone";
        }
    }

    return nullptr;
}

string _Geometry::Terms::Conjecture(string text)
{
    string model = "llama3";
    string definition = "An educated guess; an unproven hypothesis based on observation, experimentation, data collection, etc.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

string _Geometry::Terms::Congruent(string text)
{
    string model = "llama3";
    string definition = "Having the same size and shape.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Congruent";
        }
    }

    return nullptr;
}

string _Geometry::Terms::ConicSections(string text)
{
    string model = "llama3";
    string definition = "The plane section created by the intersection of a plane and a cone. Example:  a parabola, a circle, an ellipse, or a hyperbola";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Conic Sections";
        }
    }

    return nullptr;
}

string _Geometry::Terms::Consistency(string text)
{
    string model = "llama3";
    string definition = "A property of an axiomatic system where no axiom(s) can be used to contradict any other axiom(s).";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Consistency";
        }
    }

    return nullptr;
}

string _Geometry::Terms::ConstantOfProportionality(string text)
{
    string model = "llama3";
    string definition = "constant of proportionality";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Constant Of Proportionality";
        }
    }

    return nullptr;
}

string _Geometry::Terms::Construct(string text)
{
    string model = "llama3";
    string definition = "To draw a figure using only a compass and a straightedge.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Construct";
        }
    }

    return nullptr;
}

string _Geometry::Terms::Constraints(string text)
{
    string model = "llama3";
    string definition = "Any restriction placed on the variables in a problem.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Constraints";
        }
    }

    return nullptr;
}

string _Geometry::Terms::Contradiction(string text)
{
    string model = "llama3";
    string definition = "A statement that has been shown to be both true and false.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Contradiction";
        }
    }

    return nullptr;
}

string _Geometry::Terms::ContrapositiveOfAStatement(string text)
{
    string model = "llama3";
    string definition = "A statement formed by interchanging the hypothesis and conclusion of a conditional statement and negating each clause.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Contrapositive Of A Statement";
        }
    }

    return nullptr;
}

string _Geometry::Terms::ConverseOfAStatement(string text)
{
    string model = "llama3";
    string definition = " A statement formed by interchanging the hypothesis and conclusion of a conditional statement";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Converse Of A Statement";
        }
    }

    return nullptr;
}

string _Geometry::Terms::ConvexPolygon(string text)
{
    string model = "llama3";
    string definition = "A polygon is convex if a line segment connecting any two points of the polygon lies entirely in the polygon\'s interior.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Convex Polygon";
        }
    }

    return nullptr;
}

string _Geometry::Terms::CoordinateGeometry(string text)
{
    string model = "llama3";
    string definition = "An approach to geometry in which a point is represented by coordinates and algebraic methods of reasoning are used; also called analytical geometry.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Coordinate Geometry";
        }
    }

    return nullptr;
}

string _Geometry::Terms::CoordinatePlane(string text)
{
    string model = "llama3";
    string definition = "The set of all points in a plane designated by their Cartesian coordinates.  Also called the Cartesian plane.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Coordinate Plane";
        }
    }

    return nullptr;
}

string _Geometry::Terms::Coplanar(string text)
{
    string model = "llama3";
    string definition = "Any three or more points that lie in the same plane.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Coplanar";
        }
    }

    return nullptr;
}

string _Geometry::Terms::CorrespondingAngles(string text)
{
    string model = "llama3";
    string definition = "A set of angles formed on each of two or more lines cut by a transversal that are in the same position relative to each line and to the transversal. Note: As illustrated in the second example, the lines do not need to be parallel.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Corresponding Angles";
        }
    }

    return nullptr;
}

string _Geometry::Terms::CorrespondingParts(string text)
{
    string model = "llama3";
    string definition = "In two geometric figures, the points, sides, and/or angles which are in the same relative position when the figures are placed in a one-to-one correspondence.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Corresponding Parts";
        }
    }

    return nullptr;
}

string _Geometry::Terms::Counterclockwise(string text)
{
    string model = "llama3";
    string definition = "The direction opposite the way in which the hands of a clock move around the dial.  Used to indicate the orientation of a rotation.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Counterclockwise";
        }
    }

    return nullptr;
}

string _Geometry::Terms::Crossection(string text)
{
    string model = "llama3";
    string definition = "A plane section perpendicular to the longest axis of a solid.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Crossection";
        }
    }

    return nullptr;
}

string _Geometry::Terms::Cube(string text)
{
    string model = "llama3";
    string definition = "A polyhedron with six square faces. A cube  (or hexahedron) is one of the five platonic solids.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Cube";
        }
    }

    return nullptr;
}

string _Geometry::Terms::Decagon(string text)
{
    string model = "llama3";
    string definition = "A polygon with ten sides.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Decagon";
        }
    }

    return nullptr;
}

string _Geometry::Terms::DeductiveReasoning(string text)
{
    string model = "llama3";
    string definition = "A process of showing that certain statements follow logically from agreed upon assumptions and proven facts; reasoning from the general to the specific.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Deductive Reasoning";
        }
    }

    return nullptr;
}

string _Geometry::Terms::Diagonal(string text)
{
    string model = "llama3";
    string definition = "A line segment that connects two non-consecutive vertices of a polygon.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Diagonal";
        }
    }

    return nullptr;
}

string _Geometry::Terms::Diameter(string text)
{
    string model = "llama3";
    string definition = "A chord of the circle that passes through the center of the circle.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Diameter";
        }
    }

    return nullptr;
}

string _Geometry::Terms::DiameterOfASphere(string text)
{
    string model = "llama3";
    string definition = "A line segment that connects two points on the surface of a sphere and that passes through the center of the sphere.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Diameter Of A Sphere";
        }
    }

    return nullptr;
}

string _Geometry::Terms::DihedralAngle(string text)
{
    string model = "llama3";
    string definition = "An angle formed by two interesting planes.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Dihedral Angle";
        }
    }

    return nullptr;
}

string _Geometry::Terms::Dilation(string text)
{
    string model = "llama3";
    string definition = "A transformation of the plane such that if O is a fixed point, k is a non-zero real 15 number, and P\' is the image of point P, then O, P and P\' are collinear and OP\'/OP = k.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Dilation";
        }
    }

    return nullptr;
}

string _Geometry::Terms::DirectTransformation(string text)
{
    string model = "llama3";
    string definition = "Any transformation of the plane that preserves orientation.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Direct Transformation";
        }
    }

    return nullptr;
}

string _Geometry::Terms::DistanceBetweenTwoPoints(string text)
{
    string model = "llama3";
    string definition = "The length of the line segment joining the two points; a unique non-negative real number.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Distance Between Two Points";
        }
    }

    return nullptr;
}

string _Geometry::Terms::DistanceBetweenAPointAndALine(string text)
{
    string model = "llama3";
    string definition = "The length of the perpendicular segment from the point to the line.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Distance Between A Point And A Line";
        }
    }

    return nullptr;
}

string _Geometry::Terms::DistanceBetweenTwoParallelLines(string text)
{
    string model = "llama3";
    string definition = "The length of a line segment drawn from any point on one line perpendicular to the second line.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Distance Between Two Parallel Lines";
        }
    }

    return nullptr;
}

string _Geometry::Terms::Dodecahedron(string text)
{
    string model = "llama3";
    string definition = "A polyhedron that has twelve faces.  A regular dodecahedron is one of the five Platonic solids and has twelve regular pentagons as faces.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Dodecahedron";
        }
    }

    return nullptr;
}

string _Geometry::Terms::DynamicGeometrySoftware(string text)
{
    string model = "llama3";
    string definition = "Computer or calculator software used to construct and manipulate geometric figures.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Dynamic Geometry Software";
        }
    }

    return nullptr;
}

string _Geometry::Terms::EdgeOfAPolyhedron(string text)
{
    string model = "llama3";
    string definition = "A line segment that connects two consecutive vertices of a polyhedron.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Edge Of A Polyhedron";
        }
    }

    return nullptr;
}

string _Geometry::Terms::Ellipse(string text)
{
    string model = "llama3";
    string definition = "A set of points P sub 1 in a plane, such that the sum of the distances from P to two fixed points F sub 1 and F sub 2 is a given constant  k. Any plane section of a circular conical surface which is a closed curve.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Ellipse";
        }
    }

    return nullptr;
}

string _Geometry::Terms::Endpoint(string text)
{
    string model = "llama3";
    string definition = "A point at either the end of a line segment, or arc, or the initial point of a ray.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Endpoint";
        }
    }

    return nullptr;
}

string _Geometry::Terms::Equiangular(string text)
{
    string model = "llama3";
    string definition = "A polygon with all interior angles congruent.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Equiangular";
        }
    }

    return nullptr;
}

string _Geometry::Terms::Equidistant(string text)
{
    string model = "llama3";
    string definition = "At the same distance.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Equidistant";
        }
    }

    return nullptr;
}

string _Geometry::Terms::EquilateralPolygon(string text)
{
    string model = "llama3";
    string definition = "A polygon with all sides congruent.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Equilateral Polygon";
        }
    }

    return nullptr;
}

string _Geometry::Terms::EquilateralTriangle(string text)
{
    string model = "llama3";
    string definition = "A triangle with three congruent sides.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Equilateral Triangle";
        }
    }

    return nullptr;
}

string _Geometry::Terms::EquivalenceRelation(string text)
{
    string model = "llama3";
    string definition = "A relation that exhibits the reflexive, symmetric, and transitive properties.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Equivalence Relation";
        }
    }

    return nullptr;
}

string _Geometry::Terms::EuclideanGeometry(string text)
{
    string model = "llama3";
    string definition = "The study of geometry based on definitions undefined terms (point, line and plane) and the assumptions of Euclid (c.a. 330 B.C.)";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Euclidean Geometry";
        }
    }

    return nullptr;
}

string _Geometry::Terms::EuclideanParallelPostulate(string text)
{
    string model = "llama3";
    string definition = "Any assumption equivalent to the following statement:  If l is any line and P is any point not on l , then there exists exactly one line through P that is parallel to l.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Euclidean Parallel Postulate";
        }
    }

    return nullptr;
}

string _Geometry::Terms::EulerLine(string text)
{
    string model = "llama3";
    string definition = "For any given triangle, the line that contains the circumcenter, the centroid and the orthocenter.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Euler Line";
        }
    }

    return nullptr;
}

string _Geometry::Terms::ExternalSegmentOfASecant(string text)
{
    string model = "llama3";
    string definition = "If a secant is drawn to a circle from an external point, the portion of the secant that lies outside the circle.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "External Segment Of A Secant";
        }
    }

    return nullptr;
}

string _Geometry::Terms::ExteriorOfAGeometricFigure(string text)
{
    string model = "llama3";
    string definition = "The set of all points outside a geometric figure.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Exterior Of A Geometric Figure";
        }
    }

    return nullptr;
}

string _Geometry::Terms::ExteriorAngleOfAPolygon(string text)
{
    string model = "llama3";
    string definition = "An angle formed by a side of a polygon and the extention of an adjacent side.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Exterior Angle Of A Polygon";
        }
    }

    return nullptr;
}

string _Geometry::Terms::FaceOfAPolyhedron(string text)
{
    string model = "llama3";
    string definition = "Any one of the polygons that bound a polyhedron.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Face Of A Polyhedron";
        }
    }

    return nullptr;
}

string _Geometry::Terms::FixedPoint(string text)
{
    string model = "llama3";
    string definition = "A point that is its own image under a transformation of the plane.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Fixed Point";
        }
    }

    return nullptr;
}

string _Geometry::Terms::FootOfAnAltitude(string text)
{
    string model = "llama3";
    string definition = "The point of intersection of an altitude and the line or plane to which it is perpendicular.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Foot Of An Altitude";
        }
    }

    return nullptr;
}

string _Geometry::Terms::Function(string text)
{
    string model = "llama3";
    string definition = "A rule that assigns to each number x in the function\'s domain a unique number f(x).";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

string _Geometry::Terms::GeometricInequality(string text)
{
    string model = "llama3";
    string definition = "A statement in geometry which indicates that quantity is greater than another quantity.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Geometric Inequality";
        }
    }

    return nullptr;
}

string _Geometry::Terms::GeometricMean(string text)
{
    string model = "llama3";
    string definition = "The geometric mean, also called the mean proportional, of two numbers aand bis the square root of their product. If a / m = m / b then m is the geometric mean of a and b.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Geometric Mean";
        }
    }

    return nullptr;
}

string _Geometry::Terms::GeometricProbability(string text)
{
    string model = "llama3";
    string definition = "A probability based on geometric relationships such as area, surface area or volume.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Geometric Probability";
        }
    }

    return nullptr;
}

string _Geometry::Terms::GeometricRepresentationOfTheCircularFunctions(string text)
{
    string model = "llama3";
    string definition = "The representation of circular functions on a circle of unit radius.  The trigonometric functions are called circular functions because their values are related to the lengths of specific line segments associated with a circle of unit radius.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

string _Geometry::Terms::GeometricSequence(string text)
{
    string model = "llama3";
    string definition = "A set of terms in which each term is formed by multiplying the preceding term by a nonzero constant.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

string _Geometry::Terms::Geometry(string text)
{
    string model = "llama3";
    string definition = "Branch of mathematics that deals with the properties, measurement, and relationships of points, lines, angles, surfaces, and solids.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

string _Geometry::Terms::GlideReflection(string text)
{
    string model = "llama3";
    string definition = "A transformation that is the composition of a line reflection and a translation through a vector parallel to that line of reflection.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Glide Reflection";
        }
    }

    return nullptr;
}

string _Geometry::Terms::GoldenRatio(string text)
{
    string model = "llama3";
    string definition = "When a line segment AB is divided by an interior point P such that AB / AP = AP / PB, the ratio AB / AP = 1/2(1 + sqrt(5)) is called the golden ratio.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Golden Ratio";
        }
    }

    return nullptr;
}

string _Geometry::Terms::GoldenRectangle(string text)
{
    string model = "llama3";
    string definition = "A rectangle whose adjacent sides have a ratio equal to the golden ratio.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Golden Rectangle";
        }
    }

    return nullptr;
}

string _Geometry::Terms::GraphicalRepresentation(string text)
{
    string model = "llama3";
    string definition = "A graph or graphs used to model a mathematical relationship.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

string _Geometry::Terms::GreatCircle(string text)
{
    string model = "llama3";
    string definition = "The intersection of a sphere with any plane passing through the center of the sphere.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Great Circle";
        }
    }

    return nullptr;
}

string _Geometry::Terms::HalfTurn(string text)
{
    string model = "llama3";
    string definition = "A 180 degree rotation about a point.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Half Turn";
        }
    }

    return nullptr;
}

string _Geometry::Terms::Hemisphere(string text)
{
    string model = "llama3";
    string definition = "Half of a sphere bounded by a great circle.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Hemisphere";
        }
    }

    return nullptr;
}

string _Geometry::Terms::HeronsFormula(string text)
{
    string model = "llama3";
    string definition = "The formula expressing the area of a triangle, A, in terms of its sides a, b, 1 and c. A = sqrt(s(s-a)(s-b)(s-c)) where s = 1/2(a+b+c) and is called the sem0perimeter.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Heron's Formula";
        }
    }

    return nullptr;
}

string _Geometry::Terms::Hexagon(string text)
{
    string model = "llama3";
    string definition = "A polygon with six sides.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Hexagon";
        }
    }

    return nullptr;
}

string _Geometry::Terms::Hyperbola(string text)
{
    string model = "llama3";
    string definition = "Set of points P in a plane such that the difference between the distances from P to the foci F sub 1 and F sub 2 is a given constant k.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Hyperbola";
        }
    }

    return nullptr;
}

string _Geometry::Terms::Hypotenuse(string text)
{
    string model = "llama3";
    string definition = "The side of a right triangle opposite the right angle; the longest side of a right triangle.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Hypotenuse";
        }
    }

    return nullptr;
}

string _Geometry::Terms::HypotenuseAndLegTriangleCongruence(string text)
{
    string model = "llama3";
    string definition = "If there exists a one-to-one correspondence between the vertices of two right triangles such that the hypotenuse and leg of one right triangle are congruent to the hypotenuse and corresponding leg of the second right triangle, then the triangles are congruent.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Hypotenuse And Leg Triangle Congruence";
        }
    }

    return nullptr;
}

string _Geometry::Terms::Hypothesis(string text)
{
    string model = "llama3";
    string definition = "An assumed statement used as a premise in a proof; the \"given\"; the \"if\"  clause of an \"if-then\" statement. (See also antecedent.)";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Hypothesis";
        }
    }

    return nullptr;
}

string _Geometry::Terms::Icosahedron(string text)
{
    string model = "llama3";
    string definition = "A polyhedron having twenty faces. A regular icosahedron is one of the five Platonic solids and has twenty equilateral triangles as faces.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Icosahedron";
        }
    }

    return nullptr;
}

string _Geometry::Terms::IdentityElements(string text)
{
    string model = "llama3";
    string definition = "For a binary operation * and a set S, ? is the identity element if a * ? = a and ? * a = a for every element a that is in S.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Identity Elements";
        }
    }

    return nullptr;
}

string _Geometry::Terms::Image(string text)
{
    string model = "llama3";
    string definition = "The resulting point or set of points under a given transformation; in any function f, the image of x is the functional value f(x) corresponding to x.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

string _Geometry::Terms::IncenterOfATriangle(string text)
{
    string model = "llama3";
    string definition = "The center of the circle that is inscribed in a triangle; the point of concurrence of the three angle bisectors of the triangle which is equidistant from the sides of the triangle.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Incenter Of A Triangle";
        }
    }

    return nullptr;
}

string _Geometry::Terms::IncludedAngle(string text)
{
    string model = "llama3";
    string definition = "The side between two consecutive angles in a polygon.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Included Angle";
        }
    }

    return nullptr;
}

string _Geometry::Terms::IndirectProof(string text)
{
    string model = "llama3";
    string definition = "A method of proof in which the statement that is to be proven is assumed false and a contradiction results.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Indirect Proof";
        }
    }

    return nullptr;
}

string _Geometry::Terms::InductiveReasoning(string text)
{
    string model = "llama3";
    string definition = "The process of observing data, recognizing patterns and making generalizations about those patterns.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

string _Geometry::Terms::InscribedAngle(string text)
{
    string model = "llama3";
    string definition = "An angle whose vertex lies on the circle and whose sides are chords of a circle.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Inscribed Angle";
        }
    }

    return nullptr;
}

string _Geometry::Terms::InscribedCircle(string text)
{
    string model = "llama3";
    string definition = "A circle in the interior of a polygon that is tangent to each side of the polygon.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Inscribed Circle";
        }
    }

    return nullptr;
}

string _Geometry::Terms::InterceptedArc(string text)
{
    string model = "llama3";
    string definition = "An arc of a circle whose endpoints lie on the sides of an angle, and all of the points on the arc are in the interior of the angle.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Intercepted Arc";
        }
    }

    return nullptr;
}

string _Geometry::Terms::Interior(string text)
{
    string model = "llama3";
    string definition = "The set of all points inside a geometric figure.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Interior";
        }
    }

    return nullptr;
}

string _Geometry::Terms::IntersectingLines(string text)
{
    string model = "llama3";
    string definition = "Lines that share a common point.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Intersecting Lines";
        }
    }

    return nullptr;
}

string _Geometry::Terms::IntersectionOfSets(string text)
{
    string model = "llama3";
    string definition = "The intersection of two or more sets is the set of all elements that are common to all of the given sets.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Intersection Of Sets";
        }
    }

    return nullptr;
}

string _Geometry::Terms::Invariant(string text)
{
    string model = "llama3";
    string definition = "A figure or property that remains unchanged under a transformation of the plane.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Invariant";
        }
    }

    return nullptr;
}

string _Geometry::Terms::InverseOfAStatement(string text)
{
    string model = "llama3";
    string definition = "A statement formed by negating both the hypothesis and conclusion of a given conditional.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Inverse Of A Statement";
        }
    }

    return nullptr;
}

string _Geometry::Terms::Isometry(string text)
{
    string model = "llama3";
    string definition = "A transformation of the plane  that preserves distance.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Isometry";
        }
    }

    return nullptr;
}

string _Geometry::Terms::IsoscelesTrapezoid(string text)
{
    string model = "llama3";
    string definition = "A trapezoid in which the non-parallel sides are congruent.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Isosceles Trapezoid";
        }
    }

    return nullptr;
}

string _Geometry::Terms::IsoscelesTriangle(string text)
{
    string model = "llama3";
    string definition = "A triangle that has at least two congruent sides.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Isosceles Triangle";
        }
    }

    return nullptr;
}

string _Geometry::Terms::LateralAreaOfAPrism(string text)
{
    string model = "llama3";
    string definition = "The sum of the areas of the faces of the prism not including the bases.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Lateral Area Of A Prism";
        }
    }

    return nullptr;
}

string _Geometry::Terms::LateralEdge(string text)
{
    string model = "llama3";
    string definition = "A line segment that is the intersection of any two lateral faces of a polyhedron.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Lateral Edge";
        }
    }

    return nullptr;
}

string _Geometry::Terms::LateralFace(string text)
{
    string model = "llama3";
    string definition = "A face of a polyhedron, not including its bases.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Lateral Face";
        }
    }

    return nullptr;
}

string _Geometry::Terms::LengthOfLineSegment(string text)
{
    string model = "llama3";
    string definition = "The distance between the end two end points of a line segment.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Length Of Line Segment";
        }
    }

    return nullptr;
}

string _Geometry::Terms::LineSegment(string text)
{
    string model = "llama3";
    string definition = "Given any two points A and B, AB is equal to the union of points A, B, and all of those points between A and B.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Line Segment";
        }
    }

    return nullptr;
}

string _Geometry::Terms::LineSymmetry(string text)
{
    string model = "llama3";
    string definition = "A geometric figure has line symmetry if the figure is the image of itself under a reflection in a line.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Line Symmetry";
        }
    }

    return nullptr;
}

string _Geometry::Terms::LinearPairOfAngles(string text)
{
    string model = "llama3";
    string definition = "Any two adjacent angles whose non-common sides form a line.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Linear Pair Of Angles";
        }
    }

    return nullptr;
}

string _Geometry::Terms::LocusOfPoints(string text)
{
    string model = "llama3";
    string definition = "The set of all points satisfying a given condition or conditions.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Locus Of Points";
        }
    }

    return nullptr;
}

string _Geometry::Terms::LogicalEquivalence(string text)
{
    string model = "llama3";
    string definition = "Statements that have the same truth value.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Logical Equivalence";
        }
    }

    return nullptr;
}

string _Geometry::Terms::MajorArc(string text)
{
    string model = "llama3";
    string definition = "In a circle, any arc whose length is greater than the length of a semicircle.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Major Arc";
        }
    }

    return nullptr;
}

string _Geometry::Terms::MeanProportional(string text)
{
    string model = "llama3";
    string definition = "The mean proportional, also called the geometric mean, of two numbers a and b is the square root of their product. If a / m = m / b then m = sqrt(ab) is the geometric mean of a and b.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Mean Proportional";
        }
    }

    return nullptr;
}

string _Geometry::Terms::MeasureOfAnArc(string text)
{
    string model = "llama3";
    string definition = "The measure of the central angle that subtends the arc.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Measure Of An Arc";
        }
    }

    return nullptr;
}

string _Geometry::Terms::MedianOfATrapezoid(string text)
{
    string model = "llama3";
    string definition = "A line segment that connects the midpoints of the two non-parallel sides of the trapezoid.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Median Of A Trapezoid";
        }
    }

    return nullptr;
}

string _Geometry::Terms::MedianOfATriangle(string text)
{
    string model = "llama3";
    string definition = "A line segment that connects any vertex of a triangle to the midpoint of the opposite side.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Median Of A Triangle";
        }
    }

    return nullptr;
}

string _Geometry::Terms::Midpoint(string text)
{
    string model = "llama3";
    string definition = "A point that divides a line segment into two congruent line segments.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Midpoint";
        }
    }

    return nullptr;
}

string _Geometry::Terms::Midsegment(string text)
{
    string model = "llama3";
    string definition = "A line segment that connects the midpoints of  two sides of a triangle; Also called the midline.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Midsegment";
        }
    }

    return nullptr;
}

string _Geometry::Terms::MinorArc(string text)
{
    string model = "llama3";
    string definition = "In a circle, any arc whose length is less than the length of a semicircle.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Minor Arc";
        }
    }

    return nullptr;
}

string _Geometry::Terms::Negation(string text)
{
    string model = "llama3";
    string definition = "For any given statement p, its negation is the statement, ~p (not p) whose truth value is the opposite of the truth value of p.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Negation";
        }
    }

    return nullptr;
}

string _Geometry::Terms::Net(string text)
{
    string model = "llama3";
    string definition = "A two dimensional pattern consisting of polygons which can be folded to form a polyhedron.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Net";
        }
    }

    return nullptr;
}

string _Geometry::Terms::NGon(string text)
{
    string model = "llama3";
    string definition = "A polygon with n sides.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "N Gon";
        }
    }

    return nullptr;
}

string _Geometry::Terms::NonCollinearPoints(string text)
{
    string model = "llama3";
    string definition = "Three or more points that do not lie on the same line.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Non Collinear Points";
        }
    }

    return nullptr;
}

string _Geometry::Terms::NonCoplanarPoints(string text)
{
    string model = "llama3";
    string definition = "Four or more points that do not lie on the same plane.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Non Coplanar Points";
        }
    }

    return nullptr;
}

string _Geometry::Terms::NonEuclideanGeometry(string text)
{
    string model = "llama3";
    string definition = "A geometry that contains an axiom which is equivalent to the negation of the Euclidean parallel postulate.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Non Euclidean Geometry";
        }
    }

    return nullptr;
}

string _Geometry::Terms::RiemannianGeometry(string text)
{
    string model = "llama3";
    string definition = "A non-Euclidean geometry using as its parallel postulate any statement equivalent to the following: If l is any line and P is any point not on l, then there are no lines through P that are parallel to l. (Also called elliptic  geometry.)";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Riemannian Geometry";
        }
    }

    return nullptr;
}

string _Geometry::Terms::HyperbolicGeometry(string text)
{
    string model = "llama3";
    string definition = "A non-Euclidean geometry using as its parallel postulate any statement equivalent to the following: If l is any line and P is any point not on l, then there exists at least two lines through P that are parallel to l.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Hyperbolic Geometry";
        }
    }

    return nullptr;
}

string _Geometry::Terms::ObliqueLineAndAPlane(string text)
{
    string model = "llama3";
    string definition = "A line and a plane that are neither parallel nor perpendicular.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Oblique Line And A Plane";
        }
    }

    return nullptr;
}

string _Geometry::Terms::ObtuseAngle(string text)
{
    string model = "llama3";
    string definition = "An angle whose measure is greater than 90 degrees and less than 180 degrees.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Obtuse Angle";
        }
    }

    return nullptr;
}

string _Geometry::Terms::ObtuseTriangle(string text)
{
    string model = "llama3";
    string definition = "A triangle having one obtuse angle.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Obtuse Triangle";
        }
    }

    return nullptr;
}

string _Geometry::Terms::Octagon(string text)
{
    string model = "llama3";
    string definition = "A polygon with 8 sides.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Octagon";
        }
    }

    return nullptr;
}

string _Geometry::Terms::Octahedron(string text)
{
    string model = "llama3";
    string definition = "A polyhedron having eight faces. A regular octahedron is one of the five Platonic solids and has eight equilateral triangles as faces.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Octahedron";
        }
    }

    return nullptr;
}

string _Geometry::Terms::OneToOneFunction(string text)
{
    string model = "llama3";
    string definition = "A function where the inverse is also a function.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

string _Geometry::Terms::OppositeRays(string text)
{
    string model = "llama3";
    string definition = "Two collinear rays whose intersection is exactly one point.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Opposite Rays";
        }
    }

    return nullptr;
}

string _Geometry::Terms::OppositeSideInARightTriangle(string text)
{
    string model = "llama3";
    string definition = "The side across from an angle. In a right triangle the hypotenuse is opposite the right angle and each leg is opposite one of the acute angles.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

string _Geometry::Terms::OppositeTransformation(string text)
{
    string model = "llama3";
    string definition = "A transformation of the plane that changes the orientation of a figure.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Opposite Transformation";
        }
    }

    return nullptr;
}

string _Geometry::Terms::OrderedPair(string text)
{
    string model = "llama3";
    string definition = "Two numbers that are used to identify the position of a point in a plane. The two numbers are called coordinates and are represented by (x, y).";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Ordered Pair";
        }
    }

    return nullptr;
}

string _Geometry::Terms::OrderedTriple(string text)
{
    string model = "llama3";
    string definition = "Three numbers that are used to identify the position of a point in space. The three numbers are called coordinates and are represented by (x, y, z).";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Ordered Triple";
        }
    }

    return nullptr;
}

string _Geometry::Terms::Ordinate(string text)
{
    string model = "llama3";
    string definition = "The vertical coordinate of a two-dimensional rectangular coordinate system; usually denoted by y.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

string _Geometry::Terms::Orientation(string text)
{
    string model = "llama3";
    string definition = "The arrangement of the points, relative to one another, after a transformation; the reference made to the direction traversed (clockwise or counterclockwise) when traveling around a geometric figure.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Orientation";
        }
    }

    return nullptr;
}

string _Geometry::Terms::Origin(string text)
{
    string model = "llama3";
    string definition = "The point in the Cartesian coordinate plane at which the horizontal and vertical axes intersect, designated by the ordered pair (0,0).";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Origin";
        }
    }

    return nullptr;
}

string _Geometry::Terms::Orthocenter(string text)
{
    string model = "llama3";
    string definition = "The point of concurrence of the three altitudes of a triangle.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Orthocenter";
        }
    }

    return nullptr;
}

string _Geometry::Terms::Parabola(string text)
{
    string model = "llama3";
    string definition = "Any plane section of a circular conical surface by a plane parallel to the slant height of the cone.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

string _Geometry::Terms::ParagraphProof(string text)
{
    string model = "llama3";
    string definition = "A written proof in which the statements and their corresponding reasons are written, in paragraph form, using complete sentences.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Paragraph Proof";
        }
    }

    return nullptr;
}

string _Geometry::Terms::ParallelPiped(string text)
{
    string model = "llama3";
    string definition = "A prism whose bases are parallelograms.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Parallel Piped";
        }
    }

    return nullptr;
}

string _Geometry::Terms::ParallelLines(string text)
{
    string model = "llama3";
    string definition = "Two or more coplanar lines that do not intersect. Parallel line segments or rays are line segments or rays that are subsets of parallel lines.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Parallel Lines";
        }
    }

    return nullptr;
}

string _Geometry::Terms::ParallelPlanes(string text)
{
    string model = "llama3";
    string definition = "Two or more planes that do not intersect.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Parallel Planes";
        }
    }

    return nullptr;
}

string _Geometry::Terms::ParallelPostulate(string text)
{
    string model = "llama3";
    string definition = "Any postulate or axiom that designates the number of lines through a given point that are parallel to a given line.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Parallel Postulate";
        }
    }

    return nullptr;
}

string _Geometry::Terms::Parallelogram(string text)
{
    string model = "llama3";
    string definition = "A quadrilateral in which both pairs of opposite sides are parallel.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Parallelogram";
        }
    }

    return nullptr;
}

string _Geometry::Terms::Parameter(string text)
{
    string model = "llama3";
    string definition = "A quantity or constant whose value varies with the circumstances of its application.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

string _Geometry::Terms::Pentagon(string text)
{
    string model = "llama3";
    string definition = "A polygon with 5 sides.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Pentagon";
        }
    }

    return nullptr;
}

string _Geometry::Terms::Perimeter(string text)
{
    string model = "llama3";
    string definition = "The sum of the lengths of all the sides of any polygon.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Perimeter";
        }
    }

    return nullptr;
}

string _Geometry::Terms::PerpendicularBisector(string text)
{
    string model = "llama3";
    string definition = "A line, segment or ray that is perpendicular to a line segment at its midpoint.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Perpendicular Bisector";
        }
    }

    return nullptr;
}

string _Geometry::Terms::PerpendicularLines(string text)
{
    string model = "llama3";
    string definition = "Two lines that intersect to form right angles.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Perpendicular Lines";
        }
    }

    return nullptr;
}

string _Geometry::Terms::PerpendicularPlanes(string text)
{
    string model = "llama3";
    string definition = "Two planes that intersect to form right dihedral angles.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Perpendicular Planes";
        }
    }

    return nullptr;
}

string _Geometry::Terms::Pi(string text)
{
    string model = "llama3";
    string definition = "The irrational number equal to the length of the circumference of a circle divided by the length of its diameter.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

string _Geometry::Terms::Plane(string text)
{
    string model = "llama3";
    string definition = "An undefined term in geometry usually visualized as a flat surface with no thickness that extends indefinitely in two dimensions.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Plane";
        }
    }

    return nullptr;
}

string _Geometry::Terms::PlatonicSolids(string text)
{
    string model = "llama3";
    string definition = "The five regular polyhedra: tetrahedron, cube, octahedron, dodecahedron and icosahedron.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Platonic Solids";
        }
    }

    return nullptr;
}

string _Geometry::Terms::Point(string text)
{
    string model = "llama3";
    string definition = "An undefined term in geometry usually visualized as a dot representing a non- dimensional location in space.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Point";
        }
    }

    return nullptr;
}

string _Geometry::Terms::PointOfConcurrency(string text)
{
    string model = "llama3";
    string definition = "A point that is the intersection of three or more lines.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Point Of Concurrency";
        }
    }

    return nullptr;
}

string _Geometry::Terms::PointOfTangency(string text)
{
    string model = "llama3";
    string definition = "The point where a tangent line intersects a curve.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Point Of Tangency";
        }
    }

    return nullptr;
}

string _Geometry::Terms::PointSlopeEquationOfALine(string text)
{
    string model = "llama3";
    string definition = "The equation of a line formed using its slope and the coordinates of a point on the line, where m is the slope of the line and (x1, y1) are the coordinates of the given point.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Point Slope Equation Of A Line";
        }
    }

    return nullptr;
}

string _Geometry::Terms::PointSymmetry(string text)
{
    string model = "llama3";
    string definition = "A geometric figure has point symmetry if every point on the figure is the image of itself under a rotation of 180 degrees about some fixed point.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Point Symmetry";
        }
    }

    return nullptr;
}

string _Geometry::Terms::Polygon(string text)
{
    string model = "llama3";
    string definition = "A closed plane figure formed by three or more line segments that meet only at their endpoints.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Polygon";
        }
    }

    return nullptr;
}

string _Geometry::Terms::Polyhedron(string text)
{
    string model = "llama3";
    string definition = "A solid figure bounded by polygons.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Polyhedron";
        }
    }

    return nullptr;
}

string _Geometry::Terms::PositionVector(string text)
{
    string model = "llama3";
    string definition = "A coordinate vector whose initial point is the origin. Any vector can be expressed as an equivalent position vector by translating the vector so that it originates at the origin.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Position Vector";
        }
    }

    return nullptr;
}

string _Geometry::Terms::Postulate(string text)
{
    string model = "llama3";
    string definition = "A statement assumed to be true without proof.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Postulate";
        }
    }

    return nullptr;
}

string _Geometry::Terms::Preimage(string text)
{
    string model = "llama3";
    string definition = "The original point or points of a transformation.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Preimage";
        }
    }

    return nullptr;
}

string _Geometry::Terms::Premise(string text)
{
    string model = "llama3";
    string definition = "A proposition upon which an argument is based or from which a conclusion is drawn.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Premise";
        }
    }

    return nullptr;
}

string _Geometry::Terms::Prism(string text)
{
    string model = "llama3";
    string definition = "A polyhedron with two congruent, parallel, polygonal bases and whose lateral faces are parallelograms.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Prism";
        }
    }

    return nullptr;
}

string _Geometry::Terms::ProofByContradiction(string text)
{
    string model = "llama3";
    string definition = "A method of proof which demonstrates the truth of an implication by proving that the negation of the conclusion of that implication leads to a contradiction; also called an indirect proof.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Proof By Contradiction";
        }
    }

    return nullptr;
}

string _Geometry::Terms::Proportional(string text)
{
    string model = "llama3";
    string definition = "Two variables are proportional if they maintain a constant ratio. See also direct variation.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Proportional";
        }
    }

    return nullptr;
}

string _Geometry::Terms::Pyramid(string text)
{
    string model = "llama3";
    string definition = "A polyhedron having a polygonal base and triangles as lateral faces.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Pyramid";
        }
    }

    return nullptr;
}

string _Geometry::Terms::PythagoreanTheorem(string text)
{
    string model = "llama3";
    string definition = "The mathematical relationship stating that in any right triangle the sum of the squares of the lengths of the two legs is equal to the square of the length of the hypotenuse; if a and b are the lengths of the legs and c is the length of the hypotenuse, then a2 + b2 = c2.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Pythagorean Theorem";
        }
    }

    return nullptr;
}

string _Geometry::Terms::Quadrant(string text)
{
    string model = "llama3";
    string definition = "The four regions of a plane created by the intersection of the coordinate axes. Each of these quadrants has a number designation:";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Quadrant";
        }
    }

    return nullptr;
}

string _Geometry::Terms::QuadraticEquation(string text)
{
    string model = "llama3";
    string definition = "An equation that can be written in the form ax^2 + bx + c = 0. Where a, b, and c are real constants and a != 0.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

string _Geometry::Terms::Quadrilateral(string text)
{
    string model = "llama3";
    string definition = "A polygon with 4 sides.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Quadrilateral";
        }
    }

    return nullptr;
}

string _Geometry::Terms::Radical(string text)
{
    string model = "llama3";
    string definition = "The root of a quantity as indicated by the radical sign.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

string _Geometry::Terms::Radius(string text)
{
    string model = "llama3";
    string definition = "A line segment drawn from the center of a circle to a point on the circle.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Radius";
        }
    }

    return nullptr;
}

string _Geometry::Terms::Ray(string text)
{
    string model = "llama3";
    string definition = "Given any two points A and B, AB is equal to the union of AB and all of those points X such that B is between X and A.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Ray";
        }
    }

    return nullptr;
}

string _Geometry::Terms::Reason(string text)
{
    string model = "llama3";
    string definition = "A true statement justifying a step in a proof; the use of logic, examples, etc. to determine a result.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Reason";
        }
    }

    return nullptr;
}

string _Geometry::Terms::Rectangle(string text)
{
    string model = "llama3";
    string definition = "A parallelogram containing one right angle; a quadrilateral with four right angles.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Rectangle";
        }
    }

    return nullptr;
}

string _Geometry::Terms::RectangularCoordinates(string text)
{
    string model = "llama3";
    string definition = "An ordered pair of real numbers that establishes the location of a point in a coordinate plane using the distances from two perpendicular intersecting lines called the coordinate axes. (See also Cartesian coordinates.)";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

string _Geometry::Terms::Reflection(string text)
{
    string model = "llama3";
    string definition = "An isometry where if l is any line and P is any point not on l, then r1(P) = P\'";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Reflection";
        }
    }

    return nullptr;
}

string _Geometry::Terms::ReflexivePropertyOfEquality(string text)
{
    string model = "llama3";
    string definition = "A property of real numbers that states a = a.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Reflexive Property Of Equality";
        }
    }

    return nullptr;
}

string _Geometry::Terms::RegularPolygon(string text)
{
    string model = "llama3";
    string definition = "A polygon which is both equilateral and equiangular.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Regular Polygon";
        }
    }

    return nullptr;
}

string _Geometry::Terms::RegularPyramid(string text)
{
    string model = "llama3";
    string definition = "A pyramid whose base is a regular polygon and whose lateral faces are congruent isosceles triangles.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Regular Pyramid";
        }
    }

    return nullptr;
}

string _Geometry::Terms::RemoteInteriorAngles(string text)
{
    string model = "llama3";
    string definition = "Either interior angle of a triangle that is not adjacent to a given exterior angle of the triangle. Also called non-adjacent interior angles.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Remote Interior Angles";
        }
    }

    return nullptr;
}

string _Geometry::Terms::RestrictedDomain(string text)
{
    string model = "llama3";
    string definition = "The domain resulting from a restriction placed on a function, based on the context of the problem.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

string _Geometry::Terms::Rhombus(string text)
{
    string model = "llama3";
    string definition = "A parallelogram with two adjacent congruent sides; a quadrilateral with four congruent sides.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Rhombus";
        }
    }

    return nullptr;
}

string _Geometry::Terms::RightAngle(string text)
{
    string model = "llama3";
    string definition = "An angle formed by two perpendicular lines, the measure of which is 90 degrees.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Right Angle";
        }
    }

    return nullptr;
}

string _Geometry::Terms::RightCircularCylinder(string text)
{
    string model = "llama3";
    string definition = "A cylinder whose bases are circles and whose altitude passes through the center of both bases";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Right Circular Cylinder";
        }
    }

    return nullptr;
}

string _Geometry::Terms::RightCircularCone(string text)
{
    string model = "llama3";
    string definition = "A cone whose base is a circle and whose altitude passes through the center of its base.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Right Circular Cone";
        }
    }

    return nullptr;
}

string _Geometry::Terms::RightPyramid(string text)
{
    string model = "llama3";
    string definition = "A pyramid whose lateral faces are isosceles triangles.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Right Pyramid";
        }
    }

    return nullptr;
}

string _Geometry::Terms::RightTriangle(string text)
{
    string model = "llama3";
    string definition = "A triangle with one right angle.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Right Triangle";
        }
    }

    return nullptr;
}

string _Geometry::Terms::Rotation(string text)
{
    string model = "llama3";
    string definition = "An isometry where if P is a fixed point in the plane, theta is any angle and A != P then Rp,theta(A) = A\' where m<APA\' = 0 and Rp,theta(P) = P.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Rotation";
        }
    }

    return nullptr;
}

string _Geometry::Terms::RotationalSymmetry(string text)
{
    string model = "llama3";
    string definition = "A geometric figure has rotational symmetry if the figure is the image of itself under a rotation about a point through any angle whose measure is not a multiple of 360 degrees.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Rotational Symmetry";
        }
    }

    return nullptr;
}

string _Geometry::Terms::SASTriangleCongruence(string text)
{
    string model = "llama3";
    string definition = "If there exists a one-to-one correspondence between the vertices of two triangles, such that two sides and the included angle of one triangle are congruent to the corresponding two sides and included angle of the second triangle, then the two triangles are congruent.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "SAS Triangle Congruence";
        }
    }

    return nullptr;
}

string _Geometry::Terms::SASSimilarityTheorem(string text)
{
    string model = "llama3";
    string definition = "If there exists a one-to-one correspondence between the vertices of two triangles, such that two pairs of corresponding sides are proportional and their included angles are congruent, then the two triangles are similar.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "SAS Similarity Theorem";
        }
    }

    return nullptr;
}

string _Geometry::Terms::ScaleneTriangle(string text)
{
    string model = "llama3";
    string definition = "A triangle with no congruent sides.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Scalene Triangle";
        }
    }

    return nullptr;
}

string _Geometry::Terms::SecantOfACircle(string text)
{
    string model = "llama3";
    string definition = "A line that intersects a circle in exactly two points.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Secant Of A Circle";
        }
    }

    return nullptr;
}

string _Geometry::Terms::SectorOfACircle(string text)
{
    string model = "llama3";
    string definition = "A region bounded by an arc of the circle and the two radii to the endpoints of the arc.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

string _Geometry::Terms::SegmentOfACircle(string text)
{
    string model = "llama3";
    string definition = "The region bounded by a chord and the arc subtended by that chord.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Segment Of A Circle";
        }
    }

    return nullptr;
}

string _Geometry::Terms::SemiCircle(string text)
{
    string model = "llama3";
    string definition = "Either of the arcs of a circle determined by the endpoints of a diameter.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Semi Circle";
        }
    }

    return nullptr;
}

string _Geometry::Terms::Set(string text)
{
    string model = "llama3";
    string definition = "A well-defined collection of items.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

string _Geometry::Terms::SimilarPolygons(string text)
{
    string model = "llama3";
    string definition = "Two polygons which have the same shape but not necessarily the same size.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Similar Polygons";
        }
    }

    return nullptr;
}

string _Geometry::Terms::SkewLines(string text)
{
    string model = "llama3";
    string definition = "Two non-coplanar lines that do not intersect.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Skew Lines";
        }
    }

    return nullptr;
}

string _Geometry::Terms::SlantHeight(string text)
{
    string model = "llama3";
    string definition = "Of a pyramid: The altitude of a lateral face of a pyramid.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Slant Height";
        }
    }

    return nullptr;
}

string _Geometry::Terms::SlantHeightOfACone(string text)
{
    string model = "llama3";
    string definition = "The length of a line segment drawn on the lateral surface of a cone from its vertex to a point on the circle that determines its base.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Slant Height Of A Cone";
        }
    }

    return nullptr;
}

string _Geometry::Terms::Slope(string text)
{
    string model = "llama3";
    string definition = "The measure of the steepness of a line; the ratio of vertical change to horizontal change.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

string _Geometry::Terms::SlopeEquation(string text)
{
    string model = "llama3";
    string definition = "The equation of a line formed using its slope and its y-intercept. If the coordinates of the y-intercept of the line are (0, b) and the slope is m, then the equation of the line is y = mx + b.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Slope Equation";
        }
    }

    return nullptr;
}

string _Geometry::Terms::Sphere(string text)
{
    string model = "llama3";
    string definition = "The locus of points in space at a given distance from a fixed point.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Sphere";
        }
    }

    return nullptr;
}

string _Geometry::Terms::Square(string text)
{
    string model = "llama3";
    string definition = "A rectangle with two congruent adjacent sides.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Square";
        }
    }

    return nullptr;
}

string _Geometry::Terms::SSSTriangleCongruence(string text)
{
    string model = "llama3";
    string definition = "If there exists a one-to-one correspondence between the vertices of two triangles, such that all three sides of one triangle are congruent to the corresponding sides of the second triangle, then the two triangles are congruent.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "S S S Triangle Congruence";
        }
    }

    return nullptr;
}

string _Geometry::Terms::Straightedge(string text)
{
    string model = "llama3";
    string definition = "An object with no marked units of measure that is used for drawing straight lines.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Straightedge";
        }
    }

    return nullptr;
}

string _Geometry::Terms::SubstitutionProperty(string text)
{
    string model = "llama3";
    string definition = "Any quantity can be replaced by an equal quantity.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

string _Geometry::Terms::SubtractionPropertyOfEquality(string text)
{
    string model = "llama3";
    string definition = "If the same or equal quantities are subtracted from same or equal quantities, then the results are equal.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

string _Geometry::Terms::SupplementaryAngles(string text)
{
    string model = "llama3";
    string definition = "Two angles the sum of whose measures is 180 degrees.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Supplementary Angles";
        }
    }

    return nullptr;
}

string _Geometry::Terms::SurfaceArea(string text)
{
    string model = "llama3";
    string definition = "The sum of the areas of all the faces or curved surfaces of a solid figure.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Surface Area";
        }
    }

    return nullptr;
}

string _Geometry::Terms::SymmetricPropertyOfEquality(string text)
{
    string model = "llama3";
    string definition = "A property of the real numbers that states If a = b then b = a.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Symmetric Property Of Equality";
        }
    }

    return nullptr;
}

string _Geometry::Terms::InternalTangentCircles(string text)
{
    string model = "llama3";
    string definition = "Two circles are internally tangent if they intersect in exactly one point and one circle lies in the interior of the other circle.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Internal Tangent Circles";
        }
    }

    return nullptr;
}

string _Geometry::Terms::ExternalTangentCircles(string text)
{
    string model = "llama3";
    string definition = "Two circles are externally tangent if the meet in exactly one point and neither circle has any points in the interior of the other circle.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "External Tangent Circles";
        }
    }

    return nullptr;
}

string _Geometry::Terms::TangentLineToACircle(string text)
{
    string model = "llama3";
    string definition = "A line that intersects a circle in exactly one point.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Tangent Line To A Circle";
        }
    }

    return nullptr;
}

string _Geometry::Terms::TangentSegment(string text)
{
    string model = "llama3";
    string definition = "A line segment that is a subset of a tangent line. This usually refers to the line segment drawn from an external point to the point of tangency.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Tangent Segment";
        }
    }

    return nullptr;
}

string _Geometry::Terms::Tessellation(string text)
{
    string model = "llama3";
    string definition = "A repeating pattern covering a plane.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Tessellation";
        }
    }

    return nullptr;
}

string _Geometry::Terms::Tetrahedron(string text)
{
    string model = "llama3";
    string definition = "A polyhedron with four faces; one of the five Platonic solids that has four equilateral triangles as faces (pyramid).";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Tetrahedron";
        }
    }

    return nullptr;
}

string _Geometry::Terms::Theorem(string text)
{
    string model = "llama3";
    string definition = "A general statement that requires proof.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Theorem";
        }
    }

    return nullptr;
}

string _Geometry::Terms::ThreeDimensionalSpace(string text)
{
    string model = "llama3";
    string definition = "The set of all points in space. The position of each point can be represented by a unique ordered triple (x,y,z).";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Three Dimensional Space";
        }
    }

    return nullptr;
}

string _Geometry::Terms::Transformation(string text)
{
    string model = "llama3";
    string definition = "A one-to-one mapping of points in the plane to points in the plane.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

string _Geometry::Terms::TransformationalGeometry(string text)
{
    string model = "llama3";
    string definition = "A method for studying geometry that illustrates congruence and similarity by the use of transformations.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Transformational Geometry";
        }
    }

    return nullptr;
}

string _Geometry::Terms::TransformationalProof(string text)
{
    string model = "llama3";
    string definition = "A proof that employs the use of transformations.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Transformational Proof";
        }
    }

    return nullptr;
}

string _Geometry::Terms::TransitivePropertyOfEquality(string text)
{
    string model = "llama3";
    string definition = "A property of the real numbers that states: If a = b and b = c then a = c.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Transitive Property Of Equality";
        }
    }

    return nullptr;
}

string _Geometry::Terms::Translation(string text)
{
    string model = "llama3";
    string definition = "A transformation where every point moves the same direction through the same distance.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

string _Geometry::Terms::Transversal(string text)
{
    string model = "llama3";
    string definition = "A line that intersects two (or more) other lines in distinct points.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Transversal";
        }
    }

    return nullptr;
}

string _Geometry::Terms::Trapezoid(string text)
{
    string model = "llama3";
    string definition = "A quadrilateral with exactly one pair of parallel sides.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Trapezoid";
        }
    }

    return nullptr;
}

string _Geometry::Terms::TriangleInequalityTheorem(string text)
{
    string model = "llama3";
    string definition = "In any triangle, the sum of the lengths of two sides is greater than the length of the third side.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Triangle Inequality Theorem";
        }
    }

    return nullptr;
}

string _Geometry::Terms::TrichotomyProperty(string text)
{
    string model = "llama3";
    string definition = "A property of the real numbers that states: for every x and y, one and only one of the following conditions is true: x < y; x = y, x > y.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Trichotomy Property";
        }
    }

    return nullptr;
}

string _Geometry::Terms::TrigonometryOfTheRightTriangle(string text)
{
    string model = "llama3";
    string definition = "The trigonometric functions for acute angles are the ratios of the sides of the right triangle containing the angle. sinx = length of side opposite of x/length of hypotenouse, cosx = length of the side adjacent to x/length of hypotenouse, tanx = length of the side opposite x/length of side adjacent to x.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Trigonometry Of The Right Triangle";
        }
    }

    return nullptr;
}

string _Geometry::Terms::TruthValue(string text)
{
    string model = "llama3";
    string definition = "A value, (typically T or F), indicating whether a statement is true or false.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Truth Value";
        }
    }

    return nullptr;
}

string _Geometry::Terms::TwoColumnProof(string text)
{
    string model = "llama3";
    string definition = "The outline of a written proof in which the statements and their corresponding reasons are listed in two separate columns.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Two Column Proof";
        }
    }

    return nullptr;
}

string _Geometry::Terms::TwoDimensionalSpace(string text)
{
    string model = "llama3";
    string definition = "The set of all points in the plane. The position of each point can be represented by a unique ordered pair (x,y). Figures such as angles, pairs of parallel and intersecting lines, circles and polygons exist in two-dimensional space.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Two Dimensional Space";
        }
    }

    return nullptr;
}

string _Geometry::Terms::UndefinedTerms(string text)
{
    string model = "llama3";
    string definition = "The fundamental components of an axiomatic system whose understanding is agreed upon but not formally defined. In geometry undefined terms traditionally include point, line, and plane.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Undefined Terms";
        }
    }

    return nullptr;
}

string _Geometry::Terms::UnionOfSets(string text)
{
    string model = "llama3";
    string definition = "The union of two or more sets is the set of all elements contained in at least one of the sets.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Union Of Sets";
        }
    }

    return nullptr;
}

string _Geometry::Terms::ValidArgument(string text)
{
    string model = "llama3";
    string definition = "A logical argument supported by known facts or assumed axioms; an argument in which the premise leads to a conclusion.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Valid Argument";
        }
    }

    return nullptr;
}

string _Geometry::Terms::Vector(string text)
{
    string model = "llama3";
    string definition = "A quantity that has both magnitude and direction; represented geometrically by a directed line segment.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

string _Geometry::Terms::VertexOfAnAngle(string text)
{
    string model = "llama3";
    string definition = "The point of intersection of the two rays that form the sides of the angle.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Vertex Of An Angle";
        }
    }

    return nullptr;
}

string _Geometry::Terms::VertexOfAPolygon(string text)
{
    string model = "llama3";
    string definition = "A point where the edges of a polygon intersect.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Vertex Of A Polygon";
        }
    }

    return nullptr;
}

string _Geometry::Terms::VertexOfAConeOrPyramid(string text)
{
    string model = "llama3";
    string definition = "The fixed point, not in the plane of the base, to which all points on the perimeter of the base are connected.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Vertex Of A Cone Or Pyramid";
        }
    }

    return nullptr;
}

string _Geometry::Terms::VerticalAngles(string text)
{
    string model = "llama3";
    string definition = "The two nonadjacent angles formed when two lines intersect.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Vertical Angles";
        }
    }

    return nullptr;
}

string _Geometry::Terms::Volume(string text)
{
    string model = "llama3";
    string definition = "A measure of the number of cubic units needed to fill the space inside a solid figure.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

string _Geometry::Terms::XAxis(string text)
{
    string model = "llama3";
    string definition = "One of the two intersecting lines used to establish the coordinates of points in the Cartesian plane; in that plane, the line whose equation is y = 0; in space the axis perpendicular to the yz-plane.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "X Axis";
        }
    }

    return nullptr;
}

string _Geometry::Terms::XCoordinate(string text)
{
    string model = "llama3";
    string definition = "The first coordinate in any (x,y) ordered pair; the number represents how many units the point is located to the left or right of the y-axis; also called abscissa.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "X Coordinate";
        }
    }

    return nullptr;
}

string _Geometry::Terms::XIntercept(string text)
{
    string model = "llama3";
    string definition = "The point at which the graph of a relation intercepts the x-axis. The ordered pair for this point has a value of y = 0.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "X Intercept";
        }
    }

    return nullptr;
}

string _Geometry::Terms::YAxis(string text)
{
    string model = "llama3";
    string definition = "One of the two intersecting lines used to establish the coordinates of points in the Cartesian plane; in that plane, the line whose equation is x = 0; in space the axis perpendicular to the xz-plane.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Y Axis";
        }
    }

    return nullptr;
}

string _Geometry::Terms::YCoordinate(string text)
{
    string model = "llama3";
    string definition = "The second coordinate in any (x,y) ordered pair; the number represents how many units the point is located above or below of the x-axis; also called ordinate.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Y Coordinate";
        }
    }

    return nullptr;
}

string _Geometry::Terms::YIntercept(string text)
{
    string model = "llama3";
    string definition = "The point at which a graph of a relation intercepts the y-axis. The ordered pair for this point has a value of x = 0.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Y Intercept";
        }
    }

    return nullptr;
}

string _Geometry::Terms::ZAxis(string text)
{
    string model = "llama3";
    string definition = "A line perpendicular to the plane determined by the x-axis and y-axis at their point of intersection; this axis is used as a reference to determine the third component of the ordered triple (x, y, z).";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Z Axis";
        }
    }

    return nullptr;
}

string _Geometry::Terms::ZCoordinate(string text)
{
    string model = "llama3";
    string definition = "The third coordinate in any (x,y,z) ordered triple; the number represents how many units the point is located above or below of the xy-plane.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Z Coordinate";
        }
    }

    return nullptr;
}

string _Geometry::Terms::ZeroProductProperty(string text)
{
    string model = "llama3";
    string definition = "If a and b are real numbers, then ab = 0 if and only if a = 0 or b = 0, or a and b = 0.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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
