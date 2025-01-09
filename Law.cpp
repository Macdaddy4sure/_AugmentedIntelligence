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
#include "Law.hpp"
#include "Large Language Models.hpp"
#include "Parsers.hpp"
#include "Utilities.hpp"

string _Law::Terms::Acquittal(string text)
{
    string model = "llama3";
    string definition = "A jury verdict that a criminal defendant is not guilty, or the finding of a judge that the evidence is insufficient to support a conviction.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::ActiveJudge(string text)
{
    string model = "llama3";
    string definition = "A judge in the full-time service of the court. Compare to senior judge.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::AdministrativeOfficeOfTheUnitedStatesCourts(string text)
{
    string model = "llama3";
    string definition = "The federal agency responsible for collecting court statistics, administering the federal courts' budget, and performing many other administrative and programmatic functions, under the direction and supervision of the Judicial Conference of the United States.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::Admissible(string text)
{
    string model = "llama3";
    string definition = "A term used to describe evidence that may be considered by a jury or judge in civil and criminal cases.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::AdversaryProceeding(string text)
{
    string model = "llama3";
    string definition = "A lawsuit arising in or related to a bankruptcy case that begins by filing a complaint with the court, that is, a trial that takes place within the context of a bankruptcy case.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::Addidavit(string text)
{
    string model = "llama3";
    string definition = "A written or printed statement made under oath.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::Affirmed(string text)
{
    string model = "llama3";
    string definition = "In the practice of the court of appeals, it means that the court of appeals has concluded that the lower court decision is correct and will stand as rendered by the lower court.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::AlternateJuror(string text)
{
    string model = "llama3";
    string definition = "A juror selected in the same manner as a regular juror who hears all the evidence but does not help decide the case unless called on to replace a regular juror.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::AlternativeDisputeResolution(string text)
{
    string model = "llama3";
    string definition = "A procedure for settling a dispute outside the courtroom. Most forms of ADR are not binding, and involve referral of the case to a neutral party such as an arbitrator or mediator.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::AmicusCuriae(string text)
{
    string model = "llama3";
    string definition = "Latin for friend of the court. It is advice formally offered to the court in a brief filed by an entity interested in, but not a party to, the case.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::Answer(string text)
{
    string model = "llama3";
    string definition = "The formal written statement by a defendant in a civil case that responds to a complaint, articulating the grounds for defense.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::Appeal(string text)
{
    string model = "llama3";
    string definition = "A request made after a trial by a party that has lost on one or more issues that a higher court review the decision to determine if it was correct. To make such a request is to appeal or to take an appeal. One who appeals is called the appellant; the other party is the appellee.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::Appellant(string text)
{
    string model = "llama3";
    string definition = "The party who appeals a district court's decision, usually seeking reversal of that decision.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::Appellate(string text)
{
    string model = "llama3";
    string definition = "About appeals; an appellate court has the power to review the judgment of a lower court (trial court) or tribunal. For example, the U.S. circuit courts of appeals review the decisions of the U.S. district courts.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::Appellee(string text)
{
    string model = "llama3";
    string definition = "The party who opposes an appellant's appeal, and who seeks to persuade the appeals court to affirm the district court's decision.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::Arraignment(string text)
{
    string model = "llama3";
    string definition = "A proceeding in which a criminal defendant is brought into court, told of the charges in an indictment or information, and asked to plead guilty or not guilty.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::ArticleIIIJudge(string text)
{
    string model = "llama3";
    string definition = "A federal judge who is appointed for life, during good behavior, under Article III of the Constitution. Article III judges are nominated by the President and confirmed by the Senate.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::Assets(string text)
{
    string model = "llama3";
    string definition = "Property of all kinds, including real and personal, tangible and intangible.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::Assume(string text)
{
    string model = "llama3";
    string definition = "An agreement to continue performing duties under a contract or lease.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::AutomaticStay(string text)
{
    string model = "llama3";
    string definition = "An injunction that automatically stops lawsuits, foreclosures, garnishments, and most collection activities against the debtor the moment a bankruptcy petition is filed.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::Bail(string text)
{
    string model = "llama3";
    string definition = "The release, prior to trial, of a person accused of a crime, under specified conditions designed to assure that person's appearance in court when required. Also, can refer to the amount of bond money posted as a financial condition of pretrial release.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::Bankruptcy(string text)
{
    string model = "llama3";
    string definition = "A legal procedure for dealing with debt problems of individuals and businesses; specifically, a case filed under one of the chapters of title 11 of the United States Code (the Bankruptcy Code).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::BankruptcyAdministrator(string text)
{
    string model = "llama3";
    string definition = "An officer of the Judiciary serving in the judicial districts of Alabama and North Carolina who, like the United States trustee, is responsible for supervising the administration of bankruptcy cases, estates, and trustees; monitoring plans and disclosure statements; monitoring creditors' committees; monitoring fee applications; and performing other statutory duties.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::BankruptcyCode(string text)
{
    string model = "llama3";
    string definition = "The informal name for title 11 of the United States Code (11 U.S.C. §§ 101-1330), the federal bankruptcy law.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::BankruptcyCourt(string text)
{
    string model = "llama3";
    string definition = "The bankruptcy judges in regular active service in each district; a unit of the district court.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::BankruptcyEstate(string text)
{
    string model = "llama3";
    string definition = "All interests of the debtor in property at the time of the bankruptcy filing. The estate technically becomes the temporary legal owner of all of the debtor's property.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::BankruptcyJudge(string text)
{
    string model = "llama3";
    string definition = "A judicial officer of the United States district court who is the court official with decision-making power over federal bankruptcy cases.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::BankruptcyPetition(string text)
{
    string model = "llama3";
    string definition = "A formal request for the protection of the federal bankruptcy laws. (There is an official form for bankruptcy petitions.)";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::BankruptcyTrustee(string text)
{
    string model = "llama3";
    string definition = "A private individual or corporation appointed in all Chapter 7 and Chapter 13 cases to represent the interests of the bankruptcy estate and the debtor's creditors.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::BenchTrial(string text)
{
    string model = "llama3";
    string definition = "A trial without a jury, in which the judge serves as the fact-finder.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::Brief(string text)
{
    string model = "llama3";
    string definition = "A written statement submitted in a trial or appellate proceeding that explains one side's legal and factual arguments.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::BurdenOfProof(string text)
{
    string model = "llama3";
    string definition = "The duty to prove disputed facts. In civil cases, a plaintiff generally has the burden of proving his or her case. In criminal cases, the government has the burden of proving the defendant's guilt. (See standard of proof.)";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::BusinessBankruptcy(string text)
{
    string model = "llama3";
    string definition = "A bankruptcy case in which the debtor is a business or an individual involved in business and the debts are for business purposes.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::CapitalOffense(string text)
{
    string model = "llama3";
    string definition = "A crime punishable by death.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::CaseFile(string text)
{
    string model = "llama3";
    string definition = "A complete collection of every document filed in court in a case.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::CaseLaw(string text)
{
    string model = "llama3";
    string definition = "The law as established in previous court decisions. A synonym for legal precedent. Akin to common law, which springs from tradition and judicial decisions.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::Caseload(string text)
{
    string model = "llama3";
    string definition = "The number of cases handled by a judge or a court.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::CauseOfAction(string text)
{
    string model = "llama3";
    string definition = "A legal claim.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::Chambers(string text)
{
    string model = "llama3";
    string definition = "The offices of a judge and his or her staff.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::Chapter11(string text)
{
    string model = "llama3";
    string definition = "A reorganization bankruptcy, usually involving a corporation or partnership. A Chapter 11 debtor usually proposes a plan of reorganization to keep its business alive and pay creditors over time. Individuals or people in business can also seek relief in Chapter 11.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::Chapter12(string text)
{
    string model = "llama3";
    string definition = "The chapter of the Bankruptcy Code providing for adjustment of debts of a family farmer or family fisherman, as the terms are defined in the Bankruptcy Code.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::Chapter13(string text)
{
    string model = "llama3";
    string definition = "The chapter of the Bankruptcy Code providing for the adjustment of debts of an individual with regular income, often referred to as a wage-earner plan. Chapter 13 allows a debtor to keep property and use his or her disposable income to pay debts over time, usually three to five years.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::Chapter13Trustee(string text)
{
    string model = "llama3";
    string definition = "A person appointed to administer a Chapter 13 case. A Chapter 13 trustee's responsibilities are similar to those of a Chapter 7 trustee; however, a Chapter 13 trustee has the additional responsibilities of overseeing the debtor's plan, receiving payments from debtors, and disbursing plan payments to creditors.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::Chapter15(string text)
{
    string model = "llama3";
    string definition = "The chapter of the Bankruptcy Code dealing with cases of cross-border insolvency.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::Chapter7(string text)
{
    string model = "llama3";
    string definition = "The chapter of the Bankruptcy Code providing for liquidation, that is, the sale of a debtor's nonexempt property and the distribution of the proceeds to creditors. In order to be eligible for Chapter 7, the debtor must satisfy a means test. The court will evaluate the debtor's income and expenses to determine if the debtor may proceed under Chapter 7.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::Chapter7Trustee(string text)
{
    string model = "llama3";
    string definition = "A person appointed in a Chapter 7 case to represent the interests of the bankruptcy estate and the creditors. The trustee's responsibilities include reviewing the debtor's petition and schedules, liquidating the property of the estate, and making distributions to creditors. The trustee may also bring actions against creditors or the debtor to recover property of the bankruptcy estate.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::Chapter9(string text)
{
    string model = "llama3";
    string definition = "The chapter of the Bankruptcy Code providing for reorganization of municipalities (which includes cities and towns, as well as villages, counties, taxing districts, municipal utilities, and school districts).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::ChiefJudge(string text)
{
    string model = "llama3";
    string definition = "The judge who has primary responsibility for the administration of a court; chief judges are determined by seniority";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::Claim(string text)
{
    string model = "llama3";
    string definition = "A creditor's assertion of a right to payment from a debtor or the debtor's property.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::ClassAction(string text)
{
    string model = "llama3";
    string definition = "A lawsuit in which one or more members of a large group, or class, of individuals or other entities sue on behalf of the entire class. The district court must find that the claims of the class members contain questions of law or fact in common before the lawsuit can proceed as a class action.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::ClerkOfCourt(string text)
{
    string model = "llama3";
    string definition = "The court officer who oversees administrative functions, especially managing the flow of cases through the court. The clerk's office is often called a court's central nervous system.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::Collateral(string text)
{
    string model = "llama3";
    string definition = "Property that is promised as security for the satisfaction of a debt.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::CommonLaw(string text)
{
    string model = "llama3";
    string definition = "The legal system that originated in England and is now in use in the United States, which relies on the articulation of legal principles in a historical succession of judicial decisions. Common law principles can be changed by legislation.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::CommunityService(string text)
{
    string model = "llama3";
    string definition = "A special condition the court imposes that requires an individual to work – without pay – for a civic or nonprofit organization.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::Complaint(string text)
{
    string model = "llama3";
    string definition = "A written statement that begins a civil lawsuit, in which the plaintiff details the claims against the defendant.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::ConcurrentSentence(string text)
{
    string model = "llama3";
    string definition = "Prison terms for two or more offenses to be served at the same time, rather than one after the other. Example: Two five-year sentences and one three-year sentence, if served concurrently, result in a maximum of five years behind bars.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::Confirmation(string text)
{
    string model = "llama3";
    string definition = "Approval of a plan of reorganization by a bankruptcy judge.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::ConsecutiveSentence(string text)
{
    string model = "llama3";
    string definition = "Prison terms for two or more offenses to be served one after the other. Example: Two five-year sentences and one three-year sentence, if served consecutively, result in a maximum of 13 years behind bars.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::ConsumerBankruptcy(string text)
{
    string model = "llama3";
    string definition = "A bankruptcy case filed to reduce or eliminate debts that are primarily consumer debts.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::ConsumerDebts(string text)
{
    string model = "llama3";
    string definition = "Debts incurred for personal, as opposed to business, needs.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::ContingentClaim(string text)
{
    string model = "llama3";
    string definition = "A claim that may be owed by the debtor under certain circumstances, e.g., where the debtor is a cosigner on another person's loan and that person fails to pay.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::Contract(string text)
{
    string model = "llama3";
    string definition = "An agreement between two or more people that creates an obligation to do or not to do a particular thing.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::Conviction(string text)
{
    string model = "llama3";
    string definition = "A judgment of guilt against a criminal defendant.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::Counsel(string text)
{
    string model = "llama3";
    string definition = "Legal advice; a term also used to refer to the lawyers in a case.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::Count(string text)
{
    string model = "llama3";
    string definition = "An allegation in an indictment or information, charging a defendant with a crime. An indictment or information may contain allegations that the defendant committed more than one crime. Each allegation is referred to as a count.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::Court(string text)
{
    string model = "llama3";
    string definition = "Government entity authorized to resolve legal disputes. Judges sometimes use court to refer to themselves in the third person, as in the court has read the briefs.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::CourtReporter(string text)
{
    string model = "llama3";
    string definition = "A person who makes a word-for-word record of what is said in court, generally by using a stenographic machine, shorthand or audio recording, and then produces a transcript of the proceedings upon request.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::CreditCounceling(string text)
{
    string model = "llama3";
    string definition = "Generally refers to two events in individual bankruptcy cases: (1) the individual or group briefing from a nonprofit budget and credit counseling agency that individual debtors must attend prior to filing under any chapter of the Bankruptcy Code; and (2) the instructional course in personal financial management in chapters 7 and 13 that an individual debtor must complete before a discharge is entered. There are exceptions to both requirements for certain categories of debtors, exigent circumstances, or if the U.S. trustee or bankruptcy administrator have determined that there are insufficient approved credit counseling agencies available to provide the necessary counseling.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::Creditor(string text)
{
    string model = "llama3";
    string definition = "A person to whom or business to which the debtor owes money or that claims to be owed money by the debtor.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::Damages(string text)
{
    string model = "llama3";
    string definition = "Money that a defendant pays a plaintiff in a civil case if the plaintiff has won. Damages may be compensatory (for loss or injury) or punitive (to punish and deter future misconduct).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::DeFacto(string text)
{
    string model = "llama3";
    string definition = "Latin, meaning in fact or actually. Something that exists in fact but not as a matter of law.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::DeJure(string text)
{
    string model = "llama3";
    string definition = "Latin, meaning in law. Something that exists by operation of law.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::DeNovo(string text)
{
    string model = "llama3";
    string definition = "Latin, meaning anew. A trial de novo is a completely new trial. Appellate review de novo implies no deference to the trial judge's ruling.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::Debtor(string text)
{
    string model = "llama3";
    string definition = "A person who has filed a petition for relief under the Bankruptcy Code.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::DebtorsPlan(string text)
{
    string model = "llama3";
    string definition = "A debtor's detailed description of how the debtor proposes to pay creditors' claims over a fixed period of time.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::DeclaratoryJudgement(string text)
{
    string model = "llama3";
    string definition = "A judge's statement about someone's rights. For example, a plaintiff may seek a declaratory judgment that a particular statute, as written, violates some constitutional right.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::DefaultJudgement(string text)
{
    string model = "llama3";
    string definition = "A judgment awarding a plaintiff the relief sought in the complaint because the defendant has failed to appear in court or otherwise respond to the complaint.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::Defendant(string text)
{
    string model = "llama3";
    string definition = "An oral statement made before an officer authorized by law to administer oaths. Such statements are often taken to examine potential witnesses, to obtain discovery, or to be used later in trial. See discovery.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::Deposition(string text)
{
    string model = "llama3";
    string definition = "An oral statement made before an officer authorized by law to administer oaths. Such statements are often taken to examine potential witnesses, to obtain discovery, or to be used later in trial. See discovery.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::Discharge(string text)
{
    string model = "llama3";
    string definition = "A release of a debtor from personal liability for certain dischargeable debts. Notable exceptions to dischargeability are taxes and student loans. A discharge releases a debtor from personal liability for certain debts known as dischargeable debts and prevents the creditors owed those debts from taking any action against the debtor or the debtor's property to collect the debts. The discharge also prohibits creditors from communicating with the debtor regarding the debt, including through telephone calls, letters, and personal contact.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::DischargeableDebt(string text)
{
    string model = "llama3";
    string definition = "A debt for which the Bankruptcy Code allows the debtor's personal liability to be eliminated.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::DisclosureStatement(string text)
{
    string model = "llama3";
    string definition = "A written document prepared by the chapter 11 debtor or other plan proponent that is designed to provide adequate information to creditors to enable them to evaluate the chapter 11 plan of reorganization.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::Discovery(string text)
{
    string model = "llama3";
    string definition = "Procedures used to obtain disclosure of evidence before trial.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::DismissalWithPredudice(string text)
{
    string model = "llama3";
    string definition = "Court action that prevents an identical lawsuit from being filed later.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::DismissalWithoutPredudice(string text)
{
    string model = "llama3";
    string definition = "Court action that allows the later filing.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::DisposableIncome(string text)
{
    string model = "llama3";
    string definition = "Income not reasonably necessary for the maintenance or support of the debtor or dependents. If the debtor operates a business, disposable income is defined as those amounts over and above what is necessary for the payment of ordinary operating expenses.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::Docket(string text)
{
    string model = "llama3";
    string definition = "A log containing the complete history of each case in the form of brief chronological entries summarizing the court proceedings.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::DueProcess(string text)
{
    string model = "llama3";
    string definition = "In criminal law, the constitutional guarantee that a defendant will receive a fair and impartial trial. In civil law, the legal rights of someone who confronts an adverse action threatening liberty or property.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::EnBanc(string text)
{
    string model = "llama3";
    string definition = "French, meaning on the bench. All judges of an appellate court sitting together to hear a case, as opposed to the routine disposition by panels of three judges. In the Ninth Circuit, an en banc panel consists of 11 randomly selected judges.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::Equitable(string text)
{
    string model = "llama3";
    string definition = "Pertaining to civil suits in equity rather than in law. In English legal history, the courts of law could order the payment of damages and could afford no other remedy (see damages). A separate court of equity could order someone to do something or to cease to do something (e.g., injunction). In American jurisprudence, the federal courts have both legal and equitable power, but the distinction is still an important one. For example, a trial by jury is normally available in law cases but not in equity cases.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::Equity(string text)
{
    string model = "llama3";
    string definition = "The value of a debtor's interest in property that remains after liens and other creditors' interests are considered. (Example: If a house valued at $60,000 is subject to a $30,000 mortgage, there is $30,000 of equity.)";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::Evidence(string text)
{
    string model = "llama3";
    string definition = "Information presented in testimony or in documents that is used to persuade the fact finder (judge or jury) to decide the case in favor of one side or the other.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::ExParte(string text)
{
    string model = "llama3";
    string definition = "A proceeding brought before a court by one party only, without notice to or challenge by the other side.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::ExclusionartyRule(string text)
{
    string model = "llama3";
    string definition = "Doctrine that says evidence obtained in violation of a criminal defendant's constitutional or statutory rights is not admissible at trial.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::ExculpatoryEvidence(string text)
{
    string model = "llama3";
    string definition = "Evidence indicating that a defendant did not commit the crime.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::ExecutoryContracts(string text)
{
    string model = "llama3";
    string definition = "Contracts or leases under which both parties to the agreement have duties remaining to be performed. If a contract or lease is executory, a debtor may assume it (keep the contract) or reject it (terminate the contract).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::ExemptAssets(string text)
{
    string model = "llama3";
    string definition = "Property that a debtor is allowed to retain, free from the claims of creditors who do not have liens on the property.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::ExemptionsExemptProperty(string text)
{
    string model = "llama3";
    string definition = "Certain property owned by an individual debtor that the Bankruptcy Code or applicable state law permits the debtor to keep from unsecured creditors. For example, in some states the debtor may be able to exempt all or a portion of the equity in the debtor's primary residence (homestead exemption), or some or all tools of the trade used by the debtor to make a living (i.e., auto tools for an auto mechanic or dental tools for a dentist). The availability and amount of property the debtor may exempt depends on the state the debtor lives in.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::FaceSheetFiling(string text)
{
    string model = "llama3";
    string definition = "A bankruptcy case filed either without schedules or with incomplete schedules listing few creditors and debts. (Face sheet filings are often made for the purpose of delaying an eviction or foreclosure";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::FamilyFarmer(string text)
{
    string model = "llama3";
    string definition = "An individual, individual and spouse, corporation, or partnership engaged in a farming operation that meets certain debt limits and other statutory criteria for filing a petition under Chapter 12.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::FederalPublicDefender(string text)
{
    string model = "llama3";
    string definition = "An attorney employed by the federal courts on a full-time basis to provide legal defense to defendants who are unable to afford counsel. The judiciary administers the federal defender program pursuant to the Criminal Justice Act.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::FederalPublicDefenderOrganization(string text)
{
    string model = "llama3";
    string definition = "As provided for in the Criminal Justice Act, an organization established within a federal judicial circuit to represent criminal defendants who cannot afford an adequate defense. Each organization is supervised by a federal public defender appointed by the court of appeals for the circuit.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::FederalQuestionJurisdiction(string text)
{
    string model = "llama3";
    string definition = "Jurisdiction given to federal courts in cases involving the interpretation and application of the U.S. Constitution, acts of Congress, and treaties.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::Felony(string text)
{
    string model = "llama3";
    string definition = "A serious crime, usually punishable by at least one year in prison.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::File(string text)
{
    string model = "llama3";
    string definition = "To place a paper in the official custody of the clerk of court to enter into the files or records of a case.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::FraudulentTransfer(string text)
{
    string model = "llama3";
    string definition = "A transfer of a debtor's property made with intent to defraud or for which the debtor receives less than the transferred property's value.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::FreshStart(string text)
{
    string model = "llama3";
    string definition = "The characterization of a debtor's status after bankruptcy, i.e., free of most debts. (Giving debtors a fresh start is one purpose of the Bankruptcy Code.)";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::GrandJury(string text)
{
    string model = "llama3";
    string definition = "A body of 16-23 citizens who listen to evidence of criminal allegations, which is presented by the prosecutors, and determine whether there is probable cause to believe an individual committed an offense. See also indictment and U.S. attorney.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::HabeasCorpus(string text)
{
    string model = "llama3";
    string definition = "Latin, meaning you have the body. A writ of habeas corpus generally is a judicial order forcing law enforcement authorities to produce a prisoner they are holding, and to justify the prisoner's continued confinement. Federal judges receive petitions for a writ of habeas corpus from state prison inmates who say their state prosecutions violated federally protected rights in some way.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::Hearsay(string text)
{
    string model = "llama3";
    string definition = "Evidence presented by a witness who did not see or hear the incident in question but heard about it from someone else. With some exceptions, hearsay generally is not admissible as evidence at trial";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::HomeConfinement(string text)
{
    string model = "llama3";
    string definition = "A special condition the court imposes that requires an individual to remain at home except for certain approved activities such as work and medical appointments. Home confinement may include the use of electronic monitoring equipment – a transmitter attached to the wrist or the ankle – to help ensure that the person stays at home as required.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::Impeachment(string text)
{
    string model = "llama3";
    string definition = "1. The process of calling a witness's testimony into doubt. For example, if the attorney can show that the witness may have fabricated portions of his testimony, the witness is said to be impeached; 2. The constitutional process whereby the House of Representatives may impeach (accuse of misconduct) high officers of the federal government, who are then tried by the Senate.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::InCamera(string text)
{
    string model = "llama3";
    string definition = "Latin, meaning in a judge's chambers. Often means outside the presence of a jury and the public. In private.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::InFormaPauperis(string text)
{
    string model = "llama3";
    string definition = "In the manner of a pauper. Permission given by the court to a person to file a case without payment of the required court fees because the person cannot pay them.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::InculpatoryEvidence(string text)
{
    string model = "llama3";
    string definition = "Evidence indicating that a defendant did commit the crime.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::Indictment(string text)
{
    string model = "llama3";
    string definition = "The formal charge issued by a grand jury stating that there is enough evidence that the defendant committed the crime to justify having a trial; it is used primarily for felonies. See also information.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::Information(string text)
{
    string model = "llama3";
    string definition = "A formal accusation by a government attorney that the defendant committed a misdemeanor. See also indictment.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::Injunction(string text)
{
    string model = "llama3";
    string definition = "A court order preventing one or more named parties from taking some action. A preliminary injunction often is issued to allow fact-finding, so a judge can determine whether a permanent injunction is justified.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::InsiderOfCorprateDebtor(string text)
{
    string model = "llama3";
    string definition = "A director, officer, or person in control of the debtor; a partnership in which the debtor is a general partner; a general partner of the debtor; or a relative of a general partner, director, officer, or person in control of the debtor.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::InsiderOfIndividualDebtor(string text)
{
    string model = "llama3";
    string definition = "Any relative of the debtor or of a general partner of the debtor; partnership in which the debtor is a general partner; general partner of the debtor; or corporation of which the debtor is a director, officer, or person in control.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::Interrogatories(string text)
{
    string model = "llama3";
    string definition = "A form of discovery consisting of written questions to be answered in writing and under oath.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::Issue(string text)
{
    string model = "llama3";
    string definition = "1. The disputed point between parties in a lawsuit; 2. To send out officially, as in a court issuing an order.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::JointAdministration(string text)
{
    string model = "llama3";
    string definition = "A court-approved mechanism under which two or more cases can be administered together. (Assuming no conflicts of interest, these separate businesses or individuals can pool their resources, hire the same professionals, etc.)";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::JointPetition(string text)
{
    string model = "llama3";
    string definition = "One bankruptcy petition filed by a husband and wife together.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::Judge(string text)
{
    string model = "llama3";
    string definition = "An official of the Judicial branch with authority to decide lawsuits brought before courts. Used generically, the term judge may also refer to all judicial officers, including Supreme Court justices.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::Judgeship(string text)
{
    string model = "llama3";
    string definition = "The position of judge. By statute, Congress authorizes the number of judgeships for each district and appellate court.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::Judgement(string text)
{
    string model = "llama3";
    string definition = "The official decision of a court finally resolving the dispute between the parties to the lawsuit.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::JudicialConverenceOfTheUnitedStates(string text)
{
    string model = "llama3";
    string definition = "The policy-making entity for the federal court system. A 27-judge body whose presiding officer is the Chief Justice of the United States.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::Jurisdiction(string text)
{
    string model = "llama3";
    string definition = "The legal authority of a court to hear and decide a certain type of case. It also is used as a synonym for venue, meaning the geographic area over which the court has territorial jurisdiction to decide cases.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::Jurisprudence(string text)
{
    string model = "llama3";
    string definition = "The study of law and the structure of the legal system";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::Jury(string text)
{
    string model = "llama3";
    string definition = "The group of persons selected to hear the evidence in a trial and render a verdict on matters of fact. See also grand jury.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::JuryInstructions(string text)
{
    string model = "llama3";
    string definition = "A judge's directions to the jury before it begins deliberations regarding the factual questions it must answer and the legal rules that it must apply.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::Lawsuit(string text)
{
    string model = "llama3";
    string definition = "A legal action started by a plaintiff against a defendant based on a complaint that the defendant failed to perform a legal duty which resulted in harm to the plaintiff.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::Lien(string text)
{
    string model = "llama3";
    string definition = "A charge on specific property that is designed to secure payment of a debt or performance of an obligation. A debtor may still be responsible for a lien after a discharge.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::LiquidatedClaim(string text)
{
    string model = "llama3";
    string definition = "A creditor's claim for a fixed amount of money.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::Liquidation(string text)
{
    string model = "llama3";
    string definition = "The sale of a debtor's property with the proceeds to be used for the benefit of creditors.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::Litigation(string text)
{
    string model = "llama3";
    string definition = "A case, controversy, or lawsuit. Participants (plaintiffs and defendants) in lawsuits are called litigants.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::MagistrateJudge(string text)
{
    string model = "llama3";
    string definition = "A judicial officer of a district court who conducts initial proceedings in criminal cases, decides criminal misdemeanor cases, conducts many pretrial civil and criminal matters on behalf of district judges, and decides civil cases with the consent of the parties.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::MeansTest(string text)
{
    string model = "llama3";
    string definition = "Section 707(b)(2) of the Bankruptcy Code applies a means test to determine whether an individual debtor's chapter 7 filing is presumed to be an abuse of the Bankruptcy Code requiring dismissal or conversion of the case (generally to chapter 13). Abuse is presumed if the debtor's aggregate current monthly income (see definition above) over 5 years, net of certain statutorily allowed expenses is more than (i) $10,000, or (ii) 25% of the debtor's nonpriority unsecured debt, as long as that amount is at least $6,000. The debtor may rebut a presumption of abuse only by a showing of special circumstances that justify additional expenses or adjustments of current monthly income.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::MentalHealthTreatment(string text)
{
    string model = "llama3";
    string definition = "Special condition the court imposes to require an individual to undergo evaluation and treatment for a mental disorder. Treatment may include psychiatric, psychological, and sex offense-specific evaluations, inpatient or outpatient counseling, and medication.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::Misdemeanor(string text)
{
    string model = "llama3";
    string definition = "An offense punishable by one year of imprisonment or less. See also felony.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::Mistrial(string text)
{
    string model = "llama3";
    string definition = "An invalid trial, caused by fundamental error. When a mistrial is declared, the trial must start again with the selection of a new jury.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::Moot(string text)
{
    string model = "llama3";
    string definition = "Not subject to a court ruling because the controversy has not actually arisen, or has ended";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::Motion(string text)
{
    string model = "llama3";
    string definition = "A request by a litigant to a judge for a decision on an issue relating to the case.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::MotionInLimine(string text)
{
    string model = "llama3";
    string definition = "A pretrial motion requesting the court to prohibit the other side from presenting, or even referring to, evidence on matters said to be so highly prejudicial that no steps taken by the judge can prevent the jury from being unduly influenced.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::MotionToLiftTheAutomaticStay(string text)
{
    string model = "llama3";
    string definition = "A request by a creditor to allow the creditor to take action against the debtor or the debtor's property that would otherwise be prohibited by the automatic stay.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::NoAssetCase(string text)
{
    string model = "llama3";
    string definition = "A Chapter 7 case in which there are no assets available to satisfy any portion of the creditors' unsecured claims.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::Noloontendre(string text)
{
    string model = "llama3";
    string definition = "No contest. A plea of nolo contendere has the same effect as a plea of guilty, as far as the criminal sentence is concerned, but may not be considered as an admission of guilt for any other purpose.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::NondischargeableDebt(string text)
{
    string model = "llama3";
    string definition = "A debt that cannot be eliminated in bankruptcy. Examples include a home mortgage, debts for alimony or child support, certain taxes, debts for most government funded or guaranteed educational loans or benefit overpayments, debts arising from death or personal injury caused by driving while intoxicated or under the influence of drugs, and debts for restitution or a criminal fine included in a sentence on the debtor's conviction of a crime. Some debts, such as debts for money or property obtained by false pretenses and debts for fraud or defalcation while acting in a fiduciary capacity may be declared nondischargeable only if a creditor timely files and prevails in a nondischargeability action.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::NonexemptAssets(string text)
{
    string model = "llama3";
    string definition = "Property of a debtor that can be liquidated to satisfy claims of creditors.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::ObjectionToDischargeability(string text)
{
    string model = "llama3";
    string definition = "A trustee's or creditor's objection to the debtor being released from personal liability for certain dischargeable debts. Common reasons include allegations that the debt to be discharged was incurred by false pretenses or that debt arose because of the debtor's fraud while acting as a fiduciary.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::ObjectionToExemptions(string text)
{
    string model = "llama3";
    string definition = "A trustee's or creditor's objection to the debtor's attempt to claim certain property as exempt from liquidation by the trustee to creditors.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::Opinion(string text)
{
    string model = "llama3";
    string definition = "A judge's written explanation of the decision of the court. Because a case may be heard by three or more judges in the court of appeals, the opinion in appellate decisions can take several forms. If all the judges completely agree on the result, one judge will write the opinion for all. If all the judges do not agree, the formal decision will be based upon the view of the majority, and one member of the majority will write the opinion. The judges who did not agree with the majority may write separately in dissenting or concurring opinions to present their views. A dissenting opinion disagrees with the majority opinion because of the reasoning and/or the principles of law the majority used to decide the case. A concurring opinion agrees with the decision of the majority opinion, but offers further comment or clarification or even an entirely different reason for reaching the same result. Only the majority opinion can serve as binding precedent in future cases. See also precedent.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::OralArgument(string text)
{
    string model = "llama3";
    string definition = "An opportunity for lawyers to summarize their position before the court and also to answer the judges' questions.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::Panel(string text)
{
    string model = "llama3";
    string definition = "1. In appellate cases, a group of judges (usually three) assigned to decide the case; 2. In the jury selection process, the group of potential jurors; 3. The list of attorneys who are both available and qualified to serve as court-appointed counsel for criminal defendants who cannot afford their own counsel.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::Parole(string text)
{
    string model = "llama3";
    string definition = "The release of a prison inmate – granted by the U.S. Parole Commission – after the inmate has completed part of his or her sentence in a federal prison. When the parolee is released to the community, he or she is placed under the supervision of a U.S. probation officer.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::PartyInInterest(string text)
{
    string model = "llama3";
    string definition = "A party who has standing to be heard by the court in a matter to be decided in the bankruptcy case. The debtor, U.S. trustee or bankruptcy administrator, case trustee, and creditors are parties in interest for most matters.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::PerCuriam(string text)
{
    string model = "llama3";
    string definition = "Latin, meaning for the court. In appellate courts, often refers to an unsigned opinion.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::PremptoryChallenge(string text)
{
    string model = "llama3";
    string definition = "A district court may grant each side in a civil or criminal trial the right to exclude a certain number of prospective jurors without cause or giving a reason.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::PetitJury(string text)
{
    string model = "llama3";
    string definition = "A group of citizens who hear the evidence presented by both sides at trial and determine the facts in dispute. Federal criminal juries consist of 12 persons. Federal civil juries consist of at least six persons.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::Petition(string text)
{
    string model = "llama3";
    string definition = "The document that initiates the filing of a bankruptcy proceeding, setting forth basic information regarding the debtor, including name, address, chapter under which the case is filed, and estimated amount of assets and liabilities.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::PetitionPreparer(string text)
{
    string model = "llama3";
    string definition = "A business not authorized to practice law that prepares bankruptcy petitions.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::PettyOffense(string text)
{
    string model = "llama3";
    string definition = "A federal misdemeanor punishable by six months or less in prison.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::Plaintiff(string text)
{
    string model = "llama3";
    string definition = "A person or business that files a formal complaint with the court.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::Plan(string text)
{
    string model = "llama3";
    string definition = "A debtor's detailed description of how the debtor proposes to pay creditors' claims over a fixed period of time.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::Plea(string text)
{
    string model = "llama3";
    string definition = "In a criminal case, the defendant's statement pleading guilty or not guilty in answer to the charges. See also nolo contendere.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::Pleadings(string text)
{
    string model = "llama3";
    string definition = "Written statements filed with the court that describe a party's legal or factual assertions about the case.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::PostpetitionTransfer(string text)
{
    string model = "llama3";
    string definition = "A transfer of the debtor's property made after the commencement of the case.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::PrebankruptcyPlanning(string text)
{
    string model = "llama3";
    string definition = "The arrangement (or rearrangement) of a debtor's property to allow the debtor to take maximum advantage of exemptions. (Prebankruptcy planning typically includes converting nonexempt assets into exempt assets.)";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::Precednet(string text)
{
    string model = "llama3";
    string definition = "A court decision in an earlier case with facts and legal issues similar to a dispute currently before a court. Judges will generally follow precedent - meaning that they use the principles established in earlier cases to decide new cases that have similar facts and raise similar legal issues. A judge will disregard precedent if a party can show that the earlier case was wrongly decided, or that it differed in some significant way from the current case.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::PerferentialDebtPayment(string text)
{
    string model = "llama3";
    string definition = "A debt payment made to a creditor in the 90-day period before a debtor files bankruptcy (or within one year if the creditor was an insider) that gives the creditor more than the creditor would receive in the debtor's chapter 7 case.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::PresentenceReport(string text)
{
    string model = "llama3";
    string definition = "A report prepared by a court's probation officer, after a person has been convicted of an offense, summarizing for the court the background information needed to determine the appropriate sentence.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::PretrialConference(string text)
{
    string model = "llama3";
    string definition = "A meeting of the judge and lawyers to plan the trial, to discuss which matters should be presented to the jury, to review proposed evidence and witnesses, and to set a trial schedule. Typically, the judge and the parties also discuss the possibility of settlement of the case.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::PretrialServices(string text)
{
    string model = "llama3";
    string definition = "A function of the federal courts that takes place at the very start of the criminal justice process – after a person has been arrested and charged with a federal crime and before he or she goes to trial. Pretrial services officers focus on investigating the backgrounds of these persons to help the court determine whether to release or detain them while they await trial. The decision is based on whether these individuals are likely to flee or pose a threat to the community. If the court orders release, a pretrial services officer supervises the person in the community until he or she returns to court.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::Priority(string text)
{
    string model = "llama3";
    string definition = "The Bankruptcy Code's statutory ranking of unsecured claims that determines the order in which unsecured claims will be paid if there is not enough money to pay all unsecured claims in full.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::PriorityClaim(string text)
{
    string model = "llama3";
    string definition = "An unsecured claim that is entitled to be paid ahead of other unsecured claims that are not entitled to priority status. Priority refers to the order in which these unsecured claims are to be paid.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::ProPer(string text)
{
    string model = "llama3";
    string definition = "A slang expression sometimes used to refer to a pro se litigant. It is a corruption of the Latin phrase in propria persona.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::ProSe(string text)
{
    string model = "llama3";
    string definition = "Representing oneself. Serving as one's own lawyer.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::ProTem(string text)
{
    string model = "llama3";
    string definition = "Temporary.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::Probation(string text)
{
    string model = "llama3";
    string definition = "Sentencing option in the federal courts. With probation, instead of sending an individual to prison, the court releases the person to the community and orders him or her to complete a period of supervision monitored by a U.S. probation officer and to abide by certain conditions.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::ProbationOfficer(string text)
{
    string model = "llama3";
    string definition = "Officers of the probation office of a court. Probation officer duties include conducting presentence investigations, preparing presentence reports on convicted defendants, and supervising released defendants.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::Procedure(string text)
{
    string model = "llama3";
    string definition = "The rules for conducting a lawsuit; there are rules of civil procedure, criminal procedure, evidence, bankruptcy, and appellate procedure.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::ProofOfClaim(string text)
{
    string model = "llama3";
    string definition = "A written statement describing the reason a debtor owes a creditor money, which typically sets forth the amount of money owed. (There is an official form for this purpose.)";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::PropertyOfTheEstate(string text)
{
    string model = "llama3";
    string definition = "All legal or equitable interests of the debtor in property as of the commencement of the case.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::Prosecute(string text)
{
    string model = "llama3";
    string definition = "To charge someone with a crime. A prosecutor tries a criminal case on behalf of the government";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::ReaffirmationAgreement(string text)
{
    string model = "llama3";
    string definition = "An agreement by a debtor to continue paying a dischargeable debt after the bankruptcy, usually for the purpose of keeping collateral or mortgaged property that would otherwise be subject to repossession.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::Record(string text)
{
    string model = "llama3";
    string definition = "A written account of the proceedings in a case, including all pleadings, evidence, and exhibits submitted in the course of the case.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::Redemption(string text)
{
    string model = "llama3";
    string definition = "A procedure in a Chapter 7 case whereby a debtor removes a secured creditor's lien on collateral by paying the creditor the value of the property. The debtor may then retain the property.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::Remand(string text)
{
    string model = "llama3";
    string definition = "Send back.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::Reverse(string text)
{
    string model = "llama3";
    string definition = "The act of a court setting aside the decision of a lower court. A reversal is often accompanied by a remand to the lower court for further proceedings.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::Sanction(string text)
{
    string model = "llama3";
    string definition = "A penalty or other type of enforcement used to bring about compliance with the law or with rules and regulations.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::Schedules(string text)
{
    string model = "llama3";
    string definition = "Lists submitted by the debtor along with the petition (or shortly thereafter) showing the debtor's assets, liabilities, and other financial information. (There are official forms a debtor must use.)";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::SecuredCreditor(string text)
{
    string model = "llama3";
    string definition = "A secured creditor is an individual or business that holds a claim against the debtor that is secured by a lien on property of the estate. The property subject to the lien is the secured creditor's collateral.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::SecuredDebt(string text)
{
    string model = "llama3";
    string definition = "Debt backed by a mortgage, pledge of collateral, or other lien; debt for which the creditor has the right to pursue specific pledged property upon default. Examples include home mortgages, auto loans and tax liens.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::SeniorJudge(string text)
{
    string model = "llama3";
    string definition = "A federal judge who, after attaining the requisite age and length of judicial experience, takes senior status, thus creating a vacancy among a court's active judges. A senior judge retains the judicial office and may cut back his or her workload by as much as 75 percent, but many opt to keep a larger caseload.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::Sentence(string text)
{
    string model = "llama3";
    string definition = "The punishment ordered by a court for a defendant convicted of a crime.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::SentencingGuidlines(string text)
{
    string model = "llama3";
    string definition = "A set of rules and principles established by the United States Sentencing Commission that trial judges use to determine the sentence for a convicted defendant.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::Sequester(string text)
{
    string model = "llama3";
    string definition = "To separate. Sometimes juries are sequestered from outside influences during their deliberations.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::ServiceOfProcess(string text)
{
    string model = "llama3";
    string definition = "The delivery of writs or summonses to the appropriate party.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::Settlement(string text)
{
    string model = "llama3";
    string definition = "Parties to a lawsuit resolve their dispute without having a trial. Settlements often involve the payment of compensation by one party in at least partial satisfaction of the other party's claims, but usually do not include the admission of fault.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::SmallBusinessCase(string text)
{
    string model = "llama3";
    string definition = "A special type of chapter 11 case in which there is no creditors' committee (or the creditors' committee is deemed inactive by the court) and in which the debtor is subject to more oversight by the U.S. trustee than other chapter 11 debtors. The Bankruptcy Code contains certain provisions designed to reduce the time a small business debtor is in bankruptcy.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::StandardOfProof(string text)
{
    string model = "llama3";
    string definition = "Degree of proof required. In criminal cases, prosecutors must prove a defendant's guilt beyond a reasonable doubt. The majority of civil lawsuits require proof by a preponderance of the evidence (50 percent plus), but in some the standard is higher and requires clear and convincing proof.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::StatementOfFinancialAffairs(string text)
{
    string model = "llama3";
    string definition = "A series of questions the debtor must answer in writing concerning sources of income, transfers of property, lawsuits by creditors, etc. (There is an official form a debtor must use.)";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::StatementOfIntention(string text)
{
    string model = "llama3";
    string definition = "A declaration made by a chapter 7 debtor concerning plans for dealing with consumer debts that are secured by property of the estate.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::Statute(string text)
{
    string model = "llama3";
    string definition = "A law passed by a legislature.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::StatuteOfLimitations(string text)
{
    string model = "llama3";
    string definition = "The time within which a lawsuit must be filed or a criminal prosecution begun. The deadline can vary, depending on the type of civil case or the crime charged.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::SuaSponte(string text)
{
    string model = "llama3";
    string definition = "Latin, meaning of its own will. Often refers to a court taking an action in a case without being asked to do so by either side.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::Subordination(string text)
{
    string model = "llama3";
    string definition = "The act or process by which a person's rights or claims are ranked below those of others.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::Subpoena(string text)
{
    string model = "llama3";
    string definition = "A command, issued under a court's authority, to a witness to appear and give testimony.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::SupenaDucesTecum(string text)
{
    string model = "llama3";
    string definition = "A command to a witness to appear and produce documents.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::TemporaryRestrainingOrder(string text)
{
    string model = "llama3";
    string definition = "Akin to a preliminary injunction, it is a judge's short-term order forbidding certain actions until a full hearing can be conducted. Often referred to as a TRO.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::Testimony(string text)
{
    string model = "llama3";
    string definition = "Evidence presented orally by witnesses during trials or before grand juries.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::Toll(string text)
{
    string model = "llama3";
    string definition = "See statute of limitations.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::Tort(string text)
{
    string model = "llama3";
    string definition = "A civil, not criminal, wrong. A negligent or intentional injury against a person or property, with the exception of breach of contract.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::Transcript(string text)
{
    string model = "llama3";
    string definition = "A written, word-for-word record of what was said, either in a proceeding such as a trial, or during some other formal conversation, such as a hearing or oral deposition";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::Transfer(string text)
{
    string model = "llama3";
    string definition = "Any mode or means by which a debtor disposes of or parts with his/her property.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::Trustee(string text)
{
    string model = "llama3";
    string definition = "The representative of the bankruptcy estate who exercises statutory powers, principally for the benefit of the unsecured creditors, under the general supervision of the court and the direct supervision of the U.S. trustee or bankruptcy administrator. The trustee is a private individual or corporation appointed in all chapter 7, chapter 12, and chapter 13 cases and some chapter 11 cases. The trustee's responsibilities include reviewing the debtor's petition and schedules and bringing actions against creditors or the debtor to recover property of the bankruptcy estate. In chapter 7, the trustee liquidates property of the estate, and makes distributions to creditors. Trustees in chapter 12 and 13 have similar duties to a chapter 7 trustee and the additional responsibilities of overseeing the debtor's plan, receiving payments from debtors, and disbursing plan payments to creditors.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::TypingService(string text)
{
    string model = "llama3";
    string definition = "A business not authorized to practice law that prepares bankruptcy petitions.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::USAttorney(string text)
{
    string model = "llama3";
    string definition = "A lawyer appointed by the President in each judicial district to prosecute and defend cases for the federal government. The U.S. Attorney employs a staff of Assistant U.S. Attorneys who appear as the government's attorneys in individual cases.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::USTrustee(string text)
{
    string model = "llama3";
    string definition = "An officer of the U.S. Department of Justice responsible for supervising the administration of bankruptcy cases, estates, and trustees; monitoring plans and disclosure statements; monitoring creditors' committees; monitoring fee applications; and performing other statutory duties.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::UndersecuredClaim(string text)
{
    string model = "llama3";
    string definition = "A debt secured by property that is worth less than the amount of the debt.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::UndueHardship(string text)
{
    string model = "llama3";
    string definition = "The most widely used test for evaluating undue hardship in the dischargeability of a student loan includes three conditions: (1) the debtor cannot maintain – based on current income and expenses – a minimal standard of living if forced to repay the loans; (2) there are indications that the state of affairs is likely to persist for a significant portion of the repayment period; and (3) the debtor made good faith efforts to repay the loans.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::UnlawfulDetainerAction(string text)
{
    string model = "llama3";
    string definition = "A lawsuit brought by a landlord against a tenant to evict the tenant from rental property – usually for nonpayment of rent.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::UnliquidatedClaim(string text)
{
    string model = "llama3";
    string definition = "A claim for which a specific value has not been determined.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::UnscheduledDebt(string text)
{
    string model = "llama3";
    string definition = "A debt that should have been listed by the debtor in the schedules filed with the court but was not. (Depending on the circumstances, an unscheduled debt may or may not be discharged.)";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::UnsecuredClaim(string text)
{
    string model = "llama3";
    string definition = "A claim or debt for which a creditor holds no special assurance of payment, such as a mortgage or lien; a debt for which credit was extended based solely upon the creditor's assessment of the debtor's future ability to pay.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::Uphold(string text)
{
    string model = "llama3";
    string definition = "The appellate court agrees with the lower court decision and allows it to stand. See affirmed.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::Venue(string text)
{
    string model = "llama3";
    string definition = "The geographic area in which a court has jurisdiction. A change of venue is a change or transfer of a case from one judicial district to another.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::Verdict(string text)
{
    string model = "llama3";
    string definition = "The decision of a trial jury or a judge that determines the guilt or innocence of a criminal defendant, or that determines the final outcome of a civil case.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::Voirdire(string text)
{
    string model = "llama3";
    string definition = "Jury selection process of questioning prospective jurors, to ascertain their qualifications and determine any basis for challenge.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::VoluntaryTransfer(string text)
{
    string model = "llama3";
    string definition = "A transfer of a debtor's property with the debtor's consent.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::WageGarnishment(string text)
{
    string model = "llama3";
    string definition = "A nonbankruptcy legal proceeding whereby a plaintiff or creditor seeks to subject to his or her claim the future wages of a debtor. In other words, the creditor seeks to have part of the debtor's future wages paid to the creditor for a debt owed to the creditor.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::Warrant(string text)
{
    string model = "llama3";
    string definition = "Court authorization, most often for law enforcement officers, to conduct a search or make an arrest.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::Witness(string text)
{
    string model = "llama3";
    string definition = "A person called upon by either side in a lawsuit to give testimony before the court or jury.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::Writ(string text)
{
    string model = "llama3";
    string definition = "A written court order directing a person to take, or refrain from taking, a certain act.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Law::Terms::WritOfCertiorari(string text)
{
    string model = "llama3";
    string definition = "An order issued by the U.S. Supreme Court directing the lower court to transmit records for a case which it will hear on appeal.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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
