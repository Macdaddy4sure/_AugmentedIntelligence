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
#include "Objections.hpp"
#include "Large Language Models.hpp"
#include "Parsers.hpp"
#include "Utilities.hpp"

using namespace std;

bool _Objections::Terms::Ambiguous(string text)
{
    string model = "llama3";
    string objection_definition = "the question is not clear and precise enough for the witness to properly answer.";
    string prompt = "Check if the following text matches the following courtroom objection and limit the response to yes or no: " + objection_definition + " " + text;
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

bool _Objections::Terms::Confusing(string text)
{
    string model = "llama3";
    string objection_definition = "the question is too confusing for the witness to properly answer.";
    string prompt = "Check if the following text matches the following courtroom objection and limit the response to yes or no: " + objection_definition + " " + text;
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

bool _Objections::Terms::Misleading(string text)
{
    string model = "llama3";
    string objection_definition = "the question is too misleading for the witness to properly answer.";
    string prompt = "Check if the following text matches the following courtroom objection and limit the response to yes or no: " + objection_definition + " " + text;
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

bool _Objections::Terms::Vague(string text)
{
    string model = "llama3";
    string objection_definition = "the question is to vague for the witness to properly answer.";
    string prompt = "Check if the following text matches the following courtroom objection and limit the response to yes or no: " + objection_definition + " " + text;
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

bool _Objections::Terms::Unintelliligible(string text)
{
    string model = "llama3";
    string objection_definition = "the question is unintelligible for the witness to properly answer.";
    string prompt = "Check if the following text matches the following courtroom objection and limit the response to yes or no: " + objection_definition + " " + text;
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

bool _Objections::Terms::ArguingTheLaw(string text)
{
    string model = "llama3";
    string objection_definition = "counsel is instructing the jury on the law.";
    string prompt = "Check if the following text matches the following courtroom objection and limit the response to yes or no: " + objection_definition + " " + text;
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

bool _Objections::Terms::Argumentative(string text)
{
    string model = "llama3";
    string objection_definition = "the question makes an argument rather than asking a question.";
    string prompt = "Check if the following text matches the following courtroom objection and limit the response to yes or no: " + objection_definition + " " + text;
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

bool _Objections::Terms::AskedAndAnswered(string text)
{
    string model = "llama3";
    string objection_definition = "when the same attorney continues to ask the same question and they have already received an answer. Usually seen after direct examination, but not always.";
    string prompt = "Check if the following text matches the following courtroom objection and limit the response to yes or no: " + objection_definition + " " + text;
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

bool _Objections::Terms::AssumesdFactsNotInEvidence(string text)
{
    string model = "llama3";
    string objection_definition = "if opposing counsel asks such a question during voir dire";
    string prompt = "Check if the following text matches the following courtroom objection and limit the response to yes or no: " + objection_definition + " " + text;
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

bool _Objections::Terms::AsksJuryToPrejudgeEvidence(string text)
{
    string model = "llama3";
    string objection_definition = "Asks the jury to prejude the evidence.";
    string prompt = "Check if the following text matches the following courtroom objection and limit the response to yes or no: " + objection_definition + " " + text;
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

bool _Objections::Terms::Badgering(string text)
{
    string model = "llama3";
    string objection_definition = "counsel is antagonizing the witness to provoke a response, either by asking questions without giving the witness an opportunity to answer or by openly mocking the witness.";
    string prompt = "Check if the following text matches the following courtroom objection and limit the response to yes or no: " + objection_definition + " " + text;
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

bool _Objections::Terms::BestEvidenceRule(string text)
{
    string model = "llama3";
    string objection_definition = "requires that the original source of evidence is required, if available; for example, rather than asking a witness about the contents of a document, the actual document should be entered into evidence. A full original document should be introduced into evidence instead of a copy, but judges often allow copies if there is no dispute about authenticity. Some documents are exempt from hearsay rules of evidence.";
    string prompt = "Check if the following text matches the following courtroom objection and limit the response to yes or no: " + objection_definition + " " + text;
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

bool _Objections::Terms::BeyondTheScope(string text)
{
    string model = "llama3";
    string objection_definition = "a question asked during cross-examination must be within the scope of direct, and so on.";
    string prompt = "Check if the following text matches the following courtroom objection and limit the response to yes or no: " + objection_definition + " " + text;
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

bool _Objections::Terms::CallsForConclusion(string text)
{
    string model = "llama3";
    string objection_definition = "the question asks for an opinion rather than facts.";
    string prompt = "Check if the following text matches the following courtroom objection and limit the response to yes or no: " + objection_definition + " " + text;
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

bool _Objections::Terms::CallsForSpeculation(string text)
{
    string model = "llama3";
    string objection_definition = "the question asks the witness to guess the answer rather than to rely on known facts.";
    string prompt = "Check if the following text matches the following courtroom objection and limit the response to yes or no: " + objection_definition + " " + text;
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

bool _Objections::Terms::CompoundQuestion(string text)
{
    string model = "llama3";
    string objection_definition = "multiple questions asked together.";
    string prompt = "Check if the following text matches the following courtroom objection and limit the response to yes or no: " + objection_definition + " " + text;
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

bool _Objections::Terms::CounselIsTestifying(string text)
{
    string model = "llama3";
    string objection_definition = "a lawyer is making an unsworn statement as to a fact without separate evidence.";
    string prompt = "Check if the following text matches the following courtroom objection and limit the response to yes or no: " + objection_definition + " " + text;
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

bool _Objections::Terms::Foundation(string text)
{
    string model = "llama3";
    string objection_definition = "the question relates to matters of which the witness's personal knowledge has not been established.";
    string prompt = "Check if the following text matches the following courtroom objection and limit the response to yes or no: " + objection_definition + " " + text;
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

bool _Objections::Terms::Hearsay(string text)
{
    string model = "llama3";
    string objection_definition = "An out of court statement used to prove the fact that the statement is being offered for.";
    string prompt = "Check if the following text matches the following courtroom objection and limit the response to yes or no: " + objection_definition + " " + text;
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

bool _Objections::Terms::Incompetent(string text)
{
    string model = "llama3";
    string objection_definition = "the witness is not qualified to answer the question.";
    string prompt = "Check if the following text matches the following courtroom objection and limit the response to yes or no: " + objection_definition + " " + text;
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

bool _Objections::Terms::Inflammatory(string text)
{
    string model = "llama3";
    string objection_definition = "the question is intended to cause prejudice.";
    string prompt = "Check if the following text matches the following courtroom objection and limit the response to yes or no: " + objection_definition + " " + text;
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

bool _Objections::Terms::IrrelevantImmaterial(string text)
{
    string model = "llama3";
    string objection_definition = "the question is not about the issues in the trial.";
    string prompt = "Check if the following text matches the following courtroom objection and limit the response to yes or no: " + objection_definition + " " + text;
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

bool _Objections::Terms::LeadingQuestion(string text)
{
    string model = "llama3";
    string objection_definition = "the question suggests the answer to the witness. Leading questions are permitted if the attorney conducting the examination has received permission to treat the witness as a hostile witness. Leading questions are also permitted on cross-examination, as witnesses called by the opposing party are presumed hostile.";
    string prompt = "Check if the following text matches the following courtroom objection and limit the response to yes or no: " + objection_definition + " " + text;
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

bool _Objections::Terms::MisstatesEvidence(string text)
{
    string model = "llama3";
    string objection_definition = "";
    string prompt = "Check if the following text matches the following courtroom objection and limit the response to yes or no: " + objection_definition + " " + text;
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

bool _Objections::Terms::MisquotesWitness(string text)
{
    string model = "llama3";
    string objection_definition = "this objection is often overruled, but can be used to signal a problem to witness, judge and jury.";
    string prompt = "Check if the following text matches the following courtroom objection and limit the response to yes or no: " + objection_definition + " " + text;
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

bool _Objections::Terms::Narrative(string text)
{
    string model = "llama3";
    string objection_definition = "the question asks the witness to relate a story rather than state specific facts.";
    string prompt = "Check if the following text matches the following courtroom objection and limit the response to yes or no: " + objection_definition + " " + text;
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

bool _Objections::Terms::Privilege(string text)
{
    string model = "llama3";
    string objection_definition = "the witness may be protected by law from answering the question.";
    string prompt = "Check if the following text matches the following courtroom objection and limit the response to yes or no: " + objection_definition + " " + text;
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

bool _Objections::Terms::FruitOfThePoisonousTree(string text)
{
    string model = "llama3";
    string objection_definition = "the evidence was obtained illegally, or the investigative methods leading to its discovery were illegal.";
    string prompt = "Check if the following text matches the following courtroom objection and limit the response to yes or no: " + objection_definition + " " + text;
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

bool _Objections::Terms::LackOfFoundation(string text)
{
    string model = "llama3";
    string objection_definition = "the evidence lacks testimony as to its authenticity or source.";
    string prompt = "Check if the following text matches the following courtroom objection and limit the response to yes or no: " + objection_definition + " " + text;
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

bool _Objections::Terms::NonResponsive(string text)
{
    string model = "llama3";
    string objection_definition = "the witness's response constitutes an answer to a question other than the one that was asked, or no answer at all.";
    string prompt = "Check if the following text matches the following courtroom objection and limit the response to yes or no: " + objection_definition + " " + text;
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

bool _Objections::Terms::NothingPending(string text)
{
    string model = "llama3";
    string objection_definition = "the witness continues to speak on matters irrelevant to the question. For example, an attorney who asks, 'Did your mother call?' and gets the answer, 'Yes, she called at 3:00,' can object to the latter part.Attorneys can use this objection selectively(to avoid annoying the court) when a witness adds out of order remarks to answers.";
    string prompt = "Check if the following text matches the following courtroom objection and limit the response to yes or no: " + objection_definition + " " + text;
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