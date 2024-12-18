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
#include "Bias.hpp"
#include "Parsers.hpp"
#include "Working-Memory.hpp"
#include "Short-Term Memory.hpp"
#include "Long-Term Memory.hpp"
#include "Large Language Models.hpp"
#include "Reference.hpp"
#include "Mathematics.hpp"
#include "NLP.hpp"
#include "NLU.hpp"
#include "Settings.hpp"
#include "Variables.hpp"
#include "Utilities.hpp"

using namespace std;

// This function will check for bias in text and will compensate with the environment or context
//string _NLU::BiasCheck(string* text, string data)
//{
//    // 1. Connect to the biases database
//    return "false";
//}

// This function will be a simple check for bias in actions, speech and writing
string _Bias::BiasCheck(string text)
{
    string temp = "";

    if (_Bias::AmbiguityEffect(text))
    {
        temp += "Ambiguity Effect";
    }
    if (_Bias::Anchoring(text))
    {
        temp += "Anchoring";
    }
    if (_Bias::AnthropocentricThinking(text))
    {
        temp += "Anthropocentric Thinking";
    }
    if (_Bias::Anthropomorphism(text))
    {
        temp += "Anthropomorphism";
    }
    if (_Bias::AttentionalBias(text))
    {
        temp += "Attentional Bias";
    }
    if (_Bias::AutomationBias(text))
    {
        temp += "Automation Bias";
    }
    if (_Bias::AvailabilityHeuristic(text))
    {
        temp += "Availability Heuristic";
    }
    if (_Bias::AvailabilityCascade(text))
    {
        temp += "Availability Cascade";
    }
    if (_Bias::BackfireEffect(text))
    {
        temp += "Backfire Effect";
    }
    if (_Bias::BandwagonEffect(text))
    {
        temp += "Bandwagon Effect";
    }
    if (_Bias::BeliefBias(text))
    {
        temp += "Belief Bias";
    }
    if (_Bias::BenFranklynEffect(text))
    {
        temp += "Ben Franklyn Effect";
    }
    if (_Bias::BerksonParadox(text))
    {
        temp += "Berkson Paradox";
    }
    if (_Bias::BiasBlindSpot(text))
    {
        temp += "Bias Blind Spot";
    }
    if (_Bias::ChoiceSupportiveBias(text))
    {
        temp += "Choice Support Bias";
    }
    if (_Bias::ClusteringIllusion(text))
    {
        temp += "Clustering Illusion";
    }
    if (_Bias::ConfirmationBias(text))
    {
        temp += "Confirmation Bias";
    }
    if (_Bias::CongruenceBias(text))
    {
        temp += "Congrence Bias";
    }
    if (_Bias::Conservatism(text))
    {
        temp += "Conservation";
    }
    if (_Bias::ContinuedInfluenceEffect(text))
    {
        temp += "Continued Influence Effect";
    }
    if (_Bias::ContrastEffect(text))
    {
        temp += "Contrast Effect";
    }
    if (_Bias::CourtesyBias(text))
    {
        temp += "Courtesy Bias";
    }
    if (_Bias::CurseOfKnowledge(text))
    {
        temp += "Curse of Knowledge";
    }
    if (_Bias::Declinism(text))
    {
        temp += "Declinism";
    }
    if (_Bias::DecoyEffect(text))
    {
        temp += "Decoy Effect";
    }
    if (_Bias::DefaultEffect(text))
    {
        temp += "Default Effect";
    }
    if (_Bias::DenominationEffect(text))
    {
        temp += "Denomination Effect";
    }
    if (_Bias::DispositionEffect(text))
    {
        temp += "Disposition Effect";
    }
    if (_Bias::DistinktionBias(text))
    {
        temp += "Distinktion Bias";
    }
    if (_Bias::DreadAversion(text))
    {
        temp += "Dread Aversion";
    }
    if (_Bias::DunningKrugerEffect(text))
    {
        temp += "Dunning Kruger Effect";
    }
    if (_Bias::DurationNeglect(text))
    {
        temp += "Duration Neglect";
    }
    if (_Bias::EmpathyGap(text))
    {
        temp += "Empathy Gap";
    }
    if (_Bias::EndowmentEffect(text))
    {
        temp += "Endowment Effect";
    }
    if (_Bias::ExaggeratedExpectation(text))
    {
        temp += "Exaggerated Expectation";
    }
    if (_Bias::ExpactationBias(text))
    {
        temp += "Expactation Bias";
    }
    if (_Bias::FocusingEffect(text))
    {
        temp += "Focusing Effect";
    }
    if (_Bias::ForerEffect(text))
    {
        temp += "Forer Effect";
    }
    if (_Bias::FormFunctionAttributionBias(text))
    {
        temp += "Form Function Attribution Bias";
    }
    if (_Bias::FramingEffect(text))
    {
        temp += "Framing Effect";
    }
    if (_Bias::FrequencyIllusion(text))
    {
        temp += "Frequency Illution";
    }
    if (_Bias::FunctionalFixedness(text))
    {
        temp += "Functional Fixedness";
    }
    if (_Bias::Groupthink(text))
    {
        temp += "Group Think";
    }
    if (_Bias::HardEasyEffect(text))
    {
        temp += "Hard Easy Effect";
    }
    if (_Bias::HindsightBias(text))
    {
        temp += "Hindsight Bias";
    }
    if (_Bias::HostileAttributionBias(text))
    {
        temp += "Hostile Attribution Bias";
    }
    if (_Bias::HyperbolicDiscounting(text))
    {
        temp += "Hyperbolic Discounting";
    }
    if (_Bias::IdentifiableVictimEffect(text))
    {
        temp += "Identifiable Victim Effect";
    }
    if (_Bias::IKEAEffect(text))
    {
        temp += "IKEA Effect";
    }
    if (_Bias::IllicitTransference(text))
    {
        temp += "Illicit Transference";
    }
    if (_Bias::IllusionOfControl(text))
    {
        temp += "Illusion of Control";
    }
    if (_Bias::IllusionOfValidity(text))
    {
        temp += "Illusition of Validity";
    }
    if (_Bias::IllusoryCorrelation(text))
    {
        temp += "Illusory Correlation";
    }
    if (_Bias::IllusoryTruthEffect(text))
    {
        temp += "Illusory Truth Effect";
    }
    if (_Bias::ImpactBias(text))
    {
        temp += "Impact Bias";
    }
    if (_Bias::ImplicitAssociation(text))
    {
        temp += "Implicit Association";
    }
    if (_Bias::InformationBias(text))
    {
        temp += "Information Bias";
    }
    if (_Bias::InsenitiveityToSampleSize(text))
    {
        temp += "Insenitveity To Sample Size";
    }
    if (_Bias::InteroceptiveBias(text))
    {
        temp += "Interoceptive Bias";
    }
    if (_Bias::IrrationalEscalation(text))
    {
        temp += "Irrational Escalation";
    }
    if (_Bias::LawOfTheInstrument(text))
    {
        temp += "Law of the Instrument";
    }
    if (_Bias::LessIsBetterEffect(text))
    {
        temp += "Less is Better Effect";
    }
    if (_Bias::LookElsewhereEffect(text))
    {
        temp += "Look Elsewhere Effect";
    }
    if (_Bias::LossAversion(text))
    {
        temp += "Loss Aversition";
    }
    if (_Bias::MereExposureEffect(text))
    {
        temp += "Mere Exposure Effect";
    }
    if (_Bias::MoneyIllusion(text))
    {
        temp += "Money Illusion";
    }
    if (_Bias::MoralCredentialEffect(text))
    {
        temp += "Moral Credential Effect";
    }
    if (_Bias::NegativityBias(text))
    {
        temp += "Negativity Bias";
    }
    if (_Bias::NeglectOfProbability(text))
    {
        temp += "Neglect of Probability";
    }
    if (_Bias::NormalcyBias(text))
    {
        temp += "Normalcy Bias";
    }
    if (_Bias::NotInventedHere(text))
    {
        temp += "Not Invented Here";
    }
    if (_Bias::ObserverExpectancyEffect(text))
    {
        temp += "Observer Expectancy Effect";
    }
    if (_Bias::OmissionBias(text))
    {
        temp += "Omission Bias";
    }
    if (_Bias::OptimismBias(text))
    {
        temp += "Optimism Bias";
    }
    if (_Bias::OstrichEffect(text))
    {
        temp += "Ostrich Effect";
    }
    if (_Bias::OutcomeBias(text))
    {
        temp += "Outcome Bias";
    }
    if (_Bias::OverconfidenceEffect(text))
    {
        temp += "Overconfidence Effect";
    }
    if (_Bias::Parelidolia(text))
    {
        temp += "Parelidolia";
    }
    if (_Bias::PygmalionEffect(text))
    {
        temp += "Pygmalion Effect";
    }
    if (_Bias::PessimismBias(text))
    {
        temp += "Pessimism Bias";
    }
    if (_Bias::PostPurchaseRationalization(text))
    {
        temp += "Post Purchase Rationalization";
    }
    if (_Bias::PresentBias(text))
    {
        temp += "Present Bias";
    }
    if (_Bias::ProInnovationBias(text))
    {
        temp += "Pro Innovation Bias";
    }
    if (_Bias::ProjectionBias(text))
    {
        temp += "Projection Bias";
    }
    if (_Bias::PseudoertaintyEffect(text))
    {
        temp += "Pseudocertainty Effect";
    }
    if (_Bias::Reactance(text))
    {
        temp += "Recactance";
    }
    if (_Bias::ReactiveDevaluation(text))
    {
        temp += "Reactive Devaluation";
    }
    if (_Bias::RecencyIllusion(text))
    {
        temp += "Recency Illusion";
    }
    if (_Bias::RegressiveBias(text))
    {
        temp += "Regressive Bias";
    }
    if (_Bias::RestraintBias(text))
    {
        temp += "Restraint Bias";
    }
    if (_Bias::ReasonEffect(text))
    {
        temp += "Reason Effect";
    }
    if (_Bias::RiskCompensation(text))
    {
        temp += "Risk Compensation";
    }
    if (_Bias::SalienceBias(text))
    {
        temp += "Salience Bias";
    }
    if (_Bias::SelectionBias(text))
    {
        temp += "Selection Bias";
    }
    if (_Bias::SelectivePerception(text))
    {
        temp += "Selective Perception";
    }
    if (_Bias::SemmelweisReflex(text))
    {
        temp += "Semmelweis Reflex";
    }
    if (_Bias::SexualOverperceptionBias(text))
    {
        temp += "Sexual Overperception Bias";
    }
    if (_Bias::SocialComparisonBias(text))
    {
        temp += "Social Comparison Bias";
    }
    if (_Bias::SocialDesirabilityBias(text))
    {
        temp += "Social Desirability Bias";
    }
    if (_Bias::StatusQuoBias(text))
    {
        temp += "Status Quo Bias";
    }
    if (_Bias::Stereotyping(text))
    {
        temp += "Stereotyping";
    }
    if (_Bias::SubAdditiveityEffect(text))
    {
        temp += "Sub Additiveity Effect";
    }
    if (_Bias::SubjectiveValidation(text))
    {
        temp += "Subjective Validation";
    }
    if (_Bias::Surrogation(text))
    {
        temp += "Surrogation";
    }
    if (_Bias::SurvivorshipBias(text))
    {
        temp += "Survivorship Bias";
    }
    if (_Bias::TimeSavingBias(text))
    {
        temp += "Time Saving Bias";
    }
    if (_Bias::ThirdPersonEffect(text))
    {
        temp += "Third Person Effect";
    }
    if (_Bias::ParkinsonLawOfTriviality(text))
    {
        temp += "Parkinson Law of Triviality";
    }
    if (_Bias::UnitBias(text))
    {
        temp += "Unit Bias";
    }
    if (_Bias::WeberFechnerLaw(text))
    {
        temp += "Web Fechner Law";
    }
    if (_Bias::WellTravelledRoadEffect(text))
    {
        temp += "Well Travelled Road Effect";
    }
    if (_Bias::ZeroRiskBias(text))
    {
        temp += "Zero Risk Bias";
    }
    if (_Bias::ZeroSumBias(text))
    {
        temp += "Zero Sum Bias";
    }
    if (_Bias::BaseRateBias(text))
    {
        temp += "Base Rate Bias";
    }
    if (_Bias::ConjunctionBias(text))
    {
        temp += "Conjunction Bias";
    }
    if (_Bias::Gamblersbias(text))
    {
        temp += "Gambler's Bias";
    }
    if (_Bias::HotHandBias(text))
    {
        temp += "Hot Hand Bias";
    }
    if (_Bias::PlanningBias(text))
    {
        temp += "Planning Bias";
    }
    else
    {
        return "NULL";
    }

    return temp;
}

// Ambiguity effect
// The tendency to avoid options for which the probability of a favorable outcome is unknown.
bool _Bias::AmbiguityEffect(string text)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string model = "llama3";
    string bias_definition = "The tendency to avoid options for which the probability of a favorable outcome is unknown.";
    string prompt = "Check if the following text matches the following cognitive bias and limit the response to yes or no: " + bias_definition + " " + text;
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

// Anchoring or focalism
// The tendency to rely too heavily, or "anchor", on one trait or piece of information when making decisions(usually the first piece of information acquired on that subject).
bool _Bias::Anchoring(string text)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string model = "llama3";
    string bias_definition = "The tendency to rely too heavily, or anchor, on one trait or piece of information when making decisions(usually the first piece of information acquired on that subject).";
    string prompt = "Check if the following text matches the following cognitive bias and limit the response to yes or no: " + bias_definition + " " + text;
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

// Anthropocentric thinking
// The tendency to use human analogies as a basis for reasoning about other, less familiar, biological phenomena.
bool _Bias::AnthropocentricThinking(string text)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string model = "llama3";
    string bias_definition = "The tendency to use human analogies as a basis for reasoning about other, less familiar, biological phenomena.";
    string prompt = "Check if the following text matches the following cognitive bias and limit the response to yes or no: " + bias_definition + " " + text;
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

// Anthropomorphism or personification
// The tendency to characterize animals, objects, and abstract concepts as possessing human like traits, emotions, and intentions.
bool _Bias::Anthropomorphism(string text)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string model = "llama3";
    string bias_definition = "The tendency to characterize animals, objects, and abstract concepts as possessing human like traits, emotions, and intentions.";
    string prompt = "Check if the following text matches the following cognitive bias and limit the response to yes or no: " + bias_definition + " " + text;
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

// Attentional bias
// The tendency of perception to be affected by recurring thoughts.
bool _Bias::AttentionalBias(string text)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string model = "llama3";
    string bias_definition = "The tendency of perception to be affected by recurring thoughts.";
    string prompt = "Check if the following text matches the following cognitive bias and limit the response to yes or no: " + bias_definition + " " + text;
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

// Automation bias
// The tendency to depend excessively on automated systems which can lead to erroneous automated information overriding correct decisions.
bool _Bias::AutomationBias(string text)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string model = "llama3";
    string bias_definition = "The tendency to depend excessively on automated systems which can lead to erroneous automated information overriding correct decisions.";
    string prompt = "Check if the following text matches the following cognitive bias and limit the response to yes or no: " + bias_definition + " " + text;
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

// Availability heuristic
// The tendency to overestimate the likelihood of events with greater "availability" in memory, which can be influenced by how recent the memories are or how unusual or emotionally charged they may be.
bool _Bias::AvailabilityHeuristic (string text)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string model = "llama3";
    string bias_definition = "The tendency to overestimate the likelihood of events with greater \"availability\" in memory, which can be influenced by how recent the memories are or how unusual or emotionally charged they may be";
    string prompt = "Check if the following text matches the following cognitive bias and limit the response to yes or no: " + bias_definition + " " + text;
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

// Availability cascade
// A self reinforcing process in which a collective belief gains more and more plausibility through its increasing repetition in public discourse(or "repeat something long enough and it will become true").
bool _Bias::AvailabilityCascade(string text)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string model = "llama3";
    string bias_definition = "A self reinforcing process in which a collective belief gains more and more plausibility through its increasing repetition in public discourse";
    string prompt = "Check if the following text matches the following cognitive bias and limit the response to yes or no: " + bias_definition + " " + text;
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

// Backfire effect
// The reaction to disconfirming evidence by strengthening one's previous beliefs. Continued influence effect.
bool _Bias::BackfireEffect(string text)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string model = "llama3";
    string bias_definition = "The reaction to disconfirming evidence by strengthening one's previous beliefs. Continued influence effect.";
    string prompt = "Check if the following text matches the following cognitive bias and limit the response to yes or no: " + bias_definition + " " + text;
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

// Bandwagon effect
// The tendency to do (or believe) things because many other people do (or believe) the same.Related to groupthinkand herd behavior.
bool _Bias::BandwagonEffect(string text)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string model = "llama3";
    string bias_definition = "The tendency to do (or believe) things because many other people do (or believe) the same.Related to groupthinkand herd behavior";
    string prompt = "Check if the following text matches the following cognitive bias and limit the response to yes or no: " + bias_definition + " " + text;
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

// Base rate bias or Base rate neglect
// The tendency to ignore base rate information(generic, general information) and focus on specific information(information only pertaining to a certain case).
bool _Bias::BaseRateBias(string text)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string model = "llama3";
    string bias_definition = "The tendency to ignore base rate information";
    string prompt = "Check if the following text matches the following cognitive bias and limit the response to yes or no: " + bias_definition + " " + text;
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

// Belief bias
// An effect where someone's evaluation of the logical strength of an argument is biased by the believability of the conclusion.
bool _Bias::BeliefBias(string text)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string model = "llama3";
    string bias_definition = "An effect where someone's evaluation of the logical strength of an argument is biased by the believability of the conclusion";
    string prompt = "Check if the following text matches the following cognitive bias and limit the response to yes or no: " + bias_definition + " " + text;
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

// Ben Franklin effect
// A person who has performed a favor for someone is more likely to do another favor for that person than they would be if they had received a favor from that person.
bool _Bias::BenFranklynEffect(string text)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string model = "llama3";
    string bias_definition = "A person who has performed a favor for someone is more likely to do another favor for that person than they would be if they had received a favor from that person.";
    string prompt = "Check if the following text matches the following cognitive bias and limit the response to yes or no: " + bias_definition + " " + text;
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

// Berkson's paradox
// The tendency to misinterpret statistical experiments involving conditional probabilities.
bool _Bias::BerksonParadox(string text)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string model = "llama3";
    string bias_definition = "The tendency to misinterpret statistical experiments involving conditional probabilities.";
    string prompt = "Check if the following text matches the following cognitive bias and limit the response to yes or no: " + bias_definition + " " + text;
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

// Bias blind spot
// The tendency to see oneself as less biased than other people, or to be able to identify more cognitive biases in others than in oneself.
bool _Bias::BiasBlindSpot(string text)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string model = "llama3";
    string bias_definition = "The tendency to see oneself as less biased than other people, or to be able to identify more cognitive biases in others than in oneself.";
    string prompt = "Check if the following text matches the following cognitive bias and limit the response to yes or no: " + bias_definition + " " + text;
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

// Choice supportive bias
// The tendency to remember one's choices as better than they actually were.
bool _Bias::ChoiceSupportiveBias(string text)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string model = "llama3";
    string bias_definition = "The tendency to remember one's choices as better than they actually were.";
    string prompt = "Check if the following text matches the following cognitive bias and limit the response to yes or no: " + bias_definition + " " + text;
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

// Clustering illusion
// The tendency to overestimate the importance of small runs, streaks, or clusters in large samples of random data(that is, seeing phantom patterns).
bool _Bias::ClusteringIllusion(string text)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string model = "llama3";
    string bias_definition = "The tendency to overestimate the importance of small runs, streaks, or clusters in large samples of random data";
    string prompt = "Check if the following text matches the following cognitive bias and limit the response to yes or no: " + bias_definition + " " + text;
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

// Confirmation bias
// The tendency to search for, interpret, focus onand remember information in a way that confirms one's preconceptions.
bool _Bias::ConfirmationBias(string text)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string model = "llama3";
    string bias_definition = "The tendency to search for, interpret, focus onand remember information in a way that confirms one's preconceptions";
    string prompt = "Check if the following text matches the following cognitive bias and limit the response to yes or no: " + bias_definition + " " + text;
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

// Congruence bias
// The tendency to test hypotheses exclusively through direct testing, instead of testing possible alternative hypotheses.
bool _Bias::CongruenceBias(string text)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string model = "llama3";
    string bias_definition = "The tendency to test hypotheses exclusively through direct testing, instead of testing possible alternative hypotheses.";
    string prompt = "Check if the following text matches the following cognitive bias and limit the response to yes or no: " + bias_definition + " " + text;
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

// Conjunction bias
// The tendency to assume that specific conditions are more probable than general ones.
bool _Bias::ConjunctionBias(string text)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string model = "llama3";
    string bias_definition = "The tendency to assume that specific conditions are more probable than general ones.";
    string prompt = "Check if the following text matches the following cognitive bias and limit the response to yes or no: " + bias_definition + " " + text;
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

// Conservatism(belief revision)
// The tendency to revise one's belief insufficiently when presented with new evidence.
bool _Bias::Conservatism(string text)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string model = "llama3";
    string bias_definition = "The tendency to revise one's belief insufficiently when presented with new evidence.";
    string prompt = "Check if the following text matches the following cognitive bias and limit the response to yes or no: " + bias_definition + " " + text;
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

// Continued influence effect
// The tendency to believe previously learned misinformation even after it has been corrected.Misinformation can still influence inferences one generates after a correction has occurred.Backfire effect.
bool _Bias::ContinuedInfluenceEffect(string text)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string model = "llama3";
    string bias_definition = "The tendency to believe previously learned misinformation even after it has been corrected.Misinformation can still influence inferences one generates after a correction has occurred.Backfire effect";
    string prompt = "Check if the following text matches the following cognitive bias and limit the response to yes or no: " + bias_definition + " " + text;
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

// Contrast effect
// The enhancement or reduction of a certain stimulus' perception when compared with a recently observed, contrasting object.
bool _Bias::ContrastEffect(string text)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string model = "llama3";
    string bias_definition = "The enhancement or reduction of a certain stimulus' perception when compared with a recently observed, contrasting object.";
    string prompt = "Check if the following text matches the following cognitive bias and limit the response to yes or no: " + bias_definition + " " + text;
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

// Courtesy bias
// The tendency to give an opinion that is more socially correct than one's true opinion, so as to avoid offending anyone.
bool _Bias::CourtesyBias(string text)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string model = "llama3";
    string bias_definition = "The tendency to give an opinion that is more socially correct than one's true opinion, so as to avoid offending anyone.";
    string prompt = "Check if the following text matches the following cognitive bias and limit the response to yes or no: " + bias_definition + " " + text;
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

// Curse of knowledge
// When better informed people find it extremely difficult to think about problems from the perspective of lesser informed people.
bool _Bias::CurseOfKnowledge(string text)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string model = "llama3";
    string bias_definition = "When better informed people find it extremely difficult to think about problems from the perspective of lesser informed people.";
    string prompt = "Check if the following text matches the following cognitive bias and limit the response to yes or no: " + bias_definition + " " + text;
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

// Declinism
// The predisposition to view the past favorably(rosy retrospection) and future negatively.
bool _Bias::Declinism(string text)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string model = "llama3";
    string bias_definition = "The predisposition to view the past favorably(rosy retrospection) and future negatively.";
    string prompt = "Check if the following text matches the following cognitive bias and limit the response to yes or no: " + bias_definition + " " + text;
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

// Decoy effect
// Preferences for either option A or B change in favor of option B when option C is presented, which is completely dominated by option B(inferior in all respects) and partially dominated by option A.
bool _Bias::DecoyEffect(string text)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string model = "llama3";
    string bias_definition = "Preferences for either option A or B change in favor of option B when option C is presented, which is completely dominated by option B(inferior in all respects) and partially dominated by option A.";
    string prompt = "Check if the following text matches the following cognitive bias and limit the response to yes or no: " + bias_definition + " " + text;
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

// Default effect
// When given a choice between several options, the tendency to favor the default one.
bool _Bias::DefaultEffect(string text)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string model = "llama3";
    string bias_definition = "When given a choice between several options, the tendency to favor the default one.";
    string prompt = "Check if the following text matches the following cognitive bias and limit the response to yes or no: " + bias_definition + " " + text;
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

// Denomination effect
// The tendency to spend more money when it is denominated in small amounts(e.g., coins) rather than large amounts(e.g., bills).
bool _Bias::DenominationEffect(string text)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string model = "llama3";
    string bias_definition = "The tendency to spend more money when it is denominated in small amounts";
    string prompt = "Check if the following text matches the following cognitive bias and limit the response to yes or no: " + bias_definition + " " + text;
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

// Disposition effect
// The tendency to sell an asset that has accumulated in valueand resist selling an asset that has declined in value.
bool _Bias::DispositionEffect(string text)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string model = "llama3";
    string bias_definition = "The tendency to sell an asset that has accumulated in valueand resist selling an asset that has declined in value.";
    string prompt = "Check if the following text matches the following cognitive bias and limit the response to yes or no: " + bias_definition + " " + text;
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

// Distinction bias
// The tendency to view two options as more dissimilar when evaluating them simultaneously than when evaluating them separately.
bool _Bias::DistinktionBias(string text)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string model = "llama3";
    string bias_definition = "The tendency to view two options as more dissimilar when evaluating them simultaneously than when evaluating them separately.";
    string prompt = "Check if the following text matches the following cognitive bias and limit the response to yes or no: " + bias_definition + " " + text;
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

// Dread aversion
// Just as losses yield double the emotional impact of gains, dread yields double the emotional impact of savouring.
bool _Bias::DreadAversion(string text)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string model = "llama3";
    string bias_definition = "Just as losses yield double the emotional impact of gains, dread yields double the emotional impact of savouring.";
    string prompt = "Check if the following text matches the following cognitive bias and limit the response to yes or no: " + bias_definition + " " + text;
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

// Dunning–Kruger effect
// The tendency for unskilled individuals to overestimate their own abilityand the tendency for experts to underestimate their own ability.
bool _Bias::DunningKrugerEffect(string text)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string model = "llama3";
    string bias_definition = "The tendency for unskilled individuals to overestimate their own abilityand the tendency for experts to underestimate their own ability.";
    string prompt = "Check if the following text matches the following cognitive bias and limit the response to yes or no: " + bias_definition + " " + text;
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

// Duration neglect
// The neglect of the duration of an episode in determining its value.
bool _Bias::DurationNeglect(string text)
{
    // Get the definition for the biasgetSentenceVectorsAdditiveAverage
    // 1. bias Additive
    // 2. bias Additive Average
    string model = "llama3";
    string bias_definition = "The neglect of the duration of an episode in determining its valuee";
    string prompt = "Check if the following text matches the following cognitive bias and limit the response to yes or no: " + bias_definition + " " + text;
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

// Empathy gap
// The tendency to underestimate the influence or strength of feelings, in either oneself or others.
bool _Bias::EmpathyGap(string text)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string model = "llama3";
    string bias_definition = "The tendency to underestimate the influence or strength of feelings, in either oneself or others.";
    string prompt = "Check if the following text matches the following cognitive bias and limit the response to yes or no: " + bias_definition + " " + text;
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

// Endowment effect
// The tendency for people to demand much more to give up an object than they would be willing to pay to acquire it.
bool _Bias::EndowmentEffect(string text)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string model = "llama3";
    string bias_definition = "The tendency for people to demand much more to give up an object than they would be willing to pay to acquire it.";
    string prompt = "Check if the following text matches the following cognitive bias and limit the response to yes or no: " + bias_definition + " " + text;
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

// Exaggerated expectation
// The tendency to expect or predict more extreme outcomes than those outcomes that actually happen.
bool _Bias::ExaggeratedExpectation(string text)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string model = "llama3";
    string bias_definition = "The tendency to expect or predict more extreme outcomes than those outcomes that actually happen.";
    string prompt = "Check if the following text matches the following cognitive bias and limit the response to yes or no: " + bias_definition + " " + text;
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

// Experimenter's or expectation bias
// The tendency for experimenters to believe, certify, and publish data that agree with their expectations for the outcome of an experiment, and to disbelieve, discard, or downgrade the corresponding weightings for data that appear to conflict with those expectations.
bool _Bias::ExpactationBias(string text)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string model = "llama3";
    string bias_definition = "The tendency for experimenters to believe, certify, and publish data that agree with their expectations for the outcome of an experiment, and to disbelieve, discard, or downgrade the corresponding weightings for data that appear to conflict with those expectations.";
    string prompt = "Check if the following text matches the following cognitive bias and limit the response to yes or no: " + bias_definition + " " + text;
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

// Focusing effect
// The tendency to place too much importance on one aspect of an event.
bool _Bias::FocusingEffect(string text)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string model = "llama3";
    string bias_definition = "The tendency to place too much importance on one aspect of an event.";
    string prompt = "Check if the following text matches the following cognitive bias and limit the response to yes or no: " + bias_definition + " " + text;
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

// Forer effect or Barnum effect
// The observation that individuals will give high accuracy ratings to descriptions of their personality that supposedly are tailored specifically for them, but are in fact vagueand general enough to apply to a wide range of people.This effect can provide a partial explanation for the widespread acceptance of some beliefsand practices, such as astrology, fortune telling, graphology, and some types of personality tests.
bool _Bias::ForerEffect(string text)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string model = "llama3";
    string bias_definition = "The observation that individuals will give high accuracy ratings to descriptions of their personality that supposedly are tailored specifically for them, but are in fact vagueand general enough to apply to a wide range of people.This effect can provide a partial explanation for the widespread acceptance of some beliefsand practices, such as astrology, fortune telling, graphology, and some types of personality tests.";
    string prompt = "Check if the following text matches the following cognitive bias and limit the response to yes or no: " + bias_definition + " " + text;
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

// Form function attribution bias
// In human–robot interaction, the tendency of people to make systematic errors when interacting with a robot.People may base their expectationsand perceptions of a robot on its appearance(form) and attribute functions which do not necessarily mirror the true functions of the robot.
bool _Bias::FormFunctionAttributionBias(string text)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string model = "llama3";
    string bias_definition = "In human–robot interaction, the tendency of people to make systematic errors when interacting with a robot.People may base their expectationsand perceptions of a robot on its appearance(form) and attribute functions which do not necessarily mirror the true functions of the robot.";
    string prompt = "Check if the following text matches the following cognitive bias and limit the response to yes or no: " + bias_definition + " " + text;
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

// Framing effect
// Drawing different conclusions from the same information, depending on how that information is presented.
bool _Bias::FramingEffect(string text)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string model = "llama3";
    string bias_definition = "Drawing different conclusions from the same information, depending on how that information is presented";
    string prompt = "Check if the following text matches the following cognitive bias and limit the response to yes or no: " + bias_definition + " " + text;
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

// Frequency illusion or Baader–Meinhof effect
// The illusion in which a word, a name, or other thing that has recently come to one's attention suddenly seems to appear with improbable frequency shortly afterwards (not to be confused with the recency illusion or selection bias). This illusion is sometimes referred to as the Baader–Meinhof phenomenon.
bool _Bias::FrequencyIllusion(string text)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string model = "llama3";
    string bias_definition = "The illusion in which a word, a name, or other thing that has recently come to one's attention suddenly seems to appear with improbable frequency shortly afterwards (not to be confused with the recency illusion or selection bias). This illusion is sometimes referred to as the Baader–Meinhof phenomenon.";
    string prompt = "Check if the following text matches the following cognitive bias and limit the response to yes or no: " + bias_definition + " " + text;
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

// Functional fixedness
// Limits a person to using an object only in the way it is traditionally used.[51]
bool _Bias::FunctionalFixedness(string text)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string model = "llama3";
    string bias_definition = "Limits a person to using an object only in the way it is traditionally used.";
    string prompt = "Check if the following text matches the following cognitive bias and limit the response to yes or no: " + bias_definition + " " + text;
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

// Gambler's bias
// The tendency to think that future probabilities are altered by past events, when in reality they are unchanged.The bias arises from an erroneous conceptualization of the law of large numbers.For example, "I've flipped heads with this coin five times consecutively, so the chance of tails coming out on the sixth flip is much greater than heads."[52]
bool _Bias::Gamblersbias(string text)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string model = "llama3";
    string bias_definition = "The tendency to think that future probabilities are altered by past events, when in reality they are unchanged.The bias arises from an erroneous conceptualization of the law of large numbers";
    string prompt = "Check if the following text matches the following cognitive bias and limit the response to yes or no: " + bias_definition + " " + text;
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

// Groupthink
// The psychological phenomenon that occurs within a group of people in which the desire for harmony or conformity in the group results in an irrational or dysfunctional decision making outcome.Group members try to minimize conflict and reach a consensus decision without critical evaluation of alternative viewpoints by actively suppressing dissenting viewpoints, and by isolating themselves from outside influences.
bool _Bias::Groupthink(string text)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string model = "llama3";
    string bias_definition = "The psychological phenomenon that occurs within a group of people in which the desire for harmony or conformity in the group results in an irrational or dysfunctional decision making outcome.Group members try to minimize conflict and reach a consensus decision without critical evaluation of alternative viewpoints by actively suppressing dissenting viewpoints, and by isolating themselves from outside influences.";
    string prompt = "Check if the following text matches the following cognitive bias and limit the response to yes or no: " + bias_definition + " " + text;
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

// Hard–easy effect
// Based on a specific level of task difficulty, the confidence in judgments is too conservative and not extreme enough.
bool _Bias::HardEasyEffect(string text)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string model = "llama3";
    string bias_definition = "Based on a specific level of task difficulty, the confidence in judgments is too conservative and not extreme enough.";
    string prompt = "Check if the following text matches the following cognitive bias and limit the response to yes or no: " + bias_definition + " " + text;
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

// Hindsight bias
// Sometimes called the "I-knew-it-all-along" effect, the tendency to see past events as being predictable at the time those events happened.
bool _Bias::HindsightBias(string text)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string model = "llama3";
    string bias_definition = "Sometimes called the I-new-it-all-along effect, the tendency to see past events as being predictable at the time those events happened.";
    string prompt = "Check if the following text matches the following cognitive bias and limit the response to yes or no: " + bias_definition + " " + text;
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

// Hostile attribution bias
// The "hostile attribution bias" is the tendency to interpret others' behaviors as having hostile intent, even when the behavior is ambiguous or benign.[57]
bool _Bias::HostileAttributionBias(string text)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string model = "llama3";
    string bias_definition = "the tendency to interpret others behaviors as having hostile intent, even when the behavior is ambiguous or benign.";
    string prompt = "Check if the following text matches the following cognitive bias and limit the response to yes or no: " + bias_definition + " " + text;
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

// Hot hand bias
// The "hot-hand bias" (also known as the "hot hand phenomenon" or "hot hand") is the belief that a person who has experienced success with a random event has a greater chance of further success in additional attempts.
bool _Bias::HotHandBias(string text)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string model = "llama3";
    string bias_definition = "the belief that a person who has experienced success with a random event has a greater chance of further success in additional attempts.";
    string prompt = "Check if the following text matches the following cognitive bias and limit the response to yes or no: " + bias_definition + " " + text;
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

// Hyperbolic discounting
// Discounting is the tendency for people to have a stronger preference for more immediate payoffs relative to later payoffs.Hyperbolic discounting leads to choices that are inconsistent over time – people make choices today that their future selves would prefer not to have made, despite using the same reasoning.[58] Also known as current moment bias, present bias, and related to Dynamic inconsistency.A good example of this: a study showed that when making food choices for the coming week, 74 % of participants chose fruit, whereas when the food choice was for the current day, 70 % chose chocolate.
bool _Bias::HyperbolicDiscounting(string text)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string model = "llama3";
    string bias_definition = "the tendency for people to have a stronger preference for more immediate payoffs relative to later payoffs";
    string prompt = "Check if the following text matches the following cognitive bias and limit the response to yes or no: " + bias_definition + " " + text;
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

// Identifiable victim effect
// The tendency to respond more strongly to a single identified person at risk than to a large group of people at risk.
bool _Bias::IdentifiableVictimEffect(string text)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string model = "llama3";
    string bias_definition = "The tendency to respond more strongly to a single identified person at risk than to a large group of people at risk.";
    string prompt = "Check if the following text matches the following cognitive bias and limit the response to yes or no: " + bias_definition + " " + text;
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

// IKEA effect
// The tendency for people to place a disproportionately high value on objects that they partially assembled themselves, such as furniture from IKEA, regardless of the quality of the end result.
bool _Bias::IKEAEffect(string text)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string model = "llama3";
    string bias_definition = "The tendency for people to place a disproportionately high value on objects that they partially assembled themselves, such as furniture from IKEA, regardless of the quality of the end result";
    string prompt = "Check if the following text matches the following cognitive bias and limit the response to yes or no: " + bias_definition + " " + text;
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

// Illicit transference
// Occurs when a term in the distributive(referring to every member of a class) and collective(referring to the class itself as a whole) sense are treated as equivalent.The two variants of this bias are the bias of compositionand the bias of division.
bool _Bias::IllicitTransference(string text)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string model = "llama3";
    string bias_definition = "Occurs when a term in the distributive and collective sense are treated as equivalent";
    string prompt = "Check if the following text matches the following cognitive bias and limit the response to yes or no: " + bias_definition + " " + text;
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

// Illusion of control
// The tendency to overestimate one's degree of influence over other external events.
bool _Bias::IllusionOfControl(string text)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string model = "llama3";
    string bias_definition = "The tendency to overestimate one's degree of influence over other external events.";
    string prompt = "Check if the following text matches the following cognitive bias and limit the response to yes or no: " + bias_definition + " " + text;
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

// Illusion of validity
// Belief that our judgments are accurate, especially when available information is consistent or inter correlated.
bool _Bias::IllusionOfValidity(string text)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string model = "llama3";
    string bias_definition = "Belief that our judgments are accurate, especially when available information is consistent or inter correlated.";
    string prompt = "Check if the following text matches the following cognitive bias and limit the response to yes or no: " + bias_definition + " " + text;
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

// Illusory correlation
// Inaccurately perceiving a relationship between two unrelated events.
bool _Bias::IllusoryCorrelation (string text)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string model = "llama3";
    string bias_definition = "Inaccurately perceiving a relationship between two unrelated events";
    string prompt = "Check if the following text matches the following cognitive bias and limit the response to yes or no: " + bias_definition + " " + text;
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

// Illusory truth effect
// A tendency to believe that a statement is true if it is easier to process, or if it has been stated multiple times, regardless of its actual veracity.These are specific cases of truthiness.
bool _Bias::IllusoryTruthEffect(string text)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string model = "llama3";
    string bias_definition = "tendency to believe that a statement is true if it is easier to process, or if it has been stated multiple times, regardless of its actual veracity.These are specific cases of truthiness.";
    string prompt = "Check if the following text matches the following cognitive bias and limit the response to yes or no: " + bias_definition + " " + text;
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

// Impact bias
// The tendency to overestimate the length or the intensity of the impact of future feeling states.[65]
bool _Bias::ImpactBias(string text)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string model = "llama3";
    string bias_definition = "The tendency to overestimate the length or the intensity of the impact of future feeling states.";
    string prompt = "Check if the following text matches the following cognitive bias and limit the response to yes or no: " + bias_definition + " " + text;
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

// Implicit association
// The speed with which people can match words depends on how closely they are associated.This has generated some controversy when some people are able to match pairings like "White" and "pleasant" faster than "Black" and "pleasant", with debate over whether this indicates a form of unconscious prejudice that could result in discrimination.
bool _Bias::ImplicitAssociation(string text)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string model = "llama3";
    string bias_definition = "The speed with which people can match words depends on how closely they are associated.";
    string prompt = "Check if the following text matches the following cognitive bias and limit the response to yes or no: " + bias_definition + " " + text;
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

// Information bias
// The tendency to seek information even when it cannot affect action.
bool _Bias::InformationBias(string text)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string model = "llama3";
    string bias_definition = "The tendency to seek information even when it cannot affect action";
    string prompt = "Check if the following text matches the following cognitive bias and limit the response to yes or no: " + bias_definition + " " + text;
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

// Insensitivity to sample size
// The tendency to under expect variation in small samples.
bool _Bias::InsenitiveityToSampleSize(string text)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string model = "llama3";
    string bias_definition = "The tendency to under expect variation in small samples.";
    string prompt = "Check if the following text matches the following cognitive bias and limit the response to yes or no: " + bias_definition + " " + text;
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

// Interoceptive bias
// The tendency for sensory input from the body to be taken as evidence of external reality. (As for example, in parole judges who are more lenient when fedand rested.)
bool _Bias::InteroceptiveBias(string text)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string model = "llama3";
    string bias_definition = "The tendency for sensory input from the body to be taken as evidence of external reality.";
    string prompt = "Check if the following text matches the following cognitive bias and limit the response to yes or no: " + bias_definition + " " + text;
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

// Irrational escalation
// The phenomenon where people justify increased investment in a decision, based on the cumulative prior investment, despite new evidence suggesting that the decision was probably wrong.Also known as the sunk cost bias.
bool _Bias::IrrationalEscalation(string text)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string model = "llama3";
    string bias_definition = "The phenomenon where people justify increased investment in a decision, based on the cumulative prior investment, despite new evidence suggesting that the decision was probably wrong.";
    string prompt = "Check if the following text matches the following cognitive bias and limit the response to yes or no: " + bias_definition + " " + text;
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

// Law of the instrument
// An over reliance on a familiar tool or methods, ignoring or undervaluing alternative approaches. "If all you have is a hammer, everything looks like a nail."
bool _Bias::LawOfTheInstrument(string text)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string model = "llama3";
    string bias_definition = "over reliance on a familiar tool or methods, ignoring or undervaluing alternative approaches.";
    string prompt = "Check if the following text matches the following cognitive bias and limit the response to yes or no: " + bias_definition + " " + text;
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

// Less is better effect
// The tendency to prefer a smaller set to a larger set judged separately, but not jointly.
bool _Bias::LessIsBetterEffect(string text)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string model = "llama3";
    string bias_definition = "The tendency to prefer a smaller set to a larger set judged separately, but not jointly.";
    string prompt = "Check if the following text matches the following cognitive bias and limit the response to yes or no: " + bias_definition + " " + text;
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

// Look elsewhere effect
// An apparently statistically significant observation may have actually arisen by chance because of the size of the parameter space to be searched.
bool _Bias::LookElsewhereEffect(string text)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string model = "llama3";
    string bias_definition = "An apparently statistically significant observation may have actually arisen by chance because of the size of the parameter space to be searched.";
    string prompt = "Check if the following text matches the following cognitive bias and limit the response to yes or no: " + bias_definition + " " + text;
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

// Loss aversion
// The disutility of giving up an object is greater than the utility associated with acquiring it. (see also Sunk cost effects and endowment effect).
bool _Bias::LossAversion(string text)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string model = "llama3";
    string bias_definition = "The disutility of giving up an object is greater than the utility associated with acquiring it.";
    string prompt = "Check if the following text matches the following cognitive bias and limit the response to yes or no: " + bias_definition + " " + text;
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

// Mere exposure effect
// The tendency to express undue liking for things merely because of familiarity with them.
bool _Bias::MereExposureEffect(string text)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string model = "llama3";
    string bias_definition = "The tendency to express undue liking for things merely because of familiarity with them";
    string prompt = "Check if the following text matches the following cognitive bias and limit the response to yes or no: " + bias_definition + " " + text;
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

// Money illusion
// The tendency to concentrate on the nominal value(face value) of money rather than its value in terms of purchasing power.
bool _Bias::MoneyIllusion(string text)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string model = "llama3";
    string bias_definition = "The tendency to concentrate on the nominal value(face value) of money rather than its value in terms of purchasing power.";
    string prompt = "Check if the following text matches the following cognitive bias and limit the response to yes or no: " + bias_definition + " " + text;
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

// Moral credential effect
// The tendency of a track record of non prejudice to increase subsequent prejudice.
bool _Bias::MoralCredentialEffect(string text)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string model = "llama3";
    string bias_definition = "The tendency of a track record of non prejudice to increase subsequent prejudice.";
    string prompt = "Check if the following text matches the following cognitive bias and limit the response to yes or no: " + bias_definition + " " + text;
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

// Negativity bias or Negativity effect
// Psychological phenomenon by which humans have a greater recall of unpleasant memories compared with positive memories. (see also actor observer bias, group attribution error, positivity effect, and negativity effect).
bool _Bias::NegativityBias(string text)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string model = "llama3";
    string bias_definition = "Psychological phenomenon by which humans have a greater recall of unpleasant memories compared with positive memories";
    string prompt = "Check if the following text matches the following cognitive bias and limit the response to yes or no: " + bias_definition + " " + text;
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

// Neglect of probability
// The tendency to completely disregard probability when making a decision under uncertainty.
bool _Bias::NeglectOfProbability(string text)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string model = "llama3";
    string bias_definition = "The tendency to completely disregard probability when making a decision under uncertainty.";
    string prompt = "Check if the following text matches the following cognitive bias and limit the response to yes or no: " + bias_definition + " " + text;
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

// Normalcy bias
// The refusal to plan for, or react to, a disaster which has never happened before.
bool _Bias::NormalcyBias(string text)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string model = "llama3";
    string bias_definition = "The refusal to plan for, or react to, a disaster which has never happened before.";
    string prompt = "Check if the following text matches the following cognitive bias and limit the response to yes or no: " + bias_definition + " " + text;
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

// Not invented here
// Aversion to contact with or use of products, research, standards, or knowledge developed outside a group. Related to IKEA effect.
bool _Bias::NotInventedHere(string text)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string model = "llama3";
    string bias_definition = "Aversion to contact with or use of products, research, standards, or knowledge developed outside a group. Related to IKEA effect.";
    string prompt = "Check if the following text matches the following cognitive bias and limit the response to yes or no: " + bias_definition + " " + text;
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

// Observer expectancy effect
// When a researcher expects a given result and therefore unconsciously manipulates an experiment or misinterprets data in order to find it(see also subject expectancy effect).
bool _Bias::ObserverExpectancyEffect(string text)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string model = "llama3";
    string bias_definition = "When a researcher expects a given result and therefore unconsciously manipulates an experiment or misinterprets data in order to find it.";
    string prompt = "Check if the following text matches the following cognitive bias and limit the response to yes or no: " + bias_definition + " " + text;
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

// Omission bias
// The tendency to judge harmful actions(commissions) as worse, or less moral, than equally harmful inactions(omissions).
bool _Bias::OmissionBias(string text)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string model = "llama3";
    string bias_definition = "The tendency to judge harmful actions(commissions) as worse, or less moral, than equally harmful inactions.";
    string prompt = "Check if the following text matches the following cognitive bias and limit the response to yes or no: " + bias_definition + " " + text;
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

// Optimism bias
// The tendency to be over optimistic, overestimating favorableand pleasing outcomes(see also wishful thinking, valence effect, positive outcome bias).
bool _Bias::OptimismBias(string text)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string model = "llama3";
    string bias_definition = "The tendency to be over optimistic, overestimating favorable and pleasing outcomes.";
    string prompt = "Check if the following text matches the following cognitive bias and limit the response to yes or no: " + bias_definition + " " + text;
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

// Ostrich effect
// Ignoring an obvious(negative) situation.
bool _Bias::OstrichEffect(string text)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string model = "llama3";
    string bias_definition = "Ignoring an obvious(negative) situation.";
    string prompt = "Check if the following text matches the following cognitive bias and limit the response to yes or no: " + bias_definition + " " + text;
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

// Outcome bias
// The tendency to judge a decision by its eventual outcome instead of based on the quality of the decision at the time it was made.
bool _Bias::OutcomeBias(string text)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string model = "llama3";
    string bias_definition = "The tendency to judge a decision by its eventual outcome instead of based on the quality of the decision at the time it was made.";
    string prompt = "Check if the following text matches the following cognitive bias and limit the response to yes or no: " + bias_definition + " " + text;
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

// Overconfidence effect
// Excessive confidence in one's own answers to questions. For example, for certain types of questions, answers that people rate as "99% certain" turn out to be wrong 40% of the time.
bool _Bias::OverconfidenceEffect(string text)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string model = "llama3";
    string bias_definition = "Excessive confidence in one's own answers to questions. For example, for certain types of questions, answers that people rate as 99 % certain turn out to be wrong 40% of the time.e";
    string prompt = "Check if the following text matches the following cognitive bias and limit the response to yes or no: " + bias_definition + " " + text;
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

// Pareidolia
// A vague and random stimulus(often an image or sound) is perceived as significant, e.g., seeing images of animals or faces in clouds, the man in the moon, and hearing non existent hidden messages on records played in reverse.
bool _Bias::Parelidolia(string text)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string model = "llama3";
    string bias_definition = "A vague and random stimulus(often an image or sound) is perceived as significant";
    string prompt = "Check if the following text matches the following cognitive bias and limit the response to yes or no: " + bias_definition + " " + text;
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

// Pygmalion effect
// The phenomenon whereby others' expectations of a target person affect the target person's performance.
bool _Bias::PygmalionEffect(string text)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string model = "llama3";
    string bias_definition = "The phenomenon whereby others expectations of a target person affect the target person's performance.";
    string prompt = "Check if the following text matches the following cognitive bias and limit the response to yes or no: " + bias_definition + " " + text;
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

// Pessimism bias
// The tendency for some people, especially those suffering from depression, to overestimate the likelihood of negative things happening to them.
bool _Bias::PessimismBias(string text)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string model = "llama3";
    string bias_definition = "The tendency for some people, especially those suffering from depression, to overestimate the likelihood of negative things happening to them.";
    string prompt = "Check if the following text matches the following cognitive bias and limit the response to yes or no: " + bias_definition + " " + text;
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

// Planning bias
// The tendency to underestimate task completion times.
bool _Bias::PlanningBias(string text)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string model = "llama3";
    string bias_definition = "The tendency to underestimate task completion times.e";
    string prompt = "Check if the following text matches the following cognitive bias and limit the response to yes or no: " + bias_definition + " " + text;
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

// Post purchase rationalization
// The tendency to persuade oneself through rational argument that a purchase was good value.
bool _Bias::PostPurchaseRationalization(string text)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string model = "llama3";
    string bias_definition = "The tendency to persuade oneself through rational argument that a purchase was good value.";
    string prompt = "Check if the following text matches the following cognitive bias and limit the response to yes or no: " + bias_definition + " " + text;
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

// Present bias
// The tendency of people to give stronger weight to payoffs that are closer to the present time when considering trade offs between two future moments.
bool _Bias::PresentBias(string text)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string model = "llama3";
    string bias_definition = "The tendency of people to give stronger weight to payoffs that are closer to the present time when considering trade offs between two future moments.";
    string prompt = "Check if the following text matches the following cognitive bias and limit the response to yes or no: " + bias_definition + " " + text;
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

// Pro innovation bias
// The tendency to have an excessive optimism towards an invention or innovation's usefulness throughout society, while often failing to identify its limitations and weaknesses.
bool _Bias::ProInnovationBias(string text)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string model = "llama3";
    string bias_definition = "The tendency to have an excessive optimism towards an invention or innovation's usefulness throughout society, while often failing to identify its limitations and weaknesses.e";
    string prompt = "Check if the following text matches the following cognitive bias and limit the response to yes or no: " + bias_definition + " " + text;
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

// Projection bias
// The tendency to overestimate how much our future selves share one's current preferences, thoughts and values, thus leading to sub-optimal choices.
bool _Bias::ProjectionBias(string text)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string model = "llama3";
    string bias_definition = "The tendency to overestimate how much our future selves share one's current preferences, thoughts and values, thus leading to sub-optimal choices.";
    string prompt = "Check if the following text matches the following cognitive bias and limit the response to yes or no: " + bias_definition + " " + text;
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

// Pseudocertainty effect
// The tendency to make risk averse choices if the expected outcome is positive, but make risk seeking choices to avoid negative outcomes.
bool _Bias::PseudoertaintyEffect(string text)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string model = "llama3";
    string bias_definition = "The tendency to make risk averse choices if the expected outcome is positive, but make risk seeking choices to avoid negative outcomes.";
    string prompt = "Check if the following text matches the following cognitive bias and limit the response to yes or no: " + bias_definition + " " + text;
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

// Reactance
// The urge to do the opposite of what someone wants you to do out of a need to resist a perceived attempt to constrain your freedom of choice(see also Reverse psychology).
bool _Bias::Reactance(string text)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string model = "llama3";
    string bias_definition = "The urge to do the opposite of what someone wants you to do out of a need to resist a perceived attempt to constrain your freedom of choice";
    string prompt = "Check if the following text matches the following cognitive bias and limit the response to yes or no: " + bias_definition + " " + text;
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

// Reactive devaluation
// Devaluing proposals only because they purportedly originated with an adversary.
bool _Bias::ReactiveDevaluation(string text)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string model = "llama3";
    string bias_definition = "Devaluing proposals only because they purportedly originated with an adversary.";
    string prompt = "Check if the following text matches the following cognitive bias and limit the response to yes or no: " + bias_definition + " " + text;
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

// Recency illusion
// The illusion that a phenomenon one has noticed only recently is itself recent.Often used to refer to linguistic phenomena; the illusion that a word or language usage that one has noticed only recently is an innovation when it is in fact long established(see also frequency illusion).
bool _Bias::RecencyIllusion(string text)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string model = "llama3";
    string bias_definition = "The illusion that a phenomenon one has noticed only recently is itself recent.Often used to refer to linguistic phenomena; the illusion that a word or language usage that one has noticed only recently is an innovation when it is in fact long established";
    string prompt = "Check if the following text matches the following cognitive bias and limit the response to yes or no: " + bias_definition + " " + text;
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

// Regressive bias
// A certain state of mind wherein high values and high likelihoods are overestimated while low valuesand low likelihoods are underestimated.
bool _Bias::RegressiveBias(string text)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string model = "llama3";
    string bias_definition = "A certain state of mind wherein high values and high likelihoods are overestimated while low valuesand low likelihoods are underestimated.";
    string prompt = "Check if the following text matches the following cognitive bias and limit the response to yes or no: " + bias_definition + " " + text;
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

// Restraint bias
// The tendency to overestimate one's ability to show restraint in the face of temptation.
bool _Bias::RestraintBias(string text)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string model = "llama3";
    string bias_definition = "The tendency to overestimate one's ability to show restraint in the face of temptation.";
    string prompt = "Check if the following text matches the following cognitive bias and limit the response to yes or no: " + bias_definition + " " + text;
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

// Rhyme as reason effect
// Rhyming statements are perceived as more truthful.A famous example being used in the O.J Simpson trial with the defense's use of the phrase "If the gloves don't fit, then you must acquit."
bool _Bias::ReasonEffect(string text)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string model = "llama3";
    string bias_definition = "Rhyming statements are perceived as more truthful";
    string prompt = "Check if the following text matches the following cognitive bias and limit the response to yes or no: " + bias_definition + " " + text;
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

// Risk compensation / Peltzman effect
// The tendency to take greater risks when perceived safety increases.
bool _Bias::RiskCompensation(string text)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string model = "llama3";
    string bias_definition = "The tendency to take greater risks when perceived safety increases.";
    string prompt = "Check if the following text matches the following cognitive bias and limit the response to yes or no: " + bias_definition + " " + text;
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

// Salience bias
// The tendency to focus on items that are more prominent or emotionally striking and ignore those that are unremarkable, even though this difference is often irrelevant by objective standards.
bool _Bias::SalienceBias(string text)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string model = "llama3";
    string bias_definition = "The tendency to focus on items that are more prominent or emotionally striking and ignore those that are unremarkable, even though this difference is often irrelevant by objective standards.";
    string prompt = "Check if the following text matches the following cognitive bias and limit the response to yes or no: " + bias_definition + " " + text;
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

// Selection bias
// The tendency to notice something more when something causes us to be more aware of it, such as when we buy a car, we tend to notice similar cars more often than we did before.They are not suddenly more common – we just are noticing them more.Also called the Observational Selection Bias.
bool _Bias::SelectionBias(string text)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string model = "llama3";
    string bias_definition = "The tendency to notice something more when something causes us to be more aware of it, such as when we buy a car, we tend to notice similar cars more often than we did before.";
    string prompt = "Check if the following text matches the following cognitive bias and limit the response to yes or no: " + bias_definition + " " + text;
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

// Selective perception
// The tendency for expectations to affect perception.
bool _Bias::SelectivePerception(string text)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string model = "llama3";
    string bias_definition = "The tendency for expectations to affect perception.";
    string prompt = "Check if the following text matches the following cognitive bias and limit the response to yes or no: " + bias_definition + " " + text;
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

// Semmelweis reflex
// The tendency to reject new evidence that contradicts a paradigm.
bool _Bias::SemmelweisReflex(string text)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string model = "llama3";
    string bias_definition = "The tendency to reject new evidence that contradicts a paradigm.";
    string prompt = "Check if the following text matches the following cognitive bias and limit the response to yes or no: " + bias_definition + " " + text;
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

// Sexual overperception bias / sexual underperception bias
// The tendency to over / underestimate sexual interest of another person in oneself.
bool _Bias::SexualOverperceptionBias(string text)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string model = "llama3";
    string bias_definition = "The tendency to over / underestimate sexual interest of another person in oneself.";
    string prompt = "Check if the following text matches the following cognitive bias and limit the response to yes or no: " + bias_definition + " " + text;
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

// Social comparison bias
// The tendency, when making decisions, to favour potential candidates who don't compete with one's own particular strengths.
bool _Bias::SocialComparisonBias(string text)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string model = "llama3";
    string bias_definition = "The tendency, when making decisions, to favour potential candidates who don't compete with one's own particular strengths.";
    string prompt = "Check if the following text matches the following cognitive bias and limit the response to yes or no: " + bias_definition + " " + text;
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

// Social desirability bias
// The tendency to over report socially desirable characteristics or behaviours in oneself and under report socially undesirable characteristics or behaviours.
bool _Bias::SocialDesirabilityBias(string text)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string model = "llama3";
    string bias_definition = "The tendency to over report socially desirable characteristics or behaviours in oneself and under report socially undesirable characteristics or behaviours.";
    string prompt = "Check if the following text matches the following cognitive bias and limit the response to yes or no: " + bias_definition + " " + text;
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

// Status quo bias
// The tendency to like things to stay relatively the same(see also loss aversion, endowment effect, and system justification).
bool _Bias::StatusQuoBias(string text)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string model = "llama3";
    string bias_definition = "The tendency to like things to stay relatively the same";
    string prompt = "Check if the following text matches the following cognitive bias and limit the response to yes or no: " + bias_definition + " " + text;
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

// Stereotyping
// Expecting a member of a group to have certain characteristics without having actual information about that individual.
bool _Bias::Stereotyping(string text)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string model = "llama3";
    string bias_definition = "Expecting a member of a group to have certain characteristics without having actual information about that individual.";
    string prompt = "Check if the following text matches the following cognitive bias and limit the response to yes or no: " + bias_definition + " " + text;
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

// Subadditivity effect
// The tendency to judge probability of the whole to be less than the probabilities of the parts.
bool _Bias::SubAdditiveityEffect(string text)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string model = "llama3";
    string bias_definition = "The tendency to judge probability of the whole to be less than the probabilities of the parts.";
    string prompt = "Check if the following text matches the following cognitive bias and limit the response to yes or no: " + bias_definition + " " + text;
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

// Subjective validation
// Perception that something is true if a subject's belief demands it to be true. Also assigns perceived connections between coincidences.
bool _Bias::SubjectiveValidation(string text)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string model = "llama3";
    string bias_definition = "Perception that something is true if a subject's belief demands it to be true. Also assigns perceived connections between coincidences.";
    string prompt = "Check if the following text matches the following cognitive bias and limit the response to yes or no: " + bias_definition + " " + text;
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

// Surrogation
// Losing sight of the strategic construct that a measure is intended to represent, and subsequently acting as though the measure is the construct of interest.
bool _Bias::Surrogation(string text)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string model = "llama3";
    string bias_definition = "Losing sight of the strategic construct that a measure is intended to represent, and subsequently acting as though the measure is the construct of interest.e";
    string prompt = "Check if the following text matches the following cognitive bias and limit the response to yes or no: " + bias_definition + " " + text;
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

// Survivorship bias
// Concentrating on the people or things that "survived" some process and inadvertently overlooking those that didn't because of their lack of visibility.
bool _Bias::SurvivorshipBias(string text)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string model = "llama3";
    string bias_definition = "Concentrating on the people or things that survived some process and inadvertently overlooking those that didn't because of their lack of visibility.";
    string prompt = "Check if the following text matches the following cognitive bias and limit the response to yes or no: " + bias_definition + " " + text;
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

// Time
// saving bias
// Underestimations of the time that could be saved(or lost) when increasing(or decreasing) from a relatively low speed and overestimations of the time that could be saved(or lost) when increasing(or decreasing) from a relatively high speed.
bool _Bias::TimeSavingBias(string text)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string model = "llama3";
    string bias_definition = "Underestimations of the time that could be saved(or lost) when increasing(or decreasing) from a relatively low speed and overestimations of the time that could be saved(or lost) when increasing(or decreasing) from a relatively high speed.";
    string prompt = "Check if the following text matches the following cognitive bias and limit the response to yes or no: " + bias_definition + " " + text;
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

// Third
// person effect
// Belief that mass communicated media messages have a greater effect on others than on themselves.
bool _Bias::ThirdPersonEffect(string text)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string model = "llama3";
    string bias_definition = "Belief that mass communicated media messages have a greater effect on others than on themselves.";
    string prompt = "Check if the following text matches the following cognitive bias and limit the response to yes or no: " + bias_definition + " " + text;
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

// Parkinson's law of triviality
// The tendency to give disproportionate weight to trivial issues.Also known as bikeshedding, this bias explains why an organization may avoid specialized or complex subjects, such as the design of a nuclear reactor, and instead focus on something easy to grasp or rewarding to the average participant, such as the design of an adjacent bike shed.
bool _Bias::ParkinsonLawOfTriviality(string text)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string model = "llama3";
    string bias_definition = "The tendency to give disproportionate weight to trivial issues.Also known as bikeshedding, this bias explains why an organization may avoid specialized or complex subjects, such as the design of a nuclear reactor, and instead focus on something easy to grasp or rewarding to the average participant, such as the design of an adjacent bike shed.";
    string prompt = "Check if the following text matches the following cognitive bias and limit the response to yes or no: " + bias_definition + " " + text;
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

// Unit bias
// The standard suggested amount of consumption(e.g., food serving size) is perceived to be appropriate, and a person would consume it all even if it is too much for this particular person.[96]
bool _Bias::UnitBias(string text)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string model = "llama3";
    string bias_definition = "The standard suggested amount of consumption is perceived to be appropriate, and a person would consume it all even if it is too much for this particular person.";
    string prompt = "Check if the following text matches the following cognitive bias and limit the response to yes or no: " + bias_definition + " " + text;
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

// Weber–Fechner law
// Difficulty in comparing small differences in large quantities.
bool _Bias::WeberFechnerLaw(string text)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string model = "llama3";
    string bias_definition = "Difficulty in comparing small differences in large quantities.";
    string prompt = "Check if the following text matches the following cognitive bias and limit the response to yes or no: " + bias_definition + " " + text;
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

// Well travelled road effect
// Underestimation of the duration taken to traverse traveled routes and overestimation of the duration taken to traverse less familiar routes.
bool _Bias::WellTravelledRoadEffect(string text)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string model = "llama3";
    string bias_definition = "Underestimation of the duration taken to traverse traveled routes and overestimation of the duration taken to traverse less familiar routes.";
    string prompt = "Check if the following text matches the following cognitive bias and limit the response to yes or no: " + bias_definition + " " + text;
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

// Women are wonderful effect
// A tendency to associate more positive attributes with women than with men.
bool _Bias::WomanAreWonderfulEffect(string text)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string model = "llama3";
    string bias_definition = "A tendency to associate more positive attributes with women than with men";
    string prompt = "Check if the following text matches the following cognitive bias and limit the response to yes or no: " + bias_definition + " " + text;
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

// Zero risk bias
// Preference for reducing a small risk to zero over a greater reduction in a larger risk.
bool _Bias::ZeroRiskBias(string text)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string model = "llama3";
    string bias_definition = "Preference for reducing a small risk to zero over a greater reduction in a larger risk.";
    string prompt = "Check if the following text matches the following cognitive bias and limit the response to yes or no: " + bias_definition + " " + text;
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

// Zero sum bias
// A bias whereby a situation is incorrectly perceived to be like a zerosum game(i.e., one person gains at the expense of another).
bool _Bias::ZeroSumBias(string text)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string model = "llama3";
    string bias_definition = "a situation is incorrectly perceived to be like a zerosum game";
    string prompt = "Check if the following text matches the following cognitive bias and limit the response to yes or no: " + bias_definition + " " + text;
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
