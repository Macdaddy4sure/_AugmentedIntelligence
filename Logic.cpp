/*
    Copyright(C) 2024 Tyler Crockett | Macdaddy4sure.com

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
#include "Logic.hpp"
#include "Large Language Models.hpp"
#include "Parsers.hpp"
#include "Utilities.hpp"

using namespace std;

string _Logic::Terms::Antecedent(string text)
{
    string model = "llama3";
    string definition = "The first part of a conditional statement, the if clause, which specifies a condition for the consequent.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Logic::Terms::AProposition(string text)
{
    string model = "llama3";
    string definition = "A type of standard-form categorical proposition, asserting that all members of the subject category are included in the predicate category; symbolized as All S are P.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "A Proposition";
        }
    }

    return nullptr;
}

string _Logic::Terms::Abduction(string text)
{
    string model = "llama3";
    string definition = "A form of reasoning characterized by drawing a conclusion based on the best available explanation for a set of premises. Often used in hypothesis formation.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Abduction";
        }
    }

    return nullptr;
}

string _Logic::Terms::AbelianLogic(string text)
{
    string model = "llama3";
    string definition = "A type of relevance logic that rejects contraction and accepts that ((A -> B) -> B) -> A.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Abelian Logic";
        }
    }

    return nullptr;
}

string _Logic::Terms::Absorption(string text)
{
    string model = "llama3";
    string definition = "A logical rule stating that if a proposition implies another, then adding any additional conjunction to the first proposition does not change the implication.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Logic::Terms::AbstractObject(string text)
{
    string model = "llama3";
    string definition = "An object that does not exist at any particular time or place but rather exists as a type of thing—i.e., an idea, or abstraction.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Abstract Object";
        }
    }

    return nullptr;
}

string _Logic::Terms::Abstraction(string text)
{
    string model = "llama3";
    string definition = "The process or result of generalization by reducing the information content of a concept or an observable phenomenon, typically to retain only information which is relevant for a particular purpose.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Logic::Terms::AbstractionOperator(string text)
{
    string model = "llama3";
    string definition = "The function implicitly defined by an abstraction principle.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Abstraction Operator";
        }
    }

    return nullptr;
}

string _Logic::Terms::AbstractionPrinciple(string text)
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
            return "Abstraction Principle";
        }
    }

    return nullptr;
}

string _Logic::Terms::AccessibilityRelation(string text)
{
    string model = "llama3";
    string definition = "In modal logic, a relation that describes which worlds are accessible from other worlds in the semantics of possible world models.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Accessibility Relation";
        }
    }

    return nullptr;
}

string _Logic::Terms::ActualWorld(string text)
{
    string model = "llama3";
    string definition = "In modal logic, the world that is considered to be the real world, as opposed to possible worlds which are considered in modal reasoning.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Actual World";
        }
    }

    return nullptr;
}

string _Logic::Terms::Addition(string text)
{
    string model = "llama3";
    string definition = "A rule of inference in formal logic where from any proposition, a disjunction can be formed by disjoining it with any other proposition.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Addition";
        }
    }

    return nullptr;
}

string _Logic::Terms::AdHominem(string text)
{
    string model = "llama3";
    string definition = "A fallacy in argumentation that targets the person making an argument rather than the argument itself.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Ad Hominem";
        }
    }

    return nullptr;
}

string _Logic::Terms::AdIgnorantium(string text)
{
    string model = "llama3";
    string definition = "A logical fallacy where a proposition is considered true because it has not been proven false or vice versa.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Ad Ignorantium";
        }
    }

    return nullptr;
}

string _Logic::Terms::AdInfinitum(string text)
{
    string model = "llama3";
    string definition = "An argument or process that is supposed to continue indefinitely, without ever reaching an end or conclusion.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Ad Infinitum";
        }
    }

    return nullptr;
}

string _Logic::Terms::Adjunction(string text)
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
            return "Ad junction";
        }
    }

    return nullptr;
}

string _Logic::Terms::AffineLogics(string text)
{
    string model = "llama3";
    string definition = "A subfield of linear logic focusing on the study of affine transformations and their implications in logical reasoning.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Affine Logics";
        }
    }

    return nullptr;
}

string _Logic::Terms::AffirmativePosition(string text)
{
    string model = "llama3";
    string definition = "A proposition that asserts the truth of a statement, as opposed to negating it.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Affirmative Position";
        }
    }

    return nullptr;
}

string _Logic::Terms::AffirmingTheConcequent(string text)
{
    string model = "llama3";
    string definition = "A logical fallacy in which a conditional statement is incorrectly used to infer its converse.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Affirming The Concequent";
        }
    }

    return nullptr;
}

string _Logic::Terms::AlethicModalLogic(string text)
{
    string model = "llama3";
    string definition = "A type of modal logic that deals with modalities of truth, such as necessity and possibility.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Alethic Modal Logic";
        }
    }

    return nullptr;
}

string _Logic::Terms::Ambiguity(string text)
{
    string model = "llama3";
    string definition = "The property of a statement or phrase having more than one meaning or interpretation.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Ambiguity";
        }
    }

    return nullptr;
}

string _Logic::Terms::Amphiboly(string text)
{
    string model = "llama3";
    string definition = "A type of ambiguity resulting from ambiguous grammatical structure, rather than the ambiguity of individual words.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Amphiboly";
        }
    }

    return nullptr;
}

string _Logic::Terms::AnalethicLogic(string text)
{
    string model = "llama3";
    string definition = "A three-valued logic where the third truth value is the truth-value gap neither true nor false (N), and the designated values are true and neither true nor false.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "AnalethicLogic";
        }
    }

    return nullptr;
}

string _Logic::Terms::Analysis(string text)
{
    string model = "llama3";
    string definition = "Analysis, the process of breaking a concept down into more simple parts, so that its logical structure is displayed.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Analysis";
        }
    }

    return nullptr;
}

string _Logic::Terms::Analytic(string text)
{
    string model = "llama3";
    string definition = "A statement that is true by virtue of its meaning, such as definitions or statements grounded in logical laws.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Analytic";
        }
    }

    return nullptr;
}

string _Logic::Terms::Anaphora(string text)
{
    string model = "llama3";
    string definition = "A rhetorical device that consists of repeating a sequence of words at the beginnings of neighboring clauses, thereby lending them emphasis.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Anaphora";
        }
    }

    return nullptr;
}

string _Logic::Terms::Ancestral(string text)
{
    string model = "llama3";
    string definition = "In logic and mathematics, the transitive closure of a relation, capturing the idea of indirect relationships across generations or iterations.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Ancestral";
        }
    }

    return nullptr;
}

string _Logic::Terms::AntiExtension(string text)
{
    string model = "llama3";
    string definition = "In set theory and logic, the complement of the extension of a concept or predicate, consisting of all objects that do not fall under the concept.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Anti Extension";
        }
    }

    return nullptr;
}

string _Logic::Terms::Antilogism(string text)
{
    string model = "llama3";
    string definition = "A syllogism with three premises leading to a contradiction, showing the inconsistency of the premises.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Antilogism";
        }
    }

    return nullptr;
}

string _Logic::Terms::Antinomy(string text)
{
    string model = "llama3";
    string definition = "A contradiction between two beliefs or conclusions that are in themselves reasonable; a paradox.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Antinomy";
        }
    }

    return nullptr;
}

string _Logic::Terms::Antisymmetry(string text)
{
    string model = "llama3";
    string definition = "A property of a relation R, where for any two elements a and b, if aRb and bRa, then a = b.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Anti Symmetry";
        }
    }

    return nullptr;
}

string _Logic::Terms::APosteriori(string text)
{
    string model = "llama3";
    string definition = "Knowledge or justification is said to be a posteriori if it depends on empirical evidence or experience.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "A Posteriori";
        }
    }

    return nullptr;
}

string _Logic::Terms::APriori(string text)
{
    string model = "llama3";
    string definition = "Knowledge or justification is said to be a priori if it is independent of empirical evidence or experience, such as logic or mathematics.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "A Priori";
        }
    }

    return nullptr;
}

string _Logic::Terms::Argument(string text)
{
    string model = "llama3";
    string definition = "A series of statements typically used to persuade someone of something or to present reasons for accepting a conclusion.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Logic::Terms::AristotlelianLogic(string text)
{
    string model = "llama3";
    string definition = "The traditional logic developed by Aristotle, based on the study of syllogism and the principle of non-contradiction.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Aristotlelian Logic";
        }
    }

    return nullptr;
}

string _Logic::Terms::AristotlesSeaBattle(string text)
{
    string model = "llama3";
    string definition = "A thought experiment by Aristotle to explore the concept of future contingents and the problem of determinism and free will.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Aristotles Sea Battle";
        }
    }

    return nullptr;
}

string _Logic::Terms::AristotlesTheses(string text)
{
    string model = "llama3";
    string definition = "The formulas in propositional logic; they are theorems in connexive logic but not in classical logic.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Aristotle's Theses";
        }
    }

    return nullptr;
}

string _Logic::Terms::Arity(string text)
{
    string model = "llama3";
    string definition = "The number of arguments or operands that a function, operation, or relation takes. In logic, it refers to the number of terms that a predicate has.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Arity";
        }
    }

    return nullptr;
}

string _Logic::Terms::Assertion(string text)
{
    string model = "llama3";
    string definition = "The principle, or axiom, that (A ^ (A -> B)) -> B.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Logic::Terms::Associativity(string text)
{
    string model = "llama3";
    string definition = "A property of some binary operations in which the grouping of operations does not affect the result. For example, in arithmetic, addition and multiplication are associative.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Associativity";
        }
    }

    return nullptr;
}

string _Logic::Terms::Asymmetry(string text)
{
    string model = "llama3";
    string definition = "A relation between two entities where if the first is related to the second, the second is not related to the first.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Asymmetry";
        }
    }

    return nullptr;
}

string _Logic::Terms::AtomicFormula(string text)
{
    string model = "llama3";
    string definition = "The simplest type of formula in logic, consisting of a single predicate applied to a sequence of terms without any logical connectives.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Atomic Formula";
        }
    }

    return nullptr;
}

string _Logic::Terms::AtomicSentence(string text)
{
    string model = "llama3";
    string definition = "A sentence that contains no logical connectives or quantifiers, expressing a basic statement about objects.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Atomic Sentence";
        }
    }

    return nullptr;
}

string _Logic::Terms::Autological(string text)
{
    string model = "llama3";
    string definition = "A term that describes itself.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Autological";
        }
    }

    return nullptr;
}

string _Logic::Terms::Automoaton(string text)
{
    string model = "llama3";
    string definition = "A self-operating machine or, in computer science, a theoretical model of computation that performs tasks according to a set of rules or a program.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Automoaton";
        }
    }

    return nullptr;
}

string _Logic::Terms::Automorphism(string text)
{
    string model = "llama3";
    string definition = "An isomorphism from a mathematical object to itself, preserving all the structure of the object. In logic, it often refers to symmetries within logical structures.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Automorphism";
        }
    }

    return nullptr;
}

string _Logic::Terms::AxiologicalLogic(string text)
{
    string model = "llama3";
    string definition = "A branch of logic that deals with the study of value, including ethical and aesthetic values, often in the context of modal logic.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "AxiologicalLogic";
        }
    }

    return nullptr;
}

string _Logic::Terms::Axiom(string text)
{
    string model = "llama3";
    string definition = "A statement or proposition that is accepted as true without proof, serving as a starting point for further reasoning and arguments.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Logic::Terms::BadCompanyObjection(string text)
{
    string model = "llama3";
    string definition = "An objection to mathematical abstractionism that points out the difficulty in distinguishing between legitimate and illegitimate forms of abstraction, particularly in the context of Frege's Basic Law V and the paradoxes it generates.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Bad Company Objection";
        }
    }

    return nullptr;
}

string _Logic::Terms::Barbara(string text)
{
    string model = "llama3";
    string definition = "A standard form of categorical syllogism in Aristotelian logic, where all three propositions (major premise, minor premise, and conclusion) are universal affirmatives, symbolized as AAA. The form is: All M are P, All S are M, therefore All S are P.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Barbara";
        }
    }

    return nullptr;
}

string _Logic::Terms::BarcanFormula(string text)
{
    string model = "llama3";
    string definition = "A principle in modal logic that asserts the interchangeability of quantification and possibility: necessarily, if there exists something, then there necessarily exists something.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Barcan Formula";
        }
    }

    return nullptr;
}

string _Logic::Terms::BasicLawV(string text)
{
    string model = "llama3";
    string definition = "A principle proposed by Gottlob Frege in his attempt to reduce arithmetic to logic, stating that the extension of a concept is determined by the objects falling under the concept. It leads to Russell's paradox.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Basic Law V";
        }
    }

    return nullptr;
}

string _Logic::Terms::Basis(string text)
{
    string model = "llama3";
    string definition = "The initial case in a proof by mathematical induction.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Basis";
        }
    }

    return nullptr;
}

string _Logic::Terms::BayesTheorem(string text)
{
    string model = "llama3";
    string definition = "A theorem in probability theory used to update the probability for a hypothesis as more evidence or information becomes available.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Bayes Theorem";
        }
    }

    return nullptr;
}

string _Logic::Terms::BeggingTheQuestion(string text)
{
    string model = "llama3";
    string definition = "A logical fallacy where the conclusion of an argument is assumed in the premise, making the argument circular.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Begging The Question";
        }
    }

    return nullptr;
}

string _Logic::Terms::Bew(string text)
{
    string model = "llama3";
    string definition = "See provability predicate.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Bew";
        }
    }

    return nullptr;
}

string _Logic::Terms::BHKInterpretation(string text)
{
    string model = "llama3";
    string definition = "The Brouwer-Heyting-Kolmogorov interpretation, a constructivist interpretation of intuitionistic logic, where the truth of a statement is equated with the existence of a proof for it.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "BHK Interpretation";
        }
    }

    return nullptr;
}

string _Logic::Terms::Bias(string text)
{
    string model = "llama3";
    string definition = "A systematic deviation from neutrality, objectivity, or fairness, often resulting from a particular tendency or inclination, especially in statistical or cognitive contexts.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Bias";
        }
    }

    return nullptr;
}

string _Logic::Terms::Biconditional(string text)
{
    string model = "llama3";
    string definition = "A logical connective between statements, where both statements imply each other";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Logic::Terms::Bijective(string text)
{
    string model = "llama3";
    string definition = "A function that is both injective (no two elements of the domain map to the same element of the codomain) and surjective (every element of the codomain is mapped to by some element of the domain), establishing a one-to-one correspondence between the domain and codomain.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Bijective";
        }
    }

    return nullptr;
}

string _Logic::Terms::BinaryFunction(string text)
{
    string model = "llama3";
    string definition = "A function that takes two arguments. In logic and mathematics, this is often a function that combines two values to produce a third value, such as addition or multiplication in arithmetic.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Binary Function";
        }
    }

    return nullptr;
}

string _Logic::Terms::BinaryRelation(string text)
{
    string model = "llama3";
    string definition = "A relation involving two terms or elements, defining a particular relationship between pairs of objects from two sets (or from one set to itself).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Binary Relation";
        }
    }

    return nullptr;
}

string _Logic::Terms::Bivalence(string text)
{
    string model = "llama3";
    string definition = "The principle that any proposition is either true or false, with no middle ground; foundational to classical logic.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Bivalence";
        }
    }

    return nullptr;
}

string _Logic::Terms::BooleanAlgebra(string text)
{
    string model = "llama3";
    string definition = "An area of algebra in which the values of the variables are the truth values true and false, typically used in computer science, logic, and mathematical logic.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Boolean Algebra";
        }
    }

    return nullptr;
}

string _Logic::Terms::BooleanNegation(string text)
{
    string model = "llama3";
    string definition = "A form of negation where the negation of a non-true proposition is true, and the negation of a non-false proposition is false.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Boolean Negation";
        }
    }

    return nullptr;
}

string _Logic::Terms::BooleanOperator(string text)
{
    string model = "llama3";
    string definition = "An operator used in logic and computer science that performs logical operations on its operands, such as AND, OR, and NOT.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Boolean Operator";
        }
    }

    return nullptr;
}

string _Logic::Terms::BorderlineCase(string text)
{
    string model = "llama3";
    string definition = "A situation or instance that falls at the boundary between categories or classifications, often challenging strict definitions or distinctions.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Borderline Case";
        }
    }

    return nullptr;
}

string _Logic::Terms::Bottom(string text)
{
    string model = "llama3";
    string definition = "In logic, the symbol used to represent a contradiction or an absurdity";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Bottom";
        }
    }

    return nullptr;
}

string _Logic::Terms::BoundVariable(string text)
{
    string model = "llama3";
    string definition = "A variable that is quantified over in a logical expression, as opposed to a free variable, which is not bound by a quantifier.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Bound Variable";
        }
    }

    return nullptr;
}

string _Logic::Terms::BoundedQuantifier(string text)
{
    string model = "llama3";
    string definition = "A quantifier that operates within a specific domain or set, as opposed to an unbounded or universal quantifier that applies to all elements of a particular type.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Bounded Quantifier";
        }
    }

    return nullptr;
}

string _Logic::Terms::BranchingQuantifier(string text)
{
    string model = "llama3";
    string definition = "A type of quantifier in formal logic that allows for the expression of dependencies between different quantified variables, representing more complex relationships than can be expressed with standard linear quantification.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Branching Quantifier";
        }
    }

    return nullptr;
}

string _Logic::Terms::BrouwerianModelLogic(string text)
{
    string model = "llama3";
    string definition = "A form of modal logic that incorporates principles of intuitionism, as developed by L.E.J. Brouwer, focusing on the notion of possibility grounded in constructivist or intuitionist mathematics.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Brouwerian Model Logic";
        }
    }

    return nullptr;
}

string _Logic::Terms::BuridansSophismata(string text)
{
    string model = "llama3";
    string definition = "A collection of paradoxes and logical exercises attributed to the medieval philosopher Jean Buridan, designed to challenge logical and linguistic intuitions.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Buridans Sophismata";
        }
    }

    return nullptr;
}

string _Logic::Terms::BusyBeaverProblem(string text)
{
    string model = "llama3";
    string definition = "A problem in computability theory that seeks the Turing machine with the largest possible behavior (e.g., producing the most output, running the longest) among all Turing machines of a certain size, illustrating limits of computability.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Busy Beaver Problem";
        }
    }

    return nullptr;
}

string _Logic::Terms::CaesarProblem(string text)
{
    string model = "llama3";
    string definition = "A problem in the philosophy of language and logic regarding the applicability of mathematical concepts to non-mathematical objects, famously illustrated by Gottlob Frege's question of whether the concept of being a successor in number applies to Julius Caesar.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Caesar Problem";
        }
    }

    return nullptr;
}

string _Logic::Terms::CarnapRamseySentence(string text)
{
    string model = "llama3";
    string definition = "A sentence formulated to express the empirical content of a theory in logical positivism, named after Rudolf Carnap and Frank P. Ramsey, aimed at separating theoretical terms from observational terms.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Carnap Ramsey Sentence";
        }
    }

    return nullptr;
}

string _Logic::Terms::Categorical(string text)
{
    string model = "llama3";
    string definition = "A theory is categorical if all its models are isomorphic, meaning they describe the same mathematical structures in different ways.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Categorical";
        }
    }

    return nullptr;
}

string _Logic::Terms::CategoricalLogic(string text)
{
    string model = "llama3";
    string definition = "A branch of logic that studies the categorization of objects and the logical foundations of categories, often using the framework of category theory.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Categorical Logic";
        }
    }

    return nullptr;
}

string _Logic::Terms::CategoricalProposition(string text)
{
    string model = "llama3";
    string definition = "A proposition that asserts or denies that all or some of the members of one category are included in another category, fundamental in syllogistic reasoning.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Categorical Proposition";
        }
    }

    return nullptr;
}

string _Logic::Terms::CategoricalSyllogism(string text)
{
    string model = "llama3";
    string definition = "A form of deductive reasoning in Aristotelian logic consisting of three categorical propositions that involve three terms and deduce a conclusion from two premises.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Categorical Syllogism";
        }
    }

    return nullptr;
}

string _Logic::Terms::Category(string text)
{
    string model = "llama3";
    string definition = "In mathematics and logic, a collection of objects and morphisms between them that satisfies certain axioms, fundamental to category theory.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Category";
        }
    }

    return nullptr;
}

string _Logic::Terms::CategoryTheory(string text)
{
    string model = "llama3";
    string definition = "A branch of mathematics that deals with abstract algebraic structures and relationships between them, providing a unifying framework for various areas of mathematics.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Category Theory";
        }
    }

    return nullptr;
}

string _Logic::Terms::CausalLogic(string text)
{
    string model = "llama3";
    string definition = "A branch of logic concerned with the study of causal relationships, including the representation and reasoning about causes and effects.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Causal Logic";
        }
    }

    return nullptr;
}

string _Logic::Terms::CausalModalLogic(string text)
{
    string model = "llama3";
    string definition = "An extension of modal logic that includes modalities for necessity and possibility along with causal relations, allowing for the formal analysis of causal statements.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Causal Modal Logic";
        }
    }

    return nullptr;
}

string _Logic::Terms::ChronologicalLogic(string text)
{
    string model = "llama3";
    string definition = "See temporal modal logic.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Chronological Logic";
        }
    }

    return nullptr;
}

string _Logic::Terms::ChurchsTheorem(string text)
{
    string model = "llama3";
    string definition = "A theorem establishing the undecidability of certain decision problems in logic, such as the Entscheidungsproblem, proving that there is no consistent, complete, and effectively calculable logic.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Churchs Theorem";
        }
    }

    return nullptr;
}

string _Logic::Terms::ChurchTuringThesis(string text)
{
    string model = "llama3";
    string definition = "A hypothesis proposing that any function that can be naturally regarded as computable by a human being can be computed by a Turing machine, thereby defining the limits of what can be computed.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Church Turing Thesis";
        }
    }

    return nullptr;
}

string _Logic::Terms::ClassicalDilemma(string text)
{
    string model = "llama3";
    string definition = "A form of argument presenting two alternatives, both leading to the same conclusion, often used in classical rhetoric and logic to demonstrate inevitability.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Classical Dilemma";
        }
    }

    return nullptr;
}

string _Logic::Terms::ClassicalLogic(string text)
{
    string model = "llama3";
    string definition = "The traditional framework of logic based on principles of bivalence, non-contradiction, and excluded middle, primarily focusing on propositional and predicate logic.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Classical Logic";
        }
    }

    return nullptr;
}

string _Logic::Terms::ClassicalReductioAdAbsurdum(string text)
{
    string model = "llama3";
    string definition = "A stronger form of reductio ad absurdum";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Classical Reductio Ad Absurdum";
        }
    }

    return nullptr;
}

string _Logic::Terms::Coextensive(string text)
{
    string model = "llama3";
    string definition = "Having the same scope or range, especially referring to two terms or concepts that apply to the same set of objects.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Coextensive";
        }
    }

    return nullptr;
}

string _Logic::Terms::CogentInductiveArgument(string text)
{
    string model = "llama3";
    string definition = "A strong inductive argument where all the premises are true.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Cogent Inductive Argument";
        }
    }

    return nullptr;
}

string _Logic::Terms::CoherenceTheoryOfTruth(string text)
{
    string model = "llama3";
    string definition = "A theory that holds truth as coherence among a set of beliefs or statements, rather than correspondence with reality or facts.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Coherence Theory of Truth";
        }
    }

    return nullptr;
}

string _Logic::Terms::Combinator(string text)
{
    string model = "llama3";
    string definition = "A function or expression in combinatory logic that acts on arguments to produce results without the need for variable bindings.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Combinator";
        }
    }

    return nullptr;
}

string _Logic::Terms::Combinatorialism(string text)
{
    string model = "llama3";
    string definition = "Combinatorialism is the view that any arbitrary combination of elements constitutes a legitimate mathematical structure, whether that structure is definable or not.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Combinatorialism";
        }
    }

    return nullptr;
}

string _Logic::Terms::CombinatoryLogic(string text)
{
    string model = "llama3";
    string definition = "A branch of mathematical logic that seeks to eliminate the need for variables in mathematical expressions by using combinators.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Combinatory Logic";
        }
    }

    return nullptr;
}

string _Logic::Terms::Commutativity(string text)
{
    string model = "llama3";
    string definition = "A property of binary operations where the order of the operands does not change the result, as in addition and multiplication in arithmetic.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Commutativity";
        }
    }

    return nullptr;
}

string _Logic::Terms::CompactnessTheorem(string text)
{
    string model = "llama3";
    string definition = "A theorem in logic stating that if every finite subset of a set of sentences has a model, then the entire set has a model.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Compactness Theorem";
        }
    }

    return nullptr;
}

string _Logic::Terms::CompleteInfinity(string text)
{
    string model = "llama3";
    string definition = "A concept in philosophy and mathematics referring to an actual infinity that is considered as a completed whole, contrasting with potential infinities that are indefinitely extendable.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Complete Infinity";
        }
    }

    return nullptr;
}

string _Logic::Terms::Completeness(string text)
{
    string model = "llama3";
    string definition = "In logic, the property of a logical system whereby every logically valid formula can be derived using the system's axioms and inference rules.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Completeness";
        }
    }

    return nullptr;
}

string _Logic::Terms::ComplexityClass(string text)
{
    string model = "llama3";
    string definition = "A classification of decision problems based on their inherent computational complexity, grouping problems that can be solved within similar resource constraints.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "ComplexityClass";
        }
    }

    return nullptr;
}

string _Logic::Terms::ComplexityTheory(string text)
{
    string model = "llama3";
    string definition = "The study of the inherent difficulty of computational problems, focusing on the resources needed to solve them, such as time and memory.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Complexity Theory";
        }
    }

    return nullptr;
}

string _Logic::Terms::Composition(string text)
{
    string model = "llama3";
    string definition = "The act of combining simple objects or ideas into a complex whole, or the resulting combination itself.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Composition";
        }
    }

    return nullptr;
}

string _Logic::Terms::Compositionality(string text)
{
    string model = "llama3";
    string definition = "The principle in semantics that the meaning of a complex expression is determined by the meanings of its constituent expressions and the rules used to combine them.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Compositionality";
        }
    }

    return nullptr;
}

string _Logic::Terms::CompoundFormula(string text)
{
    string model = "llama3";
    string definition = "A formula representing a compound statement.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Compound Formula";
        }
    }

    return nullptr;
}

string _Logic::Terms::CompoundStatement(string text)
{
    string model = "llama3";
    string definition = "A statement in logic that is formed by combining two or more statements with logical connectives, allowing for the construction of more complex statements from simpler ones.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Logic::Terms::ComprehensionSchema(string text)
{
    string model = "llama3";
    string definition = "A principle in set theory and logic allowing for the formation of sets based on a defining property or condition.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Comprehension Schema";
        }
    }

    return nullptr;
}

string _Logic::Terms::ComputableFunction(string text)
{
    string model = "llama3";
    string definition = "A function for which there exists an algorithm that can compute the function's value for any valid input within a finite amount of time.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Computable Function";
        }
    }

    return nullptr;
}

string _Logic::Terms::Computation(string text)
{
    string model = "llama3";
    string definition = "The process of performing a sequence of calculations or logical operations systematically to obtain a result.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Logic::Terms::Concept(string text)
{
    string model = "llama3";
    string definition = "An abstract idea representing the fundamental characteristics of what it describes.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Concept";
        }
    }

    return nullptr;
}

string _Logic::Terms::Conclusion(string text)
{
    string model = "llama3";
    string definition = "The statement that logically follows from the premises of an argument, serving as the arguments final claim.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Logic::Terms::ConcreteObject(string text)
{
    string model = "llama3";
    string definition = "An object that exists in physical reality, as opposed to abstract objects which do not have a physical existence.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Concrete Object";
        }
    }

    return nullptr;
}

string _Logic::Terms::Conditional(string text)
{
    string model = "llama3";
    string definition = "A logical connective that represents a if... then... relationship between two statements.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Logic::Terms::ConditionalLogic(string text)
{
    string model = "llama3";
    string definition = "A branch of logic that studies the properties of the conditional connective and related logical concepts.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Conditional Logic";
        }
    }

    return nullptr;
}

string _Logic::Terms::ConditionalProbability(string text)
{
    string model = "llama3";
    string definition = "The probability of an event occurring given that another event has already occurred.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Conditional Probability";
        }
    }

    return nullptr;
}

string _Logic::Terms::ConditionalProof(string text)
{
    string model = "llama3";
    string definition = "A method in logic for proving a conditional statement by assuming the antecedent and showing that the consequent follows.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Conditional Proof";
        }
    }

    return nullptr;
}

string _Logic::Terms::Conditionalzation(string text)
{
    string model = "llama3";
    string definition = "The conditional obtained by taking the conjunction of the premises of the argument as antecedent and the conclusion of the argument as consequent.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Conditionalzation";
        }
    }

    return nullptr;
}

string _Logic::Terms::CongruenceRelation(string text)
{
    string model = "llama3";
    string definition = "An equivalence relation that respects the operations of the algebraic structure it is defined on, such as addition or multiplication in a group.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Congruence Relation";
        }
    }

    return nullptr;
}

string _Logic::Terms::Conjunct(string text)
{
    string model = "llama3";
    string definition = "A component statement within a conjunction, each of which must be true for the entire conjunction to be true.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Conjunct";
        }
    }

    return nullptr;
}

string _Logic::Terms::Conjunction(string text)
{
    string model = "llama3";
    string definition = "A logical connective that represents the and relationship between two statements, requiring both to be true.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Conjunction";
        }
    }

    return nullptr;
}

string _Logic::Terms::ConjunctionElimination(string text)
{
    string model = "llama3";
    string definition = "A rule of inference in propositional logic that allows one to infer a conjunct from a conjunction.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Conjunction Elimination";
        }
    }

    return nullptr;
}

string _Logic::Terms::ConjunctionIntroduction(string text)
{
    string model = "llama3";
    string definition = "A rule of inference that allows the formation of a conjunction from two individual statements.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Conjunction Introduction";
        }
    }

    return nullptr;
}

string _Logic::Terms::ConjunctiveNormalForm(string text)
{
    string model = "llama3";
    string definition = "A way of expressing a logical formula as a conjunction of clauses, where each clause is a disjunction of literals.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Conjunctive Normal Form";
        }
    }

    return nullptr;
}

string _Logic::Terms::Connected(string text)
{
    string model = "llama3";
    string definition = "A property of a graph in which there is a path between any two vertices, or a property of a topological space in which it cannot be divided into two disjoint nonempty open sets.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Connected";
        }
    }

    return nullptr;
}

string _Logic::Terms::ConnexiveLogic(string text)
{
    string model = "llama3";
    string definition = "A branch of logic that studies principles of connection between propositions, such as the relation between a statement and its contrapositive.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Connexive Logic";
        }
    }

    return nullptr;
}

string _Logic::Terms::ConsequenceRelation(string text)
{
    string model = "llama3";
    string definition = "A relation between sets of sentences or propositions, where the truth of the first set (the premises) necessitates the truth of the second set (the consequences).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Consequence Relation";
        }
    }

    return nullptr;
}

string _Logic::Terms::Consequent(string text)
{
    string model = "llama3";
    string definition = "The second part of a conditional statement, indicating the result or outcome if the antecedent condition is met.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Consequent";
        }
    }

    return nullptr;
}

string _Logic::Terms::ConsequentiaMirabilis(string text)
{
    string model = "llama3";
    string definition = "A principle in classical logic stating that if the negation of a proposition leads to a contradiction, then the proposition itself must be true.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Consequentia Mirabilis";
        }
    }

    return nullptr;
}

string _Logic::Terms::ConservativeExtension(string text)
{
    string model = "llama3";
    string definition = "A property of a theory that is expanded by new axioms or rules without changing the truth values of statements in the original theory.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Conservative Extension";
        }
    }

    return nullptr;
}

string _Logic::Terms::Constant(string text)
{
    string model = "llama3";
    string definition = "A symbol in logic and mathematics that represents a fixed and unchanging value.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Constant";
        }
    }

    return nullptr;
}

string _Logic::Terms::ConstantFunction(string text)
{
    string model = "llama3";
    string definition = "A function that always returns the same value, regardless of the input.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Logic::Terms::ConstructiveDilemma(string text)
{
    string model = "llama3";
    string definition = "A form of argument where, given two conditional statements and evidence that at least one of their antecedents is true, one can conclude that at least one of the consequents is true.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Constructive Dilemma";
        }
    }

    return nullptr;

}

string _Logic::Terms::ConstructiveLogic(string text)
{
    string model = "llama3";
    string definition = "A branch of logic that emphasizes the constructive proof of existence, requiring an explicit construction of an object to assert its existence rather than relying on indirect arguments.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Constructive Logic";
        }
    }

    return nullptr;
}

string _Logic::Terms::ConstructiveMathematics(string text)
{
    string model = "llama3";
    string definition = "A philosophy of mathematics that requires mathematical objects to be constructible and computable, rejecting non-constructive proofs such as those involving the law of excluded middle in its full generality.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Constructive Mathematics";
        }
    }

    return nullptr;
}

string _Logic::Terms::ConstructiveProof(string text)
{
    string model = "llama3";
    string definition = "A proof that demonstrates the existence of a mathematical object by providing a method to construct it explicitly, as opposed to proving indirectly by contradiction.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Constructive Proof";
        }
    }

    return nullptr;
}

string _Logic::Terms::Contextualism(string text)
{
    string model = "llama3";
    string definition = "The theory that the context in which an assertion is made is essential for understanding its truth conditions and meaning.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Contextualism";
        }
    }

    return nullptr;
}

string _Logic::Terms::Contingency(string text)
{
    string model = "llama3";
    string definition = "The property of being neither necessarily true nor necessarily false, depending on some conditions or on the state of the world.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Contingency";
        }
    }

    return nullptr;
}

string _Logic::Terms::Contraction(string text)
{
    string model = "llama3";
    string definition = "In logic and mathematics, the process of eliminating duplicates in expressions or equations to simplify them.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Contraction";
        }
    }

    return nullptr;
}

string _Logic::Terms::Contradiction(string text)
{
    string model = "llama3";
    string definition = "A statement or proposition that asserts both a statement and its negation, considered universally false in classical logic.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Logic::Terms::Contradictory(string text)
{
    string model = "llama3";
    string definition = "Referring to a pair of statements or propositions where one is the negation of the other, such that they cannot both be true or both be false.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Contradictory";
        }
    }

    return nullptr;
}

string _Logic::Terms::Contraposition(string text)
{
    string model = "llama3";
    string definition = "A logical principle that states that a conditional statement is logically equivalent to its contrapositive";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Contraposition";
        }
    }

    return nullptr;
}

string _Logic::Terms::Contrapositive(string text)
{
    string model = "llama3";
    string definition = "The statement resulting from swapping the antecedent and consequent of a conditional statement and negating both, maintaining logical equivalence.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Contrapositive";
        }
    }

    return nullptr;
}

string _Logic::Terms::Contrary(string text)
{
    string model = "llama3";
    string definition = "Referring to a pair of statements or propositions that cannot both be true, but can both be false.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Contrary";
        }
    }

    return nullptr;
}

string _Logic::Terms::ConventionT(string text)
{
    string model = "llama3";
    string definition = "A criterion of truth proposed by Alfred Tarski, stating that a sentence is true if and only if it corresponds to the facts or reality it describes.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Convention T";
        }
    }

    return nullptr;
}

string _Logic::Terms::Converse(string text)
{
    string model = "llama3";
    string definition = "The statement formed by reversing the antecedent and consequent of a conditional statement, not necessarily maintaining logical equivalence.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Converse";
        }
    }

    return nullptr;
}

string _Logic::Terms::ConverseDomain(string text)
{
    string model = "llama3";
    string definition = "In set theory and logic, the set of all elements that are related to any element of a given set under a specific relation.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Converse Domain";
        }
    }

    return nullptr;
}

string _Logic::Terms::ConverseBarcanFormula(string text)
{
    string model = "llama3";
    string definition = "A principle in modal logic suggesting that possibility precedes existence, the converse of the Barcan formula.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Converse Barcan Formula";
        }
    }

    return nullptr;
}

string _Logic::Terms::Conversion(string text)
{
    string model = "llama3";
    string definition = "The logical operation of swapping the subject and predicate of a categorical proposition, sometimes affecting its truth.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Conversion";
        }
    }

    return nullptr;
}

string _Logic::Terms::Copula(string text)
{
    string model = "llama3";
    string definition = "The part of a proposition that links the subject to the predicate";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Copula";
        }
    }

    return nullptr;
}

string _Logic::Terms::CoReferential(string text)
{
    string model = "llama3";
    string definition = "Referring to different expressions that denote the same object or entity in the world.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Co-Referential";
        }
    }

    return nullptr;
}

string _Logic::Terms::Coreflexivity(string text)
{
    string model = "llama3";
    string definition = "A property of a binary relation where every element is related to itself, implying reflexivity.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Coreflexivity";
        }
    }

    return nullptr;
}

string _Logic::Terms::Corollary(string text)
{
    string model = "llama3";
    string definition = "A proposition that follows directly from another proposition or theorem with little or no additional proof.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Corollary";
        }
    }

    return nullptr;
}

string _Logic::Terms::CorrespondenceTheoryOfTruth(string text)
{
    string model = "llama3";
    string definition = "The philosophical doctrine that the truth or falsity of a statement is determined by how it relates to the world and whether it accurately describes (corresponds with) that world.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Correspondence Theory of Truth";
        }
    }

    return nullptr;
}

string _Logic::Terms::CounterExample(string text)
{
    string model = "llama3";
    string definition = "A counterexample to an argument form, or sequent, is an argument in the same logical form where the premises are clearly true but the conclusion is clearly false, showing that the form is invalid, since it lacks semantic validity.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "CounterExample";
        }
    }

    return nullptr;
}

string _Logic::Terms::CounterFactualConditional(string text)
{
    string model = "llama3";
    string definition = "A conditional statement (if...then...) concerning an event that did not actually happen but is considered for the sake of argument.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Counter Factual Conditional";
        }
    }

    return nullptr;
}

string _Logic::Terms::CounterfactualLogic(string text)
{
    string model = "llama3";
    string definition = "A branch of logic that studies counterfactual conditionals and their implications, often used in philosophical discussions about causality and decision theory.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Counterfactual Logic";
        }
    }

    return nullptr;
}

string _Logic::Terms::Countermodel(string text)
{
    string model = "llama3";
    string definition = "A countermodel of an argument is a model in which the premises are true and the conclusion false, showing that the argument is not valid.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Countermodel";
        }
    }

    return nullptr;
}

string _Logic::Terms::CounternecessaryConditional(string text)
{
    string model = "llama3";
    string definition = "A conditional statement that considers a situation against a necessarily true backdrop, exploring implications in hypothetical scenarios that contradict necessary truths; also known as counterpossible.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Counternecessary Conditional";
        }
    }

    return nullptr;
}

string _Logic::Terms::CounterpartTheory(string text)
{
    string model = "llama3";
    string definition = "A philosophical theory proposed by Lewis that addresses the semantics of modal logic, suggesting that objects in possible worlds have counterparts in other possible worlds.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Counterpart Theory";
        }
    }

    return nullptr;
}

string _Logic::Terms::CoruseOfValuesRecursion(string text)
{
    string model = "llama3";
    string definition = "A principle in mathematics and logic that defines a function based on the values it takes on smaller arguments, essential for defining functions like factorials and other recursive functions.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Coruse of Values Recursion";
        }
    }

    return nullptr;
}

string _Logic::Terms::CurryParadox(string text)
{
    string model = "llama3";
    string definition = "A paradox in logic that arises when considering a statement that asserts its own unprovability, leading to contradictions in certain systems of formal logic.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Curry Paradox";
        }
    }

    return nullptr;
}

string _Logic::Terms::Cut(string text)
{
    string model = "llama3";
    string definition = "In proof theory, a rule or step in a deductive proof that introduces an intermediate conclusion, which is later used to derive further conclusions.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Cut";
        }
    }

    return nullptr;
}

string _Logic::Terms::CutElimination(string text)
{
    string model = "llama3";
    string definition = "A procedure in proof theory that systematically removes cuts from a proof, simplifying it and showing that any result that can be proved with cuts can also be proved without them.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Cut Elimination";
        }
    }

    return nullptr;
}

string _Logic::Terms::Dagger(string text)
{
    string model = "llama3";
    string definition = "A name for the joint denial, or logical NOR.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Dagger";
        }
    }

    return nullptr;
}

string _Logic::Terms::DecidableTheory(string text)
{
    string model = "llama3";
    string definition = "A theory for which there exists a decision procedure, meaning that for any statement within the theory, it is possible to algorithmically determine whether the statement is true or false within the theory.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Decidable Theory";
        }
    }

    return nullptr;
}

string _Logic::Terms::DecitionProcedure(string text)
{
    string model = "llama3";
    string definition = "An algorithm or systematic method that can decide whether given statements are theorems (true) or non-theorems (false) in a logical system or mathematical theory.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Decition Procedure";
        }
    }

    return nullptr;
}

string _Logic::Terms::DeDicto(string text)
{
    string model = "llama3";
    string definition = "Referring to the way a statement attributes a property to a noun phrase as a whole, often contrasted with de re, which attributes a property to the thing itself.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "De-Dicto";
        }
    }

    return nullptr;
}

string _Logic::Terms::Deduction(string text)
{
    string model = "llama3";
    string definition = "The process of reasoning from one or more statements (premises) to reach a logically certain conclusion.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Deduction";
        }
    }

    return nullptr;
}

string _Logic::Terms::DeductionTheorem(string text)
{
    string model = "llama3";
    string definition = "A theorem stating that if a statement can be derived from a set of premises together with another statement, then the conclusion can be derived from the premises alone by adding the statement as a conditional.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Deduction Theorem";
        }
    }

    return nullptr;
}

string _Logic::Terms::DeductiveArgument(string text)
{
    string model = "llama3";
    string definition = "An argument where the conclusion necessarily follows from the premises, intended to provide conclusive proof of the conclusion.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Deductive Argument";
        }
    }

    return nullptr;
}

string _Logic::Terms::DeductiveConsequence(string text)
{
    string model = "llama3";
    string definition = "See syntactic consequence.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Deductive Consequence";
        }
    }

    return nullptr;
}

string _Logic::Terms::DeductiveValidity(string text)
{
    string model = "llama3";
    string definition = "The property of a deductive argument where, if the premises are true, the conclusion must also be true.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Deductive Validity";
        }
    }

    return nullptr;
}

string _Logic::Terms::DeductivelyEquivalent(string text)
{
    string model = "llama3";
    string definition = "Two theories are deductively equivalent if they prove the same theorems.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Deductively Equivalent";
        }
    }

    return nullptr;
}

string _Logic::Terms::Deductivism(string text)
{
    string model = "llama3";
    string definition = "The philosophical stance that emphasizes deduction as the primary method of reasoning or acquiring knowledge.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Deductivism";
        }
    }

    return nullptr;
}

string _Logic::Terms::Definiendum(string text)
{
    string model = "llama3";
    string definition = "The term or phrase that is being defined in a definition.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Definiendum";
        }
    }

    return nullptr;
}

string _Logic::Terms::Definiens(string text)
{
    string model = "llama3";
    string definition = "The words or phrases that are used to provide the definition of the definiendum.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Definiens";
        }
    }

    return nullptr;
}

string _Logic::Terms::DefiniteDescription(string text)
{
    string model = "llama3";
    string definition = "A phrase that uniquely identifies a particular individual or concept, often using the to specify uniqueness.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Definite Description";
        }
    }

    return nullptr;
}

string _Logic::Terms::Definition(string text)
{
    string model = "llama3";
    string definition = "A statement that explains the meaning of a term or concept, providing its essence or specifying its characteristics.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Definition";
        }
    }

    return nullptr;
}

string _Logic::Terms::Deflationism(string text)
{
    string model = "llama3";
    string definition = "A theory of truth that argues the role of the term true is merely to allow the expression of propositions that cannot be expressed otherwise, without implying a substantive property of truth.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Deflationism";
        }
    }

    return nullptr;
}

string _Logic::Terms::DegreeTheoreticSemantics(string text)
{
    string model = "llama3";
    string definition = "An approach in semantics where the truth of sentences is measured in degrees, rather than as strictly true or false, applicable in fuzzy logic and some theories of vagueness.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Degree Theoretic Semantics";
        }
    }

    return nullptr;
}

string _Logic::Terms::Demonstration(string text)
{
    string model = "llama3";
    string definition = "See proof.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Demonstration";
        }
    }

    return nullptr;
}

string _Logic::Terms::Demonstrative(string text)
{
    string model = "llama3";
    string definition = "A word that indicates what object is being referred to, such as this, that, him, her, and they.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Demonstrative";
        }
    }

    return nullptr;
}

string _Logic::Terms::DeMorganDuality(string text)
{
    string model = "llama3";
    string definition = "The principle stating that the negation of a conjunction is equivalent to the disjunction of the negations, and vice versa, reflecting the duality between the logical operators AND and OR.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "DeMorgan Duality";
        }
    }

    return nullptr;
}

string _Logic::Terms::DeMorganNegation(string text)
{
    string model = "llama3";
    string definition = "A de Morgan negation is a simple negation satisfying double negation elimination";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "DeMorgan Negation";
        }
    }

    return nullptr;
}

string _Logic::Terms::DeMorgansRules(string text)
{
    string model = "llama3";
    string definition = "Two transformation rules stating that the negation of a conjunction is the disjunction of the negations, and the negation of a disjunction is the conjunction of the negations.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "DeMorgans Rules";
        }
    }

    return nullptr;
}

string _Logic::Terms::Denotation(string text)
{
    string model = "llama3";
    string definition = "The direct reference or literal meaning of a word or phrase, as opposed to its connotation or implied meaning.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Denotation";
        }
    }

    return nullptr;
}

string _Logic::Terms::Dense(string text)
{
    string model = "llama3";
    string definition = "A relation is dense if, for any two elements, there exists a third element that lies between them according to the relation.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Dense";
        }
    }

    return nullptr;
}

string _Logic::Terms::Denumerable(string text)
{
    string model = "llama3";
    string definition = "Equivalent to countably infinite; a set is denumerable if its elements can be put into a one-to-one correspondence with the natural numbers.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Denumerable";
        }
    }

    return nullptr;
}

string _Logic::Terms::DenyingTheAntecedent(string text)
{
    string model = "llama3";
    string definition = "A logical fallacy in which the invalid argument form of If P then Q, not P, therefore not Q is used.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Denying The Antecedent";
        }
    }

    return nullptr;
}

string _Logic::Terms::DeonticModalLogic(string text)
{
    string model = "llama3";
    string definition = "A branch of modal logic concerned with obligation, permission, and related modalities.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Deontic Modal Logic";
        }
    }

    return nullptr;
}

string _Logic::Terms::DerivableRule(string text)
{
    string model = "llama3";
    string definition = "A rule that can be inferred from the axioms and inference rules of a logical system, as opposed to being an axiom or primitive rule of the system.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Derivable Rule";
        }
    }

    return nullptr;
}

string _Logic::Terms::DesignatedValue(string text)
{
    string model = "llama3";
    string definition = "A semantic value that plays the same role for logical consequence as the role played by truth in classical logic, so that, for the consequence to hold, a designated value must be assigned to the conclusion if it is assigned to the premises.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Designated Value";
        }
    }

    return nullptr;
}

string _Logic::Terms::DestructiveDilemma(string text)
{
    string model = "llama3";
    string definition = "A form of argument involving two conditional statements and their negated consequents, leading to the negation of at least one of the antecedents.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "DestructiveDilemma";
        }
    }

    return nullptr;
}

string _Logic::Terms::Determiner(string text)
{
    string model = "llama3";
    string definition = "A word, phrase, or affix that specifies the reference of a noun or noun phrase";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Determiner";
        }
    }

    return nullptr;
}

string _Logic::Terms::DeterministicPolynomialTime(string text)
{
    string model = "llama3";
    string definition = "A complexity class (P) consisting of decision problems that can be solved by a deterministic Turing machine in polynomial time.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Deterministic Polynomial Time";
        }
    }

    return nullptr;
}

string _Logic::Terms::DeterministicTuringMachine(string text)
{
    string model = "llama3";
    string definition = "A theoretical computing machine that, for any given state and input symbol, has a single defined transition to a new state.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Deterministic Turing Machine";
        }
    }

    return nullptr;
}

string _Logic::Terms::DeviantLogic(string text)
{
    string model = "llama3";
    string definition = "A term used to describe non-standard or alternative logical systems that deviate from classical logic.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Deviant Logic";
        }
    }

    return nullptr;
}

string _Logic::Terms::DiagonalizationLemma(string text)
{
    string model = "llama3";
    string definition = "A lemma used in the proof of Gödel's incompleteness theorems, stating that for any formula with one free variable, there exists a sentence that asserts its own unprovability.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Diagonalization Lemma";
        }
    }

    return nullptr;
}

string _Logic::Terms::Dialetheism(string text)
{
    string model = "llama3";
    string definition = "The belief that there are true contradictions, i.e., statements that are both true and false at the same time.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Dialetheism";
        }
    }

    return nullptr;
}

string _Logic::Terms::DialethicLogic(string text)
{
    string model = "llama3";
    string definition = "A logic that allows for the existence of true contradictions, challenging the principle of non-contradiction.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Dialethic Logic";
        }
    }

    return nullptr;
}

string _Logic::Terms::Dilemma(string text)
{
    string model = "llama3";
    string definition = "A situation in which a difficult choice must be made between two or more alternatives, often equally undesirable.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Dilemma";
        }
    }

    return nullptr;
}

string _Logic::Terms::Dilution(string text)
{
    string model = "llama3";
    string definition = "In logic, the weakening of a statement by adding disjunctive clauses that do not affect the original statement's truth.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Dilution";
        }
    }

    return nullptr;
}

string _Logic::Terms::Directed(string text)
{
    string model = "llama3";
    string definition = "A relation is directed if, for every pair of elements, there is a third element related to both, ensuring a kind of coherence or consistency within the set.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Directed";
        }
    }

    return nullptr;
}

string _Logic::Terms::Discharge(string text)
{
    string model = "llama3";
    string definition = "The act of eliminating an assumption in a logical derivation, often by using it to prove a conditional statement";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Discharge";
        }
    }

    return nullptr;
}

string _Logic::Terms::Disjunct(string text)
{
    string model = "llama3";
    string definition = "One of the component propositions in a disjunction, each of which is an alternative to the others.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Disjunct";
        }
    }

    return nullptr;
}

string _Logic::Terms::Disjunction(string text)
{
    string model = "llama3";
    string definition = "A logical connective that represents the 'or' relationship between two statements, requiring at least one to be true.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Disjunction";
        }
    }

    return nullptr;
}

string _Logic::Terms::DisjunctionElimination(string text)
{
    string model = "llama3";
    string definition = "A rule of inference that allows deriving a conclusion from a disjunction and conditional statements";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Disjunction Elimination";
        }
    }

    return nullptr;
}

string _Logic::Terms::DisjunctionIntroduction(string text)
{
    string model = "llama3";
    string definition = "A logical principle allowing the introduction of a disjunction from any single proposition";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Disjunction Introduction";
        }
    }

    return nullptr;
}

string _Logic::Terms::DisjunctionProperty(string text)
{
    string model = "llama3";
    string definition = "A property in intuitionistic logic stating that if a disjunction";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Disjunction Property";
        }
    }

    return nullptr;
}

string _Logic::Terms::DisjunctiveNormalForm(string text)
{
    string model = "llama3";
    string definition = "A standardization of logical formulae in which a formula is expressed as a disjunction of conjunctive clauses.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Disjunctive Normal Form";
        }
    }

    return nullptr;
}

string _Logic::Terms::DisjunctiveSyllogism(string text)
{
    string model = "llama3";
    string definition = "A form of deductive reasoning that concludes one disjunct must be false if the other is true and a disjunction is given";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Disjunctive Syllogism";
        }
    }

    return nullptr;
}

string _Logic::Terms::Disquotationalism(string text)
{
    string model = "llama3";
    string definition = "A theory of truth that focuses on the disquotation principle, which suggests that the function of the truth predicate is to remove quotation marks to form equivalent sentences.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Logic::Terms::Distribution(string text)
{
    string model = "llama3";
    string definition = "A term is distributed within a categorical proposition if, and only if, that proposition says something about all objects instantiating that term.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Distribution";
        }
    }

    return nullptr;
}

string _Logic::Terms::DistributionAxiom(string text)
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
            return "Distribution Axiom";
        }
    }

    return nullptr;
}

string _Logic::Terms::DistributivePredication(string text)
{
    string model = "llama3";
    string definition = "A property of predicates in logic that allows them to be applied to each element of a subject class individually rather than to the class as a whole.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Distributive Predication";
        }
    }

    return nullptr;
}

string _Logic::Terms::Distributivity(string text)
{
    string model = "llama3";
    string definition = "The characteristic of certain binary operations to be able to distribute over others in a specific algebraic structure, maintaining equivalence.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Distributivity";
        }
    }

    return nullptr;
}

string _Logic::Terms::Division(string text)
{
    string model = "llama3";
    string definition = "See fallacy of division.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Division";
        }
    }

    return nullptr;
}

string _Logic::Terms::Domain(string text)
{
    string model = "llama3";
    string definition = "The set of all possible inputs for a function, or more generally, the subject matter or universe of discourse in a logical argument.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Logic::Terms::DomainOfDiscourse(string text)
{
    string model = "llama3";
    string definition = "The collection of objects being discussed in a particular logical context, which determines the range of quantifiers.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Domain of Discourse";
        }
    }

    return nullptr;
}

string _Logic::Terms::DominantConnective(string text)
{
    string model = "llama3";
    string definition = "The connective with the largest scope in a formula.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Dominant Connective";
        }
    }

    return nullptr;
}

string _Logic::Terms::DoubleNegation(string text)
{
    string model = "llama3";
    string definition = "The application of negation twice to a proposition, which in classical logic results in the original proposition";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Double Negation";
        }
    }

    return nullptr;
}

string _Logic::Terms::DoubleNegationElimination(string text)
{
    string model = "llama3";
    string definition = "A principle in classical logic stating that the double negation of a statement can be removed without changing its truth value";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Double Negation Elimination";
        }
    }

    return nullptr;
}

string _Logic::Terms::DoubleNegationIntroduction(string text)
{
    string model = "llama3";
    string definition = "The principle that for any proposition P, P implies not not P, reinforcing the assertion of P by denying its negation.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Double Negation Introduction";
        }
    }

    return nullptr;
}

string _Logic::Terms::DownwardLowenheimSkolemTheorem(string text)
{
    string model = "llama3";
    string definition = "Part of the Löwenheim–Skolem theorem.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Downward Lowenheim Skolem Theorem";
        }
    }

    return nullptr;
}

string _Logic::Terms::DoxasticModalLogic(string text)
{
    string model = "llama3";
    string definition = "A branch of modal logic that deals with the logic of belief, modeling the beliefs of rational agents.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Doxastic Modal Logic";
        }
    }

    return nullptr;
}

string _Logic::Terms::Dual(string text)
{
    string model = "llama3";
    string definition = "The dual of a truth-table is obtained by interchanging the truth values true and false (or 0 and 1) throughout the table. Connectives are dual if their truth-tables are dual: conjunction and disjunction are dual, and negation is self-dual. The dual of a formula is obtained by replacing each connective by its dual,e.g., for a formula containing only conjunction, disjunction, and negation (such as a formula in disjunctive normal form), its dual is the result of replacing each conjunction with a disjunction, and each disjunction with a conjunction. (For a formula in disjunctive normal form, its dual is a formula in conjunctive normal form.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Dual";
        }
    }

    return nullptr;
}

string _Logic::Terms::DynamicModalLogic(string text)
{
    string model = "llama3";
    string definition = "A branch of modal logic that studies necessary and possible connections between events.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Dynamic Modal Logic";
        }
    }

    return nullptr;
}

string _Logic::Terms::EffectiveProcedure(string text)
{
    string model = "llama3";
    string definition = "A method or process that guarantees a solution to a particular problem or class of problems, typically through a finite number of steps that can be precisely followed.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Effective Procedure";
        }
    }

    return nullptr;
}

string _Logic::Terms::EffectivelyComputableFunction(string text)
{
    string model = "llama3";
    string definition = "A function for which there exists an algorithm or mechanical procedure that can compute the function's value for any valid input in a finite amount of time.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Effectively Computable Function";
        }
    }

    return nullptr;
}

string _Logic::Terms::EffectivelyDecidableRelation(string text)
{
    string model = "llama3";
    string definition = "A binary relation for which there exists a mechanical method to determine, for any given pair of elements, whether the relation holds between them.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Effectively Decidable Relation";
        }
    }

    return nullptr;
}

string _Logic::Terms::EffectivelyDecidableTheory(string text)
{
    string model = "llama3";
    string definition = "A theory in which there exists an algorithm capable of determining whether any given statement within the theory is true or false.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Effectively Decidable Theory";
        }
    }

    return nullptr;
}

string _Logic::Terms::ElementryEquivalence(string text)
{
    string model = "llama3";
    string definition = "A relationship between two structures in logic and mathematics where they satisfy the same first-order sentences.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Elementry Equivalence";
        }
    }

    return nullptr;
}

string _Logic::Terms::EliminationOfQuantifiers(string text)
{
    string model = "llama3";
    string definition = "A process in logical deduction where quantifiers are removed from logical expressions while preserving equivalence, often used in the theory of real closed fields.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Elimination of Quantifiers";
        }
    }

    return nullptr;
}

string _Logic::Terms::EliminationRule(string text)
{
    string model = "llama3";
    string definition = "A rule in logical inference that allows the derivation of simpler formulas from more complex ones, often by removing logical connectives or quantifiers.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Elimination Rule";
        }
    }

    return nullptr;
}

string _Logic::Terms::EmptyConcept(string text)
{
    string model = "llama3";
    string definition = "A concept that does not have any instantiation in reality or does not refer to any existing object or group of objects.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Empty Concept";
        }
    }

    return nullptr;
}

string _Logic::Terms::Endomorphism(string text)
{
    string model = "llama3";
    string definition = "A function from a mathematical object to itself that preserves the object's structure.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Endomorphism";
        }
    }

    return nullptr;
}

string _Logic::Terms::Entailment(string text)
{
    string model = "llama3";
    string definition = "The logical relationship where the truth of one set of statements (the premises) necessitates the truth of another statement (the conclusion).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Entailment";
        }
    }

    return nullptr;
}

string _Logic::Terms::Enthymeme(string text)
{
    string model = "llama3";
    string definition = "A rhetorical argument that is presented with one or more premises left implied rather than explicitly stated.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Enthymeme";
        }
    }

    return nullptr;
}

string _Logic::Terms::Entscheidungsproblem(string text)
{
    string model = "llama3";
    string definition = "The decision problem, a challenge posed by David Hilbert asking for an algorithm to determine the truth or falsity of any given mathematical statement. The problem was proven to be unsolvable by Alan Turing and Alonzo Church.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Entscheidungsproblem";
        }
    }

    return nullptr;
}

string _Logic::Terms::EpimendidesParadox(string text)
{
    string model = "llama3";
    string definition = "A self-referential paradox involving a statement made by Epimenides, a Cretan, who stated that all Cretans are liars, leading to a logical contradiction if taken to be true.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Epimendides Paradox";
        }
    }

    return nullptr;
}

string _Logic::Terms::Epimorphism(string text)
{
    string model = "llama3";
    string definition = "A morphism in category theory that is right-cancellable, meaning it behaves like a surjective function in the context of sets.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Epimorphism";
        }
    }

    return nullptr;
}

string _Logic::Terms::EpistemicConstraint(string text)
{
    string model = "llama3";
    string definition = "The principle that truths must be knowable. It is brought up in the context of verificationism and Fitch's paradox of knowability.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Epistemic Constraint";
        }
    }

    return nullptr;
}

string _Logic::Terms::EpistemicModalLogic(string text)
{
    string model = "llama3";
    string definition = "A branch of modal logic that deals with reasoning about knowledge and belief, using modalities to express what is known and what is believed.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Epistemic Modal Logic";
        }
    }

    return nullptr;
}

string _Logic::Terms::EpistemicParadox(string text)
{
    string model = "llama3";
    string definition = "A paradox arising from basic intuitions regarding knowledge, belief, or related epistemic notions. For instance, the knower paradox and the Fitch paradox.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Epistemic Paradox";
        }
    }

    return nullptr;
}

string _Logic::Terms::EpistemicVagueness(string text)
{
    string model = "llama3";
    string definition = "The view that vagueness is a feature of human knowledge, rather than of the world or of language.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Epistemic Vagueness";
        }
    }

    return nullptr;
}

string _Logic::Terms::Epistemicism(string text)
{
    string model = "llama3";
    string definition = "The philosophical position that there are truths that cannot be known, typically applied to discussions of vagueness and the sorites paradox.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Epistemicism";
        }
    }

    return nullptr;
}

string _Logic::Terms::EProposition(string text)
{
    string model = "llama3";
    string definition = "In traditional logic, a universal negative categorical proposition, stating that no members of one class are members of another class.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "E-Proposition";
        }
    }

    return nullptr;
}

string _Logic::Terms::Equivalence(string text)
{
    string model = "llama3";
    string definition = "See deductively equivalent, logically equivalent, materially equivalent.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Equivalence";
        }
    }

    return nullptr;
}

string _Logic::Terms::EquivalenceRelation(string text)
{
    string model = "llama3";
    string definition = "A binary relation that is reflexive, symmetric, and transitive, indicating that elements it relates are in some sense equivalent.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Logic::Terms::Equivalent(string text)
{
    string model = "llama3";
    string definition = "See deductively equivalent, logically equivalent, materially equivalent.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Equivalent";
        }
    }

    return nullptr;
}

string _Logic::Terms::Equivocation(string text)
{
    string model = "llama3";
    string definition = "A logical fallacy involving the use of a word with more than one meaning throughout an argument, leading to a misleading or unsound conclusion.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Equivocation";
        }
    }

    return nullptr;
}

string _Logic::Terms::EroteticLogic(string text)
{
    string model = "llama3";
    string definition = "The logic of questions, including the study of the forms and principles of questions and their relationships to answers.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Erotetic Logic";
        }
    }

    return nullptr;
}

string _Logic::Terms::EubulidesParadox(string text)
{
    string model = "llama3";
    string definition = "A paradox presented by Eubulides of Miletus, including the liar paradox, which involves a statement declaring itself to be false, creating a contradiction.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Eubulides Paradox";
        }
    }

    return nullptr;
}

string _Logic::Terms::Euclidean(string text)
{
    string model = "llama3";
    string definition = "A relation R where, for any objects x, y, and z, it is true that if Rxy and Rxz, then Ryz.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Euclidean";
        }
    }

    return nullptr;
}

string _Logic::Terms::Exchange(string text)
{
    string model = "llama3";
    string definition = "See permutation.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Exchange";
        }
    }

    return nullptr;
}

string _Logic::Terms::ExcludedMiddle(string text)
{
    string model = "llama3";
    string definition = "The principle that for any proposition, either that proposition is true or its negation is true, with no middle ground.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Excluded Middle";
        }
    }

    return nullptr;
}

string _Logic::Terms::ExclusionNegation(string text)
{
    string model = "llama3";
    string definition = "In three-valued logic, form of negation that strictly excludes the possibility of something being true, as opposed to constructive negation which asserts the truth of an opposite proposition.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Exclusion Negation";
        }
    }

    return nullptr;
}

string _Logic::Terms::ExclusiveDisjunction(string text)
{
    string model = "llama3";
    string definition = "A logical operation that is true if and only if exactly one of its operands is true, also known as xor or exclusive or .";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Exclusive Disjunction";
        }
    }

    return nullptr;
}

string _Logic::Terms::ExclusiveOr(string text)
{
    string model = "llama3";
    string definition = "A binary logical operation that returns true only when the inputs are different";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Exclusive OR";
        }
    }

    return nullptr;
}

string _Logic::Terms::ExFalsoQuodiblet(string text)
{
    string model = "llama3";
    string definition = "A principle in classical logic stating that from a falsehood, any conclusion can be derived, also known as the principle of explosion.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Ex Falso Quodiblet";
        }
    }

    return nullptr;
}

string _Logic::Terms::ExistencePredicate(string text)
{
    string model = "llama3";
    string definition = "A predicate, usually occurring in free logics, that asserts the existence of the referent of a constant.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Existence Predicate";
        }
    }

    return nullptr;
}

string _Logic::Terms::ExistentialGeneralization(string text)
{
    string model = "llama3";
    string definition = "A rule of inference allowing the conclusion that something exists with a certain property, based on the existence of a particular example.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Existential Generalization";
        }
    }

    return nullptr;
}

string _Logic::Terms::ExistentialImport(string text)
{
    string model = "llama3";
    string definition = "The implication that something exists by the assertion of a particular kind of statement, especially relevant in traditional syllogistic logic.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Existential Import";
        }
    }

    return nullptr;
}

string _Logic::Terms::ExistentialInstantiation(string text)
{
    string model = "llama3";
    string definition = "A logical rule that allows one to infer the existence of a particular individual from a statement asserting the existence of such an individual generically.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Existential Instantiation";
        }
    }

    return nullptr;
}

string _Logic::Terms::ExistentialIntroduction(string text)
{
    string model = "llama3";
    string definition = "A rule of inference that introduces an existential quantifier, asserting the existence of at least one entity that satisfies a given property.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Existential Introduction";
        }
    }

    return nullptr;
}

string _Logic::Terms::ExistentialQuantifier(string text)
{
    string model = "llama3";
    string definition = "A quantifier used in predicate logic to indicate that there exists at least one member of the domain for which the predicate holds true.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Existential Quantifier";
        }
    }

    return nullptr;
}

string _Logic::Terms::ExistentialVariable(string text)
{
    string model = "llama3";
    string definition = "A variable in predicate logic that is bound by an existential quantifier, representing an unspecified member of the domain that satisfies the predicate.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Existential Variable";
        }
    }

    return nullptr;
}

string _Logic::Terms::Explanadum(string text)
{
    string model = "llama3";
    string definition = "The statement or phenomenon that is being explained in an explanation.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Explanadum";
        }
    }

    return nullptr;
}

string _Logic::Terms::Explanans(string text)
{
    string model = "llama3";
    string definition = "The statement or set of statements that provide the explanation for the phenomenon or statement referred to by the explanandum.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Explanans";
        }
    }

    return nullptr;
}

string _Logic::Terms::Explanation(string text)
{
    string model = "llama3";
    string definition = "The act of clarifying, elucidating, or making something understandable through detailing reasons, causes, or justifications.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Explanation";
        }
    }

    return nullptr;
}

string _Logic::Terms::ExplicitDefinition(string text)
{
    string model = "llama3";
    string definition = "A definition that provides a means for replacing each occurrence of the definiendum with an appropriate instance of the definiens.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Explicit Definition";
        }
    }

    return nullptr;
}

string _Logic::Terms::Explostion(string text)
{
    string model = "llama3";
    string definition = "The principle in logic that from a contradiction, any statement can be proven, related to the principle of ex falso quodlibet.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Explostion";
        }
    }

    return nullptr;
}

string _Logic::Terms::Exportation(string text)
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
            return "Exportation";
        }
    }

    return nullptr;
}

string _Logic::Terms::ExpressiveCompleteness(string text)
{
    string model = "llama3";
    string definition = "Synonym of functional completeness.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Expressive Completeness";
        }
    }

    return nullptr;
}

string _Logic::Terms::Extension(string text)
{
    string model = "llama3";
    string definition = "The collection of objects or entities to which a term or concept applies, contrasted with its intension, which refers to the properties or characteristics defining those objects or entities.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Extension";
        }
    }

    return nullptr;
}

string _Logic::Terms::ExtensionalLogic(string text)
{
    string model = "llama3";
    string definition = "A form of logic where the truth of sentences and arguments depends solely on the extension of the terms involved, disregarding their intension or conceptual content.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Extensional Logic";
        }
    }

    return nullptr;
}

string _Logic::Terms::Factivity(string text)
{
    string model = "llama3";
    string definition = "The property of certain expressions or verbs that implies the truth of the propositions they refer to, often used in the context of knowledge and belief.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Factivity";
        }
    }

    return nullptr;
}

string _Logic::Terms::Fallacy(string text)
{
    string model = "llama3";
    string definition = "An error in reasoning that results in an invalid argument or one that is not logically sound.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Fallacy";
        }
    }

    return nullptr;
}

string _Logic::Terms::FallacyOfComposition(string text)
{
    string model = "llama3";
    string definition = "The logical error of assuming that what is true of the parts must also be true of the whole.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Fallacy of Composition";
        }
    }

    return nullptr;
}

string _Logic::Terms::FallacyOfDivision(string text)
{
    string model = "llama3";
    string definition = "The logical error of assuming that what is true of the whole must also be true of its parts.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Fallacy of Division";
        }
    }

    return nullptr;
}

string _Logic::Terms::FallacyOfFourTerms(string text)
{
    string model = "llama3";
    string definition = "A logical fallacy in syllogistic logic where a syllogism includes four (rather than the requisite three) distinct terms, making the argument invalid.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Fallacy of Four Terms";
        }
    }

    return nullptr;
}

string _Logic::Terms::FalseDichotomy(string text)
{
    string model = "llama3";
    string definition = "An informal fallacy that presents two options as the only possibilities when in fact more possibilities exist.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "False Dichotomy";
        }
    }

    return nullptr;
}

string _Logic::Terms::FalseDilemma(string text)
{
    string model = "llama3";
    string definition = "A form of false dichotomy where two choices are presented as the only options when other alternatives are available, often used to force a decision.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "False Dilemma";
        }
    }

    return nullptr;
}

string _Logic::Terms::Falsemaker(string text)
{
    string model = "llama3";
    string definition = "An entity or set of conditions that makes a proposition false. In metaphysics, it's considered the counterpart to a truthmaker, which validates the truth of a proposition.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Falsemaker";
        }
    }

    return nullptr;
}

string _Logic::Terms::Falsity(string text)
{
    string model = "llama3";
    string definition = "The quality or condition of being false or untrue.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Falsity";
        }
    }

    return nullptr;
}

string _Logic::Terms::Falsum(string text)
{
    string model = "llama3";
    string definition = "A symbol used in logic to represent falsity or a contradiction";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Falsum";
        }
    }

    return nullptr;
}

string _Logic::Terms::Field(string text)
{
    string model = "llama3";
    string definition = "The field of a function is the union of the domain and range of that function.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Logic::Terms::Figure(string text)
{
    string model = "llama3";
    string definition = "See syllogistic figure.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Figure";
        }
    }

    return nullptr;
}

string _Logic::Terms::Finitary(string text)
{
    string model = "llama3";
    string definition = "Pertaining to methods or processes that involve a finite number of steps or elements.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Finitary";
        }
    }

    return nullptr;
}

string _Logic::Terms::FinitaryArithmetic(string text)
{
    string model = "llama3";
    string definition = "An approach to arithmetic focusing on finitary methods, avoiding infinities and emphasizing constructions that can be completed in a finite number of steps.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Finitary Arithmetic";
        }
    }

    return nullptr;
}

string _Logic::Terms::FinitaryFormalSystem(string text)
{
    string model = "llama3";
    string definition = "A formal system in which all operations, proofs, and expressions are finitary, relying only on objects that can be constructed or demonstrated in a finite number of steps.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Finitary Formal System";
        }
    }

    return nullptr;
}

string _Logic::Terms::FiniteCharacter(string text)
{
    string model = "llama3";
    string definition = "The property of certain mathematical or logical systems where every relevant feature or property can be determined by examining only a finite part of the system.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Finite Character";
        }
    }

    return nullptr;
}

string _Logic::Terms::FiniteModelTheory(string text)
{
    string model = "llama3";
    string definition = "A branch of model theory that deals with the study of properties of structures (models) that have a finite domain.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Finite Model Theory";
        }
    }

    return nullptr;
}

string _Logic::Terms::FinitelyAxiomatizable(string text)
{
    string model = "llama3";
    string definition = "Referring to a theory that can be fully captured by a finite set of axioms.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Finitely Axiomatizable";
        }
    }

    return nullptr;
}

string _Logic::Terms::Finitism(string text)
{
    string model = "llama3";
    string definition = "A philosophical view that rejects the existence of infinite entities and infinite processes, emphasizing only those quantities or procedures that are finite.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Finitism";
        }
    }

    return nullptr;
}

string _Logic::Terms::FirstDegreeEntailment(string text)
{
    string model = "llama3";
    string definition = "A logical system that allows for the existence of both true and false atomic propositions but does not require every proposition to be either true or false, rejecting the law of the excluded middle for certain propositions.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "First Degree Entailment";
        }
    }

    return nullptr;
}

string _Logic::Terms::FirstOrderLogic(string text)
{
    string model = "llama3";
    string definition = "A formal logical system involving quantifiers for all and there exists, which can quantify over individuals but not over predicates or functions.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Logic::Terms::FirstOrderTheory(string text)
{
    string model = "llama3";
    string definition = "A theory expressed in first-order logic, dealing with the relationships between individuals and properties or relations that individuals may have.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "First Order Theory";
        }
    }

    return nullptr;
}

string _Logic::Terms::FirstOrderVariable(string text)
{
    string model = "llama3";
    string definition = "A variable in first-order logic that represents an individual in the domain of discourse.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "First Order Variable";
        }
    }

    return nullptr;
}

string _Logic::Terms::FitchParadox(string text)
{
    string model = "llama3";
    string definition = "A paradox in epistemic logic that arises from seemingly reasonable assumptions about knowledge and leads to the conclusion that all truths are known.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Fitch Paradox";
        }
    }

    return nullptr;
}

string _Logic::Terms::FixedPoint(string text)
{
    string model = "llama3";
    string definition = "In mathematics and logic, a value or element that is mapped to itself by a particular function or operation.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Logic::Terms::ForcedMarchSorites(string text)
{
    string model = "llama3";
    string definition = "A type of sorites paradox involving a series of incremental steps or changes that lead to a contradiction, challenging the precision of vague predicates by forcing a march from one end of a spectrum to another.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Forced March Sorites";
        }
    }

    return nullptr;
}

string _Logic::Terms::FormalConsequence(string text)
{
    string model = "llama3";
    string definition = "A conclusion that follows in virtue of logical form alone, as distinguished from a material consequence, which (also) depends on the content of the propositions.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Formal Consequence";
        }
    }

    return nullptr;
}

string _Logic::Terms::FormalFallacy(string text)
{
    string model = "llama3";
    string definition = "A logical error in the form or structure of an argument, as opposed to a material fallacy which relates to the argument's content.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Formal Fallacy";
        }
    }

    return nullptr;
}

string _Logic::Terms::FormalLanguage(string text)
{
    string model = "llama3";
    string definition = "A set of strings of symbols that are constructed according to specific syntactic rules, used in mathematics, computer science, and formal logic to precisely define expressions without ambiguity.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "FormalLanguage";
        }
    }

    return nullptr;
}

string _Logic::Terms::FormalLogic(string text)
{
    string model = "llama3";
    string definition = "The study of inference with purely formal content, where no interpretation is given to the terms and only the logical form is considered.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Formal Logic";
        }
    }

    return nullptr;
}

string _Logic::Terms::FormalProof(string text)
{
    string model = "llama3";
    string definition = "A proof in which each step is justified by a rule of inference, constructed within a formal system to demonstrate the truth of a proposition.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Formal Proof";
        }
    }

    return nullptr;
}

string _Logic::Terms::FormalSemantics(string text)
{
    string model = "llama3";
    string definition = "The study of how formal systems, especially those used in logic and linguistics, are connected to conceptual or referential interpretations.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Formal Semantics";
        }
    }

    return nullptr;
}

string _Logic::Terms::FormalSystem(string text)
{
    string model = "llama3";
    string definition = "A system of symbols and rules for manipulating these symbols, used to derive statements or theorems in a logical or mathematical domain.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Formal System";
        }
    }

    return nullptr;
}

string _Logic::Terms::FormationRules(string text)
{
    string model = "llama3";
    string definition = "Rules that specify the correct ways in which the basic symbols of a formal language can be combined to form well-formed formulas.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Formation Rules";
        }
    }

    return nullptr;
}

string _Logic::Terms::Formula(string text)
{
    string model = "llama3";
    string definition = "An expression in a formal language that can be evaluated as true or false within a given interpretation, often involving variables and logical connectives.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Formula";
        }
    }

    return nullptr;
}

string _Logic::Terms::Frame(string text)
{
    string model = "llama3";
    string definition = "In modal logic, a structure consisting of a set of possible worlds and a relation between those worlds, used to interpret modal propositions.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Logic::Terms::FrameSemantics(string text)
{
    string model = "llama3";
    string definition = "A theory in linguistics and logic that uses frames conceptual structures for representing stereotypical situations s a means of understanding how language conveys meaning.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Frame Semantics";
        }
    }

    return nullptr;
}

string _Logic::Terms::FreeChoiceSequence(string text)
{
    string model = "llama3";
    string definition = "A sequence (typically of natural numbers) where each term is chosen freely, not determined by any rule or algorithm, often used in discussions of constructivism and intuitionism.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Free Choice Sequence";
        }
    }

    return nullptr;
}

string _Logic::Terms::FreeLogic(string text)
{
    string model = "llama3";
    string definition = "A form of logic that allows for terms that do not denote any existing object, differing from classical logic by not requiring every term to refer to something in the domain of discourse.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Free Logic";
        }
    }

    return nullptr;
}

string _Logic::Terms::FreeVariable(string text)
{
    string model = "llama3";
    string definition = "A variable in a formula that is not bound by a quantifier and does not have a specific value assigned to it within the context of the formula.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Free Variable";
        }
    }

    return nullptr;
}

string _Logic::Terms::FregesTheorem(string text)
{
    string model = "llama3";
    string definition = "A result in logic and mathematics demonstrating that arithmetic can be derived from logic through the introduction of the concept of a successor and the use of second-order quantification.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Freges Theorem";
        }
    }

    return nullptr;
}

string _Logic::Terms::Function(string text)
{
    string model = "llama3";
    string definition = "A relation between sets that associates every element of a first set with exactly one element of a second set, often represented as a mapping from elements of one set to elements of another.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Logic::Terms::FuzzyLogic(string text)
{
    string model = "llama3";
    string definition = "A many-valued logic which allows for degrees of truth and certainty.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Logic::Terms::GamblersFallacy(string text)
{
    string model = "llama3";
    string definition = "The erroneous belief that if an event occurs more frequently than normal during the past, it is less likely to happen in the future (or vice versa), often arising in contexts of gambling and misinterpretation of statistics.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Gamblers Fallacy";
        }
    }

    return nullptr;
}

string _Logic::Terms::GameTheoreticSemantics(string text)
{
    string model = "llama3";
    string definition = "An approach to semantics that interprets the meaning of linguistic expressions through the outcomes of certain idealized games played between a verifier and a falsifier, emphasizing the interactive process of establishing truth or falsehood.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Game Theoretic Semantics";
        }
    }

    return nullptr;
}

string _Logic::Terms::GeachKaplanSentence(string text)
{
    string model = "llama3";
    string definition = "A type of sentence that raises issues in the philosophy of language and logic regarding context-dependence, referential opacity, and the limits of formal semantic analysis. Named after philosophers Peter Geach and David Kaplan.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Geach Kaplan Sentence";
        }
    }

    return nullptr;
}

string _Logic::Terms::GeneralizedQuantifier(string text)
{
    string model = "llama3";
    string definition = "In logic and linguistics, a quantifier that can express more complex relationships than standard quantifiers like all or some, allowing for the expression of concepts like most, many, and few.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Generalized Quantifier";
        }
    }

    return nullptr;
}

string _Logic::Terms::GlivenkosTheorem(string text)
{
    string model = "llama3";
    string definition = "A result in logic stating that if a formula is provable in classical logic, then its double negation is provable in intuitionistic logic, establishing a connection between the two logics.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Glivenkos Theorem";
        }
    }

    return nullptr;
}

string _Logic::Terms::Glut(string text)
{
    string model = "llama3";
    string definition = "See truth-value glut.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Glut";
        }
    }

    return nullptr;
}

string _Logic::Terms::GodelNumbering(string text)
{
    string model = "llama3";
    string definition = "A method of encoding mathematical and logical symbols and expressions as natural numbers, introduced by Kurt Gödel as part of his incompleteness theorems.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Godel Numbering";
        }
    }

    return nullptr;
}

string _Logic::Terms::GodelSentence(string text)
{
    string model = "llama3";
    string definition = "A self-referential sentence constructed in formal systems to demonstrate Godel's incompleteness theorems, asserting its own unprovability within the system.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Godel Sentence";
        }
    }

    return nullptr;
}

string _Logic::Terms::GodelDummettLogic(string text)
{
    string model = "llama3";
    string definition = "A form of intuitionistic logic that includes a principle of maximal elements, allowing for the expression of certain intermediate truth values between true and false.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Godel Dummett Logic";
        }
    }

    return nullptr;
}

string _Logic::Terms::GodelsFirstIncompletenessTheorem(string text)
{
    string model = "llama3";
    string definition = "A theorem proving that in any consistent formal system that is capable of expressing basic arithmetic, there are propositions that cannot be proven or disproven within the system.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Godels First Incompleteness Theorem";
        }
    }

    return nullptr;
}

string _Logic::Terms::GodelsSecondIncompletenessTheorem(string text)
{
    string model = "llama3";
    string definition = "A theorem establishing that no consistent system capable of doing arithmetic can prove its own consistency, building on the first incompleteness theorem.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "GodelsSecond Incompleteness Theorem";
        }
    }

    return nullptr;
}

string _Logic::Terms::GodelsSlingshotArgument(string text)
{
    string model = "llama3";
    string definition = "An argument concerning the semantics of reference and truth, challenging the coherence of theories that attempt to distinguish between facts and true propositions in a fine-grained manner.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Godels Slingshot Argument";
        }
    }

    return nullptr;
}

string _Logic::Terms::GrellingParadox(string text)
{
    string model = "llama3";
    string definition = "A paradox related to self-reference and linguistic categories, particularly whether the word heterological, meaning not applicable to itself, applies to itself.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Grelling Paradox";
        }
    }

    return nullptr;
}

string _Logic::Terms::HaltingProblem(string text)
{
    string model = "llama3";
    string definition = "The decision problem of determining, from a description of an arbitrary computer program and an input, whether the program will finish running or continue to run forever. Proven to be undecidable by Alan Turing.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "HaltingProblem";
        }
    }

    return nullptr;
}

string _Logic::Terms::Harmony(string text)
{
    string model = "llama3";
    string definition = "In logic and philosophy, the notion that the introduction and elimination rules for a logical connective should be in balance, ensuring that the connective does not introduce more than it can eliminate, and vice versa.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Harmony";
        }
    }

    return nullptr;
}

string _Logic::Terms::HastyGeneralization(string text)
{
    string model = "llama3";
    string definition = "An informal fallacy in which a conclusion is not logically justified by sufficient or unbiased evidence; drawing a general conclusion from a too-small sample size.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Hasty Generalization";
        }
    }

    return nullptr;
}

string _Logic::Terms::HenkinSemantics(string text)
{
    string model = "llama3";
    string definition = "A generalization of standard first-order semantics that allows for models where the range of quantifiers can be restricted, named after Leon Henkin.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Henkin Semantics";
        }
    }

    return nullptr;
}

string _Logic::Terms::HenkinSentence(string text)
{
    string model = "llama3";
    string definition = "A sentence that asserts its own provability, possibly by applying the provability predicate to itself.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Henkin Sentence";
        }
    }

    return nullptr;
}

string _Logic::Terms::HereditaryProperty(string text)
{
    string model = "llama3";
    string definition = "A property of objects in a mathematical or logical structure that, if applied to an object, also applies to all subobjects or elements of that object.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Hereditary Property";
        }
    }

    return nullptr;
}

string _Logic::Terms::Heterological(string text)
{
    string model = "llama3";
    string definition = "Describing an adjective that does not apply to itself.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Heterological";
        }
    }

    return nullptr;
}

string _Logic::Terms::Hierarchy(string text)
{
    string model = "llama3";
    string definition = "A system in which entities are ranked one above the other based on certain criteria, often used in the context of sets, classes, or organizational structures. In logic, an important one is Tarski's hierarchy. In set theory, an important one is the cumulative hierarchy.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Hierarchy";
        }
    }

    return nullptr;
}

string _Logic::Terms::HighOrderLogic(string text)
{
    string model = "llama3";
    string definition = "A form of logic that extends first-order logic by allowing quantification over predicates and possibly other higher-order entities, not just individuals.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "High Order Logic";
        }
    }

    return nullptr;
}

string _Logic::Terms::HigherOrderQuantifier(string text)
{
    string model = "llama3";
    string definition = "A quantifier that binds a higher-order variable.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Higher Order Quantifier";
        }
    }

    return nullptr;
}

string _Logic::Terms::HighOrderVagueness(string text)
{
    string model = "llama3";
    string definition = "vagueness about the application of the concept of vagueness itself, particularly in the context of predicates that are borderline cases of borderline cases.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "High Order Vagueness";
        }
    }

    return nullptr;
}

string _Logic::Terms::HigherOrderVariable(string text)
{
    string model = "llama3";
    string definition = "A variable in higher-order logic that represents a function, predicate, or relation, rather than an individual object.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Higher Order Variable";
        }
    }

    return nullptr;
}

string _Logic::Terms::HilbertsProgram(string text)
{
    string model = "llama3";
    string definition = "An ambitious project proposed by David Hilbert to provide a solid foundation for all of mathematics by formalizing it and proving it consistent using finitary methods.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Hilberts Program";
        }
    }

    return nullptr;
}

string _Logic::Terms::Holism(string text)
{
    string model = "llama3";
    string definition = "The idea that systems and their properties should be analyzed as wholes, not just as a collection of parts, often discussed in the context of meaning, knowledge, and the philosophy of science.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Holism";
        }
    }

    return nullptr;
}

string _Logic::Terms::Homomorphism(string text)
{
    string model = "llama3";
    string definition = "A structure-preserving map between two algebraic structures of the same type, such as groups, rings, or vector spaces, that respects the operations of the structures.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Homomorphism";
        }
    }

    return nullptr;
}

string _Logic::Terms::Horn(string text)
{
    string model = "llama3";
    string definition = "Refers to either of the two alternatives presented by a dilemma.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Horn";
        }
    }

    return nullptr;
}

string _Logic::Terms::HumesPrinciple(string text)
{
    string model = "llama3";
    string definition = "The principle that the number of objects in one collection is equal to the number of objects in another collection if and only if there is a one-to-one correspondence between the two collections.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Humes Principle";
        }
    }

    return nullptr;
}

string _Logic::Terms::HybridLogic(string text)
{
    string model = "llama3";
    string definition = "A type of modal logic that incorporates additional syntactic elements to refer directly to worlds in its models, allowing for more expressive power than standard modal logics.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Hybrid Logic";
        }
    }

    return nullptr;
}

string _Logic::Terms::HypotheticalSyllogism(string text)
{
    string model = "llama3";
    string definition = "A form of logical argument consisting of three propositions: two conditional statements and a conclusion that infers a relationship between the antecedent of the first conditional and the consequent of the second.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Hypothetical Syllogism";
        }
    }

    return nullptr;
}

string _Logic::Terms::Idempotent(string text)
{
    string model = "llama3";
    string definition = "A property of certain operations in which applying the operation multiple times has the same effect as applying it once. For example, the union of a set with itself is the set itself.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Idempotent";
        }
    }

    return nullptr;
}

string _Logic::Terms::Identity(string text)
{
    string model = "llama3";
    string definition = "The relation that each entity bears only to itself; or, the principle that an entity is the same as itself.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Identity";
        }
    }

    return nullptr;
}

string _Logic::Terms::IdentityFunction(string text)
{
    string model = "llama3";
    string definition = "A function that always returns its input as its output, for any given input.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Identity Function";
        }
    }

    return nullptr;
}

string _Logic::Terms::IdentityOfIndiscernables(string text)
{
    string model = "llama3";
    string definition = "A principle stating that if two entities share all their properties, they must be identical.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Identity of Indiscernables";
        }
    }

    return nullptr;
}

string _Logic::Terms::Iff(string text)
{
    string model = "llama3";
    string definition = "An abbreviation for if and only if, denoting a biconditional logical connective indicating mutual implication.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Iff";
        }
    }

    return nullptr;
}

string _Logic::Terms::IgnoratioElenchi(string text)
{
    string model = "llama3";
    string definition = "A logical fallacy where an argument misses the point or addresses an issue different from the one that was raised, also known as missing the point.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "IgnoratioElenchi";
        }
    }

    return nullptr;
}

string _Logic::Terms::Image(string text)
{
    string model = "llama3";
    string definition = "The set of all outputs of a function from a given set of inputs.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Logic::Terms::ImediateInference(string text)
{
    string model = "llama3";
    string definition = "A process of reasoning in which a conclusion is directly derived from a single premise without any intermediary steps.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Imediate Inference";
        }
    }

    return nullptr;
}

string _Logic::Terms::Imperative(string text)
{
    string model = "llama3";
    string definition = "A type of linguistic expression or logical form that expresses a command, request, or instruction.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Imperative";
        }
    }

    return nullptr;
}

string _Logic::Terms::ImperativeLogic(string text)
{
    string model = "llama3";
    string definition = "A branch of logic that studies the formal properties of imperatives or commands, distinct from indicative statements.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Imperative Logic";
        }
    }

    return nullptr;
}

string _Logic::Terms::Implication(string text)
{
    string model = "llama3";
    string definition = "A logical relation where the truth of one statement (the antecedent) brings about the truth of another statement (the consequent).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Implication";
        }
    }

    return nullptr;
}

string _Logic::Terms::ImplicitDefinition(string text)
{
    string model = "llama3";
    string definition = "A definition that specifies an entity or concept not by direct enumeration of its properties but by its relations to other entities or concepts.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Implicit Definition";
        }
    }

    return nullptr;
}

string _Logic::Terms::Impossibility(string text)
{
    string model = "llama3";
    string definition = "The state or condition of something being not possible, either logically or physically.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Impossibility";
        }
    }

    return nullptr;
}

string _Logic::Terms::ImpossibleWorld(string text)
{
    string model = "llama3";
    string definition = "A hypothetical construct in modal logic representing a way things could not possibly be, used to explore concepts of necessity and possibility.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Impossible World";
        }
    }

    return nullptr;
}

string _Logic::Terms::ImpredicativeDefinition(string text)
{
    string model = "llama3";
    string definition = "A definition that refers to a set that includes the entity being defined, often leading to paradoxes in naive set theories.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Impredicative Definition";
        }
    }

    return nullptr;
}

string _Logic::Terms::InclusiveDisjunction(string text)
{
    string model = "llama3";
    string definition = "A logical operation that returns true if at least one of its operands is true; corresponds to the logical OR.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Inclusive Disjunction";
        }
    }

    return nullptr;
}

string _Logic::Terms::InclusiveFirstOrderLogic(string text)
{
    string model = "llama3";
    string definition = "A variant of first-order logic that allows for empty domains, in contrast to the standard requirement that domains contain at least one object.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Inclusive First Order Logic";
        }
    }

    return nullptr;
}

string _Logic::Terms::InclusiveOr(string text)
{
    string model = "llama3";
    string definition = "The disjunction operation in logic that is true if either or both of its operands are true.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Inclusive OR";
        }
    }

    return nullptr;
}

string _Logic::Terms::Incompleteness(string text)
{
    string model = "llama3";
    string definition = "The property of a logical or mathematical system where not all truths within the system can be proven using the system's rules.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Incompleteness";
        }
    }

    return nullptr;
}

string _Logic::Terms::IncompletenessTheorem(string text)
{
    string model = "llama3";
    string definition = "Godel's theorem stating that any consistent formal system capable of expressing basic arithmetic cannot be both complete and consistent.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Incompleteness Theorem";
        }
    }

    return nullptr;
}

string _Logic::Terms::Inconsistency(string text)
{
    string model = "llama3";
    string definition = "The state of containing contradictory elements, which cannot all be true at the same time within a logical framework.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Inconsistency";
        }
    }

    return nullptr;
}

string _Logic::Terms::InconsistentArithmetic(string text)
{
    string model = "llama3";
    string definition = "An arithmetic system in which a contradiction can be derived, violating the principle of consistency.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Inconsistent Arithmetic";
        }
    }

    return nullptr;
}

string _Logic::Terms::IndefiniteDescription(string text)
{
    string model = "llama3";
    string definition = "A description that does not uniquely identify a single individual or entity but refers to any member of a class that satisfies a certain condition.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Indefinite Description";
        }
    }

    return nullptr;
}

string _Logic::Terms::IndefiniteExtensibility(string text)
{
    string model = "llama3";
    string definition = "The concept that certain collections (such as the set of all sets) cannot be comprehensively listed because any attempt to enumerate them leads to the possibility of generating new members.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Indefinite Extensibility";
        }
    }

    return nullptr;
}

string _Logic::Terms::IndependenceResult(string text)
{
    string model = "llama3";
    string definition = "A finding in logic and mathematics that a particular statement cannot be proven or disproven within a given system, assuming the system's axioms are consistent.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "IndependenceResult";
        }
    }

    return nullptr;
}

string _Logic::Terms::IndependenceFriendlyLogic(string text)
{
    string model = "llama3";
    string definition = "A logic that extends first-order logic to allow for more nuanced expressions of quantifier scope and dependence, particularly in contexts of game-theoretical semantics.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Independence Friendly Logic";
        }
    }

    return nullptr;
}

string _Logic::Terms::Independent(string text)
{
    string model = "llama3";
    string definition = "Referring to a pair of propositions that are not contrary, subcontrary, contradictory, logically equivalent, or implied one by the other (either the first by the second, or the second by the first).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Independent";
        }
    }

    return nullptr;
}

string _Logic::Terms::IndeterminacyOfTranslation(string text)
{
    string model = "llama3";
    string definition = "Inition proposed by W.V.O. Quine, suggesting that no unique translation between languages can be determined solely by empirical evidence, due to the underdetermination of theories by data.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Indeterminacy of Translation";
        }
    }

    return nullptr;
}

string _Logic::Terms::Indexical(string text)
{
    string model = "llama3";
    string definition = "A type of expression whose reference can shift based on the context in which it is used, such as I, here, and now.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Indexical";
        }
    }

    return nullptr;
}

string _Logic::Terms::IndicativeConditional(string text)
{
    string model = "llama3";
    string definition = "A conditional statement used to express factual implications or predictions about real situations, as opposed to counterfactual or hypothetical statements.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Indicative Conditional";
        }
    }

    return nullptr;
}

string _Logic::Terms::IndirectProof(string text)
{
    string model = "llama3";
    string definition = "A method of proof in which the negation of the statement to be proven is assumed, and a contradiction is derived, thereby proving the original statement by contradiction.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Logic::Terms::Indiscernibility(string text)
{
    string model = "llama3";
    string definition = "The inability to distinguish between objects due to them sharing all properties, related to the principle of identity of indiscernibles.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Indiscernibility";
        }
    }

    return nullptr;
}

string _Logic::Terms::IndiscernibilityOfIdenticals(string text)
{
    string model = "llama3";
    string definition = "The principle stating that if two entities are identical, then they share all the same properties.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Indiscernibility of Identicals";
        }
    }

    return nullptr;
}

string _Logic::Terms::IndispensabilityArgument(string text)
{
    string model = "llama3";
    string definition = "An argument suggesting that if a mathematical entity is indispensable to our best scientific theories, then we ought to commit to its existence.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Indispensability Argument";
        }
    }

    return nullptr;
}

string _Logic::Terms::Individual(string text)
{
    string model = "llama3";
    string definition = "An entity regarded as indivisible or atomistic in nature, often discussed in the context of metaphysics, logic, and the philosophy of language.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Individual";
        }
    }

    return nullptr;
}

string _Logic::Terms::Induction(string text)
{
    string model = "llama3";
    string definition = "See inductive argument, induction on well-formed formulas, mathematical induction, strong mathematical induction, transfinite induction, weak mathematical induction";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Induction";
        }
    }

    return nullptr;
}

string _Logic::Terms::InductionOnWellFormedFormulas(string text)
{
    string model = "llama3";
    string definition = "A method used in formal logic and mathematics to prove properties of all well-formed formulas by showing they hold for basic formulas and are preserved under the operations that generate new formulas.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Induction On Well Formed Formulas";
        }
    }

    return nullptr;
}

string _Logic::Terms::InductionSchema(string text)
{
    string model = "llama3";
    string definition = "Synonym of mathematical induction.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Induction Schema";
        }
    }

    return nullptr;
}

string _Logic::Terms::InductiveArgument(string text)
{
    string model = "llama3";
    string definition = "An argument that provides probable support for its conclusion, as opposed to deductive arguments which provide conclusive support.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Inductive Argument";
        }
    }

    return nullptr;
}

string _Logic::Terms::InductiveProof(string text)
{
    string model = "llama3";
    string definition = "A proof method used in mathematics to prove statements about all natural numbers or other well-ordered sets, based on the principle of induction.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Inductive Proof";
        }
    }

    return nullptr;
}

string _Logic::Terms::InductiveStep(string text)
{
    string model = "llama3";
    string definition = "In an inductive proof, the step that shows if a property holds for an arbitrary element n, it also holds for the next element n + 1.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Inductive Step";
        }
    }

    return nullptr;
}

string _Logic::Terms::Inference(string text)
{
    string model = "llama3";
    string definition = "The process of deriving logical conclusions from premises known or assumed to be true.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Inference";
        }
    }

    return nullptr;
}

string _Logic::Terms::InferenceRule(string text)
{
    string model = "llama3";
    string definition = "A logical rule that outlines the conditions under which certain conclusions can be validly drawn from premises.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Inference Rule";
        }
    }

    return nullptr;
}

string _Logic::Terms::InferenceToTheBestExplanation(string text)
{
    string model = "llama3";
    string definition = "A form of abductive reasoning that suggests we should accept the hypothesis that best explains the relevant evidence.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Inference To The Best Explanation";
        }
    }

    return nullptr;
}

string _Logic::Terms::Inferentialism(string text)
{
    string model = "llama3";
    string definition = "The philosophical view that the meaning of a statement is determined by the rules governing its use and the inferences that can be drawn from it.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Inferentialism";
        }
    }

    return nullptr;
}

string _Logic::Terms::Infinitary(string text)
{
    string model = "llama3";
    string definition = "Pertaining to operations, languages, or logics that allow expressions of infinite length, such as infinitary logic.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Infinitary";
        }
    }

    return nullptr;
}

string _Logic::Terms::Infitesimal(string text)
{
    string model = "llama3";
    string definition = "A quantity that is closer to zero than any positive real number, yet not zero, used in non-standard analysis.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Infitesimal";
        }
    }

    return nullptr;
}

string _Logic::Terms::InfixNotation(string text)
{
    string model = "llama3";
    string definition = "A notation in which the operator is placed between the operands, as in standard arithmetic expressions.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "In fixNotation";
        }
    }

    return nullptr;
}

string _Logic::Terms::InformalFallacy(string text)
{
    string model = "llama3";
    string definition = "A flaw in reasoning that occurs in natural language arguments due to ambiguity, irrelevance, or other factors outside the formal structure of the argument.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Informal Fallacy";
        }
    }

    return nullptr;
}

string _Logic::Terms::Injection(string text)
{
    string model = "llama3";
    string definition = "A function that maps distinct elements of its domain to distinct elements of its codomain, also known as an injective function or one-to-one function.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Injection";
        }
    }

    return nullptr;
}

string _Logic::Terms::Injective(string text)
{
    string model = "llama3";
    string definition = "Describing a function in which each element of the codomain is mapped to by at most one element of the domain.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Injective";
        }
    }

    return nullptr;
}

string _Logic::Terms::InnerModel(string text)
{
    string model = "llama3";
    string definition = "An inner model of a theory is a model that is obtained by taking a substructure of another model.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "InnerModel";
        }
    }

    return nullptr;
}

string _Logic::Terms::InRebusVagueness(string text)
{
    string model = "llama3";
    string definition = "The view that vagueness is a feature of the world, rather than of language or of human knowledge.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "InRebus Vagueness";
        }
    }

    return nullptr;
}

string _Logic::Terms::Insolubilia(string text)
{
    string model = "llama3";
    string definition = "Unsolvable problems or paradoxes, especially those related to self-reference and logical contradiction, such as the liar paradox.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Insolubilia";
        }
    }

    return nullptr;
}

string _Logic::Terms::Instantiation(string text)
{
    string model = "llama3";
    string definition = "The process of replacing bound variables with constants, eliminating the quantifiers that had bound them.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Instantiation";
        }
    }

    return nullptr;
}

string _Logic::Terms::IntendedIntepretation(string text)
{
    string model = "llama3";
    string definition = "The standard or conventional meaning assigned to the symbols and expressions of a formal language within a particular context or theory.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Intended Intepretation";
        }
    }

    return nullptr;
}

string _Logic::Terms::Intension(string text)
{
    string model = "llama3";
    string definition = "The inherent content or essential properties and meanings of a concept or term, as opposed to its extension, which refers to the range of things it applies to.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Intension";
        }
    }

    return nullptr;
}

string _Logic::Terms::IntensionalDefinition(string text)
{
    string model = "llama3";
    string definition = "A definition that specifies the essential properties of the term being defined, focusing on the concept's intension rather than its extension.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Intensional Definition";
        }
    }

    return nullptr;
}

string _Logic::Terms::InstensionalLogic(string text)
{
    string model = "llama3";
    string definition = "A logic that deals with the intensional aspects of meaning, such as belief, necessity, and possibility, distinguishing between logically equivalent expressions that have different modal properties.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Instensional Logic";
        }
    }

    return nullptr;
}

string _Logic::Terms::IntermediateLogic(string text)
{
    string model = "llama3";
    string definition = "Any logical system that falls between intuitionistic logic and classical logic in strength, allowing for distinctions not permissible in classical logic.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Intermediate Logic";
        }
    }

    return nullptr;
}

string _Logic::Terms::InterpolationTheorem(string text)
{
    string model = "llama3";
    string definition = "A result stating that if a formula A -> B is provable, then there exists a formula C containing only the non-logical symbols common to A and B such that A -> C and C -> B are both provable.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Interpolation Theorem";
        }
    }

    return nullptr;
}

string _Logic::Terms::Interpretation(string text)
{
    string model = "llama3";
    string definition = "The assignment of meanings to the symbols and expressions of a formal language, or the way a particular set of terms is understood or construed.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Logic::Terms::Interrogative(string text)
{
    string model = "llama3";
    string definition = "Pertaining to questions or the act of questioning.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Interrogative";
        }
    }

    return nullptr;
}

string _Logic::Terms::InterrogativeLogic(string text)
{
    string model = "llama3";
    string definition = "See erotetic logic.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "InterrogativeLogic";
        }
    }

    return nullptr;
}

string _Logic::Terms::IntroductionRule(string text)
{
    string model = "llama3";
    string definition = "In logic, a rule that allows for the introduction of a connective into a proof, defining how that connective can be logically inferred.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "IntroductionRule";
        }
    }

    return nullptr;
}

string _Logic::Terms::Intuitionism(string text)
{
    string model = "llama3";
    string definition = "A philosophy of mathematics that denies the reality of the mathematical infinite and the completeness of mathematical truth, requiring constructive proofs.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Intuitionism";
        }
    }

    return nullptr;
}

string _Logic::Terms::IntuitionisticLogic(string text)
{
    string model = "llama3";
    string definition = "A system of logic that reflects the principles of intuitionism, rejecting the law of excluded middle and requiring more constructive proofs of existence.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Intuitionistic Logic";
        }
    }

    return nullptr;
}

string _Logic::Terms::IntuitionisticMathematics(string text)
{
    string model = "llama3";
    string definition = "Mathematics based on intuitionistic logic, emphasizing constructive methods and rejecting non-constructive principles like the law of excluded middle.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Intuitionistic Mathematics";
        }
    }

    return nullptr;
}

string _Logic::Terms::Invalid(string text)
{
    string model = "llama3";
    string definition = "Referring to an argument whose conclusion does not logically follow from its premises.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Invalid";
        }
    }

    return nullptr;
}

string _Logic::Terms::InvalidDeductiveArgument(string text)
{
    string model = "llama3";
    string definition = "A deductive argument that fails to provide conclusive support for its conclusion, due to a flaw in logical structure.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Invalid Deductive Argument";
        }
    }

    return nullptr;
}

string _Logic::Terms::Inverse(string text)
{
    string model = "llama3";
    string definition = "A operation or function that reverses the effect of another operation or function.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Inverse";
        }
    }

    return nullptr;
}

string _Logic::Terms::Involution(string text)
{
    string model = "llama3";
    string definition = "An operation that is its own inverse, meaning applying it twice returns to the original state.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Involution";
        }
    }

    return nullptr;
}

string _Logic::Terms::IProposition(string text)
{
    string model = "llama3";
    string definition = "In traditional logic, a particular affirmative categorical proposition, stating that some members of the subject class are members of the predicate class.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "I Proposition";
        }
    }

    return nullptr;
}

string _Logic::Terms::Irreflexivity(string text)
{
    string model = "llama3";
    string definition = "A property of a relation where no element is related to itself.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Irreflexivity";
        }
    }

    return nullptr;
}

string _Logic::Terms::IsOfIdentity(string text)
{
    string model = "llama3";
    string definition = "The use of the verb is to denote numerical identity between two entities.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Is of Identity";
        }
    }

    return nullptr;
}

string _Logic::Terms::IsOfPredication(string text)
{
    string model = "llama3";
    string definition = "The use of the verb is to signify that a property or characteristic is attributed to a subject.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Is Of Predication";
        }
    }

    return nullptr;
}

string _Logic::Terms::IslandOfKnightsAndKnaves(string text)
{
    string model = "llama3";
    string definition = "A fictional scenario used in logic puzzles where inhabitants are either knights, who always tell the truth, or knaves, who always lie, posing challenges to deductive reasoning.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Island of Knights And Knaves";
        }
    }

    return nullptr;
}

string _Logic::Terms::Isomorphism(string text)
{
    string model = "llama3";
    string definition = "A bijective (one-to-one and onto) correspondence between two structures that preserves the operations and relations of the structures, indicating they have the same form or structure.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Isomorphism";
        }
    }

    return nullptr;
}

string _Logic::Terms::Iteration(string text)
{
    string model = "llama3";
    string definition = "The process of repeating a set of operations or a procedure multiple times, each time applying it to the result of the previous step.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Logic::Terms::IterationTheorem(string text)
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
            return "Iteration Theorem";
        }
    }

    return nullptr;
}

string _Logic::Terms::JointDenial(string text)
{
    string model = "llama3";
    string definition = "A logical connective in propositional logic, equivalent to the nor operator, that is true if and only if both propositions it connects are false. It denies the joint assertion of both propositions.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Joint Denial";
        }
    }

    return nullptr;
}

string _Logic::Terms::K3(string text)
{
    string model = "llama3";
    string definition = "The three-valued logic, due to Stephen Cole Kleene.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "K3";
        }
    }

    return nullptr;
}

string _Logic::Terms::KleeneConnectives(string text)
{
    string model = "llama3";
    string definition = "Logical connectives defined using Kleene's three-valued logic, which includes a third truth value (undefined or unknown) in addition to true and false, accommodating indeterminate propositions.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Kleene Connectives";
        }
    }

    return nullptr;
}

string _Logic::Terms::Knaves(string text)
{
    string model = "llama3";
    string definition = "In logic puzzles, individuals who always lie. Used in scenarios like the island of knights and knaves to explore logical deduction.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Knaves";
        }
    }

    return nullptr;
}

string _Logic::Terms::Knights(string text)
{
    string model = "llama3";
    string definition = "In logic puzzles, individuals who always tell the truth. They are used alongside knaves in scenarios that challenge deductive reasoning.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Knights";
        }
    }

    return nullptr;
}

string _Logic::Terms::KnowabilityParadox(string text)
{
    string model = "llama3";
    string definition = "A paradox arising from the assumption that if a statement is true, then it is possible to know that it is true, leading to contradictions in certain epistemic frameworks.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Knowability Paradox";
        }
    }

    return nullptr;
}

string _Logic::Terms::KnowersParadox(string text)
{
    string model = "llama3";
    string definition = "A paradox related to self-reference and epistemic logic, typically involving a statement that claims its own unprovability or unknowability.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Knowers Paradox";
        }
    }

    return nullptr;
}

string _Logic::Terms::KreiselPutnamLogic(string text)
{
    string model = "llama3";
    string definition = "A logic developed to handle higher-order quantification and modalities, reflecting discussions on the foundations of mathematics by Kreisel and Putnam.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Kreisel Putnam Logic";
        }
    }

    return nullptr;
}

string _Logic::Terms::KripkeSemantics(string text)
{
    string model = "llama3";
    string definition = "A framework for interpreting modal logic through the use of possible worlds, developed by Saul Kripke, allowing for the formal analysis of necessity, possibility, and other modal notions.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Kripke Semantics";
        }
    }

    return nullptr;
}

string _Logic::Terms::KripkeStructure(string text)
{
    string model = "llama3";
    string definition = "A mathematical structure used in modal logic and computer science to model systems that can be in various states and transition between them, forming the basis for Kripke semantics.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Kripke Structure";
        }
    }

    return nullptr;
}

string _Logic::Terms::LamdaCalculus(string text)
{
    string model = "llama3";
    string definition = "A formal system in mathematical logic and computer science for expressing computation based on function abstraction and application, using variable binding and substitution.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Lamda Calculus";
        }
    }

    return nullptr;
}

string _Logic::Terms::LambekCalculus(string text)
{
    string model = "llama3";
    string definition = "A mathematical system for modeling the syntax of natural languages, based on categorial grammar, emphasizing the role of operations and types.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Lambek Calculus";
        }
    }

    return nullptr;
}

string _Logic::Terms::Language(string text)
{
    string model = "llama3";
    string definition = "A system of communication that enables humans to cooperate, express ideas, emotions, and, in the context of formal languages, to construct and convey precise meanings.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Language";
        }
    }

    return nullptr;
}

string _Logic::Terms::LawOfNonContradiction(string text)
{
    string model = "llama3";
    string definition = "A fundamental principle of classical logic stating that contradictory statements cannot both be true in the same sense at the same time.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Law of Non-Contradiction";
        }
    }

    return nullptr;
}

string _Logic::Terms::LeftField(string text)
{
    string model = "llama3";
    string definition = "See domain.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Left Field";
        }
    }

    return nullptr;
}

string _Logic::Terms::LeibnizsLaw(string text)
{
    string model = "llama3";
    string definition = "The principle of the identity of indiscernibles, stating that if two entities share all the same properties, then they are identical.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Leibnizs Law";
        }
    }

    return nullptr;
}

string _Logic::Terms::Lemma(string text)
{
    string model = "llama3";
    string definition = "A proposition proved or assumed to be true, used to prove other propositions or theorems.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Lemma";
        }
    }

    return nullptr;
}

string _Logic::Terms::LiarParadox(string text)
{
    string model = "llama3";
    string definition = "A self-referential paradox involving a statement that declares itself to be false, leading to a contradiction if it is either true or false.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Liar Paradox";
        }
    }

    return nullptr;
}

string _Logic::Terms::LiarSentence(string text)
{
    string model = "llama3";
    string definition = "A sentence that asserts its own falsity, such as 'This sentence is false', which creates the basis for the liar paradox.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Liar Sentence";
        }
    }

    return nullptr;
}

string _Logic::Terms::LimitationResult(string text)
{
    string model = "llama3";
    string definition = "A result that establishes a boundary or limit on what can be achieved within a particular logical or mathematical system, often related to incompleteness or undecidability.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Limitation Result";
        }
    }

    return nullptr;
}

string _Logic::Terms::LinearLogics(string text)
{
    string model = "llama3";
    string definition = "A subfield of logic that emphasizes the concept of resources, where logical operations consume their arguments, differing from classical logic's treatment of assumptions as reusable.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Linear Logics";
        }
    }

    return nullptr;
}

string _Logic::Terms::LinearOrder(string text)
{
    string model = "llama3";
    string definition = "A total order on a set where every pair of elements is comparable, meaning for any two elements, one is either greater than, less than, or equal to the other.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Linear Order";
        }
    }

    return nullptr;
}

string _Logic::Terms::LinearOrdering(string text)
{
    string model = "llama3";
    string definition = "Another term for linear order, emphasizing the arrangement of elements in a sequence where each is comparable to the others in a single, unambiguous way.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Linear Ordering";
        }
    }

    return nullptr;
}

string _Logic::Terms::LobParadox(string text)
{
    string model = "llama3";
    string definition = "A paradox in modal logic that arises from attempting to formalize a statement's provability within the system, leading to conclusions that appear counterintuitive or self-contradictory.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Lob Paradox";
        }
    }

    return nullptr;
}

string _Logic::Terms::LobsTheorem(string text)
{
    string model = "llama3";
    string definition = "A theorem in mathematical logic that provides conditions under which a statement about its own provability is provable, related to Gödel's incompleteness theorems.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Lobs Theorem";
        }
    }

    return nullptr;
}

string _Logic::Terms::Logic(string text)
{
    string model = "llama3";
    string definition = "The systematic study of the form of valid inference, including the structures that allow or compel particular conclusions given certain premises.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Logic";
        }
    }

    return nullptr;
}

string _Logic::Terms::LogicGate(string text)
{
    string model = "llama3";
    string definition = "A physical device implementing a Boolean function, used in digital circuits to perform logical operations on one or more binary inputs to produce a single binary output.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Logic Gate";
        }
    }

    return nullptr;
}

string _Logic::Terms::LogicalMachine(string text)
{
    string model = "llama3";
    string definition = "A mechanical device for performing formal logic such as the Stanhope Demonstrator or Jevon's logic piano.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Logical Machine";
        }
    }

    return nullptr;
}

string _Logic::Terms::LogicOfAttributes(string text)
{
    string model = "llama3";
    string definition = "See monadic first-order logic.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Logic of Attributes";
        }
    }

    return nullptr;
}

string _Logic::Terms::LogicOfConditionals(string text)
{
    string model = "llama3";
    string definition = "See conditional logic.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Logic of Conditionals";
        }
    }

    return nullptr;
}

string _Logic::Terms::LogicOfParadox(string text)
{
    string model = "llama3";
    string definition = "A logical system that allows for some contradictions to be true, challenging the traditional law of non-contradiction and exploring the consequences of paradoxical statements.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Logic of Paradox";
        }
    }

    return nullptr;
}

string _Logic::Terms::LogicOfQuestionsAndAnswers(string text)
{
    string model = "llama3";
    string definition = "See erotetic logic.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Logic of Questions And Answers";
        }
    }

    return nullptr;
}

string _Logic::Terms::LogicOfRelations(string text)
{
    string model = "llama3";
    string definition = "A branch of logic that deals with the study of relations, including their properties, composition, and inversion, and how they interact with logical operators.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Logic Of Relations";
        }
    }

    return nullptr;
}

string _Logic::Terms::LogicOfWeakExcludedMiddle(string text)
{
    string model = "llama3";
    string definition = "An intermediate logic obtained by adding all instances of weak excluded middle to propositional logic.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Logic Of Weak Excluded Middle";
        }
    }

    return nullptr;
}

string _Logic::Terms::LogicalAntirealism(string text)
{
    string model = "llama3";
    string definition = "The philosophical position that logical truths do not correspond to an independent reality but are instead products of human conventions, language, or thought processes.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Logical Antirealism";
        }
    }

    return nullptr;
}

string _Logic::Terms::LogicalConnective(string text)
{
    string model = "llama3";
    string definition = "A symbol or word used in logic to connect propositions or sentences, forming more complex expressions that convey relationships such as conjunction, disjunction, and negation.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Logical Connective";
        }
    }

    return nullptr;
}

string _Logic::Terms::LogicalConsequence(string text)
{
    string model = "llama3";
    string definition = "A relationship between statements where the truth of one or more premises necessitates the truth of a conclusion, based on the logical structure of the statements.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Logical Consequence";
        }
    }

    return nullptr;
}

string _Logic::Terms::LogicalConstant(string text)
{
    string model = "llama3";
    string definition = "A symbol in logic that has the same meaning in all interpretations, such as connectives and quantifiers, as opposed to variables whose interpretations can vary.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Logical Constant";
        }
    }

    return nullptr;
}

string _Logic::Terms::LogicalEquivalence(string text)
{
    string model = "llama3";
    string definition = "The relationship between statements that are true under exactly the same conditions, allowing them to be substituted for one another in logical proofs.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Logic::Terms::LogicalFalsehood(string text)
{
    string model = "llama3";
    string definition = "A statement that is false under all possible interpretations, also known as a contradiction.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Logical Falsehood";
        }
    }

    return nullptr;
}

string _Logic::Terms::LogicalForm(string text)
{
    string model = "llama3";
    string definition = "The abstract structure of a statement or argument, representing the logical relationships between its components independent of the specific content.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Logical Form";
        }
    }

    return nullptr;
}

string _Logic::Terms::LogicalImplication(string text)
{
    string model = "llama3";
    string definition = "The logical relationship that holds between propositions when the truth of one (the antecedent) guarantees the truth of another (the consequent).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Logical Implication";
        }
    }

    return nullptr;
}

string _Logic::Terms::LogicalMonism(string text)
{
    string model = "llama3";
    string definition = "The philosophical position that there is only one correct logic or logical system that accurately captures the principles of valid reasoning.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Logical Monism";
        }
    }

    return nullptr;
}

string _Logic::Terms::LogicalOperator(string text)
{
    string model = "llama3";
    string definition = "A symbol or function in logic that applies to one or more propositions, producing another proposition that expresses a logical operation such as negation, conjunction, or disjunction.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Logical Operator";
        }
    }

    return nullptr;
}

string _Logic::Terms::LogicalParadox(string text)
{
    string model = "llama3";
    string definition = "A statement or group of statements that lead to a contradiction or a situation that defies intuition, often highlighting limitations or problems within the logical system. Sometimes distinguished from semantic paradox.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Logical Paradox";
        }
    }

    return nullptr;
}

string _Logic::Terms::LogicalPluralism(string text)
{
    string model = "llama3";
    string definition = "The view that there are multiple equally correct logics or systems of logic that capture different aspects of reasoning or argumentation.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Logical Pluralism";
        }
    }

    return nullptr;
}

string _Logic::Terms::LogicalStructure(string text)
{
    string model = "llama3";
    string definition = "See logical form.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Logical Structure";
        }
    }

    return nullptr;
}

string _Logic::Terms::LogicalTheorem(string text)
{
    string model = "llama3";
    string definition = "A proposition that has been proven to be true within a specific system of logic, based on the system's axioms and inference rules.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Logical Theorem";
        }
    }

    return nullptr;
}

string _Logic::Terms::LogicalTruth(string text)
{
    string model = "llama3";
    string definition = "A statement that is true in all possible worlds or under all possible interpretations, due to its logical form rather than the content of its terms.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "LogicalTruth";
        }
    }

    return nullptr;
}

string _Logic::Terms::LogicalValidity(string text)
{
    string model = "llama3";
    string definition = "The property of an argument wherein if the premises are true, the conclusion necessarily follows, due to the structure of the argument rather than the specific nature of the premises or conclusion.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Logical Validity";
        }
    }

    return nullptr;
}

string _Logic::Terms::LogicalEquivalent(string text)
{
    string model = "llama3";
    string definition = "Referring to statements that have the same truth value in every possible scenario, indicating that they are interchangeable in logical reasoning.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Logical Equivalent";
        } 
    }

    return nullptr;
}

string _Logic::Terms::Logicism(string text)
{
    string model = "llama3";
    string definition = "The philosophical belief that mathematics can be reduced to logic and that all mathematical truths can be derived from logical axioms and definitions.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Logicism";
        }
    }

    return nullptr;
}

string _Logic::Terms::LowenheimSkolem(string text)
{
    string model = "llama3";
    string definition = "A theorem in mathematical logic that states any countable theory with an infinite model has models of all infinite cardinalities, highlighting the limitations of first-order logic in controlling the sizes of its models.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Lowenheim Skolem";
        }
    }

    return nullptr;
}

string _Logic::Terms::LP(string text)
{
    string model = "llama3";
    string definition = "See Logic of Paradox.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "LP";
        }
    }

    return nullptr;
}

string _Logic::Terms::MainConnective(string text)
{
    string model = "llama3";
    string definition = "See dominant connective.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Main Connective";
        }
    }

    return nullptr;
}

string _Logic::Terms::MainOperator(string text)
{
    string model = "llama3";
    string definition = "See dominant connective.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Main Operator";
        }
    }

    return nullptr;
}

string _Logic::Terms::MajorConnective(string text)
{
    string model = "llama3";
    string definition = "See dominant connective.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Major Connective";
        }
    }

    return nullptr;
}

string _Logic::Terms::MajorPremise(string text)
{
    string model = "llama3";
    string definition = "The premise in a syllogism containing the major term, which is the predicate of the conclusion.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Major Premise";
        }
    }

    return nullptr;
}

string _Logic::Terms::MajorTerm(string text)
{
    string model = "llama3";
    string definition = "The term that appears as the predicate in the conclusion of a syllogism.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Major Term";
        }
    }

    return nullptr;
}

string _Logic::Terms::ManySortedLogic(string text)
{
    string model = "llama3";
    string definition = "A variant of first-order logic that allows for multiple domains of discourse, with variables and quantifiers distinguished by the sort or type of objects they range over.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Many Sorted Logic";
        }
    }

    return nullptr;
}

string _Logic::Terms::ManyValuedLogic(string text)
{
    string model = "llama3";
    string definition = "A logical system that extends beyond classical two-valued true/false logic to include additional truth values, accommodating indeterminacy, uncertainty, or levels of truth.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Many Valued Logic";
        }
    }

    return nullptr;
}

string _Logic::Terms::MarkovsPrinciple(string text)
{
    string model = "llama3";
    string definition = "A principle in constructive mathematics stating that if it is impossible for a mathematical object not to have a certain property, then there exists an object with that property.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "MarkovsPrinciple";
        }
    }

    return nullptr;
}

string _Logic::Terms::MaterialBiconditional(string text)
{
    string model = "llama3";
    string definition = "A logical connective that is true if and only if both operands have the same truth value, also known as the if and only if operator.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Material Biconditional";
        }
    }

    return nullptr;
}

string _Logic::Terms::MaterialConditional(string text)
{
    string model = "llama3";
    string definition = "A logical connective typically represented by if...then..., which is true unless the antecedent is true and the consequent is false.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Material Conditional";
        }
    }

    return nullptr;
}

string _Logic::Terms::MaterialConsequence(string text)
{
    string model = "llama3";
    string definition = "The relationship between statements where the truth of one (the antecedent) results in the truth of another (the consequent), based on the content of the statements rather than their logical form.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Material Consequence";
        }
    }

    return nullptr;
}

string _Logic::Terms::MaterialEquivalence(string text)
{
    string model = "llama3";
    string definition = "The relation between propositions that hold the same truth value; their truth or falsity under all possible conditions is identical.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Material Equivalence";
        }
    }

    return nullptr;
}

string _Logic::Terms::MaterialImplication(string text)
{
    string model = "llama3";
    string definition = "Another term for material conditional, emphasizing the implication based on the substantive content of the propositions involved.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Material Implication";
        }
    }

    return nullptr;
}

string _Logic::Terms::MateriallyEquivalent(string text)
{
    string model = "llama3";
    string definition = "Describing propositions that are true under exactly the same conditions or have the same truth value across all possible worlds.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Materially Equivalent";
        }
    }

    return nullptr;
}

string _Logic::Terms::MathematicalAbstractionism(string text)
{
    string model = "llama3";
    string definition = "A philosophical stance that views mathematical entities as abstractions from physical objects or properties, rather than as inherently existing objects.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Mathematical Abstractionism";
        }
    }

    return nullptr;
}

string _Logic::Terms::MathematicalInduction(string text)
{
    string model = "llama3";
    string definition = "A method of proof used in mathematics to prove statements about natural numbers, based on proving a base case and an inductive step.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Mathematical Induction";
        }
    }

    return nullptr;
}

string _Logic::Terms::MathematicalInductionSchema(string text)
{
    string model = "llama3";
    string definition = "Synonym of mathematical induction.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Mathematical Induction Schema";
        }
    }

    return nullptr;
}

string _Logic::Terms::MathematicalLogic(string text)
{
    string model = "llama3";
    string definition = "The study of logic within the framework of mathematical reasoning, focusing on the mathematical properties of logical systems.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Mathematical Logic";
        }
    }

    return nullptr;
}

string _Logic::Terms::Matrix(string text)
{
    string model = "llama3";
    string definition = "The quantifier-free part of a formula in prenex normal form.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Logic::Terms::MaximalConsistentSet(string text)
{
    string model = "llama3";
    string definition = "A set of formulas in a logical system that is consistent (no contradictions can be derived from it) and maximal (no additional formulas can be added without causing inconsistency).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Maximal Consistent Set";
        }
    }

    return nullptr;
}

string _Logic::Terms::Meinogianism(string text)
{
    string model = "llama3";
    string definition = "A philosophical theory that posits the existence of non-existent objects, named after Alexius Meinong, challenging traditional ontological categories.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Meinogianism";
        }
    }

    return nullptr;
}

string _Logic::Terms::Mention(string text)
{
    string model = "llama3";
    string definition = "In philosophy, especially in discussions of language, mention involves referencing a word or phrase itself rather than employing it for its semantic content. This typically occurs when discussing the word as a linguistic entity. In the use-mention distinction, mention is signified by the use of quotation marks or other indicators that the words are subjects of discussion rather than tools for communication. For example, in the sentence The word 'books' consists of five letters, books is mentioned, not used.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Mention";
        }
    }

    return nullptr;
}

string _Logic::Terms::MerePossibilia(string text)
{
    string model = "llama3";
    string definition = "Hypothetical or possible entities that do not actually exist but could exist under different circumstances.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Mere Possibilia";
        }
    }

    return nullptr;
}

string _Logic::Terms::Metalanguage(string text)
{
    string model = "llama3";
    string definition = "A language used to describe, discuss, or analyze another language (the object language), especially in the context of logic and linguistics.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Metalanguage";
        }
    }

    return nullptr;
}

string _Logic::Terms::Metalogic(string text)
{
    string model = "llama3";
    string definition = "The study of the properties of logical systems and languages, including their consistency, completeness, and decidability.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Metalogic";
        }
    }

    return nullptr;
}

string _Logic::Terms::Metamathematics(string text)
{
    string model = "llama3";
    string definition = "The branch of mathematics that studies mathematical systems and theories from a higher-level perspective, often using methods from mathematical logic.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Metamathematics";
        }
    }

    return nullptr;
}

string _Logic::Terms::Metatheorem(string text)
{
    string model = "llama3";
    string definition = "A theorem about a mathematical theory or logical system, stating properties or results about the system itself.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Metatheorem";
        }
    }

    return nullptr;
}

string _Logic::Terms::Metatheory(string text)
{
    string model = "llama3";
    string definition = "The theoretical analysis of mathematical theories or logical systems, focusing on their properties, structure, and foundations.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Metatheory";
        }
    }

    return nullptr;
}

string _Logic::Terms::MiddleTerm(string text)
{
    string model = "llama3";
    string definition = "In a syllogism, the term that appears in both premises but not in the conclusion, serving as a link between the major and minor terms.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Middle Term";
        }
    }

    return nullptr;
}

string _Logic::Terms::Minimalism(string text)
{
    string model = "llama3";
    string definition = "A deflationist view of truth, according to which all instances of Tarski's T-schema are trivially (or analytically) true.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Minimalism";
        }
    }

    return nullptr;
}

string _Logic::Terms::Minimization(string text)
{
    string model = "llama3";
    string definition = "In recursive function theory, the operation of searching for the smallest witness to a decidable predicate.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Minimization";
        }
    }

    return nullptr;
}

string _Logic::Terms::MinorPremise(string text)
{
    string model = "llama3";
    string definition = "The premise in a syllogism that includes the minor term, which is the subject of the conclusion.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Minor Premise";
        }
    }

    return nullptr;
}

string _Logic::Terms::MinorTerm(string text)
{
    string model = "llama3";
    string definition = "The term that appears as the subject in the conclusion of a syllogism.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Minor Term";
        }
    }

    return nullptr;
}

string _Logic::Terms::ModalActualism(string text)
{
    string model = "llama3";
    string definition = "The philosophical position that only actual, existing objects are possible, denying the existence of merely possible objects.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Modal Actualism";
        }
    }

    return nullptr;
}

string _Logic::Terms::ModalAgnosticism(string text)
{
    string model = "llama3";
    string definition = "A stance of neutrality or skepticism regarding the truth of modal propositions, especially concerning necessity and possibility.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Modal Agnosticism";
        }
    }

    return nullptr;
}

string _Logic::Terms::ModalFictionalism(string text)
{
    string model = "llama3";
    string definition = "The view that modal statements (about possibility and necessity) can be treated as useful fictions without committing to the existence of possible worlds.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Modal Fictionalism";
        }
    }

    return nullptr;
}

string _Logic::Terms::ModalLogic(string text)
{
    string model = "llama3";
    string definition = "A branch of logic that deals with modalities such as necessity, possibility, and related concepts, often formalized through the use of modal operators.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Modal Logic";
        }
    }

    return nullptr;
}

string _Logic::Terms::ModalOperator(string text)
{
    string model = "llama3";
    string definition = "A logical operator that modifies the truth value of a statement by expressing modality";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Modal Operator";
        }
    }

    return nullptr;
}

string _Logic::Terms::ModalPossibilism(string text)
{
    string model = "llama3";
    string definition = "The view that possible but non-actual entities exist in some sense or in possible worlds, in contrast to actualism.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Modal Possibilism";
        }
    }

    return nullptr;
}

string _Logic::Terms::ModalRealism(string text)
{
    string model = "llama3";
    string definition = "The philosophical position that possible worlds are as real as the actual world, and that individuals can exist across different possible worlds.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Modal Realism";
        }
    }

    return nullptr;
}

string _Logic::Terms::Madality(string text)
{
    string model = "llama3";
    string definition = "A quality of propositions that expresses mode or manner, particularly in terms of necessity, possibility, and other related concepts.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Madality";
        }
    }

    return nullptr;
}

string _Logic::Terms::Model(string text)
{
    string model = "llama3";
    string definition = "In logic and mathematics, a structure that interprets the symbols of a language and satisfies the statements of a theory or system.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Model";
        }
    }

    return nullptr;
}

string _Logic::Terms::ModelTheoreticConsequence(string text)
{
    string model = "llama3";
    string definition = "See semantic consequence.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Model Theoretic Consequence";
        }
    }

    return nullptr;
}

string _Logic::Terms::ModelTheoreticValidity(string text)
{
    string model = "llama3";
    string definition = "See semantic validity.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Model Theoretic Validity";
        }
    }

    return nullptr;
}

string _Logic::Terms::ModalTheory(string text)
{
    string model = "llama3";
    string definition = "The branch of mathematical logic that studies the relationship between formal languages and their interpretations or models.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Modal Theory";
        }
    }

    return nullptr;
}

string _Logic::Terms::ModusPonens(string text)
{
    string model = "llama3";
    string definition = "A rule of inference that allows one to derive a conclusion from a conditional statement and its antecedent";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Logic::Terms::ModusTollens(string text)
{
    string model = "llama3";
    string definition = "A rule of inference that allows one to derive a conclusion from a conditional statement and the negation of its consequent";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Logic::Terms::Molecule(string text)
{
    string model = "llama3";
    string definition = "In logic and philosophy, often used metaphorically to refer to a compound entity or concept that is made up of simpler, atomic parts.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Logic::Terms::MonadicFirstOrderLogic(string text)
{
    string model = "llama3";
    string definition = "A variant of first-order logic restricted to predicates that take only one argument, focusing on properties of individual objects rather than relations between them.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Monadic First Order Logic";
        }
    }

    return nullptr;
}

string _Logic::Terms::MonadicFunction(string text)
{
    string model = "llama3";
    string definition = "See unary function.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Monadic Function";
        }
    }

    return nullptr;
}

string _Logic::Terms::MonadicPredicate(string text)
{
    string model = "llama3";
    string definition = "A predicate that takes a single argument, used to express properties of objects or entities within a domain of discourse.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Monadic Predicate";
        }
    }

    return nullptr;
}

string _Logic::Terms::MonadicPredicateLogic(string text)
{
    string model = "llama3";
    string definition = "First-order logic with predicates that only take one argument, allowing for the expression of properties of individuals.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Monadic Predicate Logic";
        }
    }

    return nullptr;
}

string _Logic::Terms::MonadicRelation(string text)
{
    string model = "llama3";
    string definition = "See unary relation.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Monadic Relation";
        }
    }

    return nullptr;
}

string _Logic::Terms::Monism(string text)
{
    string model = "llama3";
    string definition = "See logical monism.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Monism";
        }
    }

    return nullptr;
}

string _Logic::Terms::Monomorphism(string text)
{
    string model = "llama3";
    string definition = "A morphism in category theory that is left-cancellable, meaning if two compositions with it are equal, then the other morphisms must be equal, akin to an injective function in set theory.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Monomorphism";
        }
    }

    return nullptr;
}

string _Logic::Terms::MonotonicLogic(string text)
{
    string model = "llama3";
    string definition = "A type of logic in which adding new premises to a set does not decrease the set of conclusions that can be derived, ensuring that conclusions are preserved under the addition of new information.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Monotonic Logic";
        }
    }

    return nullptr;
}

string _Logic::Terms::Monotonicity(string text)
{
    string model = "llama3";
    string definition = "The property of a function or process that preserves order, in logic, referring to systems where conclusions derived from a set of premises are not invalidated by adding more premises.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Monotonicity";
        }
    }

    return nullptr;
}

string _Logic::Terms::Mood(string text)
{
    string model = "llama3";
    string definition = "See syllogistic mood.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Mood";
        }
    }

    return nullptr;
}

string _Logic::Terms::MultiModalLogic(string text)
{
    string model = "llama3";
    string definition = "A system of modal logic that incorporates more than one kind of modality, such as necessity, possibility, knowledge, and belief.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "MultiModal Logic";
        }
    }

    return nullptr;
}

string _Logic::Terms::MultivalentLogic(string text)
{
    string model = "llama3";
    string definition = "Another term for many-valued logic, emphasizing the presence of more than two truth values beyond the classical true and false.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Multivalent Logic";
        }
    }

    return nullptr;
}

string _Logic::Terms::MutallyExclusive(string text)
{
    string model = "llama3";
    string definition = "Referring to events or propositions that cannot both occur or be true at the same time, indicating a logical or statistical relationship of exclusion.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Mutally Exclusive";
        }
    }

    return nullptr;
}

string _Logic::Terms::NAND(string text)
{
    string model = "llama3";
    string definition = "A logical operation meaning not and; it produces a true result for all input combinations except the case where all inputs are true. It is a fundamental operation since any logical function can be constructed using only NAND operations.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "NAND";
        }
    }

    return nullptr;
}

string _Logic::Terms::NaryFunction(string text)
{
    string model = "llama3";
    string definition = "A function that takes n arguments, where n is a natural number, generalizing the concept of binary functions to functions of any arity.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Nary Function";
        }
    }

    return nullptr;
}

string _Logic::Terms::NaryRelation(string text)
{
    string model = "llama3";
    string definition = "A relation that involves n elements, where n is a natural number, extending the concept of binary relations to relations between more than two entities.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Nary Relation";
        }
    }

    return nullptr;
}

string _Logic::Terms::NaturalDeduction(string text)
{
    string model = "llama3";
    string definition = "A system of logical inference that attempts to mirror the intuitive ways humans reason, consisting of a set of inference rules for introducing and eliminating logical connectives.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Natural Deduction";
        }
    }

    return nullptr;
}

string _Logic::Terms::NaturalLanguage(string text)
{
    string model = "llama3";
    string definition = "A language that has developed naturally in human societies as a means of communication, as opposed to artificial or constructed languages.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Natural Language";
        }
    }

    return nullptr;
}

string _Logic::Terms::NaturalNumbers(string text)
{
    string model = "llama3";
    string definition = "The set of positive integers, and typically including zero. Used as the basis for counting and ordering.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "NaturalNumbers";
        }
    }

    return nullptr;
}

string _Logic::Terms::NecessaryCondition(string text)
{
    string model = "llama3";
    string definition = "A condition that must be satisfied for a statement to be true but is not sufficient on its own to guarantee the statement's truth.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "NecessaryCondition";
        }
    }

    return nullptr;
}

string _Logic::Terms::NecessitationRule(string text)
{
    string model = "llama3";
    string definition = "In modal logic, a rule stating that if a proposition is a theorem, then its necessity is also a theorem.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "NecessitationRule";
        }
    }

    return nullptr;
}

string _Logic::Terms::Necessity(string text)
{
    string model = "llama3";
    string definition = "A modal quality indicating that a proposition is true in all possible worlds or under all possible circumstances.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Necessity";
        }
    }

    return nullptr;
}

string _Logic::Terms::NecessityOfIdentity(string text)
{
    string model = "llama3";
    string definition = "The principle stating that if two objects are identical, they are necessarily identical in all possible worlds.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Logic::Terms::Negation(string text)
{
    string model = "llama3";
    string definition = "A logical operation that inverts the truth value of a proposition; it turns a true statement into a false one and vice versa.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Logic::Terms::NegationCompleteness(string text)
{
    string model = "llama3";
    string definition = "The property of a logical system where every statement or its negation is provable within the system.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "NegationCompleteness";
        }
    }

    return nullptr;
}

string _Logic::Terms::NegationConsistency(string text)
{
    string model = "llama3";
    string definition = "The consistency of a logical system in which no statement is both provable and disprovable, including its negation.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "NegationConsistency";
        }
    }

    return nullptr;
}

string _Logic::Terms::NegationElimination(string text)
{
    string model = "llama3";
    string definition = "A rule in natural deduction that allows the derivation of a conclusion by eliminating a negation, under certain conditions.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "NegationElimination";
        }
    }

    return nullptr;
}

string _Logic::Terms::NegationIntroduction(string text)
{
    string model = "llama3";
    string definition = "A rule in natural deduction that allows for the introduction of negation into a proof, typically by deriving a contradiction from the assumption that the negation is false.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "NegationIntroduction";
        }
    }

    return nullptr;
}

string _Logic::Terms::NegationNormalForm(string text)
{
    string model = "llama3";
    string definition = "A way of expressing logical formulas where negation is only applied directly to atomic propositions, and the only other allowed connectives are conjunction and disjunction.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "NegationNormalForm";
        }
    }

    return nullptr;
}

string _Logic::Terms::NegativeProposition(string text)
{
    string model = "llama3";
    string definition = "A proposition that asserts the non-existence or absence of something, or denies some property of an object.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "NegativeProposition";
        }
    }

    return nullptr;
}

string _Logic::Terms::NeoFregeanism(string text)
{
    string model = "llama3";
    string definition = "A philosophical stance revisiting Frege's logicism with the aim of grounding mathematics, particularly arithmetic and analysis, in logic through the use of Hume's Principle and other axioms.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "NeoFregeanism";
        }
    }

    return nullptr;
}

string _Logic::Terms::NeoLogicism(string text)
{
    string model = "llama3";
    string definition = "A movement in the philosophy of mathematics seeking to revive logicism, the project of founding mathematics on logic, through new insights and approaches, particularly in the wake of criticisms of traditional logicism.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "NeoLogicism";
        }
    }

    return nullptr;
}

string _Logic::Terms::NewFoundations(string text)
{
    string model = "llama3";
    string definition = "A system of set theory proposed by W.V. Quine with a distinctive axiom schema intended to avoid the paradoxes of naïve set theory while allowing a universal set.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "NewFoundations";
        }
    }

    return nullptr;
}

string _Logic::Terms::Nominalism(string text)
{
    string model = "llama3";
    string definition = "The philosophical view that abstract concepts, general terms, or universals have no independent existence but exist only as names or labels for groups of individual objects.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Nominalism";
        }
    }

    return nullptr;
}

string _Logic::Terms::NonAlethicModalLogic(string text)
{
    string model = "llama3";
    string definition = "A form of modal logic that deals with modes of truth beyond the alethic modes of necessity and possibility, such as deontic (duty and permission) or epistemic (knowledge and belief) modalities.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "NonAlethicModalLogic";
        }
    }

    return nullptr;
}

string _Logic::Terms::NonClassicalLogic(string text)
{
    string model = "llama3";
    string definition = "Any logical system that diverges from the principles of classical logic, including intuitionistic logic, many-valued logics, modal logics, and others that challenge classical assumptions or introduce new principles.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "NonClassicalLogic";
        }
    }

    return nullptr;
}

string _Logic::Terms::NonCommutativeLogic(string text)
{
    string model = "llama3";
    string definition = "A logical system in which the order of application of operations affects the outcome, contrasting with classical logic where operations like conjunction and disjunction are commutative.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "NonCommutativeLogic";
        }
    }

    return nullptr;
}

string _Logic::Terms::NonDeterministicPolynomialTime(string text)
{
    string model = "llama3";
    string definition = "The complexity class NP, consisting of decision problems for which a 'yes' answer can be verified by a deterministic Turing machine in polynomial time, given the correct certificate or witness.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "NonDeterministicPolynomialTime";
        }
    }

    return nullptr;
}

string _Logic::Terms::NonDeterministicTuringMachine(string text)
{
    string model = "llama3";
    string definition = "A theoretical model of computation that, at each step, can make a 'choice' from multiple possibilities, allowing it to explore many possible branches of execution simultaneously.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "NonDeterministicTuringMachine";
        }
    }

    return nullptr;
}

string _Logic::Terms::NonStandardLogic(string text)
{
    string model = "llama3";
    string definition = "Logics that diverge from or extend classical logic, including non-classical logics, many-valued logics, and modal logics, among others. Also called non-classical logics.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "NonStandardLogic";
        }
    }

    return nullptr;
}

string _Logic::Terms::NonStandardModel(string text)
{
    string model = "llama3";
    string definition = "A model of a theory that satisfies the axioms of the theory but has properties not intended by the original formulation, often revealing the theory's consistency or independence results.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "NonStandardModel";
        }
    }

    return nullptr;
}

string _Logic::Terms::NormalForm(string text)
{
    string model = "llama3";
    string definition = "In logic, a standardized way of expressing logical formulas, such as conjunctive normal form (CNF) or disjunctive normal form (DNF), to facilitate analysis or computation.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "NormalForm";
        }
    }

    return nullptr;
}

string _Logic::Terms::NormalModalLogic(string text)
{
    string model = "llama3";
    string definition = "A class of modal logics that include the necessitation rule and the distribution axiom, allowing for the derivation of necessary truths from given axioms and rules of inference.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "NormalModalLogic";
        }
    }

    return nullptr;
}

string _Logic::Terms::NP(string text)
{
    string model = "llama3";
    string definition = "A complexity class (nondeterministic polynomial time) that includes decision problems for which a 'yes' answer can be verified in polynomial time by a deterministic Turing machine.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Logic::Terms::NPComplete(string text)
{
    string model = "llama3";
    string definition = "A class of decision problems in NP for which any problem in NP can be reduced to it in polynomial time, and whose solution can be verified in polynomial time; considered among the hardest problems in NP.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "NPComplete";
        }
    }

    return nullptr;
}

string _Logic::Terms::NumericalQuantifier(string text)
{
    string model = "llama3";
    string definition = "A quantifier that specifies the exact number of instances for which a predicate holds within a domain of discourse, such as 'exactly three', 'at least five'.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "NumericalQuantifier";
        }
    }

    return nullptr;
}

string _Logic::Terms::ObjectLanguage(string text)
{
    string model = "llama3";
    string definition = "The language that is being studied, analyzed, or used to construct statements in a logical system, as opposed to the metalanguage used to talk about the object language.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "ObjectLanguage";
        }
    }

    return nullptr;
}

string _Logic::Terms::ObjectualQuantifier(string text)
{
    string model = "llama3";
    string definition = "A type of quantifier in formal logic that quantifies over objects in the domain of discourse, as opposed to substituting variables with constants or other expressions.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "ObjectualQuantifier";
        }
    }

    return nullptr;
}

string _Logic::Terms::Obverse(string text)
{
    string model = "llama3";
    string definition = "In traditional logic, the process of negating the predicate of a categorical proposition and changing its quality (affirmative to negative, or vice versa) without altering its truth value.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Obverse";
        }
    }

    return nullptr;
}

string _Logic::Terms::Obversion(string text)
{
    string model = "llama3";
    string definition = "The operation of forming the obverse of a categorical proposition, resulting in an equivalent statement with a negated predicate and opposite quality.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Obversion";
        }
    }

    return nullptr;
}

string _Logic::Terms::OneToOne(string text)
{
    string model = "llama3";
    string definition = "A function or mapping from one set to another where each element of the first set is associated with a unique element of the second set; also known as injective.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "OneToOne";
        }
    }

    return nullptr;
}

string _Logic::Terms::OmticVagueness(string text)
{
    string model = "llama3";
    string definition = "Vagueness inherent in the nature of reality itself, as opposed to semantic or epistemic vagueness which relate to language or knowledge, respectively. See also in rebus vagueness.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "OmticVagueness";
        }
    }

    return nullptr;
}

string _Logic::Terms::Onto(string text)
{
    string model = "llama3";
    string definition = "A function or mapping from one set to another where every element of the second set is associated with at least one element of the first set; also known as surjective.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Onto";
        }
    }

    return nullptr;
}

string _Logic::Terms::OpenFormula(string text)
{
    string model = "llama3";
    string definition = "A formula in a formal language that contains free variables, meaning it cannot be determined as true or false until the variables are bound or specified.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "OpenFormula";
        }
    }

    return nullptr;
}

string _Logic::Terms::OpenPair(string text)
{
    string model = "llama3";
    string definition = "A paradox about a pair of statements that deny each other.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "OpenPair";
        }
    }

    return nullptr;
}

string _Logic::Terms::OpenTerm(string text)
{
    string model = "llama3";
    string definition = "An expression in a formal language that contains free variables, which does not denote a specific object or truth value until the variables are instantiated.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "OpenTerm";
        }
    }

    return nullptr;
}

string _Logic::Terms::OProposition(string text)
{
    string model = "llama3";
    string definition = "In traditional logic, a particular negative categorical proposition, stating that some members of the subject class are not members of the predicate class.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "O Proposition";
        }
    }

    return nullptr;
}

string _Logic::Terms::Or(string text)
{
    string model = "llama3";
    string definition = "A logical connective (disjunction) that links propositions in a way that the compound proposition is true if at least one of the linked propositions is true.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "OR";
        }
    }

    return nullptr;
}

string _Logic::Terms::OrderedLogic(string text)
{
    string model = "llama3";
    string definition = "A logic without weakening and permutation.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "OrderedLogic";
        }
    }

    return nullptr;
}

string _Logic::Terms::OrderedNTuple(string text)
{
    string model = "llama3";
    string definition = "A sequence of elements in which the order of the elements matters, generalizing the concept of an ordered pair to sequences of any length.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "OrderedNTuple";
        }
    }

    return nullptr;
}

string _Logic::Terms::OrderedPair(string text)
{
    string model = "llama3";
    string definition = "A fundamental structure in mathematics and logic that consists of two elements arranged in a specific order, typically represented as (a, b).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "OrderedPair";
        }
    }

    return nullptr;
}

string _Logic::Terms::OstensiveDefinition(string text)
{
    string model = "llama3";
    string definition = "A definition that explains the meaning of a term or symbol by pointing to examples and counterexamples of the concept it represents.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "OstensiveDefinition";
        }
    }

    return nullptr;
}

string _Logic::Terms::PairingFunction(string text)
{
    string model = "llama3";
    string definition = "A function that uniquely associates pairs of numbers with a single number, allowing pairs to be encoded as single values.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "PairingFunction";
        }
    }

    return nullptr;
}

string _Logic::Terms::ParaconsistentLogic(string text)
{
    string model = "llama3";
    string definition = "A non-classical logic that allows for contradictions to exist without deriving absurdity, useful in modeling inconsistent but non-trivial systems.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "ParaconsistentLogic";
        }
    }

    return nullptr;
}

string _Logic::Terms::Paradox(string text)
{
    string model = "llama3";
    string definition = "A statement or situation that contradicts itself or defies intuition, often challenging existing understandings of logic and truth.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Paradox";
        }
    }

    return nullptr;
}

string _Logic::Terms::ParadoxesOfMaterialImplication(string text)
{
    string model = "llama3";
    string definition = "Paradoxes that arise from the counterintuitive consequences of the material conditional, especially when the antecedent is false or when there is no causal or necessary connection between the antecedent and consequent.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "ParadoxesOfMaterialImplication";
        }
    }

    return nullptr;
}

string _Logic::Terms::Parameter(string text)
{
    string model = "llama3";
    string definition = "A parameter is an expression whose referent is assumed to be fixed relative to a particular situation, but whose value can vary across situations.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Logic::Terms::PartialLogic(string text)
{
    string model = "llama3";
    string definition = "A logical system that allows for statements that are neither true nor false, accommodating undefined terms or indeterminate truth values.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "PartialLogic";
        }
    }

    return nullptr;
}

string _Logic::Terms::ParticularProposition(string text)
{
    string model = "llama3";
    string definition = "In traditional logic, a proposition that asserts something about some members of a class, as opposed to all members.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "ParticularProposition";
        }
    }

    return nullptr;
}

string _Logic::Terms::PeanoArithmetic(string text)
{
    string model = "llama3";
    string definition = "A formal system for arithmetic based on axioms proposed by Giuseppe Peano, foundational for the theory of natural numbers.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "PeanoArithmetic";
        }
    }

    return nullptr;
}

string _Logic::Terms::PeircesLaw(string text)
{
    string model = "llama3";
    string definition = "valid in classical but not in intuitionistic logic, named after Charles Sanders Peirce.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "PeircesLaw";
        }
    }

    return nullptr;
}

string _Logic::Terms::Permutation(string text)
{
    string model = "llama3";
    string definition = "The structural rule that allows one to exchange two formulas that are on the same side of the arrow.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Logic::Terms::PermutationInvariant(string text)
{
    string model = "llama3";
    string definition = "A property of a function or relation that remains unchanged when the elements of its arguments are permuted.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "PermutationInvariant";
        }
    }

    return nullptr;
}

string _Logic::Terms::PersuasiveDefinition(string text)
{
    string model = "llama3";
    string definition = "A definition intended to influence attitudes or stir emotions by embedding an evaluative component, often used in ethical or political arguments.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "PersuasiveDefinition";
        }
    }

    return nullptr;
}

string _Logic::Terms::PetitioPrincipii(string text)
{
    string model = "llama3";
    string definition = "Also known as begging the question, an informal fallacy where the conclusion of an argument is assumed in one of the premises.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "PetitioPrincipii";
        }
    }

    return nullptr;
}

string _Logic::Terms::PhilonianConditional(string text)
{
    string model = "llama3";
    string definition = "Another term for the material conditional, emphasizing its use in propositional logic to represent if...then... statements without implying a causal relation.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "PhilonianConditional";
        }
    }

    return nullptr;
}

string _Logic::Terms::PhilosophicalLogic(string text)
{
    string model = "llama3";
    string definition = "The study of the more abstract or theoretical aspects of logic, often concerning questions about reference, modality, quantification, and the structure of propositions and arguments.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "PhilosophicalLogic";
        }
    }

    return nullptr;
}

string _Logic::Terms::PhilosophyOfLogic(string text)
{
    string model = "llama3";
    string definition = "A branch of philosophy that examines the nature and scope of logic, including the assumptions, methodologies, and implications of various logical systems.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "PhilosophyOfLogic";
        }
    }

    return nullptr;
}

string _Logic::Terms::Platonism(string text)
{
    string model = "llama3";
    string definition = "In the philosophy of mathematics, the view that abstract mathematical objects exist independently of human thought.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Platonism";
        }
    }

    return nullptr;
}

string _Logic::Terms::PlatosBeard(string text)
{
    string model = "llama3";
    string definition = "A metaphorical expression attributed to Willard Van Orman Quine, referring to the problem of non-existent entities and their properties.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "PlatosBeard";
        }
    }

    return nullptr;
}

string _Logic::Terms::PluralQuantification(string text)
{
    string model = "llama3";
    string definition = "Quantification over multiple objects or entities considered together, extending beyond singular quantification to express statements about sets or groups.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "PluralQuantification";
        }
    }

    return nullptr;
}

string _Logic::Terms::Pluralism(string text)
{
    string model = "llama3";
    string definition = "See logical pluralism.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Pluralism";
        }
    }

    return nullptr;
}

string _Logic::Terms::PolishNotation(string text)
{
    string model = "llama3";
    string definition = "A prefix notation for logic and arithmetic where operators precede their operands, eliminating the need for parentheses to indicate order of operation.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "PolishNotation";
        }
    }

    return nullptr;
}

string _Logic::Terms::PolyadicFirstOrderLogic(string text)
{
    string model = "llama3";
    string definition = "First-order logic extended to include predicates with more than one argument, allowing for the expression of relations between multiple objects.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "PolyadicFirstOrderLogic";
        }
    }

    return nullptr;
}

string _Logic::Terms::Possibility(string text)
{
    string model = "llama3";
    string definition = "A modality indicating that a proposition may be true, even if it is not actually true; the capacity for some state of affairs to occur.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Possibility";
        }
    }

    return nullptr;
}

string _Logic::Terms::PossibleWord(string text)
{
    string model = "llama3";
    string definition = "A hypothetical total way things might have been or could be, used in modal logic to analyze possibility, necessity, and other modal concepts.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "PossibleWord";
        }
    }

    return nullptr;
}

string _Logic::Terms::PostConsistency(string text)
{
    string model = "llama3";
    string definition = "A theory is Post consistent (or absolutely consistent) if and only if there is at least one statement in the language of the theory that is not a theorem; otherwise, it is Post inconsistent.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "PostConsistency";
        }
    }

    return nullptr;
}

string _Logic::Terms::PostHocErgoPropterHoc(string text)
{
    string model = "llama3";
    string definition = "A logical fallacy that assumes that if one event occurs after another, then the first event must be the cause of the second.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "PostHocErgoPropterHoc";
        }
    }

    return nullptr;
}

string _Logic::Terms::Pragmatics(string text)
{
    string model = "llama3";
    string definition = "The study of how context influences the interpretation of meaning in language, beyond the literal meaning of words or the structure of sentences.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Logic::Terms::PredicateFunctor(string text)
{
    string model = "llama3";
    string definition = "In logic, a symbol that represents a function from individuals or tuples of individuals to truth values, essentially a generalization of a predicate.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "PredicateFunctor";
        }
    }

    return nullptr;
}

string _Logic::Terms::PredicateFunctorLogic(string text)
{
    string model = "llama3";
    string definition = "A logical system that combines elements of predicate logic with the concept of functors, allowing for a more expressive representation of properties and relations.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "PredicateFunctorLogic";
        }
    }

    return nullptr;
}

string _Logic::Terms::PredicateTerm(string text)
{
    string model = "llama3";
    string definition = "The second term of a proposition in a syllogism.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "PredicateTerm";
        }
    }

    return nullptr;
}

string _Logic::Terms::PrefixNotation(string text)
{
    string model = "llama3";
    string definition = "A way of writing mathematical and logical expressions where the operator precedes its operands, facilitating unambiguous interpretation without parentheses.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "PrefixNotation";
        }
    }

    return nullptr;
}

string _Logic::Terms::PrelinearityAxiom(string text)
{
    string model = "llama3";
    string definition = "The formula (P -> Q) v (Q -> P).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "PrelinearityAxiom";
        }
    }

    return nullptr;
}

string _Logic::Terms::Premise(string text)
{
    string model = "llama3";
    string definition = "A statement in an argument that provides support or evidence for the conclusion.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Logic::Terms::PrenexNormalForm(string text)
{
    string model = "llama3";
    string definition = "A form of logical expression where all quantifiers are moved to the front, standardizing the structure of first-order logical statements.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "PrenexNormalForm";
        }
    }

    return nullptr;
}

string _Logic::Terms::PrimitiveRecursion(string text)
{
    string model = "llama3";
    string definition = "A form of recursion where a function is defined in terms of itself, using simpler cases, with a base case to stop the recursion.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "PrimitiveRecursion";
        }
    }

    return nullptr;
}

string _Logic::Terms::PrimativeRecursiveFunction(string text)
{
    string model = "llama3";
    string definition = "A function computable by a primitive recursive algorithm, representing a class of functions that can be defined by initial functions and operations of composition and primitive recursion.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "PrimativeRecursiveFunction";
        }
    }

    return nullptr;
}

string _Logic::Terms::PrimativeRecursiveRelation(string text)
{
    string model = "llama3";
    string definition = "A relation that can be defined by primitive recursive functions, characterizing a subset of computable relations.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "PrimativeRecursiveRelation";
        }
    }

    return nullptr;
}

string _Logic::Terms::PrincipalConnective(string text)
{
    string model = "llama3";
    string definition = "See dominant connective.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "PrincipalConnective";
        }
    }

    return nullptr;
}

string _Logic::Terms::ProbabilityCalculus(string text)
{
    string model = "llama3";
    string definition = "The branch of mathematics dealing with probability, including the laws and formulas that govern random variables and events.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "ProbabilityCalculus";
        }
    }

    return nullptr;
}

string _Logic::Terms::ProbabilityLogic(string text)
{
    string model = "llama3";
    string definition = "A logical system that incorporates probabilistic elements to deal with uncertainty, extending classical logic to handle degrees of belief or likelihood.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "ProbabilityLogic";
        }
    }

    return nullptr;
}

string _Logic::Terms::ProbabilityTheory(string text)
{
    string model = "llama3";
    string definition = "The mathematical study of randomness and uncertainty, focusing on the analysis of random variables, events, and processes.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "ProbabilityTheory";
        }
    }

    return nullptr;
}

string _Logic::Terms::Proof(string text)
{
    string model = "llama3";
    string definition = "A logical or mathematical argument that demonstrates the truth of a statement or theorem, based on axioms, definitions, and previously established theorems.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Proof";
        }
    }

    return nullptr;
}

string _Logic::Terms::ProofByCases(string text)
{
    string model = "llama3";
    string definition = "A proof technique that divides the proof into several cases, showing that the statement to be proved holds in each case.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "ProofByCases";
        }
    }

    return nullptr;
}

string _Logic::Terms::ProofByInduction(string text)
{
    string model = "llama3";
    string definition = "A method of mathematical proof used to establish the truth of an infinite number of cases, based on a base case and an inductive step.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "ProofByInduction";
        }
    }

    return nullptr;
}

string _Logic::Terms::ProofTheory(string text)
{
    string model = "llama3";
    string definition = "The branch of mathematical logic that studies the structure and properties of mathematical proofs, aiming to understand and formalize the process of mathematical reasoning.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "ProofTheory";
        }
    }

    return nullptr;
}

string _Logic::Terms::ProofTheoreticConsequence(string text)
{
    string model = "llama3";
    string definition = "See syntactic consequence.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "ProofTheoreticConsequence";
        }
    }

    return nullptr;
}

string _Logic::Terms::ProofTheoreticSemantics(string text)
{
    string model = "llama3";
    string definition = "An alternative to truth-condition semantics (also known as model-theoretic semantics), focusing on proof rather than on truth.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "ProofTheoreticSemantics";
        }
    }

    return nullptr;
}

string _Logic::Terms::ProofTheoreticValidity(string text)
{
    string model = "llama3";
    string definition = "Referring to a valid proof in proof-theoretic semantics.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "ProofTheoreticValidity";
        }
    }

    return nullptr;
}

string _Logic::Terms::Property(string text)
{
    string model = "llama3";
    string definition = "See concept.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Property";
        }
    }

    return nullptr;
}

string _Logic::Terms::Proposition(string text)
{
    string model = "llama3";
    string definition = "A declarative statement that is capable of being true or false, serving as the basic unit of meaning in logic and philosophy.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Proposition";
        }
    }

    return nullptr;
}

string _Logic::Terms::PropositionalAttitude(string text)
{
    string model = "llama3";
    string definition = "A mental state expressed by verbs such as believe, desire, hope, and know, followed by a proposition, reflecting an individual's attitude towards the truth of the proposition.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "PropositionalAttitude";
        }
    }

    return nullptr;
}

string _Logic::Terms::PropositionalConnective(string text)
{
    string model = "llama3";
    string definition = "See logical connective.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "PropositionalConnective";
        }
    }

    return nullptr;
}

string _Logic::Terms::PropositionalFunction(string text)
{
    string model = "llama3";
    string definition = "An expression that becomes a proposition when values are assigned to its variables, essentially a predicate that can take one or more arguments.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "PropositionalFunction";
        }
    }

    return nullptr;
}

string _Logic::Terms::PropositionalLetter(string text)
{
    string model = "llama3";
    string definition = "A variable in propositional logic that represents a specific, undefined proposition, used as a placeholder in logical formulas.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "PropositionalLetter";
        }
    }

    return nullptr;
}

string _Logic::Terms::PropositionalLogic(string text)
{
    string model = "llama3";
    string definition = "The branch of logic that deals with propositions as units and uses propositional connectives to construct complex statements, focusing on the truth-values of propositions.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "PropositionalLogic";
        }
    }

    return nullptr;
}

string _Logic::Terms::Prostential(string text)
{
    string model = "llama3";
    string definition = "Pertaining to the theory that some expressions function as whole propositions rather than referring to objects or describing properties.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Prostential";
        }
    }

    return nullptr;
}

string _Logic::Terms::ProsentenialTheoryOfTruth(string text)
{
    string model = "llama3";
    string definition = "A theory that regards truth as a prosentential operator, simplifying the analysis of truth statements without invoking propositions as entities.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "ProsentenialTheoryOfTruth";
        }
    }

    return nullptr;
}

string _Logic::Terms::ProvabilityLogic(string text)
{
    string model = "llama3";
    string definition = "A branch of modal logic concerned with the properties of provability and modalities that express notions of necessity as provability within a formal system.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "ProvabilityLogic";
        }
    }

    return nullptr;
}

string _Logic::Terms::ProvabilityPredicate(string text)
{
    string model = "llama3";
    string definition = "A predicate, often called Bew, that expresses the concept of a statement being provable within a given formal system.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "ProvabilityPredicate";
        }
    }

    return nullptr;
}

string _Logic::Terms::PseudoModusPonens(string text)
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
            return "PseudoModusPonens";
        }
    }

    return nullptr;
}

string _Logic::Terms::Punctuation(string text)
{
    string model = "llama3";
    string definition = "In logic, refers to parentheses and brackets.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Punctuation";
        }
    }

    return nullptr;
}

string _Logic::Terms::PureFirstOrderLogic(string text)
{
    string model = "llama3";
    string definition = "The system of first-order logic that contains no function symbols or identity, only predicate symbols.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "PureFirstOrderLogic";
        }
    }

    return nullptr;
}

string _Logic::Terms::PurePredicateLogic(string text)
{
    string model = "llama3";
    string definition = "See pure first-order logic.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "PurePredicateLogic";
        }
    }

    return nullptr;
}

string _Logic::Terms::PutnamsModelTheoreticArgument(string text)
{
    string model = "llama3";
    string definition = "An argument by Hilary Putnam challenging the conventional understanding of reference and truth, suggesting that semantic externalism leads to radical skepticism about the meanings of terms and the contents of thoughts.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "PutnamsModelTheoreticArgument";
        }
    }

    return nullptr;
}

string _Logic::Terms::Quality(string text)
{
    string model = "llama3";
    string definition = "Refers to whether a categorical proposition is affirmative or negative.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Quality";
        }
    }

    return nullptr;
}

string _Logic::Terms::QuantifiedModalLogic(string text)
{
    string model = "llama3";
    string definition = "An extension of modal logic that includes quantifiers such as all and some, allowing for expressions involving necessity or possibility applied to individuals or properties quantitatively.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "QuantifiedModalLogic";
        }
    }

    return nullptr;
}

string _Logic::Terms::Quantifier(string text)
{
    string model = "llama3";
    string definition = "A logical operator that specifies the quantity of specimens in the domain of discourse that satisfy an open formula, such as all, some, or exists.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Logic::Terms::QuantifierShiftFallacy(string text)
{
    string model = "llama3";
    string definition = "A logical fallacy involving the incorrect interchange of the position of two quantifiers, or a quantifier and a modal operator, leading to invalid conclusions.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "QuantifierShiftFallacy";
        }
    }

    return nullptr;
}

string _Logic::Terms::Quantity(string text)
{
    string model = "llama3";
    string definition = "Refers to a categorical proposition's being universal or particular.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Quantity";
        }
    }

    return nullptr;
}

string _Logic::Terms::QuantumLogic(string text)
{
    string model = "llama3";
    string definition = "A non-classical logic that attempts to capture the peculiarities of quantum mechanics, challenging traditional logical principles such as the law of excluded middle and distributivity.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "QuantumLogic";
        }
    }

    return nullptr;
}

string _Logic::Terms::QuinesDictum(string text)
{
    string model = "llama3";
    string definition = "The principle that 'To be is to be the value of a variable', emphasizing ontological commitment in terms of quantification and the variables of quantified theory.[";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "QuinesDictum";
        }
    }

    return nullptr;
}

string _Logic::Terms::QuodEratDemonstrandum(string text)
{
    string model = "llama3";
    string definition = "A Latin phrase meaning 'which was to be demonstrated', traditionally used at the end of a mathematical proof or logical argument to signify its completion.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "QuodEratDemonstrandum";
        }
    }

    return nullptr;
}

string _Logic::Terms::Quotation(string text)
{
    string model = "llama3";
    string definition = "The practice of repeating words or text from another source, often indicated in writing by quotation marks. In logic, it involves referring to the expression itself rather than its meaning.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Quotation";
        }
    }

    return nullptr;
}

string _Logic::Terms::RamifiedTheoryOfTypes(string text)
{
    string model = "llama3";
    string definition = "An extension of the simple theory of types that includes a hierarchy of levels, allowing for the distinction between objects and functions at different orders to avoid paradoxes such as Russell's paradox.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "RamifiedTheoryOfTypes";
        }
    }

    return nullptr;
}

string _Logic::Terms::RamseySentence(string text)
{
    string model = "llama3";
    string definition = "A way of expressing the empirical content of a theory by replacing its theoretical terms with existential quantifiers, named after Frank P. Ramsey.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "RamseySentence";
        }
    }

    return nullptr;
}

string _Logic::Terms::RamseyTest(string text)
{
    string model = "llama3";
    string definition = "A criterion for evaluating the acceptability of conditional statements in terms of belief revision: if adding the antecedent to one's stock of beliefs requires adding the consequent for consistency, then the conditional is accepted.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "RamseyTest";
        }
    }

    return nullptr;
}

string _Logic::Terms::Range(string text)
{
    string model = "llama3";
    string definition = "The set of all possible outputs or values that a function can produce, given all possible inputs.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Range";
        }
    }

    return nullptr;
}

string _Logic::Terms::Recursion(string text)
{
    string model = "llama3";
    string definition = "The process of defining something in terms of itself, often used in mathematics and computer science to define functions, sequences, and structures.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Logic::Terms::RecursionTheorem(string text)
{
    string model = "llama3";
    string definition = "Master theorem (analysis of algorithms)";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "RecursionTheorem";
        }
    }

    return nullptr;
}

string _Logic::Terms::RecursionDefinition(string text)
{
    string model = "llama3";
    string definition = "A definition of a function, set, or other mathematical object that is defined in terms of itself, using a base case and a rule for generating subsequent elements.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "RecursionDefinition";
        }
    }

    return nullptr;
}

string _Logic::Terms::RecursiveFunction(string text)
{
    string model = "llama3";
    string definition = "A function that can be computed by a procedure that calls itself, directly or indirectly, with a base case to prevent infinite recursion.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "RecursiveFunction";
        }
    }

    return nullptr;
}

string _Logic::Terms::RecursiveFunctionTheory(string text)
{
    string model = "llama3";
    string definition = "The study of recursive functions and their properties, including their computability and classification into hierarchies of complexity.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "RecursiveFunctionTheory";
        }
    }

    return nullptr;
}

string _Logic::Terms::RecursiveRelation(string text)
{
    string model = "llama3";
    string definition = "A relation defined on a set where the relation is specified in terms of itself, allowing for the construction of complex relational structures from simpler ones.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "RecursiveRelation";
        }
    }

    return nullptr;
}

string _Logic::Terms::RecursivelyAxiomatizableTheory(string text)
{
    string model = "llama3";
    string definition = "A theory for which there exists a recursive set of axioms that can generate all theorems of the theory through logical deduction.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "RecursivelyAxiomatizableTheory";
        }
    }

    return nullptr;
}

string _Logic::Terms::RedHerring(string text)
{
    string model = "llama3";
    string definition = "An informal fallacy or rhetorical strategy that diverts attention from the original issue or argument by introducing an irrelevant topic.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "RedHerring";
        }
    }

    return nullptr;
}

string _Logic::Terms::ReductioAdAbsurdum(string text)
{
    string model = "llama3";
    string definition = "A method of argument that demonstrates the falsity of a statement by showing that it logically leads to a contradiction or absurd conclusion.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "ReductioAdAbsurdum";
        }
    }

    return nullptr;
}

string _Logic::Terms::RedundancyTheoryOfTruth(string text)
{
    string model = "llama3";
    string definition = "A theory of truth that suggests stating that a proposition is true is redundant and does not add anything to the proposition's content.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "RedundancyTheoryOfTruth";
        }
    }

    return nullptr;
}

string _Logic::Terms::Reference(string text)
{
    string model = "llama3";
    string definition = "The relation between words, phrases, or symbols and the objects, concepts, or events they denote or stand for.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Logic::Terms::ReferentialOpacity(string text)
{
    string model = "llama3";
    string definition = "A property of expressions wherein substituting a co-referential term does not necessarily preserve truth, typically occurring in intensional contexts like belief reports.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "ReferentialOpacity";
        }
    }

    return nullptr;
}

string _Logic::Terms::Reflexivity(string text)
{
    string model = "llama3";
    string definition = "The property of a relation where every element is related to itself, such as the equality relation.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Reflexivity";
        }
    }

    return nullptr;
}

string _Logic::Terms::Refutation(string text)
{
    string model = "llama3";
    string definition = "The process of disproving or showing the falseness of a statement, argument, or theory.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Refutation";
        }
    }

    return nullptr;
}

string _Logic::Terms::RegisterComputable(string text)
{
    string model = "llama3";
    string definition = "Computable by a register machine.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "RegisterComputable";
        }
    }

    return nullptr;
}

string _Logic::Terms::RegisterMachine(string text)
{
    string model = "llama3";
    string definition = "A theoretical model of computation that uses a set of registers to store numbers and a program of instructions to perform calculations, serving as an alternative to the Turing machine model.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "RegisterMachine";
        }
    }

    return nullptr;
}

string _Logic::Terms::RelationalSemantics(string text)
{
    string model = "llama3";
    string definition = "An approach to interpreting logical languages where the meaning of sentences is defined in terms of relations between possible worlds or states of affairs, commonly used in modal and temporal logics.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "RelationalSemantics";
        }
    }

    return nullptr;
}

string _Logic::Terms::RelativeConsistencyProof(string text)
{
    string model = "llama3";
    string definition = "A proof showing that if a mathematical system S is consistent, then an extension of S by adding new axioms is also consistent, used to compare the foundational strength of different theories.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "RelativeConsistencyProof";
        }
    }

    return nullptr;
}

string _Logic::Terms::RelevanceLogic(string text)
{
    string model = "llama3";
    string definition = "A non-classical logic that seeks to capture the notion that the premises of a valid argument must be relevant to the conclusion, avoiding paradoxes of material implication.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "RelevanceLogic";
        }
    }

    return nullptr;
}

string _Logic::Terms::Representation(string text)
{
    string model = "llama3";
    string definition = "a unary predicate P represents a set S if, and only if, it is the case that: Px is true if, and only if, x is a member of S.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Representation";
        }
    }

    return nullptr;
}

string _Logic::Terms::ReverseMathematics(string text)
{
    string model = "llama3";
    string definition = "A program in mathematical logic that seeks to determine which axioms are necessary to prove theorems of mathematics by proving theorems from the weakest possible systems.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "ReverseMathematics";
        }
    }

    return nullptr;
}

string _Logic::Terms::RevisionTheoryOfTruth(string text)
{
    string model = "llama3";
    string definition = "A theory proposing a non-classical approach to the concept of truth, suggesting that truth values of propositions can be revised in light of paradoxes, notably the liar paradox.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "RevisionTheoryOfTruth";
        }
    }

    return nullptr;
}

string _Logic::Terms::RigidDesignator(string text)
{
    string model = "llama3";
    string definition = "A term that refers to the same object in all possible worlds where that object exists, used in discussions of necessity and identity across possible worlds.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "RigidDesignator";
        }
    }

    return nullptr;
}

string _Logic::Terms::RobinsonArithmetic(string text)
{
    string model = "llama3";
    string definition = "A fragment of Peano arithmetic that omits the axiom schema of induction, serving as a foundation for arithmetic that is weaker but still expressive.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "RobinsonArithmetic";
        }
    }

    return nullptr;
}

string _Logic::Terms::RossParadox(string text)
{
    string model = "llama3";
    string definition = "A paradox in deontic logic arising from imperatives that imply counterintuitive obligations, demonstrating challenges in formalizing moral and ethical reasoning.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "RossParadox";
        }
    }

    return nullptr;
}

string _Logic::Terms::RuleOfInference(string text)
{
    string model = "llama3";
    string definition = "A logical rule that justifies the transition from a set of premises to a conclusion, forming the basis of deductive reasoning.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "RuleOfInference";
        }
    }

    return nullptr;
}

string _Logic::Terms::RuleOfReplacement(string text)
{
    string model = "llama3";
    string definition = "A rule in formal logic allowing for the substitution of equivalent expressions within logical proofs, maintaining the validity of the argument.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "RuleOfReplacement";
        }
    }

    return nullptr;
}

string _Logic::Terms::SalveVeritate(string text)
{
    string model = "llama3";
    string definition = "A Latin phrase meaning 'with truth unchanged', used in logic and philosophy to indicate a transformation or substitution that preserves the truth value of statements.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "SalveVeritate";
        }
    }

    return nullptr;
}

string _Logic::Terms::Satisfaction(string text)
{
    string model = "llama3";
    string definition = "In model theory, the relation between a structure and a sentence where the structure makes the sentence true, according to the interpretation of the sentence's symbols in that structure.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Satisfaction";
        }
    }

    return nullptr;
}

string _Logic::Terms::Satisfiability(string text)
{
    string model = "llama3";
    string definition = "The property of a logical formula if there exists at least one interpretation under which the formula is true.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Logic::Terms::Schema(string text)
{
    string model = "llama3";
    string definition = "A template or pattern representing a class of similar statements or propositions, often used in the formulation of logical axioms and rules.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Schema";
        }
    }

    return nullptr;
}

string _Logic::Terms::Scope(string text)
{
    string model = "llama3";
    string definition = "The part of a logical formula to which an operator, quantifier, or modifier applies, determining the extent of its operation.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Scope";
        }
    }

    return nullptr;
}

string _Logic::Terms::Scott(string text)
{
    string model = "llama3";
    string definition = "Dana Scott";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Scott";
        }
    }

    return nullptr;
}

string _Logic::Terms::SeaBattle(string text)
{
    string model = "llama3";
    string definition = "See Aristotle's sea battle.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "SeaBattle";
        }
    }

    return nullptr;
}

string _Logic::Terms::SecondOrderLogic(string text)
{
    string model = "llama3";
    string definition = "A logic that extends first-order logic by allowing quantification over predicates and relations, in addition to quantification over individuals.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "SecondOrderLogic";
        }
    }

    return nullptr;
}

string _Logic::Terms::SelfContradictory(string text)
{
    string model = "llama3";
    string definition = "A property of a statement or proposition that contradicts itself, making it impossible to be true.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "SelfContradictory";
        }
    }

    return nullptr;
}

string _Logic::Terms::SelfReference(string text)
{
    string model = "llama3";
    string definition = "The act of referring to oneself or itself, used in discussions of paradoxes, reflexivity, and the foundations of mathematics and logic.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "SelfReference";
        }
    }

    return nullptr;
}

string _Logic::Terms::SematicConceptionOfTruth(string text)
{
    string model = "llama3";
    string definition = "A theory of truth based on the correspondence between statements and facts or states of affairs in the world, emphasizing the role of meaning and interpretation.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "SematicConceptionOfTruth";
        }
    }

    return nullptr;
}

string _Logic::Terms::SemanticConsequence(string text)
{
    string model = "llama3";
    string definition = "The relation that holds between a set of premises and a conclusion formulated within a certain formal language, such that, for this language, there is no possible interpretation that evaluates the premises as true and the conclusion as false.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "SemanticConsequence";
        }
    }

    return nullptr;
}

string _Logic::Terms::SemanticParadox(string text)
{
    string model = "llama3";
    string definition = "A paradox that arises due to some peculiarity of semantic concepts, such as truth, falsity, and definability, as distinguished from logical or set-theoretical concepts. The distinction between semantical and logical paradoxes is controversial and was invented by Ramsey.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "SemanticParadox";
        }
    }

    return nullptr;
}

string _Logic::Terms::SemanticTableau(string text)
{
    string model = "llama3";
    string definition = "A method of proof in logic that uses a tree structure to systematically explore the truth or falsity of logical expressions by breaking them down into simpler components.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "SemanticTableau";
        }
    }

    return nullptr;
}

string _Logic::Terms::SemanticVagueness(string text)
{
    string model = "llama3";
    string definition = "The view that vagueness is a feature of language, rather than of the world or of human knowledge. Contrast in rebus vagueness and epistemic vagueness.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "SemanticVagueness";
        }
    }

    return nullptr;
}

string _Logic::Terms::SemanticValue(string text)
{
    string model = "llama3";
    string definition = "The meaning or content assigned to a linguistic expression in semantics, including truth values for sentences in logical languages.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "SemanticValue";
        }
    }

    return nullptr;
}

string _Logic::Terms::SemanticValidity(string text)
{
    string model = "llama3";
    string definition = "A formula is called semantically valid, or a tautology, if it is true under every interpretation.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "SemanticValidity";
        }
    }

    return nullptr;
}

string _Logic::Terms::SemanticallyClosedLanguage(string text)
{
    string model = "llama3";
    string definition = "A language that contains its own truth predicate, allowing statements about the truth of sentences formulated within the same language.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "SemanticallyClosedLanguage";
        }
    }

    return nullptr;
}

string _Logic::Terms::Semantics(string text)
{
    string model = "llama3";
    string definition = "The study of meaning in language, including the interpretation of words, phrases, sentences, and texts, and the study of the principles that govern the assignment of meanings.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Logic::Terms::SemiDecidableTheory(string text)
{
    string model = "llama3";
    string definition = "A theory for which there exists an algorithm that can enumerate all its theorems, but there may not be an algorithm to decide non-theorems.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "SemiDecidableTheory";
        }
    }

    return nullptr;
}

string _Logic::Terms::Sense(string text)
{
    string model = "llama3";
    string definition = "The aspect of meaning that pertains to the inherent content or connotation of an expression, distinct from its reference or denotation.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Sense";
        }
    }

    return nullptr;
}

string _Logic::Terms::SentenceLetter(string text)
{
    string model = "llama3";
    string definition = "A symbol used in propositional logic to represent an arbitrary proposition, serving as a placeholder in logical formulas.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "SentenceLetter";
        }
    }

    return nullptr;
}

string _Logic::Terms::SententialLogic(string text)
{
    string model = "llama3";
    string definition = "Another term for propositional logic, focusing on the logical relationships between whole sentences or propositions rather than their internal structure.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "SententialLogic";
        }
    }

    return nullptr;
}

string _Logic::Terms::Sequence(string text)
{
    string model = "llama3";
    string definition = "An ordered list of objects or terms, each of which is identified by its position in the list, used in mathematics and logic to define functions, sets, and series.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Logic::Terms::Sequent(string text)
{
    string model = "llama3";
    string definition = "In sequent calculus, a formal representation of a logical deduction, consisting of a sequence of formulas that precede a turnstile and a sequence of formulas that follow it, indicating premises and conclusion.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Sequent";
        }
    }

    return nullptr;
}

string _Logic::Terms::SequentCalculus(string text)
{
    string model = "llama3";
    string definition = "A formal system for deriving logical entailments, representing deductions as sequences of formulas, and emphasizing the structural rules of logical derivation.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "SequentCalculus";
        }
    }

    return nullptr;
}

string _Logic::Terms::Seriality(string text)
{
    string model = "llama3";
    string definition = "The property of a relation where for every element in the domain, there exists an element in the codomain that is related to another element in a specific way, particularly in the context of binary relations and modal logic.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Seriality";
        }
    }

    return nullptr;
}

string _Logic::Terms::S4(string text)
{
    string model = "llama3";
    string definition = "A modal logic system characterized by the axioms that necessitate reflexivity and transitivity for the accessibility relation, implying that if something is necessary, then it is necessarily necessary.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "S4";
        }
    }

    return nullptr;
}

string _Logic::Terms::Sharpening(string text)
{
    string model = "llama3";
    string definition = "The process of making a vague or imprecise concept more precise or clearly defined, often discussed in the context of semantic vagueness.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Sharpening";
        }
    }

    return nullptr;
}

string _Logic::Terms::ShefferStroke(string text)
{
    string model = "llama3";
    string definition = "A logical operation equivalent to the nand (not and) function; it is functionally complete, meaning all other logical operations can be constructed from it.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "ShefferStroke";
        }
    }

    return nullptr;
}

string _Logic::Terms::Signature(string text)
{
    string model = "llama3";
    string definition = "In logic and algebra, a set of symbols along with their arities, defining the kinds of operations, functions, and relations considered in a structure or theory.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Signature";
        }
    }

    return nullptr;
}

string _Logic::Terms::SimpleTypeTheory(string text)
{
    string model = "llama3";
    string definition = "A type theory that divides objects into a simple hierarchy of objects, classes of objects, classes of classes of objects, etc. The adjective simple is used to contrast it with ramified type theory, which further stratifies these simple types into orders.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "SimpleTypeTheory";
        }
    }

    return nullptr;
}

string _Logic::Terms::SingleTurnstile(string text)
{
    string model = "llama3";
    string definition = "A symbol used in logic to denote syntactic entailment, indicating that a formula or set of formulas derives or proves another formula within a formal system.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "SingleTurnstile";
        }
    }

    return nullptr;
}

string _Logic::Terms::SingularProposition(string text)
{
    string model = "llama3";
    string definition = "A proposition that makes a statement about a specific individual or unique object, as opposed to general statements about classes or categories.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "SingularProposition";
        }
    }

    return nullptr;
}

string _Logic::Terms::SingularTerm(string text)
{
    string model = "llama3";
    string definition = "A term in logic that refers to a single object or entity, distinguishing it from general terms that may refer to classes of objects or properties.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "SingularTerm";
        }
    }

    return nullptr;
}

string _Logic::Terms::Situation(string text)
{
    string model = "llama3";
    string definition = "In logic and philosophy, a set of circumstances or a state of affairs to which truth-values of statements are relative, often used in situation semantics.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Situation";
        }
    }

    return nullptr;
}

string _Logic::Terms::SituationSemantics(string text)
{
    string model = "llama3";
    string definition = "An approach to semantics that analyzes meaning in terms of situations, rather than attempting to account for meaning solely in terms of truth conditions at possible worlds.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "SituationSemantics";
        }
    }

    return nullptr;
}

string _Logic::Terms::Skolemization(string text)
{
    string model = "llama3";
    string definition = "A technique in first-order logic for eliminating existential quantifiers by introducing Skolem functions, used in the process of converting formulas to a standard form.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Skolemization";
        }
    }

    return nullptr;
}

string _Logic::Terms::SkolemLowenheimTheorem(string text)
{
    string model = "llama3";
    string definition = "A theorem stating that if a first-order theory has an infinite model, then it has models of every infinite cardinality, highlighting the flexibility of first-order semantics.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "SkolemLowenheimTheorem";
        }
    }

    return nullptr;
}

string _Logic::Terms::SkolemNormalForm(string text)
{
    string model = "llama3";
    string definition = "A way of expressing first-order logic formulas where all existential quantifiers are moved inside and replaced by Skolem functions, leaving only universal quantifiers at the front.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "SkolemNormalForm";
        }
    }

    return nullptr;
}

string _Logic::Terms::SkolemNormalParadox(string text)
{
    string model = "llama3";
    string definition = "The apparent paradox arising from the Skolem-Lowenheim theorem, where countable models can be found for theories that intuitively require uncountably many objects, challenging notions of absolute size in set theory.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "SkolemNormalParadox";
        }
    }

    return nullptr;
}

string _Logic::Terms::SlingshotArgument(string text)
{
    string model = "llama3";
    string definition = "An argument aiming to show that all true statements refer to the same fact or entity, raising questions about the correspondence theory of truth and the nature of facts.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "SlingshotArgument";
        }
    }

    return nullptr;
}

string _Logic::Terms::SlipperySlope(string text)
{
    string model = "llama3";
    string definition = "An informal fallacy or rhetorical argument suggesting that a relatively small first step or minor decision will lead to a chain of related events culminating in a significant (often negative) outcome, without sufficient justification for such inevitability.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "SlipperySlope";
        }
    }

    return nullptr;
}

string _Logic::Terms::SMNTheorem(string text)
{
    string model = "llama3";
    string definition = "A fundamental theorem in the theory of computable functions that provides a method for constructing a specific computable function from a given computable function, highlighting the universality and flexibility of computable functions.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "SMNTheorem";
        }
    }

    return nullptr;
}

string _Logic::Terms::Sophism(string text)
{
    string model = "llama3";
    string definition = "An argument or form of reasoning deemed fallacious, misleading, or deceptive, historically associated with the Sophists in ancient Greece, who were known for their rhetorical skill and relativistic views on truth and morality.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Sophism";
        }
    }

    return nullptr;
}

string _Logic::Terms::Sophisma(string text)
{
    string model = "llama3";
    string definition = "A puzzle or paradoxical question that challenges conventional wisdom or logical reasoning, often used in medieval logic to teach students about logical fallacies and the complexities of language.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Sophisma";
        }
    }

    return nullptr;
}

string _Logic::Terms::SortiesParadox(string text)
{
    string model = "llama3";
    string definition = "A paradox arising from vague predicates and the problem of heap, illustrating how a series of seemingly acceptable premises can lead to a paradoxical or absurd conclusion.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "SortiesParadox";
        }
    }

    return nullptr;
}

string _Logic::Terms::SortiesSeries(string text)
{
    string model = "llama3";
    string definition = "A sequence of propositions associated with the sorites paradox, each adding a small amount to the previous one, challenging the boundary between truth and falsehood for vague concepts.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "SortiesSeries";
        }
    }

    return nullptr;
}

string _Logic::Terms::SoundDeductiveArgument(string text)
{
    string model = "llama3";
    string definition = "An argument where the logical structure ensures the truth of the conclusion if the premises are true, and where the premises are indeed true, making the argument both valid and sound.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "SoundDeductiveArgument";
        }
    }

    return nullptr;
}

string _Logic::Terms::Soundness(string text)
{
    string model = "llama3";
    string definition = "The property of a logical system wherein every theorem that can be derived using the system's rules is true in every interpretation of the system.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Soundness";
        }
    }

    return nullptr;
}

string _Logic::Terms::SquareOfOpposition(string text)
{
    string model = "llama3";
    string definition = "A diagram representing the logical relationships between the four types of categorical propositions (A, E, I, O) in traditional logic, showing their contradictions, contraries, subcontraries, and subalternations.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "SquareOfOpposition";
        }
    }

    return nullptr;
}

string _Logic::Terms::Statement(string text)
{
    string model = "llama3";
    string definition = "An assertion that something is or is not the case, capable of being true or false; the basic unit of discourse in logic.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Logic::Terms::StipulativeDefinition(string text)
{
    string model = "llama3";
    string definition = "A definition that assigns a meaning to a word for the first time, or proposes a new meaning for an existing word, without claiming to capture an already established usage.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "StipulativeDefinition";
        }
    }

    return nullptr;

}

string _Logic::Terms::StrawMan(string text)
{
    string model = "llama3";
    string definition = "An informal fallacy in which an opponent's argument is overstated or misrepresented in order to be more easily attacked or refuted.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "StrawMan";
        }
    }

    return nullptr;
}

string _Logic::Terms::StrictConditional(string text)
{
    string model = "llama3";
    string definition = "A conditional statement interpreted in terms of necessity, such that the truth of the antecedent necessarily implies the truth of the consequent, unlike the material conditional.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "StrictConditional";
        }
    }

    return nullptr;
}

string _Logic::Terms::StrictImplication(string text)
{
    string model = "llama3";
    string definition = "A relation between propositions where the truth of the first (the antecedent) necessarily brings about the truth of the second (the consequent), often associated with modal logic.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "StrictImplication";
        }
    }

    return nullptr;
}

string _Logic::Terms::StrongCompleteness(string text)
{
    string model = "llama3";
    string definition = "The property of a logical system where if a formula is semantically valid (true in all interpretations), then it is syntactically derivable within the system.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "StrongCompleteness";
        }
    }

    return nullptr;
}

string _Logic::Terms::StrongCounterExample(string text)
{
    string model = "llama3";
    string definition = "Within intuitionistic logic and intuitionistic mathematics, a strong counterexample is a proof of the negation of an instance of some variant of the law of excluded middle.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "StrongCounterExample";
        }
    }

    return nullptr;
}

string _Logic::Terms::StrongInductiveArguemnt(string text)
{
    string model = "llama3";
    string definition = "An argument that, if the premises are true, provides strong support for the conclusion, making it highly probable but not necessarily true.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "StrongInductiveArguemnt";
        }
    }

    return nullptr;
}

string _Logic::Terms::StrongKleeneConnectives(string text)
{
    string model = "llama3";
    string definition = "Connectives in three-valued logic proposed by Stephen Cole Kleene, designed to deal with indeterminate or undefined values in a logical system.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "StrongKleeneConnectives";
        }
    }

    return nullptr;
}

string _Logic::Terms::StrongMethematicalInduction(string text)
{
    string model = "llama3";
    string definition = "A form of mathematical induction that allows one to assume the proposition for all smaller instances simultaneously when proving it for any given instance.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "StrongMethematicalInduction";
        }
    }

    return nullptr;
}

string _Logic::Terms::StrongNegation(string text)
{
    string model = "llama3";
    string definition = "1. exclusion negation. 2. choice negation";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "StrongNegation";
        }
    }

    return nullptr;
}

string _Logic::Terms::StrongParaconsistency(string text)
{
    string model = "llama3";
    string definition = "Strong paraconsistency is the view that there are possible worlds where contradictions are true, or where some statements are both true and false. Compare weak paraconsistency, the view that true contradictions, and worlds that contain them, are merely a formal tool used to study reasoning.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "StrongParaconsistency";
        }
    }

    return nullptr;
}

string _Logic::Terms::StronglyConnected(string text)
{
    string model = "llama3";
    string definition = "A relation R is strongly connected (or total) if and only if, for all x and y, either Rxy, or Ryx.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "StronglyConnected";
        }
    }

    return nullptr;
}

string _Logic::Terms::StructuralRule(string text)
{
    string model = "llama3";
    string definition = "In logic, especially in proof theory, a rule that concerns the manipulation of the components of sequents or deductions without reference to their internal logical structure, such as contraction, weakening, and exchange.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "StructuralRule";
        }
    }

    return nullptr;
}

string _Logic::Terms::Subaltern(string text)
{
    string model = "llama3";
    string definition = "In traditional syllogistic logic, a term describing the relationship between two categorical propositions where the truth of the first (the universal) implies the truth of the second (the particular), but not vice versa.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Subaltern";
        }
    }

    return nullptr;
}

string _Logic::Terms::Subalteration(string text)
{
    string model = "llama3";
    string definition = "The logical relationship between a universal statement and its corresponding particular statement, where the truth of the universal necessitates the truth of the particular.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Subalteration";
        }
    }

    return nullptr;
}

string _Logic::Terms::Subcontraries(string text)
{
    string model = "llama3";
    string definition = "In traditional logic, a pair of particular statements (I and O propositions) that cannot both be false together, though both can be true under the square of opposition.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Subcontraries";
        }
    }

    return nullptr;
}

string _Logic::Terms::Subcontrary(string text)
{
    string model = "llama3";
    string definition = "Referring to the relationship between two statements that can both be true but cannot both be false at the same time.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Subcontrary";
        }
    }

    return nullptr;
}

string _Logic::Terms::SubFormula(string text)
{
    string model = "llama3";
    string definition = "A part of a formula in logic that is itself a formula, often considered in the context of the formula's syntactic structure.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "SubFormula";
        }
    }

    return nullptr;
}

string _Logic::Terms::SubjectTerm(string text)
{
    string model = "llama3";
    string definition = "The term in a categorical proposition that denotes the subject about which something is asserted.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "SubjectTerm";
        }
    }

    return nullptr;
}

string _Logic::Terms::SubjunctiveConditional(string text)
{
    string model = "llama3";
    string definition = "A conditional statement expressing what would be the case if its antecedent were true, used to explore hypothetical situations and their consequences.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "SubjunctiveConditional";
        }
    }

    return nullptr;
}

string _Logic::Terms::Sublanguage(string text)
{
    string model = "llama3";
    string definition = "A subset of a language that uses a restricted vocabulary or simpler grammatical structures, often for a specific purpose or domain.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Sublanguage";
        }
    }

    return nullptr;
}

string _Logic::Terms::Sublogic(string text)
{
    string model = "llama3";
    string definition = "A logical system that is a subset of a more comprehensive logic, retaining some but not all of the operations and principles of the larger system.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Sublogic";
        }
    }

    return nullptr;
}

string _Logic::Terms::SubordinateConnective(string text)
{
    string model = "llama3";
    string definition = "A logical connective that occurs within the scope of another logical connective.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "SubordinateConnective";
        }
    }

    return nullptr;
}

string _Logic::Terms::Substitution(string text)
{
    string model = "llama3";
    string definition = "The act of replacing a variable or expression within a logical formula with another, maintaining logical consistency.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Substitution";
        }
    }

    return nullptr;
}

string _Logic::Terms::SubstitutionInstance(string text)
{
    string model = "llama3";
    string definition = "The well-formed formula which results from a given well-formed formula by replacing one or more of the variables occurring in the well-formed formula throughout by some other well-formed formulas, it being understood that each variable so replaced is replaced by the same well-formed formula wherever it occurs.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "SubstitutionInstance";
        }
    }

    return nullptr;
}

string _Logic::Terms::SubstitutionalQuantifier(string text)
{
    string model = "llama3";
    string definition = "A type of quantifier interpreted as ranging over expressions or names rather than over objects directly, used in certain theories of reference and meaning.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "SubstitutionalQuantifier";
        }
    }

    return nullptr;
}

string _Logic::Terms::SubstructuralLogic(string text)
{
    string model = "llama3";
    string definition = "A class of non-classical logics that relax or modify structural rules found in classical logic, such as relevance logic and linear logic.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "SubstructuralLogic";
        }
    }

    return nullptr;
}

string _Logic::Terms::SubTheory(string text)
{
    string model = "llama3";
    string definition = "A theory contained within a larger theory, sharing some but not all of its axioms and theorems, and focusing on a subset of its domain.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "SubTheory";
        }
    }

    return nullptr;
}

string _Logic::Terms::SuccessorFunction(string text)
{
    string model = "llama3";
    string definition = "A fundamental function in arithmetic and logic that maps any natural number to the next larger natural number";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "SuccessorFunction";
        }
    }

    return nullptr;
}

string _Logic::Terms::SuffixNotation(string text)
{
    string model = "llama3";
    string definition = "A way of writing expressions where operators follow their operands, also known as reverse Polish notation, used in some calculators and programming languages for its efficiency.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "SuffixNotation";
        }
    }

    return nullptr;
}

string _Logic::Terms::Supertask(string text)
{
    string model = "llama3";
    string definition = "A task that consists of an infinite sequence of operations completed in a finite amount of time, often discussed in the context of philosophical paradoxes and theoretical physics.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Supertask";
        }
    }

    return nullptr;
}

string _Logic::Terms::Supertrue(string text)
{
    string model = "llama3";
    string definition = "A term used in certain theories of truth, such as supervaluational semantics, to describe propositions that remain true across all precisifications or interpretations of vague terms.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Supertrue";
        }
    }

    return nullptr;
}

string _Logic::Terms::SupervaluationalSemanics(string text)
{
    string model = "llama3";
    string definition = "A semantic theory designed to handle vagueness by considering multiple precisifications of vague terms, with a proposition deemed supertrue if it is true under all precisifications.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "SupervaluationalSemanics";
        }
    }

    return nullptr;
}

string _Logic::Terms::Supposition(string text)
{
    string model = "llama3";
    string definition = "In medieval logic, a relation between an expression and the object or concept that the expression is being used to talk about, where the supposition of the expression need not be its literal reference.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Supposition";
        }
    }

    return nullptr;
}

string _Logic::Terms::SuppressedEvidence(string text)
{
    string model = "llama3";
    string definition = "An informal fallacy that occurs when relevant information is omitted from an argument, potentially leading to a misleading or unjustified conclusion.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "SuppressedEvidence";
        }
    }

    return nullptr;
}

string _Logic::Terms::Surjection(string text)
{
    string model = "llama3";
    string definition = "A function from one set to another where every element of the target set is mapped to by at least one element of the domain set, also known as an onto function.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Surjection";
        }
    }

    return nullptr;
}

string _Logic::Terms::Syllogism(string text)
{
    string model = "llama3";
    string definition = "A form of deductive reasoning consisting of a major premise, a minor premise, and a conclusion, traditionally used in Aristotelian logic to infer relationships between categories.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Syllogism";
        }
    }

    return nullptr;
}

string _Logic::Terms::SyllogisticFigure(string text)
{
    string model = "llama3";
    string definition = "The form of a syllogism, determined by the position of the middle term in its premises, categorized into four figures that structure the syllogistic argument differently.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "SyllogisticFigure";
        }
    }

    return nullptr;
}

string _Logic::Terms::SyllogisticMood(string text)
{
    string model = "llama3";
    string definition = "The type of a syllogism, defined by the nature of its premises (universal affirmative, universal negative, particular affirmative, particular negative) and how they combine to form a conclusion.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "SyllogisticMood";
        }
    }

    return nullptr;
}

string _Logic::Terms::SyllogisticTerms(string text)
{
    string model = "llama3";
    string definition = "The three terms in a syllogism: the major term (predicate of the conclusion), the minor term (subject of the conclusion), and the middle term (appears in both premises but not in the conclusion). See also barbara.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "SyllogisticTerms";
        }
    }

    return nullptr;
}

string _Logic::Terms::Symmetry(string text)
{
    string model = "llama3";
    string definition = "A property of binary relations where if one element is related to another, then the second is related to the first, such as the relation of equality.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Symmetry";
        }
    }

    return nullptr;
}

string _Logic::Terms::SyncategorematicTerms(string text)
{
    string model = "llama3";
    string definition = "Terms that do not stand for objects or have a reference by themselves but contribute to the meaning of expressions in which they occur, such as conjunctions, prepositions, and quantifiers.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "SyncategorematicTerms";
        }
    }

    return nullptr;
}

string _Logic::Terms::SyntacticConsequence(string text)
{
    string model = "llama3";
    string definition = "The relation that holds between premises and the conclusions derivable from them based on axioms and inference rules within a formal system.[302] Contrast semantic consequence.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "SyntacticConsequence";
        }
    }

    return nullptr;
}

string _Logic::Terms::Syntax(string text)
{
    string model = "llama3";
    string definition = "The set of rules, principles, and processes that govern the structure of sentences in a given language, distinguishing between correct and incorrect forms of expression.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Logic::Terms::TarskianHierarchy(string text)
{
    string model = "llama3";
    string definition = "A hierarchical structure of languages proposed by Alfred Tarski to avoid paradoxes in semantic theories, where each level of language can only reference levels below it, preventing self-reference.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "TarskianHierarchy";
        }
    }

    return nullptr;
}

string _Logic::Terms::TarskisIndefinabilityTheorem(string text)
{
    string model = "llama3";
    string definition = "A theorem stating that truth cannot be consistently defined within the same language it applies to, requiring a meta-language for a definition of truth to avoid paradoxes.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "TarskisIndefinabilityTheorem";
        }
    }

    return nullptr;
}

string _Logic::Terms::Tautology(string text)
{
    string model = "llama3";
    string definition = "A statement or formula that is true in every possible interpretation, often used in propositional logic to refer to formulas that are logically true.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Tautology";
        }
    }

    return nullptr;
}

string _Logic::Terms::TemperatureParadox(string text)
{
    string model = "llama3";
    string definition = "A paradox where, from the temperature is ninety and the temperature is rising, it is concluded that ninety is rising, which seems invalid but can actually be valid under some formalization schemes.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "TemperatureParadox";
        }
    }

    return nullptr;
}

string _Logic::Terms::TemporalModalLogic(string text)
{
    string model = "llama3";
    string definition = "A branch of modal logic that deals with modalities related to time, such as 'always', 'sometimes', and 'never', allowing for reasoning about temporal aspects of propositions.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "TemporalModalLogic";
        }
    }

    return nullptr;
}

string _Logic::Terms::TermLogic(string text)
{
    string model = "llama3";
    string definition = "An approach to logic focusing on the relations between terms in propositions and the inferences that can be drawn from them, characteristic of Aristotelian logic.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "TermLogic";
        }
    }

    return nullptr;
}

string _Logic::Terms::TernaryFunction(string text)
{
    string model = "llama3";
    string definition = "A function that takes three arguments or inputs, in contrast to unary and binary functions.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "TernaryFunction";
        }
    }

    return nullptr;
}

string _Logic::Terms::TernaryRelation(string text)
{
    string model = "llama3";
    string definition = "A relation involving three elements, where the relation specifies how the elements are connected or related.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "TernaryRelation";
        }
    }

    return nullptr;
}

string _Logic::Terms::TernarySemantics(string text)
{
    string model = "llama3";
    string definition = "A ternary semantics is a possible worlds semantics that makes use of a ternary relation on possible worlds instead of, or in addition to, the more standard binary accessibility relation. Ternary semantics have been most widely applied in the development of relevant logics.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "TernarySemantics";
        }
    }

    return nullptr;
}

string _Logic::Terms::Theorem(string text)
{
    string model = "llama3";
    string definition = "A statement or proposition that has been formally proven on the basis of previously established statements or axioms within a logical or mathematical system.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Logic::Terms::Theory(string text)
{
    string model = "llama3";
    string definition = "A coherent set of propositions or statements, especially one that forms a comprehensive explanation of some aspect of the natural world or an abstract concept.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Theory";
        }
    }

    return nullptr;
}

string _Logic::Terms::ThreeValuedLogic(string text)
{
    string model = "llama3";
    string definition = "A logical system that introduces a third truth value (such as 'unknown', 'indeterminate', or 'both true and false') in addition to the classic binary true and false values.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "ThreeValuedLogic";
        }
    }

    return nullptr;
}

string _Logic::Terms::Tilde(string text)
{
    string model = "llama3";
    string definition = "The symbol '~' used in logic to denote negation, indicating that the proposition it precedes is false.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Tilde";
        }
    }

    return nullptr;
}

string _Logic::Terms::Token(string text)
{
    string model = "llama3";
    string definition = "An instance of a type, such as a particular occurrence of a word or phrase, in contrast to the abstract concept or category it represents.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Token";
        }
    }

    return nullptr;
}

string _Logic::Terms::Tolerant(string text)
{
    string model = "llama3";
    string definition = "In the theory of vagueness, a predicate is considered tolerant if, and only if, small changes in the relevant underlying properties of an object do not affect the justice with which the predicate applies to it. Thus, the predicate bald is tolerant, since one hair more or less does not transform a clear instance of baldness into a clear instance of non-baldness.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Tolerant";
        }
    }

    return nullptr;
}

string _Logic::Terms::Tonk(string text)
{
    string model = "llama3";
    string definition = "A fictional logical connective introduced to illustrate the importance of preserving inference rules in defining logical operators, showing that arbitrary rules can lead to absurdity.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Tonk";
        }
    }

    return nullptr;
}

string _Logic::Terms::Top(string text)
{
    string model = "llama3";
    string definition = "In logic, a symbol representing the highest or maximal element in a lattice or order, often used to denote a tautology or universally true proposition in propositional logic.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Top";
        }
    }

    return nullptr;
}

string _Logic::Terms::Topos(string text)
{
    string model = "llama3";
    string definition = "A concept in category theory generalizing set theory concepts within a more abstract framework, allowing for the definition of mathematical structures in different contexts.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Topos";
        }
    }

    return nullptr;
}

string _Logic::Terms::ToposTheory(string text)
{
    string model = "llama3";
    string definition = "The study of toposes, which are categories that behave like the category of sets and provide a foundation for much of mathematics, allowing for generalized notions of computation and logic.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "ToposTheory";
        }
    }

    return nullptr;
}

string _Logic::Terms::TotalFuntion(string text)
{
    string model = "llama3";
    string definition = "A function that is defined for every element of its domain, ensuring that there is an output for each input.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "TotalFuntion";
        }
    }

    return nullptr;
}

string _Logic::Terms::TransitionFunction(string text)
{
    string model = "llama3";
    string definition = "See action table.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "TransitionFunction";
        }
    }

    return nullptr;
}

string _Logic::Terms::TransitiveClosure(string text)
{
    string model = "llama3";
    string definition = "The smallest transitive relation that contains a given relation, effectively adding the minimum necessary elements to make the original relation transitive.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "TransitiveClosure";
        }
    }

    return nullptr;
}

string _Logic::Terms::Transivity(string text)
{
    string model = "llama3";
    string definition = "A property of a relation where if the relation holds between A and B, and between B and C, then it also holds between A and C, ensuring a kind of consistency or continuity in the relation across elements.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Transivity";
        }
    }

    return nullptr;
}

string _Logic::Terms::Translation(string text)
{
    string model = "llama3";
    string definition = "A translation is a function from the expressions of one language to the expressions of another language. Translations are typically intended to preserve either the meanings or the truth conditions of the translated expressions.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Logic::Terms::Transposition(string text)
{
    string model = "llama3";
    string definition = "A logical rule that allows the equivalent transformation of a conditional statement P -> Q into its contrapositive.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Transposition";
        }
    }

    return nullptr;
}

string _Logic::Terms::TransWorldIdentity(string text)
{
    string model = "llama3";
    string definition = "A concept in modal logic and metaphysics concerning the identity of individuals across different possible worlds, addressing questions of persistence and change.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "TransWorldIdentity";
        }
    }

    return nullptr;
}

string _Logic::Terms::Trichotomy(string text)
{
    string model = "llama3";
    string definition = "A relation R is trichotomous (or comparable) if and only if, for any objects x and y, either Rxy, or Ryx, or x = y.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Trichotomy";
        }
    }

    return nullptr;
}

string _Logic::Terms::TrichotomyLaw(string text)
{
    string model = "llama3";
    string definition = "A law in order theory and mathematics stating that for any two elements in a certain set, exactly one of three relationships (greater than, less than, or equal to) must hold.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "TrichotomyLaw";
        }
    }

    return nullptr;
}

string _Logic::Terms::Triviality(string text)
{
    string model = "llama3";
    string definition = "The state or quality of being trivial, in logic and mathematics, often referring to statements, propositions, or problems that are oversimplified or of little interest or importance.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Triviality";
        }
    }

    return nullptr;
}

string _Logic::Terms::Truth(string text)
{
    string model = "llama3";
    string definition = "A concept in logic and philosophy concerning the property of statements, beliefs, or propositions corresponding to reality or fact, or being in accord with the actual state of affairs.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Truth";
        }
    }

    return nullptr;
}

string _Logic::Terms::TruthConditions(string text)
{
    string model = "llama3";
    string definition = "The conditions under which a statement or proposition is considered to be true, playing a central role in the semantic analysis of language.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "TruthConditions";
        }
    }

    return nullptr;
}

string _Logic::Terms::TruthFunction(string text)
{
    string model = "llama3";
    string definition = "A function that takes truth values as input and produces a truth value as output, used in logic to model the truth conditions of logical connectives.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "TruthFunction";
        }
    }

    return nullptr;
}

string _Logic::Terms::TruthFunctional(string text)
{
    string model = "llama3";
    string definition = "Pertaining to an operator or connective in logic whose output truth value depends solely on the input truth values, without regard to the content of the propositions involved.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "TruthFunctional";
        }
    }

    return nullptr;
}

string _Logic::Terms::TruthInAModel(string text)
{
    string model = "llama3";
    string definition = "A concept in semantic theories of truth indicating that a statement or proposition is true relative to a particular model or interpretation of the language in which it is expressed.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "TruthInAModel";
        }
    }

    return nullptr;
}

string _Logic::Terms::Truthmaker(string text)
{
    string model = "llama3";
    string definition = "An entity or set of entities in the world that makes a proposition true, grounding truth in aspects of reality.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Truthmaker";
        }
    }

    return nullptr;
}

string _Logic::Terms::TruthPredicate(string text)
{
    string model = "llama3";
    string definition = "A predicate that assigns the property of being true to propositions, often discussed in relation to Tarski's semantic conception of truth and the liar paradox.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "TruthPredicate";
        }
    }

    return nullptr;
}

string _Logic::Terms::TruthTable(string text)
{
    string model = "llama3";
    string definition = "A table used in logic to show the truth value of a compound statement for every possible combination of truth values of its components, instrumental in analyzing logical expressions.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "TruthTable";
        }
    }

    return nullptr;
}

string _Logic::Terms::TruthTeller(string text)
{
    string model = "llama3";
    string definition = "The converse of the liar paradox, a statement that asserts its own truth, raising questions about self-reference and the nature of truth.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "TruthTeller";
        }
    }

    return nullptr;
}

string _Logic::Terms::TruthValue(string text)
{
    string model = "llama3";
    string definition = "The value indicating the truth or falsity of a proposition or statement, typically represented as true or false in classical logic, but possibly more varied in many-valued logics.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "TruthValue";
        }
    }

    return nullptr;
}

string _Logic::Terms::TruthValueGap(string text)
{
    string model = "llama3";
    string definition = "A situation where a statement or proposition cannot be assigned a traditional truth value of true or false, often due to vagueness or undefined terms.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "TruthValueGap";
        }
    }

    return nullptr;
}

string _Logic::Terms::TruthValueGlut(string text)
{
    string model = "llama3";
    string definition = "A condition in which a statement or proposition is paradoxically both true and false simultaneously, associated with dialetheism and contradictions.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "TruthValueGlut";
        }
    }

    return nullptr;
}

string _Logic::Terms::TSchema(string text)
{
    string model = "llama3";
    string definition = "The Tarski schema for defining truth, stating that 'P' is true if and only if P, where 'P' is a placeholder for a proposition and P is the proposition itself.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "TSchema";
        }
    }

    return nullptr;
}

string _Logic::Terms::TuQuoque(string text)
{
    string model = "llama3";
    string definition = "A logical fallacy that attempts to discredit an opponent's position by asserting the opponent's failure to act consistently with that position, essentially accusing them of hypocrisy.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "TuQuoque";
        }
    }

    return nullptr;
}

string _Logic::Terms::TuringComputableFunction(string text)
{
    string model = "llama3";
    string definition = "A function that can be calculated by a Turing machine, representing the class of functions that are computable in principle, according to the Church–Turing thesis.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "TuringComputableFunction";
        }
    }

    return nullptr;
}

string _Logic::Terms::TuringThesis(string text)
{
    string model = "llama3";
    string definition = "See Church–Turing thesis.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "TuringThesis";
        }
    }

    return nullptr;
}

string _Logic::Terms::Turnstile(string text)
{
    string model = "llama3";
    string definition = "A symbol used in logic to denote syntactic entailment or provability, indicating that the statement or set of statements to the right is a logical consequence of the statements to the left within a given formal system.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Turnstile";
        }
    }

    return nullptr;
}

string _Logic::Terms::Type(string text)
{
    string model = "llama3";
    string definition = "A category or class of entities that share certain characteristics, used in logic and mathematics to distinguish between different kinds of objects, expressions, or variables, preventing certain kinds of logical paradoxes.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Type";
        }
    }

    return nullptr;
}

string _Logic::Terms::TypeTheory(string text)
{
    string model = "llama3";
    string definition = "A framework in mathematical logic and computer science that uses types to classify expressions and objects, aiming to avoid paradoxes like Russell's paradox by organizing objects into hierarchies or levels and restricting operations to objects of the same type.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Logic::Terms::UnaryFunction(string text)
{
    string model = "llama3";
    string definition = "A function that operates on a single input or argument, common in mathematics and logic for representing operations like negation or the absolute value function.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "UnaryFunction";
        }
    }

    return nullptr;
}

string _Logic::Terms::UnaryRelation(string text)
{
    string model = "llama3";
    string definition = "A relation that applies to a single element, used to characterize properties or attributes that an element may or may not possess.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "UnaryRelation";
        }
    }

    return nullptr;
}

string _Logic::Terms::UniversalElimination(string text)
{
    string model = "llama3";
    string definition = "A rule of inference in predicate logic that allows for the derivation of a specific statement about an individual from a general statement that applies to all members of a category.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "UniversalElimination";
        }
    }

    return nullptr;
}

string _Logic::Terms::UniversalIntroduction(string text)
{
    string model = "llama3";
    string definition = "A rule of inference in predicate logic that allows for the generalization of a statement to all members of a category if the statement is shown to hold for an arbitrary but specific individual.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "UniversalIntroduction";
        }
    }

    return nullptr;
}

string _Logic::Terms::UniversalProposition(string text)
{
    string model = "llama3";
    string definition = "A statement in logic that asserts something about all members of a certain category, typically formulated using a universal quantifier.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "UniversalProposition";
        }
    }

    return nullptr;
}

string _Logic::Terms::UniversalQuantifier(string text)
{
    string model = "llama3";
    string definition = "A symbol in predicate logic used to indicate that the statement it precedes holds for all individuals in the domain of discourse.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "UniversalQuantifier";
        }
    }

    return nullptr;
}

string _Logic::Terms::UniversalVariable(string text)
{
    string model = "llama3";
    string definition = "A variable in predicate logic that is bound by a universal quantifier, representing any and all individuals in the domain of discourse.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "UniversalVariable";
        }
    }

    return nullptr;
}

string _Logic::Terms::UniverseOfDiscourse(string text)
{
    string model = "llama3";
    string definition = "The set of all objects, individuals, or values that are relevant in a particular logical or mathematical discussion, serving as the domain over which quantifiers range.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "UniverseOfDiscourse";
        }
    }

    return nullptr;
}

string _Logic::Terms::UpwardLowenheimSkolemTheor(string text)
{
    string model = "llama3";
    string definition = "Part of the Lowenheim–Skolem theorem.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "UpwardLowenheimSkolemTheor";
        }
    }

    return nullptr;
}

string _Logic::Terms::Use(string text)
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
            return "Use";
        }
    }

    return nullptr;
}

string _Logic::Terms::UnsoundDeductiveArgument(string text)
{
    string model = "llama3";
    string definition = "An argument that is either invalid in its logical form or contains at least one false premise, and therefore does not guarantee the truth of its conclusion.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "UnsoundDeductiveArgument";
        }
    }

    return nullptr;
}

string _Logic::Terms::VacuousQuantifier(string text)
{
    string model = "llama3";
    string definition = "A vacuous quantifier is one that doesn't bind any variables";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "VacuousQuantifier";
        }
    }

    return nullptr;
}

string _Logic::Terms::Vagueness(string text)
{
    string model = "llama3";
    string definition = "The characteristic of terms, concepts, or propositions that lack clear boundaries or precision in meaning, leading to indeterminate or borderline cases.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Vagueness";
        }
    }

    return nullptr;
}

string _Logic::Terms::Valid(string text)
{
    string model = "llama3";
    string definition = "A deductive argument whose structure ensures that if all the premises are true, then the conclusion must also be true, demonstrating logical validity.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Valid";
        }
    }

    return nullptr;
}

string _Logic::Terms::Valuation(string text)
{
    string model = "llama3";
    string definition = "Another name for an interpretation of a formal language, coming from the fact that it assigns semantic values (such as truth values) to the language's formulas.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Valuation";
        }
    }

    return nullptr;
}

string _Logic::Terms::VariableAssignment(string text)
{
    string model = "llama3";
    string definition = "Sometimes, an interpretation of a formal language for first-order or higher-order logic is called simply a variable assignment, or variable assignment function.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "VariableAssignment";
        }
    }

    return nullptr;
}

string _Logic::Terms::Vel(string text)
{
    string model = "llama3";
    string definition = "The Latin word for or, used in logic as a name for the descending wedge symbol. The symbol is used to denote a disjunction that is inclusive, meaning at least one of the disjuncts must be true for the whole expression to be true.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Vel";
        }
    }

    return nullptr;
}

string _Logic::Terms::VerificationConstraint(string text)
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
            return "VerificationConstraint";
        }
    }

    return nullptr;
}

string _Logic::Terms::Verity(string text)
{
    string model = "llama3";
    string definition = "The verity (or degree of truth) of a statement is the semantic value of that statement within degree-theoretic semantics, which assigns degrees between 0 and 1 to statements.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Verity";
        }
    }

    return nullptr;
}

string _Logic::Terms::Verum(string text)
{
    string model = "llama3";
    string definition = "Verum (Latin for true) is another name for the T symbol, which represents a primitive, necessarily true statement, and is sometimes considered a nullary connective.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Verum";
        }
    }

    return nullptr;
}

string _Logic::Terms::ViciousCirclePrinciple(string text)
{
    string model = "llama3";
    string definition = "A principle against definitions or arguments that are circular, ensuring that the thing being defined is not used in its own definition or premise in a way that presupposes its conclusion.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "ViciousCirclePrinciple";
        }
    }

    return nullptr;
}

string _Logic::Terms::WeakCompleteness(string text)
{
    string model = "llama3";
    string definition = "The property of a logical system where if a statement is semantically valid (true under all interpretations), then there is a proof of the statement within the system.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "WeakCompleteness";
        }
    }

    return nullptr;
}

string _Logic::Terms::WeakCunterexample(string text)
{
    string model = "llama3";
    string definition = "Within intuitionistic logic and intuitionistic mathematics, a weak counterexample is a situation in which we have no positive evidence for the (intuitionistic) truth of some instance of the law of excluded middle";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "WeakCunterexample";
        }
    }

    return nullptr;
}

string _Logic::Terms::WeakExcludedMiddle(string text)
{
    string model = "llama3";
    string definition = "A principle in intuitionistic logic stating that for any proposition P, either P is provable or not-P is provable, but not necessarily both, reflecting a more nuanced view of truth than the classical law of excluded middle.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "WeakExcludedMiddle";
        }
    }

    return nullptr;
}

string _Logic::Terms::WeakKleeneConnectives(string text)
{
    string model = "llama3";
    string definition = "Connectives defined in the three-valued logic of Kleene, which do not fully determine the truth value of compound statements if any component statement is undefined.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "WeakKleeneConnectives";
        }
    }

    return nullptr;
}

string _Logic::Terms::WeakMathematicalInduction(string text)
{
    string model = "llama3";
    string definition = "A form of mathematical induction that only assumes the truth of the statement for the immediately preceding case to prove its truth for any natural number, as opposed to strong induction, which assumes the statement for all smaller numbers.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "WeakMathematicalInduction";
        }
    }

    return nullptr;
}

string _Logic::Terms::WeakNegation(string text)
{
    string model = "llama3";
    string definition = "A form of negation in some non-classical logics where the negation of a proposition does not assert the truth of the opposite proposition but rather the absence of truth of the original proposition.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "WeakNegation";
        }
    }

    return nullptr;
}

string _Logic::Terms::WeakParaconsistency(string text)
{
    string model = "llama3";
    string definition = "Weak paraconsistency is the view that true contradictions, and worlds that contain them, are merely a formal tool used to study reasoning. Compare strong paraconsistency, the view that there are possible worlds where contradictions are true, or where some statements are both true and false.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "WeakParaconsistency";
        }
    }

    return nullptr;
}

string _Logic::Terms::Weakening(string text)
{
    string model = "llama3";
    string definition = "A rule in both propositional and predicate logic allowing the addition of propositions to a derivation without affecting its validity, reflecting the idea that if something follows from a set of premises, it also follows from any larger set of premises.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Weakening";
        }
    }

    return nullptr;
}

string _Logic::Terms::Wedge(string text)
{
    string model = "llama3";
    string definition = "A symbol used in logic to represent logical conjunction, indicating that both connected statements are true.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Wedge";
        }
    }

    return nullptr;
}

string _Logic::Terms::WellFormedFormula(string text)
{
    string model = "llama3";
    string definition = "A string of symbols in a formal language that follows the syntactic rules of the language, making it a meaningful or grammatically correct expression within the context of that system.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "WellFormedFormula";
        }
    }

    return nullptr;
}

string _Logic::Terms::WFF(string text)
{
    string model = "llama3";
    string definition = "Short for well-formed formula. Pronounced woof, or sometimes wiff, weff, or whiff.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "WFF";
        }
    }

    return nullptr;
}

string _Logic::Terms::YabloParadox(string text)
{
    string model = "llama3";
    string definition = "A paradox involving an infinite sequence of sentences, each of which states that all following sentences in the sequence are false. Unlike the liar paradox, it does not rely on self-reference, raising questions about the nature of paradoxes and infinity.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "YabloParadox";
        }
    }

    return nullptr;
}

string _Logic::Terms::ZenoParadoxes(string text)
{
    string model = "llama3";
    string definition = "A series of paradoxes proposed by the ancient Greek philosopher Zeno of Elea to challenge the coherence of the concepts of plurality, motion, and the continuum, including the famous paradoxes of Achilles and the tortoise, and the dichotomy.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "ZenoParadoxes";
        }
    }

    return nullptr;
}
