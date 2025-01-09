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
#include "Finance.hpp"
#include "Large Language Models.hpp"
#include "Parsers.hpp"
#include "Utilities.hpp"

using namespace std;

bool _Finance::Terms::BankerAcceptance(string text)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string model = "llama3";
    string definition = "A negotiable instrument or time draft drawn on and accepted by a bank, that upon acceptance becomes an obligation of the bank and is a marketable money-market instrument.";
    string prompt = "Check if the following text matches the following financial term, limit the response to yes or no: " + definition + " " + text;
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

bool _Finance::Terms::BearMarket(string text)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string model = "llama3";
    string definition = "A stock market where a majority of investors are buying (ulls, causing overall stock prices to rise.";
    string prompt = "Check if the following text matches the following financial term, limit the response to yes or no: " + definition + " " + text;
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

bool _Finance::Terms::BillOfExchange(string text)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string model = "llama3";
    string definition = "A document demanding payment from another party, especially used in international trade; draft.";
    string prompt = "Check if the following text matches the following financial term, limit the response to yes or no: " + definition + " " + text;
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

bool _Finance::Terms::BullMarket(string text)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string model = "llama3";
    string definition = "A stock market where a majority of investors are selling (ears, causing overall stock prices to drop.";
    string prompt = "Check if the following text matches the following financial term, limit the response to yes or no: " + definition + " " + text;
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

bool _Finance::Terms::Bond(string text)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string model = "llama3";
    string definition = "A documentary obligation to pay a sum or to perform a contract; a debenture.";
    string prompt = "Check if the following text matches the following financial term, limit the response to yes or no: " + definition + " " + text;
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

bool _Finance::Terms::CashInstrument(string text)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string model = "llama3";
    string definition = "Any financial instrument whose value is determined directly by the market.";
    string prompt = "Check if the following text matches the following financial term, limit the response to yes or no: " + definition + " " + text;
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

bool _Finance::Terms::CapitalMarket(string text)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string model = "llama3";
    string definition = "The market for long-term securities, including the stock market and the bond market.";
    string prompt = "Check if the following text matches the following financial term, limit the response to yes or no: " + definition + " " + text;
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

bool _Finance::Terms::CertificateOfDeposit(string text)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string model = "llama3";
    string definition = "A type of time deposit, which is insured, with a specific, fixed term, and, usually, a fixed interest rate.";
    string prompt = "Check if the following text matches the following financial term, limit the response to yes or no: " + definition + " " + text;
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

bool _Finance::Terms::CommercialPaper(string text)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string model = "llama3";
    string definition = "A negotiable instrument with short maturity.";
    string prompt = "Check if the following text matches the following financial term, limit the response to yes or no: " + definition + " " + text;
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

bool _Finance::Terms::Coupon(string text)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string model = "llama3";
    string definition = "Any interest payment made or due on a bond, debenture or similar (no longer by a physical coupon).";
    string prompt = "Check if the following text matches the following financial term, limit the response to yes or no: " + definition + " " + text;
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

bool _Finance::Terms::CreditDefaultSwap(string text)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string model = "llama3";
    string definition = "A credit derivative contract between two counterparties, whereby the buyer (seller of risk) makes periodic payments to the seller (buyer of risk) in exchange for the right to a payoff if there is a default or other credit event in respect of a third party called reference entity.";
    string prompt = "Check if the following text matches the following financial term, limit the response to yes or no: " + definition + " " + text;
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

bool _Finance::Terms::CreditEvent(string text)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string model = "llama3";
    string definition = "A significant default on a financial instrument or some other financial occurrence, such as bankruptcy, restructuring, repudiation, or moratorium, or failure to pay some other obligation, such as taxes.";
    string prompt = "Check if the following text matches the following financial term, limit the response to yes or no: " + definition + " " + text;
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

bool _Finance::Terms::CreditRisk(string text)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string model = "llama3";
    string definition = "The risk of loss due to a debtor non-payment of a loan or other line of credit.";
    string prompt = "Check if the following text matches the following financial term, limit the response to yes or no: " + definition + " " + text;
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

bool _Finance::Terms::DebtInstrument(string text)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string model = "llama3";
    string definition = "A document evidencing a debt; the debt so evidenced.";
    string prompt = "Check if the following text matches the following financial term, limit the response to yes or no: " + definition + " " + text;
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

bool _Finance::Terms::DerivativeInstrument(string text)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string model = "llama3";
    string definition = "A security whose value is derived from one or more other, more fundamental, assets.";
    string prompt = "Check if the following text matches the following financial term, limit the response to yes or no: " + definition + " " + text;
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

bool _Finance::Terms::Draft(string text)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string model = "llama3";
    string definition = "A bill of exchange.";
    string prompt = "Check if the following text matches the following financial term, limit the response to yes or no: " + definition + " " + text;
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

bool _Finance::Terms::ExchangeRate(string text)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string model = "llama3";
    string definition = "The rate at which one currency can be exchanged for another.";
    string prompt = "Check if the following text matches the following financial term, limit the response to yes or no: " + definition + " " + text;
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

bool _Finance::Terms::FaceValue(string text)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string model = "llama3";
    string definition = "The amount or value listed on a bill, note, stamp, etc.; the stated value or amount.";
    string prompt = "Check if the following text matches the following financial term, limit the response to yes or no: " + definition + " " + text;
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

bool _Finance::Terms::FinancialInstrument(string text)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string model = "llama3";
    string definition = "Any form of funding medium, mostly those used for borrowing in money markets, including cash instruments and derivative instruments.";
    string prompt = "Check if the following text matches the following financial term, limit the response to yes or no: " + definition + " " + text;
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

bool _Finance::Terms::Fungible(string text)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string model = "llama3";
    string definition = "Able to be substituted for something of equal value.";
    string prompt = "Check if the following text matches the following financial term, limit the response to yes or no: " + definition + " " + text;
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

bool _Finance::Terms::Interest(string text)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string model = "llama3";
    string definition = "The price paid for obtaining, or price received for providing, money or goods in a credit transaction, calculated as a fraction of the amount or value of what was borrowed.";
    string prompt = "Check if the following text matches the following financial term, limit the response to yes or no: " + definition + " " + text;
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

bool _Finance::Terms::MarketRisk(string text)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string model = "llama3";
    string definition = "The risk that the value of an investment will decrease due to moves in market factors.";
    string prompt = "Check if the following text matches the following financial term, limit the response to yes or no: " + definition + " " + text;
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

bool _Finance::Terms::MoneyMarket(string text)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string model = "llama3";
    string definition = "A market for trading short-term debt instruments, such as treasury bills, commercial paper, bankersacceptances, and certificates of deposit.";
    string prompt = "Check if the following text matches the following financial term, limit the response to yes or no: " + definition + " " + text;
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

bool _Finance::Terms::NegotiableInstrument(string text)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string model = "llama3";
    string definition = "A right to receive payment of money which is unconditional (sometimes excepting loss or theft) and capable of transfer by negotiation.";
    string prompt = "Check if the following text matches the following financial term, limit the response to yes or no: " + definition + " " + text;
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

bool _Finance::Terms::PromissoryNote(string text)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string model = "llama3";
    string definition = "A document saying that someone owes a specific amount of money to someone else, often with the deadline and interest fees.";
    string prompt = "Check if the following text matches the following financial term, limit the response to yes or no: " + definition + " " + text;
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

bool _Finance::Terms::Security(string text)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string model = "llama3";
    string definition = "A fungible, negotiable instrument representing financial value.";
    string prompt = "Check if the following text matches the following financial term, limit the response to yes or no: " + definition + " " + text;
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

bool _Finance::Terms::Share(string text)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string model = "llama3";
    string definition = "A financial instrument that shows that you own a part of a company that provides the benefit of limited liability.";
    string prompt = "Check if the following text matches the following financial term, limit the response to yes or no: " + definition + " " + text;
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

bool _Finance::Terms::Stock(string text)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string model = "llama3";
    string definition = "The capital raised by a company through the issue of shares. The total of shares held by an individual shareholder.";
    string prompt = "Check if the following text matches the following financial term, limit the response to yes or no: " + definition + " " + text;
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

bool _Finance::Terms::TimeDeposit(string text)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string model = "llama3";
    string definition = "A deposit in a bank that cannot be withdrawn before a specified date.";
    string prompt = "Check if the following text matches the following financial term, limit the response to yes or no: " + definition + " " + text;
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

bool _Finance::Terms::TreasuryBill(string text)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string model = "llama3";
    string definition = "A government obligation, sold at a discount, maturing in one year or less, and pays no interest prior to maturity.";
    string prompt = "Check if the following text matches the following financial term, limit the response to yes or no: " + definition + " " + text;
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

bool _Finance::Terms::ZeroCouponBond(string text)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string model = "llama3";
    string definition = "A bond (e.g., corporate debenture or government debt) that has no coupon (i.e., pays no interest), during the life of the issue. Such a bond is initially sold at a deep discount to its face value.";
    string prompt = "Check if the following text matches the following financial term, limit the response to yes or no: " + definition + " " + text;
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