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
#include "Fallacy.hpp"
#include "Parsers.hpp"
#include "Large Language Models.hpp"
#include "Working-Memory.hpp"
#include "Short-Term Memory.hpp"
#include "Long-Term Memory.hpp"
#include "Reference.hpp"
#include "Mathematics.hpp"
#include "NLP.hpp"
#include "NLU.hpp"
#include "Variables.hpp"
#include "Settings.hpp"
#include "Utilities.hpp"

using namespace std;

// Purpose: Check if the argument is a deductive argument
// Purpose: Check if the argument is a inductive argument

// This function will be a simple fallacy check for actions, speach and writing
string _Fallacy::FallacyCheck(string text)
{
    string temp = "";

    if (_Fallacy::AffirmingTheConsequent(text))
    {
        temp += "Affirming the Consequent";
    }
    if (_Fallacy::DenyingTheAntecedent(text))
    {
        temp += "Denying The Antecedent";
    }
    if (_Fallacy::AffirmingADisjunct(text))
    {
        temp += "Affirming A Disjunct";
    }
    if (_Fallacy::DenyingAConjunct(text))
    {
        temp += "Denying A Conjunct";
    }
    if (_Fallacy::FallacyOfTheUndistributedMiddle(text))
    {
        temp += "Fallacy Of The Undistributed Middle";
    }
    if (_Fallacy::AppealToProbability(text))
    {
        temp += "Appeal To Probability";
    }
    if (_Fallacy::ArgumentFromFallacy(text))
    {
        temp += "Argument From Fallacy";
    }
    if (_Fallacy::BaseRateFallacy(text))
    {
        temp += "Base Rate Fallacy";
    }
    if (_Fallacy::ConjunctionFallacy(text))
    {
        temp += "Conjunction Fallacy";
    }
    if (_Fallacy::MaskedManFallacy(text))
    {
        temp += "Masked Man Fallacy";
    }
    if (_Fallacy::QualificationFallacies(text))
    {
        temp += "Qualification Fallacies";
    }
    if (_Fallacy::ExistentialFallacy(text))
    {
        temp += "Existential Fallacy";
    }
    if (_Fallacy::AffirmativeConclusionFromANegativePremise(text))
    {
        temp += "Affirmative Conclusion From A Negative Premise";
    }
    if (_Fallacy::FallacyOfExclusivePremises(text))
    {
        temp += "Fallacy Of Exclusive Premises";
    }
    if (_Fallacy::FallacyOfFourTerms(text))
    {
        temp += "Fallacy Of Four Terms";
    }
    if (_Fallacy::IllicitMajor(text))
    {
        temp += "Illicit Major";
    }
    if (_Fallacy::IllicitMinor(text))
    {
        temp += "Illicit Minor";
    }
    if (_Fallacy::NegativeConclusionFromAffirmativePremises(text))
    {
        temp += "Negative Conclusion From Affirmative Premises";
    }
    if (_Fallacy::ModalScopeFallacy(text))
    {
        temp += "Modal Scope Fallacy";
    }
    if (_Fallacy::ArgumentToModeration(text))
    {
        temp += "Argument To Moderation";
    }
    if (_Fallacy::ContinuumFallacy(text))
    {
        temp += "Continuum Fallacy";
    }
    if (_Fallacy::SuppressedCorrelative(text))
    {
        temp += "Suppressed Correlative";
    }
    if (_Fallacy::DefinistFallacy(text))
    {
        temp += "Definist Fallacy";
    }
    if (_Fallacy::DivineFallacy(text))
    {
        temp += "Divine Fallacy";
    }
    if (_Fallacy::DoubleCounting(text))
    {
        temp += "Double Counting";
    }
    if (_Fallacy::Equivacation(text))
    {
        temp += "Equivacation";
    }
    if (_Fallacy::AmbiguousMiddleTerm(text))
    {
        temp += "Ambiguous Middle Term";
    }
    if (_Fallacy::DefinitionalRetreat(text))
    {
        temp += "Definitional Retreat";
    }
    if (_Fallacy::MotteAndBaileyFallacy(text))
    {
        temp += "Motte And Bailey Fallacy";
    }
    if (_Fallacy::FallacyOfAccent(text))
    {
        temp += "Fallacy Of Accent";
    }
    if (_Fallacy::PersuasiveDefinition(text))
    {
        temp += "Persuasive Definition";
    }
    if (_Fallacy::EconogicalFallacy(text))
    {
        temp += "Econogical Fallacy";
    }
    if (_Fallacy::EtynologicalFallacy(text))
    {
        temp += "Etynological Fallacy";
    }
    if (_Fallacy::FallacyOfComposition(text))
    {
        temp += "Fallacy Of Composition";
    }
    if (_Fallacy::FallacyOfDivision(text))
    {
        temp += "Fallacy Of Division";
    }
    if (_Fallacy::FalseAttribuation(text))
    {
        temp += "False Attribuation";
    }
    if (_Fallacy::FallacyOfQuotingOutOfContext(text))
    {
        temp += "Fallacy Of Quoting Out Of Context";
    }
    if (_Fallacy::FalseDilemma(text))
    {
        temp += "False Dilemma";
    }
    if (_Fallacy::FalseEquivalence(text))
    {
        temp += "False Equivalence";
    }
    if (_Fallacy::FeedbackFallacy(text))
    {
        temp += "Feedback Fallacy";
    }
    if (_Fallacy::HistorianFallacy(text))
    {
        temp += "Historian Fallacy";
    }
    if (_Fallacy::HistoricalFallacy(text))
    {
        temp += "Historical Fallacy";
    }
    if (_Fallacy::BaconianFallacy(text))
    {
        temp += "Baconian Fallacy";
    }
    if (_Fallacy::HomuculusFallacy(text))
    {
        temp += "Homuculus Fallacy";
    }
    if (_Fallacy::InflationOfConflect(text))
    {
        temp += "Inflation Of Conflect";
    }
    if (_Fallacy::IfByWhiskey(text))
    {
        temp += "If By Whiskey";
    }
    if (_Fallacy::IncompleteComparison(text))
    {
        temp += "Incomplete Comparison";
    }
    if (_Fallacy::LumpOfLabourFallacy(text))
    {
        temp += "Lump Of Labour Fallacy";
    }
    if (_Fallacy::KettleLogic(text))
    {
        temp += "Kettle Logic";
    }
    if (_Fallacy::LudicFallacy(text))
    {
        temp += "Ludic Fallacy";
    }
    if (_Fallacy::QuantitativeFallacy(text))
    {
        temp += "Quantitative Fallacy";
    }
    if (_Fallacy::MindProjectionFallacy(text))
    {
        temp += "Mind Projection Fallacy";
    }
    if (_Fallacy::MoralisticFallacy(text))
    {
        temp += "Moralistic Fallacy";
    }
    if (_Fallacy::MovingTheGoalpostsFallacy(text))
    {
        temp += "Moving The Goalposts Fallacy";
    }
    if (_Fallacy::NirvanaFallacy(text))
    {
        temp += "Nirvana Fallacy";
    }
    if (_Fallacy::ProofByAssertion(text))
    {
        temp += "Proof By Assertion";
    }
    if (_Fallacy::ProsecutorFallacy(text))
    {
        temp += "Prosecutor Fallacy";
    }
    if (_Fallacy::ProvingTooMuch(text))
    {
        temp += "Proving Too Much";
    }
    if (_Fallacy::PsycholoistFallacy(text))
    {
        temp += "Psycholoist Fallacy";
    }
    if (_Fallacy::ReferentialFallacy(text))
    {
        temp += "Referential Fallacy";
    }
    if (_Fallacy::Reification(text))
    {
        temp += "Reification";
    }
    if (_Fallacy::RetrospectiveDeterminism(text))
    {
        temp += "Retrospective Determinism";
    }
    if (_Fallacy::SlipperySlope(text))
    {
        temp += "Slippery Slope";
    }
    if (_Fallacy::SpecialPleading(text))
    {
        temp += "Special Pleading";
    }
    if (_Fallacy::BeggingTheQuestion(text))
    {
        temp += "Begging The Question";
    }
    if (_Fallacy::LoadedLabelFallacy(text))
    {
        temp += "Loaded Label Fallacy";
    }
    if (_Fallacy::CircularReasoning(text))
    {
        temp += "Circular Reasoning";
    }
    if (_Fallacy::FallacyOfManyQuestions(text))
    {
        temp += "Fallacy Of Many Questions";
    }
    if (_Fallacy::FaultyGeneralization(text))
    {
        temp += "Faulty Generalization";
    }
    if (_Fallacy::AccidentFallacy(text))
    {
        temp += "Accident Fallacy";
    }
    if (_Fallacy::NoTrueScotsmanFallacy(text))
    {
        temp += "No True Scotsman Fallacy";
    }
    if (_Fallacy::CherryPickingFallacy(text))
    {
        temp += "Cherry Picking Fallacy";
    }
    if (_Fallacy::SurvivorshipBias(text))
    {
        temp += "Survivorship Bias";
    }
    if (_Fallacy::FalseAnalogy(text))
    {
        temp += "False Analogy";
    }
    if (_Fallacy::HastyGeneralization(text))
    {
        temp += "Hasty Generalization";
    }
    if (_Fallacy::InductiveFallacy(text))
    {
        temp += "Inductive Fallacy";
    }
    if (_Fallacy::MisleadingVividness(text))
    {
        temp += "Misleading Vividness";
    }
    if (_Fallacy::OverWhelmingException(text))
    {
        temp += "Over Whelming Exception";
    }
    if (_Fallacy::ThoughtTerminatingCliche(text))
    {
        temp += "Thought Terminating Cliche";
    }
    if (_Fallacy::QuestionableCause(text))
    {
        temp += "Questionable Cause";
    }
    if (_Fallacy::CumHocErgoPropterHocFallacy(text))
    {
        temp += "Cum Hoc Ergo Propter Hoc Fallacy";
    }
    if (_Fallacy::PostHocErgoPropterHoc(text))
    {
        temp += "Post Hoc Ergo Propter Hoc";
    }
    if (_Fallacy::WrongDirectionFallacy(text))
    {
        temp += "Wrong Direction Fallacy";
    }
    if (_Fallacy::CausalOversimplification(text))
    {
        temp += "Causal Oversimplification";
    }
    if (_Fallacy::FurtiveFallacy(text))
    {
        temp += "Furtive Fallacy";
    }
    if (_Fallacy::GamblerFallacy(text))
    {
        temp += "Gambler Fallacy";
    }
    if (_Fallacy::MagicalThinking(text))
    {
        temp += "Magical Thinking";
    }
    if (_Fallacy::RegressionFallacy(text))
    {
        temp += "Regression Fallacy";
    }
    if (_Fallacy::AppealToTheStoneFallacy(text))
    {
        temp += "Appeal To The Stone Fallacy";
    }
    if (_Fallacy::ArgumentFromIgnorance(text))
    {
        temp += "Argument From Ignorance";
    }
    if (_Fallacy::ArgumentFromIncredulity(text))
    {
        temp += "Argument From Incredulity";
    }
    if (_Fallacy::ArgumentFromRepitition(text))
    {
        temp += "Argument From Repitition";
    }
    if (_Fallacy::ArgumentFromSilence(text))
    {
        temp += "Argument From Silence";
    }
    if (_Fallacy::IrrelevantConclusionFallacy(text))
    {
        temp += "Irrelevant Conclusion Fallacy";
    }
    if (_Fallacy::RedHerringFallacy(text))
    {
        temp += "RedHerring Fallacy";
    }
    if (_Fallacy::AdHominem(text))
    {
        temp += "Ad Hominem";
    }
    if (_Fallacy::CircumstantialAdHominem(text))
    {
        temp += "Circumstantial Ad Hominem";
    }
    if (_Fallacy::PoisoningTheWell(text))
    {
        temp += "Poisoning The Well";
    }
    if (_Fallacy::AppealToMotive(text))
    {
        temp += "Appeal To Motive";
    }
    if (_Fallacy::WafkaTrapping(text))
    {
        temp += "Wafka Trapping";
    }
    if (_Fallacy::TonePolicing(text))
    {
        temp += "Tone Policing";
    }
    if (_Fallacy::TraitorousCriticFallacy(text))
    {
        temp += "Traitorous Critic Fallacy";
    }
    if (_Fallacy::AppealToAuthorityFallacy(text))
    {
        temp += "Appeal To Authority Fallacy";
    }
    if (_Fallacy::AppealToAccomplishmentFallacy(text))
    {
        temp += "Appeal To Accomplishment Fallacy";
    }
    if (_Fallacy::CourtiersReply(text))
    {
        temp += "Courtiers Reply";
    }
    if (_Fallacy::AppealToConsequences(text))
    {
        temp += "Appeal To Consequences";
    }
    if (_Fallacy::AppealToEmotion(text))
    {
        temp += "Appeal To Emotion";
    }
    if (_Fallacy::AppealToFear(text))
    {
        temp += "Appeal To Fear";
    }
    if (_Fallacy::AppealToFlattery(text))
    {
        temp += "Appeal To Flattery";
    }
    if (_Fallacy::AppealToPity(text))
    {
        temp += "Appeal To Pity";
    }
    if (_Fallacy::AppealToRidicule(text))
    {
        temp += "Appeal To Ridicule";
    }
    if (_Fallacy::AppealToSpite(text))
    {
        temp += "Appeal To Spite";
    }
    if (_Fallacy::JudgementalLanguage(text))
    {
        temp += "Judgemental Language";
    }
    if (_Fallacy::PoohPooh(text))
    {
        temp += "Pooh Pooh";
    }
    if (_Fallacy::WishfulThinking(text))
    {
        temp += "Wishful Thinking";
    }
    if (_Fallacy::AppealToNature(text))
    {
        temp += "Appeal To Nature";
    }
    if (_Fallacy::AppealToNovelty(text))
    {
        temp += "Appeal To Novelty";
    }
    if (_Fallacy::AppealToPoverty(text))
    {
        temp += "Appeal To Poverty";
    }
    if (_Fallacy::AppealToTradition(text))
    {
        temp += "Appeal To Tradition";
    }
    if (_Fallacy::AppealToWealth(text))
    {
        temp += "Appeal To Wealth";
    }
    if (_Fallacy::AppealToThreat(text))
    {
        temp += "Appeal To Threat";
    }
    if (_Fallacy::ArgumentumAdPopulum(text))
    {
        temp += "Argumentum Ad Populum";
    }
    if (_Fallacy::AssociationFallacy(text))
    {
        temp += "Association Fallacy";
    }
    if (_Fallacy::IpseDixit(text))
    {
        temp += "Ipse Dixit";
    }
    if (_Fallacy::PsychogeneticFallacy(text))
    {
        temp += "Psychogenetic Fallacy";
    }
    if (_Fallacy::ChronologicalSnobbery(text))
    {
        temp += "Chronological Snobbery";
    }
    if (_Fallacy::FallacyOfRelativePrivatation(text))
    {
        temp += "Fallacy Of Relative Privatation";
    }
    if (_Fallacy::GeneticFallacy(text))
    {
        temp += "Genetic Fallacy";
    }
    if (_Fallacy::EntitledToOpiniom(text))
    {
        temp += "Entitled To Opiniom";
    }
    if (_Fallacy::MoralisticFallacy(text))
    {
        temp += "Moralistic Fallacy";
    }
    if (_Fallacy::NaturalisticFallacy(text))
    {
        temp += "Naturalistic Fallacy";
    }
    if (_Fallacy::IsOughtFallacy(text))
    {
        temp += "Is Ought Fallacy";
    }
    if (_Fallacy::StrawManFallacy(text))
    {
        temp += "Straw Man Fallacy";
    }
    if (_Fallacy::TexasSharpshooterFallacy(text))
    {
        temp += "Texas Sharpshooter Fallacy";
    }
    if (_Fallacy::AppealToHypocrisy(text))
    {
        temp += "Appeal To Hypocrisy";
    }
    if (_Fallacy::TwoWrongsMakeARight(text))
    {
        temp += "Two Wrongs Make A Right";
    }
    if (_Fallacy::VacuousTruth(text))
    {
        temp += "Vacuous Truth";
    }
    else
    {
        return "NULL";
    }

    return temp;
}
//  Affirming the Consequent - the antecedent in an indicative conditional is claimed to be true because the consequent is true; if A, then B; B, therefore A.
bool _Fallacy::AffirmingTheConsequent(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string model = "llama3";
    string fallacy_definition = "The tendency to avoid options for which the probability of a favorable outcome is unknown.";
    string prompt = "Check if the following text matches the following logical fallacies and limit the response to yes or no: " + fallacy_definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    /*string* fallacy_definition_words = _Utilities::String2Words(fallacy_definition);
    double* definition_vector = _NLU::getSentenceVectors(fallacy_definition_words);
    double* definition_sentence_vector = _Utilities::VectorAverage(definition_vector, sizeof(fallacy_definition_words));
    string* sentence_words = _Utilities::String2Words(fallacy_definition);
    double* sentence_vector = _NLU::getSentenceVectors(sentence_words);
    double* sentence_sentence_vector = _Utilities::VectorAverage(sentence_vector, sizeof(sentence_words));
    int size = sizeof(definition_vector) / sizeof(definition_vector[0]);
    double cosine_similarity = _Math::cosineSimilarity(definition_vector, sentence_vector, size);*/

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
 
//  Denying the Antecedent - the consequent in an indicative conditional is claimed to be false because the antecedent is false; if A, then B; not A, therefore not B.
bool _Fallacy::DenyingTheAntecedent(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string model = "llama3";
    string fallacy_definition = "the consequent in an indicative conditional is claimed to be false because the antecedent is false";
    string prompt = "Check if the following text matches the following logical fallacies and limit the response to yes or no: " + fallacy_definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    //string* fallacy_definition_words = _Utilities::String2Words(fallacy_definition);
    //double* definition_vector = _NLU::getSentenceVectors(fallacy_definition_words);
    //double* definition_sentence_vector = _Utilities::VectorAverage(definition_vector, sizeof(fallacy_definition_words));
    //string* sentence_words = _Utilities::String2Words(fallacy_definition);
    //double* sentence_vector = _NLU::getSentenceVectors(sentence_words);
    //double* sentence_sentence_vector = _Utilities::VectorAverage(sentence_vector, sizeof(sentence_words));
    //int size = sizeof(definition_vector) / sizeof(definition_vector[0]);
    //double cosine_similarity = _Math::cosineSimilarity(definition_vector, sentence_vector, size);

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

//  Affirming a Disjunct - concluding that one disjunct of a logical disjunction must be false because the other disjunct is true; A or B; A, therefore not B.
bool _Fallacy::AffirmingADisjunct(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string model = "llama3";
    string fallacy_definition = "concluding that one disjunct of a logical disjunction must be false because the other disjunct is true";
    string prompt = "Check if the following text matches the following logical fallacies and limit the response to yes or no: " + fallacy_definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    //string* fallacy_definition_words = _Utilities::String2Words(fallacy_definition);
    //double* definition_vector = _NLU::getSentenceVectors(fallacy_definition_words);
    //double* definition_sentence_vector = _Utilities::VectorAverage(definition_vector, sizeof(fallacy_definition_words));
    //string* sentence_words = _Utilities::String2Words(fallacy_definition);
    //double* sentence_vector = _NLU::getSentenceVectors(sentence_words);
    //double* sentence_sentence_vector = _Utilities::VectorAverage(sentence_vector, sizeof(sentence_words));
    //int size = sizeof(definition_vector) / sizeof(definition_vector[0]);
    //double cosine_similarity = _Math::cosineSimilarity(definition_vector, sentence_vector, size);

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

//  Denying a Conjunct - False Dilema
bool _Fallacy::DenyingAConjunct(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string model = "llama3";
    string fallacy_definition = "False Dilema";
    string prompt = "Check if the following text matches the following logical fallacies and limit the response to yes or no: " + fallacy_definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

   /* string* fallacy_definition_words = _Utilities::String2Words(fallacy_definition);
    double* definition_vector = _NLU::getSentenceVectors(fallacy_definition_words);
    double* definition_sentence_vector = _Utilities::VectorAverage(definition_vector, sizeof(fallacy_definition_words));
    string* sentence_words = _Utilities::String2Words(fallacy_definition);
    double* sentence_vector = _NLU::getSentenceVectors(sentence_words);
    double* sentence_sentence_vector = _Utilities::VectorAverage(sentence_vector, sizeof(sentence_words));
    int size = sizeof(definition_vector) / sizeof(definition_vector[0]);
    double cosine_similarity = _Math::cosineSimilarity(definition_vector, sentence_vector, size);*/

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

//  Fallacy of the Undistributed Middle - a fallacy that is committed when the middle term in a categorical syllogism is not distributed.It is a syllogistic fallacy.More specifically it is also a form of non sequitur.
bool _Fallacy::FallacyOfTheUndistributedMiddle(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string model = "llama3";
    string fallacy_definition = "the middle term in a categorical syllogism is not distributed";
    string prompt = "Check if the following text matches the following logical fallacies and limit the response to yes or no: " + fallacy_definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    //string* fallacy_definition_words = _Utilities::String2Words(fallacy_definition);
    //double* definition_vector = _NLU::getSentenceVectors(fallacy_definition_words);
    //double* definition_sentence_vector = _Utilities::VectorAverage(definition_vector, sizeof(fallacy_definition_words));
    //string* sentence_words = _Utilities::String2Words(fallacy_definition);
    //double* sentence_vector = _NLU::getSentenceVectors(sentence_words);
    //double* sentence_sentence_vector = _Utilities::VectorAverage(sentence_vector, sizeof(sentence_words));
    //int size = sizeof(definition_vector) / sizeof(definition_vector[0]);
    //double cosine_similarity = _Math::cosineSimilarity(definition_vector, sentence_vector, size);

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

//  Appeal to probability – a statement that takes something for granted because it would probably be the case (or might be the case).
bool _Fallacy::AppealToProbability(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string model = "llama3";
    string fallacy_definition = "if an argument is fallacious, then the conclusion is false";
    string prompt = "Check if the following text matches the following logical fallacies and limit the response to yes or no: " + fallacy_definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    //string* fallacy_definition_words = _Utilities::String2Words(fallacy_definition);
    //double* definition_vector = _NLU::getSentenceVectors(fallacy_definition_words);
    //double* definition_sentence_vector = _Utilities::VectorAverage(definition_vector, sizeof(fallacy_definition_words));
    //string* sentence_words = _Utilities::String2Words(fallacy_definition);
    //double* sentence_vector = _NLU::getSentenceVectors(sentence_words);
    //double* sentence_sentence_vector = _Utilities::VectorAverage(sentence_vector, sizeof(sentence_words));
    //int size = sizeof(definition_vector) / sizeof(definition_vector[0]);
    //double cosine_similarity = _Math::cosineSimilarity(definition_vector, sentence_vector, size);

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

//  Argument from fallacy(also known as the fallacy fallacy) – the assumption that, if an argument is fallacious, then the conclusion is false.
bool _Fallacy::ArgumentFromFallacy(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string model = "llama3";
    string fallacy_definition = "fallacious, then the conclusion is false.";
    string prompt = "Check if the following text matches the following logical fallacies and limit the response to yes or no: " + fallacy_definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    //string* fallacy_definition_words = _Utilities::String2Words(fallacy_definition);
    //double* definition_vector = _NLU::getSentenceVectors(fallacy_definition_words);
    //double* definition_sentence_vector = _Utilities::VectorAverage(definition_vector, sizeof(fallacy_definition_words));
    //string* sentence_words = _Utilities::String2Words(fallacy_definition);
    //double* sentence_vector = _NLU::getSentenceVectors(sentence_words);
    //double* sentence_sentence_vector = _Utilities::VectorAverage(sentence_vector, sizeof(sentence_words));
    //int size = sizeof(definition_vector) / sizeof(definition_vector[0]);
    //double cosine_similarity = _Math::cosineSimilarity(definition_vector, sentence_vector, size);

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

//  Base rate fallacy – making a probability judgment based on conditional probabilities, without taking into account the effect of prior probabilities.
bool _Fallacy::BaseRateFallacy(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string model = "llama3";
    string fallacy_definition = "probability judgment based on conditional probabilities, without taking into account the effect of prior probabilities.";
    string prompt = "Check if the following text matches the following logical fallacies and limit the response to yes or no: " + fallacy_definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);
    
    //string* fallacy_definition_words = _Utilities::String2Words(fallacy_definition);
    //double* definition_vector = _NLU::getSentenceVectors(fallacy_definition_words);
    //double* definition_sentence_vector = _Utilities::VectorAverage(definition_vector, sizeof(fallacy_definition_words));
    //string* sentence_words = _Utilities::String2Words(fallacy_definition);
    //double* sentence_vector = _NLU::getSentenceVectors(sentence_words);
    //double* sentence_sentence_vector = _Utilities::VectorAverage(sentence_vector, sizeof(sentence_words));
    //int size = sizeof(definition_vector) / sizeof(definition_vector[0]);
    //double cosine_similarity = _Math::cosineSimilarity(definition_vector, sentence_vector, size);

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

//  Conjunction fallacy – the assumption that an outcome simultaneously satisfying multiple conditions is more probable than an outcome satisfying a single one of them.
bool _Fallacy::ConjunctionFallacy(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string model = "llama3";
    string fallacy_definition = "outcome simultaneously satisfying multiple conditions is more probable than an outcome satisfying a single one of them.";
    string prompt = "Check if the following text matches the following logical fallacies and limit the response to yes or no: " + fallacy_definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);
    
    //string* fallacy_definition_words = _Utilities::String2Words(fallacy_definition);
    //double* definition_vector = _NLU::getSentenceVectors(fallacy_definition_words);
    //double* definition_sentence_vector = _Utilities::VectorAverage(definition_vector, sizeof(fallacy_definition_words));
    //string* sentence_words = _Utilities::String2Words(fallacy_definition);
    //double* sentence_vector = _NLU::getSentenceVectors(sentence_words);
    //double* sentence_sentence_vector = _Utilities::VectorAverage(sentence_vector, sizeof(sentence_words));
    //int size = sizeof(definition_vector) / sizeof(definition_vector[0]);
    //double cosine_similarity = _Math::cosineSimilarity(definition_vector, sentence_vector, size);

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

//  Masked - man fallacy(illicit substitution of identicals) – the substitution of identical designators in a true statement can lead to a false one.
bool _Fallacy::MaskedManFallacy(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string model = "llama3";
    string fallacy_definition = "substitution of identical designators in a true statement can lead to a false one";
    string prompt = "Check if the following text matches the following logical fallacies and limit the response to yes or no: " + fallacy_definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    //string* fallacy_definition_words = _Utilities::String2Words(fallacy_definition);
    //double* definition_vector = _NLU::getSentenceVectors(fallacy_definition_words);
    //double* definition_sentence_vector = _Utilities::VectorAverage(definition_vector, sizeof(fallacy_definition_words));
    //string* sentence_words = _Utilities::String2Words(fallacy_definition);
    //double* sentence_vector = _NLU::getSentenceVectors(sentence_words);
    //double* sentence_sentence_vector = _Utilities::VectorAverage(sentence_vector, sizeof(sentence_words));
    //int size = sizeof(definition_vector) / sizeof(definition_vector[0]);
    //double cosine_similarity = _Math::cosineSimilarity(definition_vector, sentence_vector, size);

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

//  Quantification Fallacies - an error in logic where the quantifiers of the premises are in contradiction to the quantifier of the conclusion.
bool _Fallacy::QualificationFallacies(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string model = "llama3";
    string fallacy_definition = "error in logic where the quantifiers of the premises are in contradiction to the quantifier of the conclusion.";
    string prompt = "Check if the following text matches the following logical fallacies and limit the response to yes or no: " + fallacy_definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);
    
    //string* fallacy_definition_words = _Utilities::String2Words(fallacy_definition);
    //double* definition_vector = _NLU::getSentenceVectors(fallacy_definition_words);
    //double* definition_sentence_vector = _Utilities::VectorAverage(definition_vector, sizeof(fallacy_definition_words));
    //string* sentence_words = _Utilities::String2Words(fallacy_definition);
    //double* sentence_vector = _NLU::getSentenceVectors(sentence_words);
    //double* sentence_sentence_vector = _Utilities::VectorAverage(sentence_vector, sizeof(sentence_words));
    //int size = sizeof(definition_vector) / sizeof(definition_vector[0]);
    //double cosine_similarity = _Math::cosineSimilarity(definition_vector, sentence_vector, size);

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

//  Existential fallacy – an argument that has a universal premise and a particular conclusion.
bool _Fallacy::ExistentialFallacy(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string model = "llama3";
    string fallacy_definition = "a universal premise and a particular conclusion.";
    string prompt = "Check if the following text matches the following logical fallacies and limit the response to yes or no: " + fallacy_definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    //string* fallacy_definition_words = _Utilities::String2Words(fallacy_definition);
    //double* definition_vector = _NLU::getSentenceVectors(fallacy_definition_words);
    //double* definition_sentence_vector = _Utilities::VectorAverage(definition_vector, sizeof(fallacy_definition_words));
    //string* sentence_words = _Utilities::String2Words(fallacy_definition);
    //double* sentence_vector = _NLU::getSentenceVectors(sentence_words);
    //double* sentence_sentence_vector = _Utilities::VectorAverage(sentence_vector, sizeof(sentence_words));
    //int size = sizeof(definition_vector) / sizeof(definition_vector[0]);
    //double cosine_similarity = _Math::cosineSimilarity(definition_vector, sentence_vector, size);

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

//  Affirmative conclusion from a negative premise(illicit negative) – a categorical syllogism has a positive conclusion, but at least one negative premise.
bool _Fallacy::AffirmativeConclusionFromANegativePremise(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string model = "llama3";
    string fallacy_definition = "categorical syllogism has a positive conclusion, but at least one negative premise.";
    string prompt = "Check if the following text matches the following logical fallacies and limit the response to yes or no: " + fallacy_definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    //string* fallacy_definition_words = _Utilities::String2Words(fallacy_definition);
    //double* definition_vector = _NLU::getSentenceVectors(fallacy_definition_words);
    //double* definition_sentence_vector = _Utilities::VectorAverage(definition_vector, sizeof(fallacy_definition_words));
    //string* sentence_words = _Utilities::String2Words(fallacy_definition);
    //double* sentence_vector = _NLU::getSentenceVectors(sentence_words);
    //double* sentence_sentence_vector = _Utilities::VectorAverage(sentence_vector, sizeof(sentence_words));
    //int size = sizeof(definition_vector) / sizeof(definition_vector[0]);
    //double cosine_similarity = _Math::cosineSimilarity(definition_vector, sentence_vector, size);

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

//  Fallacy of exclusive premises – a categorical syllogism that is invalid because both of its premises are negative.
bool _Fallacy::FallacyOfExclusivePremises(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string model = "llama3";
    string fallacy_definition = "categorical syllogism that is invalid because both of its premises are negative";
    string prompt = "Check if the following text matches the following logical fallacies and limit the response to yes or no: " + fallacy_definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    //string* fallacy_definition_words = _Utilities::String2Words(fallacy_definition);
    //double* definition_vector = _NLU::getSentenceVectors(fallacy_definition_words);
    //double* definition_sentence_vector = _Utilities::VectorAverage(definition_vector, sizeof(fallacy_definition_words));
    //string* sentence_words = _Utilities::String2Words(fallacy_definition);
    //double* sentence_vector = _NLU::getSentenceVectors(sentence_words);
    //double* sentence_sentence_vector = _Utilities::VectorAverage(sentence_vector, sizeof(sentence_words));
    //int size = sizeof(definition_vector) / sizeof(definition_vector[0]);
    //double cosine_similarity = _Math::cosineSimilarity(definition_vector, sentence_vector, size);

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

//  Fallacy of four terms(quaternio terminorum) – a categorical syllogism that has four terms.
bool _Fallacy::FallacyOfFourTerms(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string model = "llama3";
    string fallacy_definition = "categorical syllogism that has four terms";
    string prompt = "Check if the following text matches the following logical fallacies and limit the response to yes or no: " + fallacy_definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    //string* fallacy_definition_words = _Utilities::String2Words(fallacy_definition);
    //double* definition_vector = _NLU::getSentenceVectors(fallacy_definition_words);
    //double* definition_sentence_vector = _Utilities::VectorAverage(definition_vector, sizeof(fallacy_definition_words));
    //string* sentence_words = _Utilities::String2Words(fallacy_definition);
    //double* sentence_vector = _NLU::getSentenceVectors(sentence_words);
    //double* sentence_sentence_vector = _Utilities::VectorAverage(sentence_vector, sizeof(sentence_words));
    //int size = sizeof(definition_vector) / sizeof(definition_vector[0]);
    //double cosine_similarity = _Math::cosineSimilarity(definition_vector, sentence_vector, size);

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

//  Illicit major – a categorical syllogism that is invalid because its major term is not distributed in the major premise but distributed in the conclusion.
bool _Fallacy::IllicitMajor(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string model = "llama3";
    string fallacy_definition = "categorical syllogism that is invalid because its major term is not distributed in the major premise but distributed in the conclusion";
    string prompt = "Check if the following text matches the following logical fallacies and limit the response to yes or no: " + fallacy_definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);
    
    //string* fallacy_definition_words = _Utilities::String2Words(fallacy_definition);
    //double* definition_vector = _NLU::getSentenceVectors(fallacy_definition_words);
    //double* definition_sentence_vector = _Utilities::VectorAverage(definition_vector, sizeof(fallacy_definition_words));
    //string* sentence_words = _Utilities::String2Words(fallacy_definition);
    //double* sentence_vector = _NLU::getSentenceVectors(sentence_words);
    //double* sentence_sentence_vector = _Utilities::VectorAverage(sentence_vector, sizeof(sentence_words));
    //int size = sizeof(definition_vector) / sizeof(definition_vector[0]);
    //double cosine_similarity = _Math::cosineSimilarity(definition_vector, sentence_vector, size);

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

//  Illicit minor – a categorical syllogism that is invalid because its minor term is not distributed in the minor premise but distributed in the conclusion.
bool _Fallacy::IllicitMinor(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string model = "llama3";
    string fallacy_definition = "categorical syllogism that is invalid because its minor term is not distributed in the minor premise but distributed in the conclusion";
    string prompt = "Check if the following text matches the following logical fallacies and limit the response to yes or no: " + fallacy_definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    //string* fallacy_definition_words = _Utilities::String2Words(fallacy_definition);
    //double* definition_vector = _NLU::getSentenceVectors(fallacy_definition_words);
    //double* definition_sentence_vector = _Utilities::VectorAverage(definition_vector, sizeof(fallacy_definition_words));
    //string* sentence_words = _Utilities::String2Words(fallacy_definition);
    //double* sentence_vector = _NLU::getSentenceVectors(sentence_words);
    //double* sentence_sentence_vector = _Utilities::VectorAverage(sentence_vector, sizeof(sentence_words));
    //int size = sizeof(definition_vector) / sizeof(definition_vector[0]);
    //double cosine_similarity = _Math::cosineSimilarity(definition_vector, sentence_vector, size);

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

//  Negative conclusion from affirmative premises(illicit affirmative) – a categorical syllogism has a negative conclusion but affirmative premises.
bool _Fallacy::NegativeConclusionFromAffirmativePremises(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string model = "llama3";
    string fallacy_definition = "a categorical syllogism has a negative conclusion but affirmative premises";
    string prompt = "Check if the following text matches the following logical fallacies and limit the response to yes or no: " + fallacy_definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    //string* fallacy_definition_words = _Utilities::String2Words(fallacy_definition);
    //double* definition_vector = _NLU::getSentenceVectors(fallacy_definition_words);
    //double* definition_sentence_vector = _Utilities::VectorAverage(definition_vector, sizeof(fallacy_definition_words));
    //string* sentence_words = _Utilities::String2Words(fallacy_definition);
    //double* sentence_vector = _NLU::getSentenceVectors(sentence_words);
    //double* sentence_sentence_vector = _Utilities::VectorAverage(sentence_vector, sizeof(sentence_words));
    //int size = sizeof(definition_vector) / sizeof(definition_vector[0]);
    //double cosine_similarity = _Math::cosineSimilarity(definition_vector, sentence_vector, size);

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

//  Fallacy of the undistributed middle – the middle term in a categorical syllogism is not distributed.
//bool _Fallacy::FallacyOfTheUndistributedMiddle(string text)
//{
//    // Get the definition for the fallacy
//    // 1. Fallacy Additive
//    // 2. Fallacy Additive Average
//    string fallacy_definition = "middle term in a categorical syllogism is not distributed";
//    double* definition = _NLU::getSentenceVectors(fallacy_definition);
//    double* definition_additive = _NLU::getSentenceVectorsAdditive(fallacy_definition);
//    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(fallacy_definition);
//    double* result = _NLU::VectorAddition(definition, result);
//    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
//    double* result_average = _NLU::VectorAddition(definition_average, result_average);
//    string* fallacy_texts;
//    string* fallacy_words;
//
//    fallacy_texts = _Utilities::String2Words(text);
//
//    for (int x = 0; x <= sizeof(fallacy_texts); x++)
//    {
//
//    }
//}

//  Modal fallacy – confusing necessity with sufficiency.A condition X is necessary for Y if X is required for even the possibility of Y.X doesn’t bring about Y by itself, but if there is no X, there will be no Y.For example, oxygen is necessary for fire.But one cannot assume that everywhere there is oxygen, there is fire.A condition X is sufficient for Y if X, by itself, is enough to bring about Y.For example, riding the bus is a sufficient mode of transportation to get to work.But there are other modes of transportation – car, taxi, bicycle, walking – that can be used.
bool _Fallacy::ModalFallacy(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string model = "llama3";
    string fallacy_definition = "confusing necessity with sufficiency.A condition X is necessary for Y if X is required for even the possibility of Y.X doesn’t bring about Y by itself, but if there is no X, there will be no Y.For example, oxygen is necessary for fire.But one cannot assume that everywhere there is oxygen, there is fire.A condition X is sufficient for Y if X, by itself, is enough to bring about Y.For example, riding the bus is a sufficient mode of transportation to get to work.But there are other modes of transportation – car, taxi, bicycle, walking – that can be used.";
    string prompt = "Check if the following text matches the following logical fallacies and limit the response to yes or no: " + fallacy_definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);
    
    //string* fallacy_definition_words = _Utilities::String2Words(fallacy_definition);
    //double* definition_vector = _NLU::getSentenceVectors(fallacy_definition_words);
    //double* definition_sentence_vector = _Utilities::VectorAverage(definition_vector, sizeof(fallacy_definition_words));
    //string* sentence_words = _Utilities::String2Words(fallacy_definition);
    //double* sentence_vector = _NLU::getSentenceVectors(sentence_words);
    //double* sentence_sentence_vector = _Utilities::VectorAverage(sentence_vector, sizeof(sentence_words));
    //int size = sizeof(definition_vector) / sizeof(definition_vector[0]);
    //double cosine_similarity = _Math::cosineSimilarity(definition_vector, sentence_vector, size);

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

//  Modal scope fallacy – a degree of unwarranted necessity is placed in the conclusion.
bool _Fallacy::ModalScopeFallacy(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string model = "llama3";
    string fallacy_definition = "a degree of unwarranted necessity is placed in the conclusion.";
    string prompt = "Check if the following text matches the following logical fallacies and limit the response to yes or no: " + fallacy_definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    //string* fallacy_definition_words = _Utilities::String2Words(fallacy_definition);
    //double* definition_vector = _NLU::getSentenceVectors(fallacy_definition_words);
    //double* definition_sentence_vector = _Utilities::VectorAverage(definition_vector, sizeof(fallacy_definition_words));
    //string* sentence_words = _Utilities::String2Words(fallacy_definition);
    //double* sentence_vector = _NLU::getSentenceVectors(sentence_words);
    //double* sentence_sentence_vector = _Utilities::VectorAverage(sentence_vector, sizeof(sentence_words));
    //int size = sizeof(definition_vector) / sizeof(definition_vector[0]);
    //double cosine_similarity = _Math::cosineSimilarity(definition_vector, sentence_vector, size);

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

//  Argument to moderation(false compromise, middle ground, fallacy of the mean, argumentum ad temperantiam) – assuming that a compromise between two positions is always correct.
bool _Fallacy::ArgumentToModeration(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string model = "llama3";
    string fallacy_definition = "assuming that a compromise between two positions is always correct.";
    string prompt = "Check if the following text matches the following logical fallacies and limit the response to yes or no: " + fallacy_definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    //string* fallacy_definition_words = _Utilities::String2Words(fallacy_definition);
    //double* definition_vector = _NLU::getSentenceVectors(fallacy_definition_words);
    //double* definition_sentence_vector = _Utilities::VectorAverage(definition_vector, sizeof(fallacy_definition_words));
    //string* sentence_words = _Utilities::String2Words(fallacy_definition);
    //double* sentence_vector = _NLU::getSentenceVectors(sentence_words);
    //double* sentence_sentence_vector = _Utilities::VectorAverage(sentence_vector, sizeof(sentence_words));
    //int size = sizeof(definition_vector) / sizeof(definition_vector[0]);
    //double cosine_similarity = _Math::cosineSimilarity(definition_vector, sentence_vector, size);

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

//  Continuum fallacy(fallacy of the beard, line - drawing fallacy, sorites fallacy, fallacy of the heap, bald man fallacy, decision - point fallacy) – improperly rejecting a claim for being imprecise.
bool _Fallacy::ContinuumFallacy(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string model = "llama3";
    string fallacy_definition = "improperly rejecting a claim for being imprecise";
    string prompt = "Check if the following text matches the following logical fallacies and limit the response to yes or no: " + fallacy_definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    //string* fallacy_definition_words = _Utilities::String2Words(fallacy_definition);
    //double* definition_vector = _NLU::getSentenceVectors(fallacy_definition_words);
    //double* definition_sentence_vector = _Utilities::VectorAverage(definition_vector, sizeof(fallacy_definition_words));
    //string* sentence_words = _Utilities::String2Words(fallacy_definition);
    //double* sentence_vector = _NLU::getSentenceVectors(sentence_words);
    //double* sentence_sentence_vector = _Utilities::VectorAverage(sentence_vector, sizeof(sentence_words));
    //int size = sizeof(definition_vector) / sizeof(definition_vector[0]);
    //double cosine_similarity = _Math::cosineSimilarity(definition_vector, sentence_vector, size);

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

//  Suppressed correlative – a correlative is redefined so that one alternative is made impossible(e.g., "I'm not fat because I'm thinner than him").
bool _Fallacy::SuppressedCorrelative(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string model = "llama3";
    string fallacy_definition = "a correlative is redefined so that one alternative is made impossible";
    string prompt = "Check if the following text matches the following logical fallacies and limit the response to yes or no: " + fallacy_definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    //string* fallacy_definition_words = _Utilities::String2Words(fallacy_definition);
    //double* definition_vector = _NLU::getSentenceVectors(fallacy_definition_words);
    //double* definition_sentence_vector = _Utilities::VectorAverage(definition_vector, sizeof(fallacy_definition_words));
    //string* sentence_words = _Utilities::String2Words(fallacy_definition);
    //double* sentence_vector = _NLU::getSentenceVectors(sentence_words);
    //double* sentence_sentence_vector = _Utilities::VectorAverage(sentence_vector, sizeof(sentence_words));
    //int size = sizeof(definition_vector) / sizeof(definition_vector[0]);
    //double cosine_similarity = _Math::cosineSimilarity(definition_vector, sentence_vector, size);

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

//  Definist fallacy – defining a term used in an argument in a biased manner(e.g., using "loaded terms").The person making the argument expects that the listener will accept the provided definition, making the argument difficult to refute.
bool _Fallacy::DefinistFallacy(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string model = "llama3";
    string fallacy_definition = "defining a term used in an argument in a biased manner";
    string prompt = "Check if the following text matches the following logical fallacies and limit the response to yes or no: " + fallacy_definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    //string* fallacy_definition_words = _Utilities::String2Words(fallacy_definition);
    //double* definition_vector = _NLU::getSentenceVectors(fallacy_definition_words);
    //double* definition_sentence_vector = _Utilities::VectorAverage(definition_vector, sizeof(fallacy_definition_words));
    //string* sentence_words = _Utilities::String2Words(fallacy_definition);
    //double* sentence_vector = _NLU::getSentenceVectors(sentence_words);
    //double* sentence_sentence_vector = _Utilities::VectorAverage(sentence_vector, sizeof(sentence_words));
    //int size = sizeof(definition_vector) / sizeof(definition_vector[0]);
    //double cosine_similarity = _Math::cosineSimilarity(definition_vector, sentence_vector, size);

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

//  Divine fallacy(argument from incredulity) – arguing that, because something is so incredible or amazing, it must be the result of superior, divine, alien or paranormal agency.
bool _Fallacy::DivineFallacy(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string model = "llama3";
    string fallacy_definition = "something is so incredible or amazing, it must be the result of superior, divine, alien or paranormal agency.";
    string prompt = "Check if the following text matches the following logical fallacies and limit the response to yes or no: " + fallacy_definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);
    
    //string* fallacy_definition_words = _Utilities::String2Words(fallacy_definition);
    //double* definition_vector = _NLU::getSentenceVectors(fallacy_definition_words);
    //double* definition_sentence_vector = _Utilities::VectorAverage(definition_vector, sizeof(fallacy_definition_words));
    //string* sentence_words = _Utilities::String2Words(fallacy_definition);
    //double* sentence_vector = _NLU::getSentenceVectors(sentence_words);
    //double* sentence_sentence_vector = _Utilities::VectorAverage(sentence_vector, sizeof(sentence_words));
    //int size = sizeof(definition_vector) / sizeof(definition_vector[0]);
    //double cosine_similarity = _Math::cosineSimilarity(definition_vector, sentence_vector, size);

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

//  Double counting – counting events or occurrences more than once in probabilistic reasoning, which leads to the sum of the probabilities of all cases exceeding unity.
bool _Fallacy::DoubleCounting(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string model = "llama3";
    string fallacy_definition = "counting events or occurrences more than once in probabilistic reasoning, which leads to the sum of the probabilities of all cases exceeding unity";
    string prompt = "Check if the following text matches the following logical fallacies and limit the response to yes or no: " + fallacy_definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);
    
    //string* fallacy_definition_words = _Utilities::String2Words(fallacy_definition);
    //double* definition_vector = _NLU::getSentenceVectors(fallacy_definition_words);
    //double* definition_sentence_vector = _Utilities::VectorAverage(definition_vector, sizeof(fallacy_definition_words));
    //string* sentence_words = _Utilities::String2Words(fallacy_definition);
    //double* sentence_vector = _NLU::getSentenceVectors(sentence_words);
    //double* sentence_sentence_vector = _Utilities::VectorAverage(sentence_vector, sizeof(sentence_words));
    //int size = sizeof(definition_vector) / sizeof(definition_vector[0]);
    //double cosine_similarity = _Math::cosineSimilarity(definition_vector, sentence_vector, size);

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

//  Equivocation – using a term with more than one meaning in a statement without specifying which meaning is intended.
bool _Fallacy::Equivacation(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string model = "llama3";
    string fallacy_definition = "using a term with more than one meaning in a statement without specifying which meaning is intended.";
    string prompt = "Check if the following text matches the following logical fallacies and limit the response to yes or no: " + fallacy_definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);
    
    //string* fallacy_definition_words = _Utilities::String2Words(fallacy_definition);
    //double* definition_vector = _NLU::getSentenceVectors(fallacy_definition_words);
    //double* definition_sentence_vector = _Utilities::VectorAverage(definition_vector, sizeof(fallacy_definition_words));
    //string* sentence_words = _Utilities::String2Words(fallacy_definition);
    //double* sentence_vector = _NLU::getSentenceVectors(sentence_words);
    //double* sentence_sentence_vector = _Utilities::VectorAverage(sentence_vector, sizeof(sentence_words));
    //int size = sizeof(definition_vector) / sizeof(definition_vector[0]);
    //double cosine_similarity = _Math::cosineSimilarity(definition_vector, sentence_vector, size);

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

//  Ambiguous middle term – using a middle term with multiple meanings.
bool _Fallacy::AmbiguousMiddleTerm(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string model = "llama3";
    string fallacy_definition = "a middle term with multiple meanings.";
    string prompt = "Check if the following text matches the following logical fallacies and limit the response to yes or no: " + fallacy_definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);
    //string* fallacy_definition_words = _Utilities::String2Words(fallacy_definition);
    //double* definition_vector = _NLU::getSentenceVectors(fallacy_definition_words);
    //double* definition_sentence_vector = _Utilities::VectorAverage(definition_vector, sizeof(fallacy_definition_words));
    //string* sentence_words = _Utilities::String2Words(fallacy_definition);
    //double* sentence_vector = _NLU::getSentenceVectors(sentence_words);
    //double* sentence_sentence_vector = _Utilities::VectorAverage(sentence_vector, sizeof(sentence_words));
    //int size = sizeof(definition_vector) / sizeof(definition_vector[0]);
    //double cosine_similarity = _Math::cosineSimilarity(definition_vector, sentence_vector, size);

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

//  Definitional retreat – changing the meaning of a word when an objection is raised.
bool _Fallacy::DefinitionalRetreat(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string model = "llama3";
    string fallacy_definition = "changing the meaning of a word when an objection is raised";
    string prompt = "Check if the following text matches the following logical fallacies and limit the response to yes or no: " + fallacy_definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    //string* fallacy_definition_words = _Utilities::String2Words(fallacy_definition);
    //double* definition_vector = _NLU::getSentenceVectors(fallacy_definition_words);
    //double* definition_sentence_vector = _Utilities::VectorAverage(definition_vector, sizeof(fallacy_definition_words));
    //string* sentence_words = _Utilities::String2Words(fallacy_definition);
    //double* sentence_vector = _NLU::getSentenceVectors(sentence_words);
    //double* sentence_sentence_vector = _Utilities::VectorAverage(sentence_vector, sizeof(sentence_words));
    //int size = sizeof(definition_vector) / sizeof(definition_vector[0]);
    //double cosine_similarity = _Math::cosineSimilarity(definition_vector, sentence_vector, size);

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

//  Motte - and -bailey fallacy – conflating two positions with similar properties, one modestand easy to defend(the "motte") and one more controversial(the "bailey").[22] The arguer first states the controversial position, but when challenged, states that they are advancing the modest position.
bool _Fallacy::MotteAndBaileyFallacy(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string model = "llama3";
    string fallacy_definition = "The arguer first states the controversial position, but when challenged, states that they are advancing the modest position.";
    string prompt = "Check if the following text matches the following logical fallacies and limit the response to yes or no: " + fallacy_definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);
    
    //string* fallacy_definition_words = _Utilities::String2Words(fallacy_definition);
    //double* definition_vector = _NLU::getSentenceVectors(fallacy_definition_words);
    //double* definition_sentence_vector = _Utilities::VectorAverage(definition_vector, sizeof(fallacy_definition_words));
    //string* sentence_words = _Utilities::String2Words(fallacy_definition);
    //double* sentence_vector = _NLU::getSentenceVectors(sentence_words);
    //double* sentence_sentence_vector = _Utilities::VectorAverage(sentence_vector, sizeof(sentence_words));
    //int size = sizeof(definition_vector) / sizeof(definition_vector[0]);
    //double cosine_similarity = _Math::cosineSimilarity(definition_vector, sentence_vector, size);

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

//  Fallacy of accent – changing the meaning of a statement by not specifying on which word emphasis falls.
bool _Fallacy::FallacyOfAccent(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string model = "llama3";
    string fallacy_definition = "changing the meaning of a statement by not specifying on which word emphasis falls.";
    string prompt = "Check if the following text matches the following logical fallacies and limit the response to yes or no: " + fallacy_definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    //string* fallacy_definition_words = _Utilities::String2Words(fallacy_definition);
    //double* definition_vector = _NLU::getSentenceVectors(fallacy_definition_words);
    //double* definition_sentence_vector = _Utilities::VectorAverage(definition_vector, sizeof(fallacy_definition_words));
    //string* sentence_words = _Utilities::String2Words(fallacy_definition);
    //double* sentence_vector = _NLU::getSentenceVectors(sentence_words);
    //double* sentence_sentence_vector = _Utilities::VectorAverage(sentence_vector, sizeof(sentence_words));
    //int size = sizeof(definition_vector) / sizeof(definition_vector[0]);
    //double cosine_similarity = _Math::cosineSimilarity(definition_vector, sentence_vector, size);

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

//  Persuasive definition – purporting to use the "true" or "commonly accepted" meaning of a term while, in reality, using an uncommon or altered definition.
bool _Fallacy::PersuasiveDefinition(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string model = "llama3";
    string fallacy_definition = "purporting to use the \"true\" or \"commonly accepted\" meaning of a term while, in reality, using an uncommon or altered definition";
    string prompt = "Check if the following text matches the following logical fallacies and limit the response to yes or no: " + fallacy_definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    //string* fallacy_definition_words = _Utilities::String2Words(fallacy_definition);
    //double* definition_vector = _NLU::getSentenceVectors(fallacy_definition_words);
    //double* definition_sentence_vector = _Utilities::VectorAverage(definition_vector, sizeof(fallacy_definition_words));
    //string* sentence_words = _Utilities::String2Words(fallacy_definition);
    //double* sentence_vector = _NLU::getSentenceVectors(sentence_words);
    //double* sentence_sentence_vector = _Utilities::VectorAverage(sentence_vector, sizeof(sentence_words));
    //int size = sizeof(definition_vector) / sizeof(definition_vector[0]);
    //double cosine_similarity = _Math::cosineSimilarity(definition_vector, sentence_vector, size);

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

//  Ecological fallacy – inferring about the nature of an entity based solely upon aggregate statistics collected for the group to which that entity belongs.
bool _Fallacy::EconogicalFallacy(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string model = "llama3";
    string fallacy_definition = "inferring about the nature of an entity based solely upon aggregate statistics collected for the group to which that entity belongs.";
    string prompt = "Check if the following text matches the following logical fallacies and limit the response to yes or no: " + fallacy_definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);
    
    //string* fallacy_definition_words = _Utilities::String2Words(fallacy_definition);
    //double* definition_vector = _NLU::getSentenceVectors(fallacy_definition_words);
    //double* definition_sentence_vector = _Utilities::VectorAverage(definition_vector, sizeof(fallacy_definition_words));
    //string* sentence_words = _Utilities::String2Words(fallacy_definition);
    //double* sentence_vector = _NLU::getSentenceVectors(sentence_words);
    //double* sentence_sentence_vector = _Utilities::VectorAverage(sentence_vector, sizeof(sentence_words));
    //int size = sizeof(definition_vector) / sizeof(definition_vector[0]);
    //double cosine_similarity = _Math::cosineSimilarity(definition_vector, sentence_vector, size);

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

//  Etymological fallacy – assuming that the original or historical meaning of a word or phrase is necessarily similar to its actual present - day usage.
bool _Fallacy::EtynologicalFallacy(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string model = "llama3";
    string fallacy_definition = "assuming that the original or historical meaning of a word or phrase is necessarily similar to its actual present - day usage";
    string prompt = "Check if the following text matches the following logical fallacies and limit the response to yes or no: " + fallacy_definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);
    
    //string* fallacy_definition_words = _Utilities::String2Words(fallacy_definition);
    //double* definition_vector = _NLU::getSentenceVectors(fallacy_definition_words);
    //double* definition_sentence_vector = _Utilities::VectorAverage(definition_vector, sizeof(fallacy_definition_words));
    //string* sentence_words = _Utilities::String2Words(fallacy_definition);
    //double* sentence_vector = _NLU::getSentenceVectors(sentence_words);
    //double* sentence_sentence_vector = _Utilities::VectorAverage(sentence_vector, sizeof(sentence_words));
    //int size = sizeof(definition_vector) / sizeof(definition_vector[0]);
    //double cosine_similarity = _Math::cosineSimilarity(definition_vector, sentence_vector, size);

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

//  Fallacy of composition – assuming that something true of part of a whole must also be true of the whole.
bool _Fallacy::FallacyOfComposition(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string model = "llama3";
    string fallacy_definition = "assuming that something true of part of a whole must also be true of the whole";
    string prompt = "Check if the following text matches the following logical fallacies and limit the response to yes or no: " + fallacy_definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    //string* fallacy_definition_words = _Utilities::String2Words(fallacy_definition);
    //double* definition_vector = _NLU::getSentenceVectors(fallacy_definition_words);
    //double* definition_sentence_vector = _Utilities::VectorAverage(definition_vector, sizeof(fallacy_definition_words));
    //string* sentence_words = _Utilities::String2Words(fallacy_definition);
    //double* sentence_vector = _NLU::getSentenceVectors(sentence_words);
    //double* sentence_sentence_vector = _Utilities::VectorAverage(sentence_vector, sizeof(sentence_words));
    //int size = sizeof(definition_vector) / sizeof(definition_vector[0]);
    //double cosine_similarity = _Math::cosineSimilarity(definition_vector, sentence_vector, size);

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

//  Fallacy of division – assuming that something true of a composite thing must also be true of all or some of its parts.
bool _Fallacy::FallacyOfDivision(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string model = "llama3";
    string fallacy_definition = "assuming that something true of a composite thing must also be true of all or some of its parts.";
    string prompt = "Check if the following text matches the following logical fallacies and limit the response to yes or no: " + fallacy_definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    //string* fallacy_definition_words = _Utilities::String2Words(fallacy_definition);
    //double* definition_vector = _NLU::getSentenceVectors(fallacy_definition_words);
    //double* definition_sentence_vector = _Utilities::VectorAverage(definition_vector, sizeof(fallacy_definition_words));
    //string* sentence_words = _Utilities::String2Words(fallacy_definition);
    //double* sentence_vector = _NLU::getSentenceVectors(sentence_words);
    //double* sentence_sentence_vector = _Utilities::VectorAverage(sentence_vector, sizeof(sentence_words));
    //int size = sizeof(definition_vector) / sizeof(definition_vector[0]);
    //double cosine_similarity = _Math::cosineSimilarity(definition_vector, sentence_vector, size);

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

//  False attribution – appealing to an irrelevant, unqualified, unidentified, biased or fabricated source in support of an argument.
bool _Fallacy::FalseAttribuation(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string model = "llama3";
    string fallacy_definition = "appealing to an irrelevant, unqualified, unidentified, biased or fabricated source in support of an argument.";
    string prompt = "Check if the following text matches the following logical fallacies and limit the response to yes or no: " + fallacy_definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    //string* fallacy_definition_words = _Utilities::String2Words(fallacy_definition);
    //double* definition_vector = _NLU::getSentenceVectors(fallacy_definition_words);
    //double* definition_sentence_vector = _Utilities::VectorAverage(definition_vector, sizeof(fallacy_definition_words));
    //string* sentence_words = _Utilities::String2Words(fallacy_definition);
    //double* sentence_vector = _NLU::getSentenceVectors(sentence_words);
    //double* sentence_sentence_vector = _Utilities::VectorAverage(sentence_vector, sizeof(sentence_words));
    //int size = sizeof(definition_vector) / sizeof(definition_vector[0]);
    //double cosine_similarity = _Math::cosineSimilarity(definition_vector, sentence_vector, size);

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

//  Fallacy of quoting out of context(contextotomy, contextomy; quotation mining) – selective excerpting of words from their original context to distort the intended meaning.
bool _Fallacy::FallacyOfQuotingOutOfContext(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string model = "llama3";
    string fallacy_definition = "selective excerpting of words from their original context to distort the intended meaning.";
    string prompt = "Check if the following text matches the following logical fallacies and limit the response to yes or no: " + fallacy_definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    //string* fallacy_definition_words = _Utilities::String2Words(fallacy_definition);
    //double* definition_vector = _NLU::getSentenceVectors(fallacy_definition_words);
    //double* definition_sentence_vector = _Utilities::VectorAverage(definition_vector, sizeof(fallacy_definition_words));
    //string* sentence_words = _Utilities::String2Words(fallacy_definition);
    //double* sentence_vector = _NLU::getSentenceVectors(sentence_words);
    //double* sentence_sentence_vector = _Utilities::VectorAverage(sentence_vector, sizeof(sentence_words));
    //int size = sizeof(definition_vector) / sizeof(definition_vector[0]);
    //double cosine_similarity = _Math::cosineSimilarity(definition_vector, sentence_vector, size);

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

//  False authority(single authority) – using an expert of dubious credentials or using only one opinion to promote a product or idea.Related to the appeal to authority.
bool _Fallacy::FalseAuthority(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string model = "llama3";
    string fallacy_definition = "using an expert of dubious credentials or using only one opinion to promote a product or idea.Related to the appeal to authority";
    string prompt = "Check if the following text matches the following logical fallacies and limit the response to yes or no: " + fallacy_definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    //string* fallacy_definition_words = _Utilities::String2Words(fallacy_definition);
    //double* definition_vector = _NLU::getSentenceVectors(fallacy_definition_words);
    //double* definition_sentence_vector = _Utilities::VectorAverage(definition_vector, sizeof(fallacy_definition_words));
    //string* sentence_words = _Utilities::String2Words(fallacy_definition);
    //double* sentence_vector = _NLU::getSentenceVectors(sentence_words);
    //double* sentence_sentence_vector = _Utilities::VectorAverage(sentence_vector, sizeof(sentence_words));
    //int size = sizeof(definition_vector) / sizeof(definition_vector[0]);
    //double cosine_similarity = _Math::cosineSimilarity(definition_vector, sentence_vector, size);

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

//  False dilemma(false dichotomy, fallacy of bifurcation, black - or -white fallacy) – two alternative statements are given as the only possible options when, in reality, there are more.
bool _Fallacy::FalseDilemma(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string model = "llama3";
    string fallacy_definition = "two alternative statements are given as the only possible options when, in reality, there are more.";
    string prompt = "Check if the following text matches the following logical fallacies and limit the response to yes or no: " + fallacy_definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    //string* fallacy_definition_words = _Utilities::String2Words(fallacy_definition);
    //double* definition_vector = _NLU::getSentenceVectors(fallacy_definition_words);
    //double* definition_sentence_vector = _Utilities::VectorAverage(definition_vector, sizeof(fallacy_definition_words));
    //string* sentence_words = _Utilities::String2Words(fallacy_definition);
    //double* sentence_vector = _NLU::getSentenceVectors(sentence_words);
    //double* sentence_sentence_vector = _Utilities::VectorAverage(sentence_vector, sizeof(sentence_words));
    //int size = sizeof(definition_vector) / sizeof(definition_vector[0]);
    //double cosine_similarity = _Math::cosineSimilarity(definition_vector, sentence_vector, size);

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

//  False equivalence – describing two or more statements as virtually equal when they are not.
bool _Fallacy::FalseEquivalence(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string model = "llama3";
    string fallacy_definition = "describing two or more statements as virtually equal when they are not";
    string prompt = "Check if the following text matches the following logical fallacies and limit the response to yes or no: " + fallacy_definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    //string* fallacy_definition_words = _Utilities::String2Words(fallacy_definition);
    //double* definition_vector = _NLU::getSentenceVectors(fallacy_definition_words);
    //double* definition_sentence_vector = _Utilities::VectorAverage(definition_vector, sizeof(fallacy_definition_words));
    //string* sentence_words = _Utilities::String2Words(fallacy_definition);
    //double* sentence_vector = _NLU::getSentenceVectors(sentence_words);
    //double* sentence_sentence_vector = _Utilities::VectorAverage(sentence_vector, sizeof(sentence_words));
    //int size = sizeof(definition_vector) / sizeof(definition_vector[0]);
    //double cosine_similarity = _Math::cosineSimilarity(definition_vector, sentence_vector, size);

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

//  Feedback fallacy – believing in the objectivity of an evaluation to be used as the basis for improvement without verifying that the source of the evaluation is a disinterested party.
bool _Fallacy::FeedbackFallacy(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string model = "llama3";
    string fallacy_definition = "believing in the objectivity of an evaluation to be used as the basis for improvement without verifying that the source of the evaluation is a disinterested party";
    string prompt = "Check if the following text matches the following logical fallacies and limit the response to yes or no: " + fallacy_definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    //string* fallacy_definition_words = _Utilities::String2Words(fallacy_definition);
    //double* definition_vector = _NLU::getSentenceVectors(fallacy_definition_words);
    //double* definition_sentence_vector = _Utilities::VectorAverage(definition_vector, sizeof(fallacy_definition_words));
    //string* sentence_words = _Utilities::String2Words(fallacy_definition);
    //double* sentence_vector = _NLU::getSentenceVectors(sentence_words);
    //double* sentence_sentence_vector = _Utilities::VectorAverage(sentence_vector, sizeof(sentence_words));
    //int size = sizeof(definition_vector) / sizeof(definition_vector[0]);
    //double cosine_similarity = _Math::cosineSimilarity(definition_vector, sentence_vector, size);

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

//  Historian's fallacy – assuming that decision makers of the past had identical information as those subsequently analyzing the decision. This should not to be confused with presentism, in which present-day ideas and perspectives are anachronistically projected into the past.
bool _Fallacy::HistorianFallacy(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string model = "llama3";
    string fallacy_definition = "assuming that decision makers of the past had identical information as those subsequently analyzing the decision. This should not to be confused with presentism, in which present-day ideas and perspectives are anachronistically projected into the past.";
    string prompt = "Check if the following text matches the following logical fallacies and limit the response to yes or no: " + fallacy_definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    //string* fallacy_definition_words = _Utilities::String2Words(fallacy_definition);
    //double* definition_vector = _NLU::getSentenceVectors(fallacy_definition_words);
    //double* definition_sentence_vector = _Utilities::VectorAverage(definition_vector, sizeof(fallacy_definition_words));
    //string* sentence_words = _Utilities::String2Words(fallacy_definition);
    //double* sentence_vector = _NLU::getSentenceVectors(sentence_words);
    //double* sentence_sentence_vector = _Utilities::VectorAverage(sentence_vector, sizeof(sentence_words));
    //int size = sizeof(definition_vector) / sizeof(definition_vector[0]);
    //double cosine_similarity = _Math::cosineSimilarity(definition_vector, sentence_vector, size);

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

//  Historical fallacy – a set of considerations is thought to hold good only because a completed process is read into the content of the process which conditions this completed result.
bool _Fallacy::HistoricalFallacy(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string model = "llama3";
    string fallacy_definition = "a set of considerations is thought to hold good only because a completed process is read into the content of the process which conditions this completed result";
    string prompt = "Check if the following text matches the following logical fallacies and limit the response to yes or no: " + fallacy_definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    //string* fallacy_definition_words = _Utilities::String2Words(fallacy_definition);
    //double* definition_vector = _NLU::getSentenceVectors(fallacy_definition_words);
    //double* definition_sentence_vector = _Utilities::VectorAverage(definition_vector, sizeof(fallacy_definition_words));
    //string* sentence_words = _Utilities::String2Words(fallacy_definition);
    //double* sentence_vector = _NLU::getSentenceVectors(sentence_words);
    //double* sentence_sentence_vector = _Utilities::VectorAverage(sentence_vector, sizeof(sentence_words));
    //int size = sizeof(definition_vector) / sizeof(definition_vector[0]);
    //double cosine_similarity = _Math::cosineSimilarity(definition_vector, sentence_vector, size);

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

//  Baconian fallacy – using pieces of historical evidence without the aid of specific methods, hypotheses, or theories in an attempt to make a general truth about the past.Commits historians "to the pursuit of an impossible object by an impracticable method".
bool _Fallacy::BaconianFallacy(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string model = "llama3";
    string fallacy_definition = "using pieces of historical evidence without the aid of specific methods, hypotheses, or theories in an attempt to make a general truth about the past";
    string prompt = "Check if the following text matches the following logical fallacies and limit the response to yes or no: " + fallacy_definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);
    
    //string* fallacy_definition_words = _Utilities::String2Words(fallacy_definition);
    //double* definition_vector = _NLU::getSentenceVectors(fallacy_definition_words);
    //double* definition_sentence_vector = _Utilities::VectorAverage(definition_vector, sizeof(fallacy_definition_words));
    //string* sentence_words = _Utilities::String2Words(fallacy_definition);
    //double* sentence_vector = _NLU::getSentenceVectors(sentence_words);
    //double* sentence_sentence_vector = _Utilities::VectorAverage(sentence_vector, sizeof(sentence_words));
    //int size = sizeof(definition_vector) / sizeof(definition_vector[0]);
    //double cosine_similarity = _Math::cosineSimilarity(definition_vector, sentence_vector, size);

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

//  Homunculus fallacy – using a "middle-man" for explanation; this sometimes leads to regressive middle - men.It explains a concept in terms of the concept itself without explaining its real nature(e.g.: explaining thought as something produced by a little thinker – a homunculus – inside the head simply identifies an intermediary actor and does not explain the product or process of thinking).
bool _Fallacy::HomuculusFallacy(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string model = "llama3";
    string fallacy_definition = "using a \"middle - man\" for explanation; this sometimes leads to regressive middle";
    string prompt = "Check if the following text matches the following logical fallacies and limit the response to yes or no: " + fallacy_definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    //string* fallacy_definition_words = _Utilities::String2Words(fallacy_definition);
    //double* definition_vector = _NLU::getSentenceVectors(fallacy_definition_words);
    //double* definition_sentence_vector = _Utilities::VectorAverage(definition_vector, sizeof(fallacy_definition_words));
    //string* sentence_words = _Utilities::String2Words(fallacy_definition);
    //double* sentence_vector = _NLU::getSentenceVectors(sentence_words);
    //double* sentence_sentence_vector = _Utilities::VectorAverage(sentence_vector, sizeof(sentence_words));
    //int size = sizeof(definition_vector) / sizeof(definition_vector[0]);
    //double cosine_similarity = _Math::cosineSimilarity(definition_vector, sentence_vector, size);

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

//  Inflation of conflict – arguing that, if experts in a field of knowledge disagree on a certain point within that field, no conclusion can be reached or that the legitimacy of that field of knowledge is questionable.
bool _Fallacy::InflationOfConflect(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string model = "llama3";
    string fallacy_definition = "if experts in a field of knowledge disagree on a certain point within that field, no conclusion can be reached or that the legitimacy of that field of knowledge is questionable.";
    string prompt = "Check if the following text matches the following logical fallacies and limit the response to yes or no: " + fallacy_definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    //string* fallacy_definition_words = _Utilities::String2Words(fallacy_definition);
    //double* definition_vector = _NLU::getSentenceVectors(fallacy_definition_words);
    //double* definition_sentence_vector = _Utilities::VectorAverage(definition_vector, sizeof(fallacy_definition_words));
    //string* sentence_words = _Utilities::String2Words(fallacy_definition);
    //double* sentence_vector = _NLU::getSentenceVectors(sentence_words);
    //double* sentence_sentence_vector = _Utilities::VectorAverage(sentence_vector, sizeof(sentence_words));
    //int size = sizeof(definition_vector) / sizeof(definition_vector[0]);
    //double cosine_similarity = _Math::cosineSimilarity(definition_vector, sentence_vector, size);

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

//  If - by - whiskey – an argument that supports both sides of an issue by using terms that are emotionally sensitiveand ambiguous.
bool _Fallacy::IfByWhiskey(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string model = "llama3";
    string fallacy_definition = "an argument that supports both sides of an issue by using terms that are emotionally sensitiveand ambiguous.";
    string prompt = "Check if the following text matches the following logical fallacies and limit the response to yes or no: " + fallacy_definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);
    
    //string* fallacy_definition_words = _Utilities::String2Words(fallacy_definition);
    //double* definition_vector = _NLU::getSentenceVectors(fallacy_definition_words);
    //double* definition_sentence_vector = _Utilities::VectorAverage(definition_vector, sizeof(fallacy_definition_words));
    //string* sentence_words = _Utilities::String2Words(fallacy_definition);
    //double* sentence_vector = _NLU::getSentenceVectors(sentence_words);
    //double* sentence_sentence_vector = _Utilities::VectorAverage(sentence_vector, sizeof(sentence_words));
    //int size = sizeof(definition_vector) / sizeof(definition_vector[0]);
    //double cosine_similarity = _Math::cosineSimilarity(definition_vector, sentence_vector, size);

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

//  Incomplete comparison – insufficient information is provided to make a complete comparison.
bool _Fallacy::IncompleteComparison(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string model = "llama3";
    string fallacy_definition = "insufficient information is provided to make a complete comparison.";
    string prompt = "Check if the following text matches the following logical fallacies and limit the response to yes or no: " + fallacy_definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    //string* fallacy_definition_words = _Utilities::String2Words(fallacy_definition);
    //double* definition_vector = _NLU::getSentenceVectors(fallacy_definition_words);
    //double* definition_sentence_vector = _Utilities::VectorAverage(definition_vector, sizeof(fallacy_definition_words));
    //string* sentence_words = _Utilities::String2Words(fallacy_definition);
    //double* sentence_vector = _NLU::getSentenceVectors(sentence_words);
    //double* sentence_sentence_vector = _Utilities::VectorAverage(sentence_vector, sizeof(sentence_words));
    //int size = sizeof(definition_vector) / sizeof(definition_vector[0]);
    //double cosine_similarity = _Math::cosineSimilarity(definition_vector, sentence_vector, size);

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

//  Inconsistent comparison – different methods of comparison are used, leaving a false impression of the whole comparison.
bool _Fallacy::InconsistentComparison(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string model = "llama3";
    string fallacy_definition = "different methods of comparison are used, leaving a false impression of the whole comparison";
    string prompt = "Check if the following text matches the following logical fallacies and limit the response to yes or no: " + fallacy_definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    //string* fallacy_definition_words = _Utilities::String2Words(fallacy_definition);
    //double* definition_vector = _NLU::getSentenceVectors(fallacy_definition_words);
    //double* definition_sentence_vector = _Utilities::VectorAverage(definition_vector, sizeof(fallacy_definition_words));
    //string* sentence_words = _Utilities::String2Words(fallacy_definition);
    //double* sentence_vector = _NLU::getSentenceVectors(sentence_words);
    //double* sentence_sentence_vector = _Utilities::VectorAverage(sentence_vector, sizeof(sentence_words));
    //int size = sizeof(definition_vector) / sizeof(definition_vector[0]);
    //double cosine_similarity = _Math::cosineSimilarity(definition_vector, sentence_vector, size);

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

//  Intentionality fallacy – the insistence that the ultimate meaning of an expression must be consistent with the intention of the person from whom the communication originated(e.g.a work of fiction that is widely received as a blatant allegory must necessarily not be regarded as such if the author intended it not to be so).
bool _Fallacy::IntentionalityFallacy(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string model = "llama3";
    string fallacy_definition = "insistence that the ultimate meaning of an expression must be consistent with the intention of the person from whom the communication originated";
    string prompt = "Check if the following text matches the following logical fallacies and limit the response to yes or no: " + fallacy_definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    //string* fallacy_definition_words = _Utilities::String2Words(fallacy_definition);
    //double* definition_vector = _NLU::getSentenceVectors(fallacy_definition_words);
    //double* definition_sentence_vector = _Utilities::VectorAverage(definition_vector, sizeof(fallacy_definition_words));
    //string* sentence_words = _Utilities::String2Words(fallacy_definition);
    //double* sentence_vector = _NLU::getSentenceVectors(sentence_words);
    //double* sentence_sentence_vector = _Utilities::VectorAverage(sentence_vector, sizeof(sentence_words));
    //int size = sizeof(definition_vector) / sizeof(definition_vector[0]);
    //double cosine_similarity = _Math::cosineSimilarity(definition_vector, sentence_vector, size);

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

//  Lump of labour fallacy – the misconception that there is a fixed amount of work to be done within an economy, which can be distributed to create more or fewer jobs.
bool _Fallacy::LumpOfLabourFallacy(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string model = "llama3";
    string fallacy_definition = "the misconception that there is a fixed amount of work to be done within an economy, which can be distributed to create more or fewer jobs.";
    string prompt = "Check if the following text matches the following logical fallacies and limit the response to yes or no: " + fallacy_definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);
    
    //string* fallacy_definition_words = _Utilities::String2Words(fallacy_definition);
    //double* definition_vector = _NLU::getSentenceVectors(fallacy_definition_words);
    //double* definition_sentence_vector = _Utilities::VectorAverage(definition_vector, sizeof(fallacy_definition_words));
    //string* sentence_words = _Utilities::String2Words(fallacy_definition);
    //double* sentence_vector = _NLU::getSentenceVectors(sentence_words);
    //double* sentence_sentence_vector = _Utilities::VectorAverage(sentence_vector, sizeof(sentence_words));
    //int size = sizeof(definition_vector) / sizeof(definition_vector[0]);
    //double cosine_similarity = _Math::cosineSimilarity(definition_vector, sentence_vector, size);

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

//  Kettle logic – using multiple, jointly inconsistent arguments to defend a position.
bool _Fallacy::KettleLogic(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string model = "llama3";
    string fallacy_definition = "using multiple, jointly inconsistent arguments to defend a position.";
    string prompt = "Check if the following text matches the following logical fallacies and limit the response to yes or no: " + fallacy_definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    //string* fallacy_definition_words = _Utilities::String2Words(fallacy_definition);
    //double* definition_vector = _NLU::getSentenceVectors(fallacy_definition_words);
    //double* definition_sentence_vector = _Utilities::VectorAverage(definition_vector, sizeof(fallacy_definition_words));
    //string* sentence_words = _Utilities::String2Words(fallacy_definition);
    //double* sentence_vector = _NLU::getSentenceVectors(sentence_words);
    //double* sentence_sentence_vector = _Utilities::VectorAverage(sentence_vector, sizeof(sentence_words));
    //int size = sizeof(definition_vector) / sizeof(definition_vector[0]);
    //double cosine_similarity = _Math::cosineSimilarity(definition_vector, sentence_vector, size);

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

//  Ludic fallacy – failing to take into account that non - regulated random occurrences unknown unknowns can affect the probability of an event taking place.
bool _Fallacy::LudicFallacy(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string model = "llama3";
    string fallacy_definition = "failing to take into account that non - regulated random occurrences unknown unknowns can affect the probability of an event taking place.";
    string prompt = "Check if the following text matches the following logical fallacies and limit the response to yes or no: " + fallacy_definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    //string* fallacy_definition_words = _Utilities::String2Words(fallacy_definition);
    //double* definition_vector = _NLU::getSentenceVectors(fallacy_definition_words);
    //double* definition_sentence_vector = _Utilities::VectorAverage(definition_vector, sizeof(fallacy_definition_words));
    //string* sentence_words = _Utilities::String2Words(fallacy_definition);
    //double* sentence_vector = _NLU::getSentenceVectors(sentence_words);
    //double* sentence_sentence_vector = _Utilities::VectorAverage(sentence_vector, sizeof(sentence_words));
    //int size = sizeof(definition_vector) / sizeof(definition_vector[0]);
    //double cosine_similarity = _Math::cosineSimilarity(definition_vector, sentence_vector, size);

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

//  McNamara fallacy(quantitative fallacy) – making an argument using only quantitative observations(measurements, statistical or numerical values) and discounting subjective information that focuses on quality(traits, features, or relationships).
bool _Fallacy::QuantitativeFallacy(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string model = "llama3";
    string fallacy_definition = "making an argument using only quantitative observations(measurements, statistical or numerical values) and discounting subjective information that focuses on quality";
    string prompt = "Check if the following text matches the following logical fallacies and limit the response to yes or no: " + fallacy_definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    //string* fallacy_definition_words = _Utilities::String2Words(fallacy_definition);
    //double* definition_vector = _NLU::getSentenceVectors(fallacy_definition_words);
    //double* definition_sentence_vector = _Utilities::VectorAverage(definition_vector, sizeof(fallacy_definition_words));
    //string* sentence_words = _Utilities::String2Words(fallacy_definition);
    //double* sentence_vector = _NLU::getSentenceVectors(sentence_words);
    //double* sentence_sentence_vector = _Utilities::VectorAverage(sentence_vector, sizeof(sentence_words));
    //int size = sizeof(definition_vector) / sizeof(definition_vector[0]);
    //double cosine_similarity = _Math::cosineSimilarity(definition_vector, sentence_vector, size);

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

//  Mind projection fallacy – assuming that a statement about an object describes an inherent property of the object, rather than a personal perception.
bool _Fallacy::MindProjectionFallacy(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string model = "llama3";
    string fallacy_definition = "assuming that a statement about an object describes an inherent property of the object, rather than a personal perception.";
    string prompt = "Check if the following text matches the following logical fallacies and limit the response to yes or no: " + fallacy_definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);
    
    //string* fallacy_definition_words = _Utilities::String2Words(fallacy_definition);
    //double* definition_vector = _NLU::getSentenceVectors(fallacy_definition_words);
    //double* definition_sentence_vector = _Utilities::VectorAverage(definition_vector, sizeof(fallacy_definition_words));
    //string* sentence_words = _Utilities::String2Words(fallacy_definition);
    //double* sentence_vector = _NLU::getSentenceVectors(sentence_words);
    //double* sentence_sentence_vector = _Utilities::VectorAverage(sentence_vector, sizeof(sentence_words));
    //int size = sizeof(definition_vector) / sizeof(definition_vector[0]);
    //double cosine_similarity = _Math::cosineSimilarity(definition_vector, sentence_vector, size);

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

//  Moralistic fallacy – inferring factual conclusions from evaluative premises in violation of fact–value distinction(e.g.: inferring is from ought).Moralistic fallacy is the inverse of naturalistic fallacy.
bool _Fallacy::MoralisticFallacy(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string model = "llama3";
    string fallacy_definition = "inferring factual conclusions from evaluative premises in violation of fact–value distinction";
    string prompt = "Check if the following text matches the following logical fallacies and limit the response to yes or no: " + fallacy_definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);
    
    //string* fallacy_definition_words = _Utilities::String2Words(fallacy_definition);
    //double* definition_vector = _NLU::getSentenceVectors(fallacy_definition_words);
    //double* definition_sentence_vector = _Utilities::VectorAverage(definition_vector, sizeof(fallacy_definition_words));
    //string* sentence_words = _Utilities::String2Words(fallacy_definition);
    //double* sentence_vector = _NLU::getSentenceVectors(sentence_words);
    //double* sentence_sentence_vector = _Utilities::VectorAverage(sentence_vector, sizeof(sentence_words));
    //int size = sizeof(definition_vector) / sizeof(definition_vector[0]);
    //double cosine_similarity = _Math::cosineSimilarity(definition_vector, sentence_vector, size);

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

//  Moving the goalposts(raising the bar) – argument in which evidence presented in response to a specific claim is dismissedand some other(often greater) evidence is demanded.
bool _Fallacy::MovingTheGoalpostsFallacy(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string model = "llama3";
    string fallacy_definition = "argument in which evidence presented in response to a specific claim is dismissedand some other(often greater) evidence is demanded.";
    string prompt = "Check if the following text matches the following logical fallacies and limit the response to yes or no: " + fallacy_definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);
    
    //string* fallacy_definition_words = _Utilities::String2Words(fallacy_definition);
    //double* definition_vector = _NLU::getSentenceVectors(fallacy_definition_words);
    //double* definition_sentence_vector = _Utilities::VectorAverage(definition_vector, sizeof(fallacy_definition_words));
    //string* sentence_words = _Utilities::String2Words(fallacy_definition);
    //double* sentence_vector = _NLU::getSentenceVectors(sentence_words);
    //double* sentence_sentence_vector = _Utilities::VectorAverage(sentence_vector, sizeof(sentence_words));
    //int size = sizeof(definition_vector) / sizeof(definition_vector[0]);
    //double cosine_similarity = _Math::cosineSimilarity(definition_vector, sentence_vector, size);

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

//  Nirvana fallacy(perfect - solution fallacy) – solutions to problems are rejected because they are not perfect.
bool _Fallacy::NirvanaFallacy(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string model = "llama3";
    string fallacy_definition = "solutions to problems are rejected because they are not perfect.";
    string prompt = "Check if the following text matches the following logical fallacies and limit the response to yes or no: " + fallacy_definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    //string* fallacy_definition_words = _Utilities::String2Words(fallacy_definition);
    //double* definition_vector = _NLU::getSentenceVectors(fallacy_definition_words);
    //double* definition_sentence_vector = _Utilities::VectorAverage(definition_vector, sizeof(fallacy_definition_words));
    //string* sentence_words = _Utilities::String2Words(fallacy_definition);
    //double* sentence_vector = _NLU::getSentenceVectors(sentence_words);
    //double* sentence_sentence_vector = _Utilities::VectorAverage(sentence_vector, sizeof(sentence_words));
    //int size = sizeof(definition_vector) / sizeof(definition_vector[0]);
    //double cosine_similarity = _Math::cosineSimilarity(definition_vector, sentence_vector, size);

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

//  Proof by assertion – a proposition is repeatedly restated regardless of contradiction; sometimes confused with argument from repetition(argumentum ad infinitum, argumentum ad nauseam)
bool _Fallacy::ProofByAssertion(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string model = "llama3";
    string fallacy_definition = "a proposition is repeatedly restated regardless of contradiction; sometimes confused with argument from repetition";
    string prompt = "Check if the following text matches the following logical fallacies and limit the response to yes or no: " + fallacy_definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    //string* fallacy_definition_words = _Utilities::String2Words(fallacy_definition);
    //double* definition_vector = _NLU::getSentenceVectors(fallacy_definition_words);
    //double* definition_sentence_vector = _Utilities::VectorAverage(definition_vector, sizeof(fallacy_definition_words));
    //string* sentence_words = _Utilities::String2Words(fallacy_definition);
    //double* sentence_vector = _NLU::getSentenceVectors(sentence_words);
    //double* sentence_sentence_vector = _Utilities::VectorAverage(sentence_vector, sizeof(sentence_words));
    //int size = sizeof(definition_vector) / sizeof(definition_vector[0]);
    //double cosine_similarity = _Math::cosineSimilarity(definition_vector, sentence_vector, size);

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

//  Prosecutor's fallacy – a low probability of false matches does not mean a low probability of some false match being found.
bool _Fallacy::ProsecutorFallacy(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string model = "llama3";
    string fallacy_definition = "a low probability of false matches does not mean a low probability of some false match being found.";
    string prompt = "Check if the following text matches the following logical fallacies and limit the response to yes or no: " + fallacy_definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    //string* fallacy_definition_words = _Utilities::String2Words(fallacy_definition);
    //double* definition_vector = _NLU::getSentenceVectors(fallacy_definition_words);
    //double* definition_sentence_vector = _Utilities::VectorAverage(definition_vector, sizeof(fallacy_definition_words));
    //string* sentence_words = _Utilities::String2Words(fallacy_definition);
    //double* sentence_vector = _NLU::getSentenceVectors(sentence_words);
    //double* sentence_sentence_vector = _Utilities::VectorAverage(sentence_vector, sizeof(sentence_words));
    //int size = sizeof(definition_vector) / sizeof(definition_vector[0]);
    //double cosine_similarity = _Math::cosineSimilarity(definition_vector, sentence_vector, size);

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

//  Proving too much – an argument that results in an overly - generalized conclusion(e.g.: arguing that drinking alcohol is bad because in some instances it has led to spousal or child abuse).
bool _Fallacy::ProvingTooMuch(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string model = "llama3";
    string fallacy_definition = "an argument that results in an overly - generalized conclusion";
    string prompt = "Check if the following text matches the following logical fallacies and limit the response to yes or no: " + fallacy_definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    //string* fallacy_definition_words = _Utilities::String2Words(fallacy_definition);
    //double* definition_vector = _NLU::getSentenceVectors(fallacy_definition_words);
    //double* definition_sentence_vector = _Utilities::VectorAverage(definition_vector, sizeof(fallacy_definition_words));
    //string* sentence_words = _Utilities::String2Words(fallacy_definition);
    //double* sentence_vector = _NLU::getSentenceVectors(sentence_words);
    //double* sentence_sentence_vector = _Utilities::VectorAverage(sentence_vector, sizeof(sentence_words));
    //int size = sizeof(definition_vector) / sizeof(definition_vector[0]);
    //double cosine_similarity = _Math::cosineSimilarity(definition_vector, sentence_vector, size);

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

//  Psychologist's fallacy – an observer presupposes the objectivity of their own perspective when analyzing a behavioral event.
bool _Fallacy::PsycholoistFallacy(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string model = "llama3";
    string fallacy_definition = "an observer presupposes the objectivity of their own perspective when analyzing a behavioral event.";
    string prompt = "Check if the following text matches the following logical fallacies and limit the response to yes or no: " + fallacy_definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    //string* fallacy_definition_words = _Utilities::String2Words(fallacy_definition);
    //double* definition_vector = _NLU::getSentenceVectors(fallacy_definition_words);
    //double* definition_sentence_vector = _Utilities::VectorAverage(definition_vector, sizeof(fallacy_definition_words));
    //string* sentence_words = _Utilities::String2Words(fallacy_definition);
    //double* sentence_vector = _NLU::getSentenceVectors(sentence_words);
    //double* sentence_sentence_vector = _Utilities::VectorAverage(sentence_vector, sizeof(sentence_words));
    //int size = sizeof(definition_vector) / sizeof(definition_vector[0]);
    //double cosine_similarity = _Math::cosineSimilarity(definition_vector, sentence_vector, size);

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

//  Referential fallacy – assuming that all words refer to existing things and that the meaning of words reside within the things they refer to, as opposed to words possibly referring to no real object(e.g.: Pegasus) or that the meaning comes from how they are used(e.g.: "nobody" was in the room).
bool _Fallacy::ReferentialFallacy(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string model = "llama3";
    string fallacy_definition = "assuming that all words refer to existing things and that the meaning of words reside within the things they refer to, as opposed to words possibly referring to no real object";
    string prompt = "Check if the following text matches the following logical fallacies and limit the response to yes or no: " + fallacy_definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    //string* fallacy_definition_words = _Utilities::String2Words(fallacy_definition);
    //double* definition_vector = _NLU::getSentenceVectors(fallacy_definition_words);
    //double* definition_sentence_vector = _Utilities::VectorAverage(definition_vector, sizeof(fallacy_definition_words));
    //string* sentence_words = _Utilities::String2Words(fallacy_definition);
    //double* sentence_vector = _NLU::getSentenceVectors(sentence_words);
    //double* sentence_sentence_vector = _Utilities::VectorAverage(sentence_vector, sizeof(sentence_words));
    //int size = sizeof(definition_vector) / sizeof(definition_vector[0]);
    //double cosine_similarity = _Math::cosineSimilarity(definition_vector, sentence_vector, size);

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

//  Reification(concretism, hypostatization, or the fallacy of misplaced concreteness) – treating an abstract belief or hypothetical construct as if it were a concrete, real event or physical entity(e.g.: saying that evolution selects which traits are passed on to future generations; evolution is not a conscious entity with agency).
bool _Fallacy::Reification(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string model = "llama3";
    string fallacy_definition = "treating an abstract belief or hypothetical construct as if it were a concrete, real event or physical entity";
    string prompt = "Check if the following text matches the following logical fallacies and limit the response to yes or no: " + fallacy_definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    //string* fallacy_definition_words = _Utilities::String2Words(fallacy_definition);
    //double* definition_vector = _NLU::getSentenceVectors(fallacy_definition_words);
    //double* definition_sentence_vector = _Utilities::VectorAverage(definition_vector, sizeof(fallacy_definition_words));
    //string* sentence_words = _Utilities::String2Words(fallacy_definition);
    //double* sentence_vector = _NLU::getSentenceVectors(sentence_words);
    //double* sentence_sentence_vector = _Utilities::VectorAverage(sentence_vector, sizeof(sentence_words));
    //int size = sizeof(definition_vector) / sizeof(definition_vector[0]);
    //double cosine_similarity = _Math::cosineSimilarity(definition_vector, sentence_vector, size);

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

//  Retrospective determinism – believing that, because an event has occurred under some circumstance, the circumstance must have made the event inevitable(e.g.: because someone won the lottery while wearing their lucky socks, wearing those socks made winning the lottery inevitable).
bool _Fallacy::RetrospectiveDeterminism(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string model = "llama3";
    string fallacy_definition = "because an event has occurred under some circumstance, the circumstance must have made the event inevitable";
    string prompt = "Check if the following text matches the following logical fallacies and limit the response to yes or no: " + fallacy_definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);
    
    //string* fallacy_definition_words = _Utilities::String2Words(fallacy_definition);
    //double* definition_vector = _NLU::getSentenceVectors(fallacy_definition_words);
    //double* definition_sentence_vector = _Utilities::VectorAverage(definition_vector, sizeof(fallacy_definition_words));
    //string* sentence_words = _Utilities::String2Words(fallacy_definition);
    //double* sentence_vector = _NLU::getSentenceVectors(sentence_words);
    //double* sentence_sentence_vector = _Utilities::VectorAverage(sentence_vector, sizeof(sentence_words));
    //int size = sizeof(definition_vector) / sizeof(definition_vector[0]);
    //double cosine_similarity = _Math::cosineSimilarity(definition_vector, sentence_vector, size);

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

//  Slippery slope(thin edge of the wedge, camel's nose) – asserting that a proposed, relatively small, first action will inevitably lead to a chain of related events resulting in a significant and negative event and, therefore, should not be permitted.
bool _Fallacy::SlipperySlope(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string model = "llama3";
    string fallacy_definition = "asserting that a proposed, relatively small, first action will inevitably lead to a chain of related events resulting in a significant and negative event and, therefore, should not be permitted.";
    string prompt = "Check if the following text matches the following logical fallacies and limit the response to yes or no: " + fallacy_definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);
    
    //string* fallacy_definition_words = _Utilities::String2Words(fallacy_definition);
    //double* definition_vector = _NLU::getSentenceVectors(fallacy_definition_words);
    //double* definition_sentence_vector = _Utilities::VectorAverage(definition_vector, sizeof(fallacy_definition_words));
    //string* sentence_words = _Utilities::String2Words(fallacy_definition);
    //double* sentence_vector = _NLU::getSentenceVectors(sentence_words);
    //double* sentence_sentence_vector = _Utilities::VectorAverage(sentence_vector, sizeof(sentence_words));
    //int size = sizeof(definition_vector) / sizeof(definition_vector[0]);
    //double cosine_similarity = _Math::cosineSimilarity(definition_vector, sentence_vector, size);

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

//  Special pleading – the arguer attempts to cite something as an exemption to a generally accepted rule or principle without justifying the exemption(e.g.: a defendant who murdered his parents asks for leniency because he is now an orphan).
bool _Fallacy::SpecialPleading(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string model = "llama3";
    string fallacy_definition = "the arguer attempts to cite something as an exemption to a generally accepted rule or principle without justifying the exemption";
    string prompt = "Check if the following text matches the following logical fallacies and limit the response to yes or no: " + fallacy_definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);
    
    //string* fallacy_definition_words = _Utilities::String2Words(fallacy_definition);
    //double* definition_vector = _NLU::getSentenceVectors(fallacy_definition_words);
    //double* definition_sentence_vector = _Utilities::VectorAverage(definition_vector, sizeof(fallacy_definition_words));
    //string* sentence_words = _Utilities::String2Words(fallacy_definition);
    //double* sentence_vector = _NLU::getSentenceVectors(sentence_words);
    //double* sentence_sentence_vector = _Utilities::VectorAverage(sentence_vector, sizeof(sentence_words));
    //int size = sizeof(definition_vector) / sizeof(definition_vector[0]);
    //double cosine_similarity = _Math::cosineSimilarity(definition_vector, sentence_vector, size);

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

//  Begging the question(petitio principii) – using the conclusion of the argument in support of itself in a premise(e.g.: saying that smoking cigarettes is deadly because cigarettes can kill you; something that kills is deadly).
bool _Fallacy::BeggingTheQuestion(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string model = "llama3";
    string fallacy_definition = "conclusion of the argument in support of itself in a premise";
    string prompt = "Check if the following text matches the following logical fallacies and limit the response to yes or no: " + fallacy_definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    //string* fallacy_definition_words = _Utilities::String2Words(fallacy_definition);
    //double* definition_vector = _NLU::getSentenceVectors(fallacy_definition_words);
    //double* definition_sentence_vector = _Utilities::VectorAverage(definition_vector, sizeof(fallacy_definition_words));
    //string* sentence_words = _Utilities::String2Words(fallacy_definition);
    //double* sentence_vector = _NLU::getSentenceVectors(sentence_words);
    //double* sentence_sentence_vector = _Utilities::VectorAverage(sentence_vector, sizeof(sentence_words));
    //int size = sizeof(definition_vector) / sizeof(definition_vector[0]);
    //double cosine_similarity = _Math::cosineSimilarity(definition_vector, sentence_vector, size);

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

//  Loaded label – while not inherently fallacious, use of evocative terms to support a conclusion is a type of begging the question fallacy.When fallaciously used, the term's connotations are relied on to sway the argument towards a particular conclusion. For example, an organic foods advertisement that says "Organic foods are safe and healthy foods grown without any pesticides, herbicides, or other unhealthy additives." Use of the term "unhealthy additives" is used as support for the idea that the product is safe.
bool _Fallacy::LoadedLabelFallacy(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string model = "llama3";
    string fallacy_definition = "while not inherently fallacious, use of evocative terms to support a conclusion is a type of begging the question fallacy.When fallaciously used, the term's connotations are relied on to sway the argument towards a particular conclusion. For example, an organic foods advertisement that says \"Organic foods are safe and healthy foods grown without any pesticides, herbicides, or other unhealthy additives.\" Use of the term \"unhealthy additives\" is used as support for the idea that the product is safe.";
    string prompt = "Check if the following text matches the following logical fallacies and limit the response to yes or no: " + fallacy_definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);
    
    //string* fallacy_definition_words = _Utilities::String2Words(fallacy_definition);
    //double* definition_vector = _NLU::getSentenceVectors(fallacy_definition_words);
    //double* definition_sentence_vector = _Utilities::VectorAverage(definition_vector, sizeof(fallacy_definition_words));
    //string* sentence_words = _Utilities::String2Words(fallacy_definition);
    //double* sentence_vector = _NLU::getSentenceVectors(sentence_words);
    //double* sentence_sentence_vector = _Utilities::VectorAverage(sentence_vector, sizeof(sentence_words));
    //int size = sizeof(definition_vector) / sizeof(definition_vector[0]);
    //double cosine_similarity = _Math::cosineSimilarity(definition_vector, sentence_vector, size);

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

//  Circular reasoning(circulus in demonstrando) – the reasoner begins with what he or she is trying to end up with(e.g.: all bachelors are unmarried males).
bool _Fallacy::CircularReasoning(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string model = "llama3";
    string fallacy_definition = "the reasoner begins with what he or she is trying to end up with";
    string prompt = "Check if the following text matches the following logical fallacies and limit the response to yes or no: " + fallacy_definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    //string* fallacy_definition_words = _Utilities::String2Words(fallacy_definition);
    //double* definition_vector = _NLU::getSentenceVectors(fallacy_definition_words);
    //double* definition_sentence_vector = _Utilities::VectorAverage(definition_vector, sizeof(fallacy_definition_words));
    //string* sentence_words = _Utilities::String2Words(fallacy_definition);
    //double* sentence_vector = _NLU::getSentenceVectors(sentence_words);
    //double* sentence_sentence_vector = _Utilities::VectorAverage(sentence_vector, sizeof(sentence_words));
    //int size = sizeof(definition_vector) / sizeof(definition_vector[0]);
    //double cosine_similarity = _Math::cosineSimilarity(definition_vector, sentence_vector, size);

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

//  Fallacy of many questions(complex question, fallacy of presuppositions, loaded question, plurium interrogationum) – someone asks a question that presupposes something that has not been proven or accepted by all the people involved.This fallacy is often used rhetorically so that the question limits direct replies to those that serve the questioner's agenda.
bool _Fallacy::FallacyOfManyQuestions(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string model = "llama3";
    string fallacy_definition = "someone asks a question that presupposes something that has not been proven or accepted by all the people involved.This fallacy is often used rhetorically so that the question limits direct replies to those that serve the questioner's agenda";
    string prompt = "Check if the following text matches the following logical fallacies and limit the response to yes or no: " + fallacy_definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);
    
    //string* fallacy_definition_words = _Utilities::String2Words(fallacy_definition);
    //double* definition_vector = _NLU::getSentenceVectors(fallacy_definition_words);
    //double* definition_sentence_vector = _Utilities::VectorAverage(definition_vector, sizeof(fallacy_definition_words));
    //string* sentence_words = _Utilities::String2Words(fallacy_definition);
    //double* sentence_vector = _NLU::getSentenceVectors(sentence_words);
    //double* sentence_sentence_vector = _Utilities::VectorAverage(sentence_vector, sizeof(sentence_words));
    //int size = sizeof(definition_vector) / sizeof(definition_vector[0]);
    //double cosine_similarity = _Math::cosineSimilarity(definition_vector, sentence_vector, size);

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

//  Faulty generalization – reaching a conclusion from weak premises.
bool _Fallacy::FaultyGeneralization(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string model = "llama3";
    string fallacy_definition = "reaching a conclusion from weak premises.";
    string prompt = "Check if the following text matches the following logical fallacies and limit the response to yes or no: " + fallacy_definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    //string* fallacy_definition_words = _Utilities::String2Words(fallacy_definition);
    //double* definition_vector = _NLU::getSentenceVectors(fallacy_definition_words);
    //double* definition_sentence_vector = _Utilities::VectorAverage(definition_vector, sizeof(fallacy_definition_words));
    //string* sentence_words = _Utilities::String2Words(fallacy_definition);
    //double* sentence_vector = _NLU::getSentenceVectors(sentence_words);
    //double* sentence_sentence_vector = _Utilities::VectorAverage(sentence_vector, sizeof(sentence_words));
    //int size = sizeof(definition_vector) / sizeof(definition_vector[0]);
    //double cosine_similarity = _Math::cosineSimilarity(definition_vector, sentence_vector, size);

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

//  Accident – an exception to a generalization is ignored.
bool _Fallacy::AccidentFallacy(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string model = "llama3";
    string fallacy_definition = "exception to a generalization is ignored";
    string prompt = "Check if the following text matches the following logical fallacies and limit the response to yes or no: " + fallacy_definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    //string* fallacy_definition_words = _Utilities::String2Words(fallacy_definition);
    //double* definition_vector = _NLU::getSentenceVectors(fallacy_definition_words);
    //double* definition_sentence_vector = _Utilities::VectorAverage(definition_vector, sizeof(fallacy_definition_words));
    //string* sentence_words = _Utilities::String2Words(fallacy_definition);
    //double* sentence_vector = _NLU::getSentenceVectors(sentence_words);
    //double* sentence_sentence_vector = _Utilities::VectorAverage(sentence_vector, sizeof(sentence_words));
    //int size = sizeof(definition_vector) / sizeof(definition_vector[0]);
    //double cosine_similarity = _Math::cosineSimilarity(definition_vector, sentence_vector, size);

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

//  No true Scotsman – makes a generalization true by changing the generalization to exclude a counterexample.
bool _Fallacy::NoTrueScotsmanFallacy(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string model = "llama3";
    string fallacy_definition = "a generalization true by changing the generalization to exclude a counterexample.";
    string prompt = "Check if the following text matches the following logical fallacies and limit the response to yes or no: " + fallacy_definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    //string* fallacy_definition_words = _Utilities::String2Words(fallacy_definition);
    //double* definition_vector = _NLU::getSentenceVectors(fallacy_definition_words);
    //double* definition_sentence_vector = _Utilities::VectorAverage(definition_vector, sizeof(fallacy_definition_words));
    //string* sentence_words = _Utilities::String2Words(fallacy_definition);
    //double* sentence_vector = _NLU::getSentenceVectors(sentence_words);
    //double* sentence_sentence_vector = _Utilities::VectorAverage(sentence_vector, sizeof(sentence_words));
    //int size = sizeof(definition_vector) / sizeof(definition_vector[0]);
    //double cosine_similarity = _Math::cosineSimilarity(definition_vector, sentence_vector, size);

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

//  Cherry picking(suppressed evidence, incomplete evidence) – using individual cases or data that confirm a particular position, while ignoring related cases or data that may contradict that position.
bool _Fallacy::CherryPickingFallacy(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string model = "llama3";
    string fallacy_definition = "individual cases or data that confirm a particular position, while ignoring related cases or data that may contradict that position.";
    string prompt = "Check if the following text matches the following logical fallacies and limit the response to yes or no: " + fallacy_definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    //string* fallacy_definition_words = _Utilities::String2Words(fallacy_definition);
    //double* definition_vector = _NLU::getSentenceVectors(fallacy_definition_words);
    //double* definition_sentence_vector = _Utilities::VectorAverage(definition_vector, sizeof(fallacy_definition_words));
    //string* sentence_words = _Utilities::String2Words(fallacy_definition);
    //double* sentence_vector = _NLU::getSentenceVectors(sentence_words);
    //double* sentence_sentence_vector = _Utilities::VectorAverage(sentence_vector, sizeof(sentence_words));
    //int size = sizeof(definition_vector) / sizeof(definition_vector[0]);
    //double cosine_similarity = _Math::cosineSimilarity(definition_vector, sentence_vector, size);

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

//  Survivorship bias – a small number of successes of a given process are actively promoted while completely ignoring a large number of failures.
bool _Fallacy::SurvivorshipBias(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string model = "llama3";
    string fallacy_definition = "a small number of successes of a given process are actively promoted while completely ignoring a large number of failures.";
    string prompt = "Check if the following text matches the following logical fallacies and limit the response to yes or no: " + fallacy_definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    //string* fallacy_definition_words = _Utilities::String2Words(fallacy_definition);
    //double* definition_vector = _NLU::getSentenceVectors(fallacy_definition_words);
    //double* definition_sentence_vector = _Utilities::VectorAverage(definition_vector, sizeof(fallacy_definition_words));
    //string* sentence_words = _Utilities::String2Words(fallacy_definition);
    //double* sentence_vector = _NLU::getSentenceVectors(sentence_words);
    //double* sentence_sentence_vector = _Utilities::VectorAverage(sentence_vector, sizeof(sentence_words));
    //int size = sizeof(definition_vector) / sizeof(definition_vector[0]);
    //double cosine_similarity = _Math::cosineSimilarity(definition_vector, sentence_vector, size);

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

//  False analogy – an argument by analogy in which the analogy is poorly suited.
bool _Fallacy::FalseAnalogy(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string model = "llama3";
    string fallacy_definition = "an argument by analogy in which the analogy is poorly suited.";
    string prompt = "Check if the following text matches the following logical fallacies and limit the response to yes or no: " + fallacy_definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    //string* fallacy_definition_words = _Utilities::String2Words(fallacy_definition);
    //double* definition_vector = _NLU::getSentenceVectors(fallacy_definition_words);
    //double* definition_sentence_vector = _Utilities::VectorAverage(definition_vector, sizeof(fallacy_definition_words));
    //string* sentence_words = _Utilities::String2Words(fallacy_definition);
    //double* sentence_vector = _NLU::getSentenceVectors(sentence_words);
    //double* sentence_sentence_vector = _Utilities::VectorAverage(sentence_vector, sizeof(sentence_words));
    //int size = sizeof(definition_vector) / sizeof(definition_vector[0]);
    //double cosine_similarity = _Math::cosineSimilarity(definition_vector, sentence_vector, size);

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

//  Hasty generalization(fallacy of insufficient statistics, fallacy of insufficient sample, fallacy of the lonely fact, hasty induction, secundum quid, converse accident, jumping to conclusions) – basing a broad conclusion on a small or unrepresentative sample.
bool _Fallacy::HastyGeneralization(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string model = "llama3";
    string fallacy_definition = "basing a broad conclusion on a small or unrepresentative sample";
    string prompt = "Check if the following text matches the following logical fallacies and limit the response to yes or no: " + fallacy_definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    //string* fallacy_definition_words = _Utilities::String2Words(fallacy_definition);
    //double* definition_vector = _NLU::getSentenceVectors(fallacy_definition_words);
    //double* definition_sentence_vector = _Utilities::VectorAverage(definition_vector, sizeof(fallacy_definition_words));
    //string* sentence_words = _Utilities::String2Words(fallacy_definition);
    //double* sentence_vector = _NLU::getSentenceVectors(sentence_words);
    //double* sentence_sentence_vector = _Utilities::VectorAverage(sentence_vector, sizeof(sentence_words));
    //int size = sizeof(definition_vector) / sizeof(definition_vector[0]);
    //double cosine_similarity = _Math::cosineSimilarity(definition_vector, sentence_vector, size);

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

//  Inductive fallacy – A more general name to some fallacies, such as hasty generalization.It happens when a conclusion is made of premises that lightly support it.
bool _Fallacy::InductiveFallacy(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string model = "llama3";
    string fallacy_definition = "A more general name to some fallacies, such as hasty generalization.It happens when a conclusion is made of premises that lightly support it";
    string prompt = "Check if the following text matches the following logical fallacies and limit the response to yes or no: " + fallacy_definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    //string* fallacy_definition_words = _Utilities::String2Words(fallacy_definition);
    //double* definition_vector = _NLU::getSentenceVectors(fallacy_definition_words);
    //double* definition_sentence_vector = _Utilities::VectorAverage(definition_vector, sizeof(fallacy_definition_words));
    //string* sentence_words = _Utilities::String2Words(fallacy_definition);
    //double* sentence_vector = _NLU::getSentenceVectors(sentence_words);
    //double* sentence_sentence_vector = _Utilities::VectorAverage(sentence_vector, sizeof(sentence_words));
    //int size = sizeof(definition_vector) / sizeof(definition_vector[0]);
    //double cosine_similarity = _Math::cosineSimilarity(definition_vector, sentence_vector, size);

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

//  Misleading vividness – involves describing an occurrence in vivid detail, even if it is an exceptional occurrence, to convince someone that it is a problem; this also relies on the appeal to emotion fallacy.
bool _Fallacy::MisleadingVividness(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string model = "llama3";
    string fallacy_definition = "involves describing an occurrence in vivid detail, even if it is an exceptional occurrence, to convince someone that it is a problem; this also relies on the appeal to emotion fallacy.";
    string prompt = "Check if the following text matches the following logical fallacies and limit the response to yes or no: " + fallacy_definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);
    
    //string* fallacy_definition_words = _Utilities::String2Words(fallacy_definition);
    //double* definition_vector = _NLU::getSentenceVectors(fallacy_definition_words);
    //double* definition_sentence_vector = _Utilities::VectorAverage(definition_vector, sizeof(fallacy_definition_words));
    //string* sentence_words = _Utilities::String2Words(fallacy_definition);
    //double* sentence_vector = _NLU::getSentenceVectors(sentence_words);
    //double* sentence_sentence_vector = _Utilities::VectorAverage(sentence_vector, sizeof(sentence_words));
    //int size = sizeof(definition_vector) / sizeof(definition_vector[0]);
    //double cosine_similarity = _Math::cosineSimilarity(definition_vector, sentence_vector, size);

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

//  Overwhelming exception – an accurate generalization that comes with qualifications that eliminate so many cases that what remains is much less impressive than the initial statement might have led one to assume.
bool _Fallacy::OverWhelmingException(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive 
    string model = "llama3";
    string fallacy_definition = "an accurate generalization that comes with qualifications that eliminate so many cases that what remains is much less impressive than the initial statement might have led one to assume";
    string prompt = "Check if the following text matches the following logical fallacies and limit the response to yes or no: " + fallacy_definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);
    
    //string* fallacy_definition_words = _Utilities::String2Words(fallacy_definition);
    //double* definition_vector = _NLU::getSentenceVectors(fallacy_definition_words);
    //double* definition_sentence_vector = _Utilities::VectorAverage(definition_vector, sizeof(fallacy_definition_words));
    //string* sentence_words = _Utilities::String2Words(fallacy_definition);
    //double* sentence_vector = _NLU::getSentenceVectors(sentence_words);
    //double* sentence_sentence_vector = _Utilities::VectorAverage(sentence_vector, sizeof(sentence_words));
    //int size = sizeof(definition_vector) / sizeof(definition_vector[0]);
    //double cosine_similarity = _Math::cosineSimilarity(definition_vector, sentence_vector, size);

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

//  Thought - terminating cliché – a commonly used phrase, sometimes passing as folk wisdom, used to quell cognitive dissonance, conceal lack of forethought, move on to other topics, etc.– but in any case, to end the debate with a cliché rather than a point.
bool _Fallacy::ThoughtTerminatingCliche(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string model = "llama3";
    string fallacy_definition = "commonly used phrase, sometimes passing as folk wisdom, used to quell cognitive dissonance, conceal lack of forethought, move on to other topics, etc.– but in any case, to end the debate with a cliché rather than a point.";
    string prompt = "Check if the following text matches the following logical fallacies and limit the response to yes or no: " + fallacy_definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);
    
    //string* fallacy_definition_words = _Utilities::String2Words(fallacy_definition);
    //double* definition_vector = _NLU::getSentenceVectors(fallacy_definition_words);
    //double* definition_sentence_vector = _Utilities::VectorAverage(definition_vector, sizeof(fallacy_definition_words));
    //string* sentence_words = _Utilities::String2Words(fallacy_definition);
    //double* sentence_vector = _NLU::getSentenceVectors(sentence_words);
    //double* sentence_sentence_vector = _Utilities::VectorAverage(sentence_vector, sizeof(sentence_words));
    //int size = sizeof(definition_vector) / sizeof(definition_vector[0]);
    //double cosine_similarity = _Math::cosineSimilarity(definition_vector, sentence_vector, size);

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

//  Questionable cause is a general type of error with many variants.Its primary basis is the confusion of association with causation, either by inappropriately deducing(or rejecting) causation or a broader failure to properly investigate the cause of an observed effect.
bool _Fallacy::QuestionableCause(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string model = "llama3";
    string fallacy_definition = "a general type of error with many variants.Its primary basis is the confusion of association with causation, either by inappropriately deducing(or rejecting) causation or a broader failure to properly investigate the cause of an observed effect.";
    string prompt = "Check if the following text matches the following logical fallacies and limit the response to yes or no: " + fallacy_definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);
    
    //string* fallacy_definition_words = _Utilities::String2Words(fallacy_definition);
    //double* definition_vector = _NLU::getSentenceVectors(fallacy_definition_words);
    //double* definition_sentence_vector = _Utilities::VectorAverage(definition_vector, sizeof(fallacy_definition_words));
    //string* sentence_words = _Utilities::String2Words(fallacy_definition);
    //double* sentence_vector = _NLU::getSentenceVectors(sentence_words);
    //double* sentence_sentence_vector = _Utilities::VectorAverage(sentence_vector, sizeof(sentence_words));
    //int size = sizeof(definition_vector) / sizeof(definition_vector[0]);
    //double cosine_similarity = _Math::cosineSimilarity(definition_vector, sentence_vector, size);

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

//  Cum hoc ergo propter hoc(Latin for "with this, therefore because of this"; correlation implies causation; faulty cause / effect, coincidental correlation, correlation without causation) – a faulty assumption that, because there is a correlation between two variables, one caused the other.
bool _Fallacy::CumHocErgoPropterHocFallacy(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string model = "llama3";
    string fallacy_definition = "a faulty assumption that, because there is a correlation between two variables, one caused the other.";
    string prompt = "Check if the following text matches the following logical fallacies and limit the response to yes or no: " + fallacy_definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    //string* fallacy_definition_words = _Utilities::String2Words(fallacy_definition);
    //double* definition_vector = _NLU::getSentenceVectors(fallacy_definition_words);
    //double* definition_sentence_vector = _Utilities::VectorAverage(definition_vector, sizeof(fallacy_definition_words));
    //string* sentence_words = _Utilities::String2Words(fallacy_definition);
    //double* sentence_vector = _NLU::getSentenceVectors(sentence_words);
    //double* sentence_sentence_vector = _Utilities::VectorAverage(sentence_vector, sizeof(sentence_words));
    //int size = sizeof(definition_vector) / sizeof(definition_vector[0]);
    //double cosine_similarity = _Math::cosineSimilarity(definition_vector, sentence_vector, size);

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

//  Post hoc ergo propter hoc(Latin for "after this, therefore because of this"; temporal sequence implies causation) – X happened, then Y happened; therefore X caused Y.
bool _Fallacy::PostHocErgoPropterHoc(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string model = "llama3";
    string fallacy_definition = "after this, therefore because of this";
    string prompt = "Check if the following text matches the following logical fallacies and limit the response to yes or no: " + fallacy_definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    //string* fallacy_definition_words = _Utilities::String2Words(fallacy_definition);
    //double* definition_vector = _NLU::getSentenceVectors(fallacy_definition_words);
    //double* definition_sentence_vector = _Utilities::VectorAverage(definition_vector, sizeof(fallacy_definition_words));
    //string* sentence_words = _Utilities::String2Words(fallacy_definition);
    //double* sentence_vector = _NLU::getSentenceVectors(sentence_words);
    //double* sentence_sentence_vector = _Utilities::VectorAverage(sentence_vector, sizeof(sentence_words));
    //int size = sizeof(definition_vector) / sizeof(definition_vector[0]);
    //double cosine_similarity = _Math::cosineSimilarity(definition_vector, sentence_vector, size);

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

//  Wrong direction(reverse causation) – causeand effect are reversed.The cause is said to be the effectand vice versa.The consequence of the phenomenon is claimed to be its root cause.
bool _Fallacy::WrongDirectionFallacy(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string model = "llama3";
    string fallacy_definition = "cause and effect are reversed.The cause is said to be the effectand vice versa.The consequence of the phenomenon is claimed to be its root cause.";
    string prompt = "Check if the following text matches the following logical fallacies and limit the response to yes or no: " + fallacy_definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);
    
    //string* fallacy_definition_words = _Utilities::String2Words(fallacy_definition);
    //double* definition_vector = _NLU::getSentenceVectors(fallacy_definition_words);
    //double* definition_sentence_vector = _Utilities::VectorAverage(definition_vector, sizeof(fallacy_definition_words));
    //string* sentence_words = _Utilities::String2Words(fallacy_definition);
    //double* sentence_vector = _NLU::getSentenceVectors(sentence_words);
    //double* sentence_sentence_vector = _Utilities::VectorAverage(sentence_vector, sizeof(sentence_words));
    //int size = sizeof(definition_vector) / sizeof(definition_vector[0]);
    //double cosine_similarity = _Math::cosineSimilarity(definition_vector, sentence_vector, size);

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

//  Fallacy of the single cause(causal oversimplification) - it is assumed that there is one, simple cause of an outcome when in reality it may have been caused by a number of only jointly sufficient causes.
bool _Fallacy::CausalOversimplification(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string model = "llama3";
    string fallacy_definition = "it is assumed that there is one, simple cause of an outcome when in reality it may have been caused by a number of only jointly sufficient causes.";
    string prompt = "Check if the following text matches the following logical fallacies and limit the response to yes or no: " + fallacy_definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);
    
    /*string* fallacy_definition_words = _Utilities::String2Words(fallacy_definition);
    double* definition_vector = _NLU::getSentenceVectors(fallacy_definition_words);
    double* definition_sentence_vector = _Utilities::VectorAverage(definition_vector, sizeof(fallacy_definition_words));
    string* sentence_words = _Utilities::String2Words(fallacy_definition);
    double* sentence_vector = _NLU::getSentenceVectors(sentence_words);
    double* sentence_sentence_vector = _Utilities::VectorAverage(sentence_vector, sizeof(sentence_words));
    int size = sizeof(definition_vector) / sizeof(definition_vector[0]);
    double cosine_similarity = _Math::cosineSimilarity(definition_vector, sentence_vector, size);*/

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

//  Furtive fallacy – outcomes are asserted to have been caused by the malfeasance of decision makers.
bool _Fallacy::FurtiveFallacy(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string model = "llama3";
    string fallacy_definition = "outcomes are asserted to have been caused by the malfeasance of decision makers.";
    string prompt = "Check if the following text matches the following logical fallacies and limit the response to yes or no: " + fallacy_definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    //string* fallacy_definition_words = _Utilities::String2Words(fallacy_definition);
    //double* definition_vector = _NLU::getSentenceVectors(fallacy_definition_words);
    //double* definition_sentence_vector = _Utilities::VectorAverage(definition_vector, sizeof(fallacy_definition_words));
    //string* sentence_words = _Utilities::String2Words(fallacy_definition);
    //double* sentence_vector = _NLU::getSentenceVectors(sentence_words);
    //double* sentence_sentence_vector = _Utilities::VectorAverage(sentence_vector, sizeof(sentence_words));
    //int size = sizeof(definition_vector) / sizeof(definition_vector[0]);
    //double cosine_similarity = _Math::cosineSimilarity(definition_vector, sentence_vector, size);

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

//  Gambler's fallacy – the incorrect belief that separate, independent events can affect the likelihood of another random event. If a fair coin lands on heads 10 times in a row, the belief that it is "due to the number of times it had previously landed on tails" is incorrect.
bool _Fallacy::GamblerFallacy(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string model = "llama3";
    string fallacy_definition = "the incorrect belief that separate, independent events can affect the likelihood of another random event";
    string prompt = "Check if the following text matches the following logical fallacies and limit the response to yes or no: " + fallacy_definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    //string* fallacy_definition_words = _Utilities::String2Words(fallacy_definition);
    //double* definition_vector = _NLU::getSentenceVectors(fallacy_definition_words);
    //double* definition_sentence_vector = _Utilities::VectorAverage(definition_vector, sizeof(fallacy_definition_words));
    //string* sentence_words = _Utilities::String2Words(fallacy_definition);
    //double* sentence_vector = _NLU::getSentenceVectors(sentence_words);
    //double* sentence_sentence_vector = _Utilities::VectorAverage(sentence_vector, sizeof(sentence_words));
    //int size = sizeof(definition_vector) / sizeof(definition_vector[0]);
    //double cosine_similarity = _Math::cosineSimilarity(definition_vector, sentence_vector, size);

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

//  Magical thinking – fallacious attribution of causal relationships between actions and events.In anthropology, it refers primarily to cultural beliefs that ritual, prayer, sacrifice, and taboos will produce specific supernatural consequences.In psychology, it refers to an irrational belief that thoughts by themselves can affect the world or that thinking something corresponds with doing it.
bool _Fallacy::MagicalThinking(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string model = "llama3";
    string fallacy_definition = "causal relationships between actions and events";
    string prompt = "Check if the following text matches the following logical fallacies and limit the response to yes or no: " + fallacy_definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    //string* fallacy_definition_words = _Utilities::String2Words(fallacy_definition);
    //double* definition_vector = _NLU::getSentenceVectors(fallacy_definition_words);
    //double* definition_sentence_vector = _Utilities::VectorAverage(definition_vector, sizeof(fallacy_definition_words));
    //string* sentence_words = _Utilities::String2Words(fallacy_definition);
    //double* sentence_vector = _NLU::getSentenceVectors(sentence_words);
    //double* sentence_sentence_vector = _Utilities::VectorAverage(sentence_vector, sizeof(sentence_words));
    //int size = sizeof(definition_vector) / sizeof(definition_vector[0]);
    //double cosine_similarity = _Math::cosineSimilarity(definition_vector, sentence_vector, size);

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

//  Regression fallacy – ascribes cause where none exists.The flaw is failing to account for natural fluctuations.It is frequently a special kind of post hoc fallacy.
bool _Fallacy::RegressionFallacy(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string model = "llama3";
    string fallacy_definition = "ascribes cause where none exists. The flaw is failing to account for natural fluctuations.It is frequently a special kind of post hoc fallacy.";
    string prompt = "Check if the following text matches the following logical fallacies and limit the response to yes or no: " + fallacy_definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);
    
    //string* fallacy_definition_words = _Utilities::String2Words(fallacy_definition);
    //double* definition_vector = _NLU::getSentenceVectors(fallacy_definition_words);
    //double* definition_sentence_vector = _Utilities::VectorAverage(definition_vector, sizeof(fallacy_definition_words));
    //string* sentence_words = _Utilities::String2Words(fallacy_definition);
    //double* sentence_vector = _NLU::getSentenceVectors(sentence_words);
    //double* sentence_sentence_vector = _Utilities::VectorAverage(sentence_vector, sizeof(sentence_words));
    //int size = sizeof(definition_vector) / sizeof(definition_vector[0]);
    //double cosine_similarity = _Math::cosineSimilarity(definition_vector, sentence_vector, size);

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

//  Appeal to the stone(argumentum ad lapidem) – dismissing a claim as absurd without demonstrating proof for its absurdity.
bool _Fallacy::AppealToTheStoneFallacy(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string model = "llama3";
    string fallacy_definition = "dismissing a claim as absurd without demonstrating proof for its absurdity.";
    string prompt = "Check if the following text matches the following logical fallacies and limit the response to yes or no: " + fallacy_definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    //string* fallacy_definition_words = _Utilities::String2Words(fallacy_definition);
    //double* definition_vector = _NLU::getSentenceVectors(fallacy_definition_words);
    //double* definition_sentence_vector = _Utilities::VectorAverage(definition_vector, sizeof(fallacy_definition_words));
    //string* sentence_words = _Utilities::String2Words(fallacy_definition);
    //double* sentence_vector = _NLU::getSentenceVectors(sentence_words);
    //double* sentence_sentence_vector = _Utilities::VectorAverage(sentence_vector, sizeof(sentence_words));
    //int size = sizeof(definition_vector) / sizeof(definition_vector[0]);
    //double cosine_similarity = _Math::cosineSimilarity(definition_vector, sentence_vector, size);

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

//  Argument from ignorance(appeal to ignorance, argumentum ad ignorantiam) – assuming that a claim is true because it has not been or cannot be proven false, or vice versa.
bool _Fallacy::ArgumentFromIgnorance(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string model = "llama3";
    string fallacy_definition = "assuming that a claim is true because it has not been or cannot be proven false, or vice versa";
    string prompt = "Check if the following text matches the following logical fallacies and limit the response to yes or no: " + fallacy_definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    //string* fallacy_definition_words = _Utilities::String2Words(fallacy_definition);
    //double* definition_vector = _NLU::getSentenceVectors(fallacy_definition_words);
    //double* definition_sentence_vector = _Utilities::VectorAverage(definition_vector, sizeof(fallacy_definition_words));
    //string* sentence_words = _Utilities::String2Words(fallacy_definition);
    //double* sentence_vector = _NLU::getSentenceVectors(sentence_words);
    //double* sentence_sentence_vector = _Utilities::VectorAverage(sentence_vector, sizeof(sentence_words));
    //int size = sizeof(definition_vector) / sizeof(definition_vector[0]);
    //double cosine_similarity = _Math::cosineSimilarity(definition_vector, sentence_vector, size);

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

//  Argument from incredulity(appeal to common sense) – "I cannot imagine how this could be true; therefore, it must be false."
bool _Fallacy::ArgumentFromIncredulity(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string model = "llama3";
    string fallacy_definition = "I cannot imagine how this could be true; therefore, it must be false.";
    string prompt = "Check if the following text matches the following logical fallacies and limit the response to yes or no: " + fallacy_definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    //string* fallacy_definition_words = _Utilities::String2Words(fallacy_definition);
    //double* definition_vector = _NLU::getSentenceVectors(fallacy_definition_words);
    //double* definition_sentence_vector = _Utilities::VectorAverage(definition_vector, sizeof(fallacy_definition_words));
    //string* sentence_words = _Utilities::String2Words(fallacy_definition);
    //double* sentence_vector = _NLU::getSentenceVectors(sentence_words);
    //double* sentence_sentence_vector = _Utilities::VectorAverage(sentence_vector, sizeof(sentence_words));
    //int size = sizeof(definition_vector) / sizeof(definition_vector[0]);
    //double cosine_similarity = _Math::cosineSimilarity(definition_vector, sentence_vector, size);

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

//  Argument from repetition(argumentum ad nauseam, argumentum ad infinitum) – repeating an argument until nobody cares to discuss it any more; sometimes confused with proof by assertion.
bool _Fallacy::ArgumentFromRepitition(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string model = "llama3";
    string fallacy_definition = "repeating an argument until nobody cares to discuss it any more; sometimes confused with proof by assertion.";
    string prompt = "Check if the following text matches the following logical fallacies and limit the response to yes or no: " + fallacy_definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    //string* fallacy_definition_words = _Utilities::String2Words(fallacy_definition);
    //double* definition_vector = _NLU::getSentenceVectors(fallacy_definition_words);
    //double* definition_sentence_vector = _Utilities::VectorAverage(definition_vector, sizeof(fallacy_definition_words));
    //string* sentence_words = _Utilities::String2Words(fallacy_definition);
    //double* sentence_vector = _NLU::getSentenceVectors(sentence_words);
    //double* sentence_sentence_vector = _Utilities::VectorAverage(sentence_vector, sizeof(sentence_words));
    //int size = sizeof(definition_vector) / sizeof(definition_vector[0]);
    //double cosine_similarity = _Math::cosineSimilarity(definition_vector, sentence_vector, size);

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

//  Argument from silence(argumentum ex silentio) – assuming that a claim is true based on the absence of textual or spoken evidence from an authoritative source, or vice versa.
bool _Fallacy::ArgumentFromSilence(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string model = "llama3";
    string fallacy_definition = "assuming that a claim is true based on the absence of textual or spoken evidence from an authoritative source, or vice vers";
    string prompt = "Check if the following text matches the following logical fallacies and limit the response to yes or no: " + fallacy_definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);
    
    //string* fallacy_definition_words = _Utilities::String2Words(fallacy_definition);
    //double* definition_vector = _NLU::getSentenceVectors(fallacy_definition_words);
    //double* definition_sentence_vector = _Utilities::VectorAverage(definition_vector, sizeof(fallacy_definition_words));
    //string* sentence_words = _Utilities::String2Words(fallacy_definition);
    //double* sentence_vector = _NLU::getSentenceVectors(sentence_words);
    //double* sentence_sentence_vector = _Utilities::VectorAverage(sentence_vector, sizeof(sentence_words));
    //int size = sizeof(definition_vector) / sizeof(definition_vector[0]);
    //double cosine_similarity = _Math::cosineSimilarity(definition_vector, sentence_vector, size);

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

//  Ignoratio elenchi(irrelevant conclusion, missing the point) – an argument that may in itself be valid, but does not address the issue in question.
bool _Fallacy::IrrelevantConclusionFallacy(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string model = "llama3";
    string fallacy_definition = "an argument that may in itself be valid, but does not address the issue in question";
    string prompt = "Check if the following text matches the following logical fallacies and limit the response to yes or no: " + fallacy_definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);
    
    //string* fallacy_definition_words = _Utilities::String2Words(fallacy_definition);
    //double* definition_vector = _NLU::getSentenceVectors(fallacy_definition_words);
    //double* definition_sentence_vector = _Utilities::VectorAverage(definition_vector, sizeof(fallacy_definition_words));
    //string* sentence_words = _Utilities::String2Words(fallacy_definition);
    //double* sentence_vector = _NLU::getSentenceVectors(sentence_words);
    //double* sentence_sentence_vector = _Utilities::VectorAverage(sentence_vector, sizeof(sentence_words));
    //int size = sizeof(definition_vector) / sizeof(definition_vector[0]);
    //double cosine_similarity = _Math::cosineSimilarity(definition_vector, sentence_vector, size);

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

//  Red herring – introducing a second argument in response to the first argument that is irrelevantand draws attention away from the original topic(e.g.: saying “If you want to complain about the dishes I leave in the sink, what about the dirty clothes you leave in the bathroom ? ”).
bool _Fallacy::RedHerringFallacy(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string model = "llama3";
    string fallacy_definition = "introducing a second argument in response to the first argument that is irrelevantand draws attention away from the original topic";
    string prompt = "Check if the following text matches the following logical fallacies and limit the response to yes or no: " + fallacy_definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);
    
    //string* fallacy_definition_words = _Utilities::String2Words(fallacy_definition);
    //double* definition_vector = _NLU::getSentenceVectors(fallacy_definition_words);
    //double* definition_sentence_vector = _Utilities::VectorAverage(definition_vector, sizeof(fallacy_definition_words));
    //string* sentence_words = _Utilities::String2Words(fallacy_definition);
    //double* sentence_vector = _NLU::getSentenceVectors(sentence_words);
    //double* sentence_sentence_vector = _Utilities::VectorAverage(sentence_vector, sizeof(sentence_words));
    //int size = sizeof(definition_vector) / sizeof(definition_vector[0]);
    //double cosine_similarity = _Math::cosineSimilarity(definition_vector, sentence_vector, size);

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

//  Ad hominem – attacking the arguer instead of the argument. (N.b., "ad hominem" can also refer to the dialectical strategy of arguing on the basis of the opponent's own commitments. This type of ad hominem is not a fallacy.)
bool _Fallacy::AdHominem(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string model = "llama3";
    string fallacy_definition = "attacking the arguer instead of the argumen";
    string prompt = "Check if the following text matches the following logical fallacies and limit the response to yes or no: " + fallacy_definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    //string* fallacy_definition_words = _Utilities::String2Words(fallacy_definition);
    //double* definition_vector = _NLU::getSentenceVectors(fallacy_definition_words);
    //double* definition_sentence_vector = _Utilities::VectorAverage(definition_vector, sizeof(fallacy_definition_words));
    //string* sentence_words = _Utilities::String2Words(fallacy_definition);
    //double* sentence_vector = _NLU::getSentenceVectors(sentence_words);
    //double* sentence_sentence_vector = _Utilities::VectorAverage(sentence_vector, sizeof(sentence_words));
    //int size = sizeof(definition_vector) / sizeof(definition_vector[0]);
    //double cosine_similarity = _Math::cosineSimilarity(definition_vector, sentence_vector, size);

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

//  Circumstantial ad hominem – stating that the arguer's personal situation or perceived benefit from advancing a conclusion means that their conclusion is wrong.
bool _Fallacy::CircumstantialAdHominem(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string model = "llama3";
    string fallacy_definition = "stating that the arguer's personal situation or perceived benefit from advancing a conclusion means that their conclusion is wrong";
    string prompt = "Check if the following text matches the following logical fallacies and limit the response to yes or no: " + fallacy_definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);
    
    //string* fallacy_definition_words = _Utilities::String2Words(fallacy_definition);
    //double* definition_vector = _NLU::getSentenceVectors(fallacy_definition_words);
    //double* definition_sentence_vector = _Utilities::VectorAverage(definition_vector, sizeof(fallacy_definition_words));
    //string* sentence_words = _Utilities::String2Words(fallacy_definition);
    //double* sentence_vector = _NLU::getSentenceVectors(sentence_words);
    //double* sentence_sentence_vector = _Utilities::VectorAverage(sentence_vector, sizeof(sentence_words));
    //int size = sizeof(definition_vector) / sizeof(definition_vector[0]);
    //double cosine_similarity = _Math::cosineSimilarity(definition_vector, sentence_vector, size);

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

//  Poisoning the well – a subtype of ad hominem presenting adverse information about a target person with the intention of discrediting everything that the target person says.
bool _Fallacy::PoisoningTheWell(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string model = "llama3";
    string fallacy_definition = "a subtype of ad hominem presenting adverse information about a target person with the intention of discrediting everything that the target person says.";
    string prompt = "Check if the following text matches the following logical fallacies and limit the response to yes or no: " + fallacy_definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);
    
    //string* fallacy_definition_words = _Utilities::String2Words(fallacy_definition);
    //double* definition_vector = _NLU::getSentenceVectors(fallacy_definition_words);
    //double* definition_sentence_vector = _Utilities::VectorAverage(definition_vector, sizeof(fallacy_definition_words));
    //string* sentence_words = _Utilities::String2Words(fallacy_definition);
    //double* sentence_vector = _NLU::getSentenceVectors(sentence_words);
    //double* sentence_sentence_vector = _Utilities::VectorAverage(sentence_vector, sizeof(sentence_words));
    //int size = sizeof(definition_vector) / sizeof(definition_vector[0]);
    //double cosine_similarity = _Math::cosineSimilarity(definition_vector, sentence_vector, size);

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

//  Appeal to motive – dismissing an idea by questioning the motives of its proposer.
bool _Fallacy::AppealToMotive(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string model = "llama3";
    string fallacy_definition = "dismissing an idea by questioning the motives of its proposer";
    string prompt = "Check if the following text matches the following logical fallacies and limit the response to yes or no: " + fallacy_definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    //string* fallacy_definition_words = _Utilities::String2Words(fallacy_definition);
    //double* definition_vector = _NLU::getSentenceVectors(fallacy_definition_words);
    //double* definition_sentence_vector = _Utilities::VectorAverage(definition_vector, sizeof(fallacy_definition_words));
    //string* sentence_words = _Utilities::String2Words(fallacy_definition);
    //double* sentence_vector = _NLU::getSentenceVectors(sentence_words);
    //double* sentence_sentence_vector = _Utilities::VectorAverage(sentence_vector, sizeof(sentence_words));
    //int size = sizeof(definition_vector) / sizeof(definition_vector[0]);
    //double cosine_similarity = _Math::cosineSimilarity(definition_vector, sentence_vector, size);

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

//  Kafka - trapping – a sophistical and unfalsifiable form of argument that attempts to overcome an opponent by inducing a sense of guilt and using the opponent's denial of guilt as further evidence of guilt.
bool _Fallacy::WafkaTrapping(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string model = "llama3";
    string fallacy_definition = "a sophistical and unfalsifiable form of argument that attempts to overcome an opponent by inducing a sense of guilt and using the opponent's denial of guilt as further evidence of guilt.";
    string prompt = "Check if the following text matches the following logical fallacies and limit the response to yes or no: " + fallacy_definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    //string* fallacy_definition_words = _Utilities::String2Words(fallacy_definition);
    //double* definition_vector = _NLU::getSentenceVectors(fallacy_definition_words);
    //double* definition_sentence_vector = _Utilities::VectorAverage(definition_vector, sizeof(fallacy_definition_words));
    //string* sentence_words = _Utilities::String2Words(fallacy_definition);
    //double* sentence_vector = _NLU::getSentenceVectors(sentence_words);
    //double* sentence_sentence_vector = _Utilities::VectorAverage(sentence_vector, sizeof(sentence_words));
    //int size = sizeof(definition_vector) / sizeof(definition_vector[0]);
    //double cosine_similarity = _Math::cosineSimilarity(definition_vector, sentence_vector, size);

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

//  Tone policing – focusing on emotion behind(or resulting from) a message rather than the message itself as a discrediting tactic.
bool _Fallacy::TonePolicing(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string model = "llama3";
    string fallacy_definition = "focusing on emotion behind(or resulting from) a message rather than the message itself as a discrediting tactic.";
    string prompt = "Check if the following text matches the following logical fallacies and limit the response to yes or no: " + fallacy_definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    //string* fallacy_definition_words = _Utilities::String2Words(fallacy_definition);
    //double* definition_vector = _NLU::getSentenceVectors(fallacy_definition_words);
    //double* definition_sentence_vector = _Utilities::VectorAverage(definition_vector, sizeof(fallacy_definition_words));
    //string* sentence_words = _Utilities::String2Words(fallacy_definition);
    //double* sentence_vector = _NLU::getSentenceVectors(sentence_words);
    //double* sentence_sentence_vector = _Utilities::VectorAverage(sentence_vector, sizeof(sentence_words));
    //int size = sizeof(definition_vector) / sizeof(definition_vector[0]);
    //double cosine_similarity = _Math::cosineSimilarity(definition_vector, sentence_vector, size);

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

//  Traitorous critic fallacy(ergo decedo, 'thus leave') – a critic's perceived affiliation is portrayed as the underlying reason for the criticism and the critic is asked to stay away from the issue altogether. Easily confused with the association fallacy ("guilt by association") below.
bool _Fallacy::TraitorousCriticFallacy(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string model = "llama3";
    string fallacy_definition = "a critic's perceived affiliation is portrayed as the underlying reason for the criticism and the critic is asked to stay away from the issue altogether. Easily confused with the association fallacy below";
    string prompt = "Check if the following text matches the following logical fallacies and limit the response to yes or no: " + fallacy_definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);
    
    //string* fallacy_definition_words = _Utilities::String2Words(fallacy_definition);
    //double* definition_vector = _NLU::getSentenceVectors(fallacy_definition_words);
    //double* definition_sentence_vector = _Utilities::VectorAverage(definition_vector, sizeof(fallacy_definition_words));
    //string* sentence_words = _Utilities::String2Words(fallacy_definition);
    //double* sentence_vector = _NLU::getSentenceVectors(sentence_words);
    //double* sentence_sentence_vector = _Utilities::VectorAverage(sentence_vector, sizeof(sentence_words));
    //int size = sizeof(definition_vector) / sizeof(definition_vector[0]);
    //double cosine_similarity = _Math::cosineSimilarity(definition_vector, sentence_vector, size);

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

//  Appeal to authority(argument from authority, argumentum ad verecundiam) – an assertion is deemed true because of the position or authority of the person asserting it.
bool _Fallacy::AppealToAuthorityFallacy(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string model = "llama3";
    string fallacy_definition = "an assertion is deemed true because of the position or authority of the person asserting it.";
    string prompt = "Check if the following text matches the following logical fallacies and limit the response to yes or no: " + fallacy_definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);
    
    //string* fallacy_definition_words = _Utilities::String2Words(fallacy_definition);
    //double* definition_vector = _NLU::getSentenceVectors(fallacy_definition_words);
    //double* definition_sentence_vector = _Utilities::VectorAverage(definition_vector, sizeof(fallacy_definition_words));
    //string* sentence_words = _Utilities::String2Words(fallacy_definition);
    //double* sentence_vector = _NLU::getSentenceVectors(sentence_words);
    //double* sentence_sentence_vector = _Utilities::VectorAverage(sentence_vector, sizeof(sentence_words));
    //int size = sizeof(definition_vector) / sizeof(definition_vector[0]);
    //double cosine_similarity = _Math::cosineSimilarity(definition_vector, sentence_vector, size);

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

//  Appeal to accomplishment – an assertion is deemed true or false based on the accomplishments of the proposer.This may often also have elements of appeal to emotion(see below).
bool _Fallacy::AppealToAccomplishmentFallacy(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string model = "llama3";
    string fallacy_definition = "an assertion is deemed true or false based on the accomplishments of the proposer.This may often also have elements of appeal to emotion";
    string prompt = "Check if the following text matches the following logical fallacies and limit the response to yes or no: " + fallacy_definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);
    
    //string* fallacy_definition_words = _Utilities::String2Words(fallacy_definition);
    //double* definition_vector = _NLU::getSentenceVectors(fallacy_definition_words);
    //double* definition_sentence_vector = _Utilities::VectorAverage(definition_vector, sizeof(fallacy_definition_words));
    //string* sentence_words = _Utilities::String2Words(fallacy_definition);
    //double* sentence_vector = _NLU::getSentenceVectors(sentence_words);
    //double* sentence_sentence_vector = _Utilities::VectorAverage(sentence_vector, sizeof(sentence_words));
    //int size = sizeof(definition_vector) / sizeof(definition_vector[0]);
    //double cosine_similarity = _Math::cosineSimilarity(definition_vector, sentence_vector, size);

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

//  Courtier's reply – a criticism is dismissed by claiming that the critic lacks sufficient knowledge, credentials, or training to credibly comment on the subject matter.
bool _Fallacy::CourtiersReply(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string model = "llama3";
    string fallacy_definition = "a criticism is dismissed by claiming that the critic lacks sufficient knowledge, credentials, or training to credibly comment on the subject matter.";
    string prompt = "Check if the following text matches the following logical fallacies and limit the response to yes or no: " + fallacy_definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);
    
    //string* fallacy_definition_words = _Utilities::String2Words(fallacy_definition);
    //double* definition_vector = _NLU::getSentenceVectors(fallacy_definition_words);
    //double* definition_sentence_vector = _Utilities::VectorAverage(definition_vector, sizeof(fallacy_definition_words));
    //string* sentence_words = _Utilities::String2Words(fallacy_definition);
    //double* sentence_vector = _NLU::getSentenceVectors(sentence_words);
    //double* sentence_sentence_vector = _Utilities::VectorAverage(sentence_vector, sizeof(sentence_words));
    //int size = sizeof(definition_vector) / sizeof(definition_vector[0]);
    //double cosine_similarity = _Math::cosineSimilarity(definition_vector, sentence_vector, size);

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

//  Appeal to consequences(argumentum ad consequentiam) – the conclusion is supported by a premise that asserts positive or negative consequences from some course of action in an attempt to distract from the initial discussion.
bool _Fallacy::AppealToConsequences(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string model = "llama3";
    string fallacy_definition = "the conclusion is supported by a premise that asserts positive or negative consequences from some course of action in an attempt to distract from the initial discussion.";
    string prompt = "Check if the following text matches the following logical fallacies and limit the response to yes or no: " + fallacy_definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);
    
    //string* fallacy_definition_words = _Utilities::String2Words(fallacy_definition);
    //double* definition_vector = _NLU::getSentenceVectors(fallacy_definition_words);
    //double* definition_sentence_vector = _Utilities::VectorAverage(definition_vector, sizeof(fallacy_definition_words));
    //string* sentence_words = _Utilities::String2Words(fallacy_definition);
    //double* sentence_vector = _NLU::getSentenceVectors(sentence_words);
    //double* sentence_sentence_vector = _Utilities::VectorAverage(sentence_vector, sizeof(sentence_words));
    //int size = sizeof(definition_vector) / sizeof(definition_vector[0]);
    //double cosine_similarity = _Math::cosineSimilarity(definition_vector, sentence_vector, size);

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

//  Appeal to emotion – manipulating the emotions of the listener rather than using valid reasoning to obtain common agreement.
bool _Fallacy::AppealToEmotion(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string model = "llama3";
    string fallacy_definition = "manipulating the emotions of the listener rather than using valid reasoning to obtain common agreement";
    string prompt = "Check if the following text matches the following logical fallacies and limit the response to yes or no: " + fallacy_definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);
    
    //string* fallacy_definition_words = _Utilities::String2Words(fallacy_definition);
    //double* definition_vector = _NLU::getSentenceVectors(fallacy_definition_words);
    //double* definition_sentence_vector = _Utilities::VectorAverage(definition_vector, sizeof(fallacy_definition_words));
    //string* sentence_words = _Utilities::String2Words(fallacy_definition);
    //double* sentence_vector = _NLU::getSentenceVectors(sentence_words);
    //double* sentence_sentence_vector = _Utilities::VectorAverage(sentence_vector, sizeof(sentence_words));
    //int size = sizeof(definition_vector) / sizeof(definition_vector[0]);
    //double cosine_similarity = _Math::cosineSimilarity(definition_vector, sentence_vector, size);

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

//  Appeal to fear – generating distress, anxiety, cynicism, or prejudice towards the opponent in an argument
bool _Fallacy::AppealToFear(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string model = "llama3";
    string fallacy_definition = "generating distress, anxiety, cynicism, or prejudice towards the opponent in an argument";
    string prompt = "Check if the following text matches the following logical fallacies and limit the response to yes or no: " + fallacy_definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    //string* fallacy_definition_words = _Utilities::String2Words(fallacy_definition);
    //double* definition_vector = _NLU::getSentenceVectors(fallacy_definition_words);
    //double* definition_sentence_vector = _Utilities::VectorAverage(definition_vector, sizeof(fallacy_definition_words));
    //string* sentence_words = _Utilities::String2Words(fallacy_definition);
    //double* sentence_vector = _NLU::getSentenceVectors(sentence_words);
    //double* sentence_sentence_vector = _Utilities::VectorAverage(sentence_vector, sizeof(sentence_words));
    //int size = sizeof(definition_vector) / sizeof(definition_vector[0]);
    //double cosine_similarity = _Math::cosineSimilarity(definition_vector, sentence_vector, size);

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

//  Appeal to flattery – using excessive or insincere praise to obtain common agreement.
bool _Fallacy::AppealToFlattery(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string model = "llama3";
    string fallacy_definition = "using excessive or insincere praise to obtain common agreement";
    string prompt = "Check if the following text matches the following logical fallacies and limit the response to yes or no: " + fallacy_definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    //string* fallacy_definition_words = _Utilities::String2Words(fallacy_definition);
    //double* definition_vector = _NLU::getSentenceVectors(fallacy_definition_words);
    //double* definition_sentence_vector = _Utilities::VectorAverage(definition_vector, sizeof(fallacy_definition_words));
    //string* sentence_words = _Utilities::String2Words(fallacy_definition);
    //double* sentence_vector = _NLU::getSentenceVectors(sentence_words);
    //double* sentence_sentence_vector = _Utilities::VectorAverage(sentence_vector, sizeof(sentence_words));
    //int size = sizeof(definition_vector) / sizeof(definition_vector[0]);
    //double cosine_similarity = _Math::cosineSimilarity(definition_vector, sentence_vector, size);

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

//  Appeal to pity(argumentum ad misericordiam) – generating feelings of sympathy or mercy in the listener to obtain common agreement.
bool _Fallacy::AppealToPity(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string model = "llama3";
    string fallacy_definition = "generating feelings of sympathy or mercy in the listener to obtain common agreement.";
    string prompt = "Check if the following text matches the following logical fallacies and limit the response to yes or no: " + fallacy_definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    //string* fallacy_definition_words = _Utilities::String2Words(fallacy_definition);
    //double* definition_vector = _NLU::getSentenceVectors(fallacy_definition_words);
    //double* definition_sentence_vector = _Utilities::VectorAverage(definition_vector, sizeof(fallacy_definition_words));
    //string* sentence_words = _Utilities::String2Words(fallacy_definition);
    //double* sentence_vector = _NLU::getSentenceVectors(sentence_words);
    //double* sentence_sentence_vector = _Utilities::VectorAverage(sentence_vector, sizeof(sentence_words));
    //int size = sizeof(definition_vector) / sizeof(definition_vector[0]);
    //double cosine_similarity = _Math::cosineSimilarity(definition_vector, sentence_vector, size);

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

//  Appeal to ridicule(reductio ad absurdum, ad absurdum, reductio ad ridiculum) – stating that the opponent's position would lead to an absurdity or contradiction.
bool _Fallacy::AppealToRidicule(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string model = "llama3";
    string fallacy_definition = "stating that the opponent's position would lead to an absurdity or contradiction";
    string prompt = "Check if the following text matches the following logical fallacies and limit the response to yes or no: " + fallacy_definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    //string* fallacy_definition_words = _Utilities::String2Words(fallacy_definition);
    //double* definition_vector = _NLU::getSentenceVectors(fallacy_definition_words);
    //double* definition_sentence_vector = _Utilities::VectorAverage(definition_vector, sizeof(fallacy_definition_words));
    //string* sentence_words = _Utilities::String2Words(fallacy_definition);
    //double* sentence_vector = _NLU::getSentenceVectors(sentence_words);
    //double* sentence_sentence_vector = _Utilities::VectorAverage(sentence_vector, sizeof(sentence_words));
    //int size = sizeof(definition_vector) / sizeof(definition_vector[0]);
    //double cosine_similarity = _Math::cosineSimilarity(definition_vector, sentence_vector, size);

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

//  Appeal to spite – generating bitterness or hostility in the listener toward an opponent in an argument.
bool _Fallacy::AppealToSpite(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string model = "llama3";
    string fallacy_definition = "generating bitterness or hostility in the listener toward an opponent in an argument.";
    string prompt = "Check if the following text matches the following logical fallacies and limit the response to yes or no: " + fallacy_definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    //string* fallacy_definition_words = _Utilities::String2Words(fallacy_definition);
    //double* definition_vector = _NLU::getSentenceVectors(fallacy_definition_words);
    //double* definition_sentence_vector = _Utilities::VectorAverage(definition_vector, sizeof(fallacy_definition_words));
    //string* sentence_words = _Utilities::String2Words(fallacy_definition);
    //double* sentence_vector = _NLU::getSentenceVectors(sentence_words);
    //double* sentence_sentence_vector = _Utilities::VectorAverage(sentence_vector, sizeof(sentence_words));
    //int size = sizeof(definition_vector) / sizeof(definition_vector[0]);
    //double cosine_similarity = _Math::cosineSimilarity(definition_vector, sentence_vector, size);

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

//  Judgmental language – using insulting or pejorative language in an argument.
bool _Fallacy::JudgementalLanguage(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string model = "llama3";
    string fallacy_definition = "using insulting or pejorative language in an argument.";
    string prompt = "Check if the following text matches the following logical fallacies and limit the response to yes or no: " + fallacy_definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    //string* fallacy_definition_words = _Utilities::String2Words(fallacy_definition);
    //double* definition_vector = _NLU::getSentenceVectors(fallacy_definition_words);
    //double* definition_sentence_vector = _Utilities::VectorAverage(definition_vector, sizeof(fallacy_definition_words));
    //string* sentence_words = _Utilities::String2Words(fallacy_definition);
    //double* sentence_vector = _NLU::getSentenceVectors(sentence_words);
    //double* sentence_sentence_vector = _Utilities::VectorAverage(sentence_vector, sizeof(sentence_words));
    //int size = sizeof(definition_vector) / sizeof(definition_vector[0]);
    //double cosine_similarity = _Math::cosineSimilarity(definition_vector, sentence_vector, size);

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

//  Pooh - pooh – stating that an opponent's argument is unworthy of consideration.
bool _Fallacy::PoohPooh(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string model = "llama3";
    string fallacy_definition = "stating that an opponent's argument is unworthy of consideration";
    string prompt = "Check if the following text matches the following logical fallacies and limit the response to yes or no: " + fallacy_definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    //string* fallacy_definition_words = _Utilities::String2Words(fallacy_definition);
    //double* definition_vector = _NLU::getSentenceVectors(fallacy_definition_words);
    //double* definition_sentence_vector = _Utilities::VectorAverage(definition_vector, sizeof(fallacy_definition_words));
    //string* sentence_words = _Utilities::String2Words(fallacy_definition);
    //double* sentence_vector = _NLU::getSentenceVectors(sentence_words);
    //double* sentence_sentence_vector = _Utilities::VectorAverage(sentence_vector, sizeof(sentence_words));
    //int size = sizeof(definition_vector) / sizeof(definition_vector[0]);
    //double cosine_similarity = _Math::cosineSimilarity(definition_vector, sentence_vector, size);

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

//  Wishful thinking – arguing for a course of action by the listener according to what might be pleasing to imagine rather than according to evidence or reason.
bool _Fallacy::WishfulThinking(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string model = "llama3";
    string fallacy_definition = "arguing for a course of action by the listener according to what might be pleasing to imagine rather than according to evidence or reason";
    string prompt = "Check if the following text matches the following logical fallacies and limit the response to yes or no: " + fallacy_definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);
    
    //string* fallacy_definition_words = _Utilities::String2Words(fallacy_definition);
    //double* definition_vector = _NLU::getSentenceVectors(fallacy_definition_words);
    //double* definition_sentence_vector = _Utilities::VectorAverage(definition_vector, sizeof(fallacy_definition_words));
    //string* sentence_words = _Utilities::String2Words(fallacy_definition);
    //double* sentence_vector = _NLU::getSentenceVectors(sentence_words);
    //double* sentence_sentence_vector = _Utilities::VectorAverage(sentence_vector, sizeof(sentence_words));
    //int size = sizeof(definition_vector) / sizeof(definition_vector[0]);
    //double cosine_similarity = _Math::cosineSimilarity(definition_vector, sentence_vector, size);

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

//  Appeal to nature – judgment is based solely on whether the subject of judgment is 'natural' or 'unnatural'.[81](Sometimes also called the "naturalistic fallacy", but is not to be confused with the other fallacies by that name.)
bool _Fallacy::AppealToNature(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string model = "llama3";
    string fallacy_definition = "judgment is based solely on whether the subject of judgment is natural or unnatural";
    string prompt = "Check if the following text matches the following logical fallacies and limit the response to yes or no: " + fallacy_definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    /*string* fallacy_definition_words = _Utilities::String2Words(fallacy_definition);
    double* definition_vector = _NLU::getSentenceVectors(fallacy_definition_words);
    double* definition_sentence_vector = _Utilities::VectorAverage(definition_vector, sizeof(fallacy_definition_words));
    string* sentence_words = _Utilities::String2Words(fallacy_definition);
    double* sentence_vector = _NLU::getSentenceVectors(sentence_words);
    double* sentence_sentence_vector = _Utilities::VectorAverage(sentence_vector, sizeof(sentence_words));
    int size = sizeof(definition_vector) / sizeof(definition_vector[0]);
    double cosine_similarity = _Math::cosineSimilarity(definition_vector, sentence_vector, size);*/

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

//  Appeal to novelty(argumentum novitatis, argumentum ad antiquitatis) – a proposal is claimed to be superior or better solely because it is new or modern. (opposite of appeal to tradition)
bool _Fallacy::AppealToNovelty(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string model = "llama3";
    string fallacy_definition = "a proposal is claimed to be superior or better solely because it is new or modern";
    string prompt = "Check if the following text matches the following logical fallacies and limit the response to yes or no: " + fallacy_definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    //string* fallacy_definition_words = _Utilities::String2Words(fallacy_definition);
    //double* definition_vector = _NLU::getSentenceVectors(fallacy_definition_words);
    //double* definition_sentence_vector = _Utilities::VectorAverage(definition_vector, sizeof(fallacy_definition_words));
    //string* sentence_words = _Utilities::String2Words(fallacy_definition);
    //double* sentence_vector = _NLU::getSentenceVectors(sentence_words);
    //double* sentence_sentence_vector = _Utilities::VectorAverage(sentence_vector, sizeof(sentence_words));
    //int size = sizeof(definition_vector) / sizeof(definition_vector[0]);
    //double cosine_similarity = _Math::cosineSimilarity(definition_vector, sentence_vector, size);

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

//  Appeal to poverty(argumentum ad Lazarum) – supporting a conclusion because the arguer is poor(or refuting because the arguer is wealthy). (Opposite of appeal to wealth.)[
bool _Fallacy::AppealToPoverty(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string model = "llama3";
    string fallacy_definition = "a conclusion because the arguer is poor";
    string prompt = "Check if the following text matches the following logical fallacies and limit the response to yes or no: " + fallacy_definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    //string* fallacy_definition_words = _Utilities::String2Words(fallacy_definition);
    //double* definition_vector = _NLU::getSentenceVectors(fallacy_definition_words);
    //double* definition_sentence_vector = _Utilities::VectorAverage(definition_vector, sizeof(fallacy_definition_words));
    //string* sentence_words = _Utilities::String2Words(fallacy_definition);
    //double* sentence_vector = _NLU::getSentenceVectors(sentence_words);
    //double* sentence_sentence_vector = _Utilities::VectorAverage(sentence_vector, sizeof(sentence_words));
    //int size = sizeof(definition_vector) / sizeof(definition_vector[0]);
    //double cosine_similarity = _Math::cosineSimilarity(definition_vector, sentence_vector, size);

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

//  Appeal to tradition(argumentum ad antiquitatem) – a conclusion supported solely because it has long been held to be true.
bool _Fallacy::AppealToTradition(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string model = "llama3";
    string fallacy_definition = "a conclusion supported solely because it has long been held to be true.";
    string prompt = "Check if the following text matches the following logical fallacies and limit the response to yes or no: " + fallacy_definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    //string* fallacy_definition_words = _Utilities::String2Words(fallacy_definition);
    //double* definition_vector = _NLU::getSentenceVectors(fallacy_definition_words);
    //double* definition_sentence_vector = _Utilities::VectorAverage(definition_vector, sizeof(fallacy_definition_words));
    //string* sentence_words = _Utilities::String2Words(fallacy_definition);
    //double* sentence_vector = _NLU::getSentenceVectors(sentence_words);
    //double* sentence_sentence_vector = _Utilities::VectorAverage(sentence_vector, sizeof(sentence_words));
    //int size = sizeof(definition_vector) / sizeof(definition_vector[0]);
    //double cosine_similarity = _Math::cosineSimilarity(definition_vector, sentence_vector, size);

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

//  Appeal to wealth(argumentum ad crumenam) – supporting a conclusion because the arguer is wealthy(or refuting because the arguer is poor). (Sometimes taken together with the appeal to poverty as a general appeal to the arguer's financial situation.)
bool _Fallacy::AppealToWealth(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string model = "llama3";
    string fallacy_definition = "supporting a conclusion because the arguer is wealthy";
    string prompt = "Check if the following text matches the following logical fallacies and limit the response to yes or no: " + fallacy_definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    //string* fallacy_definition_words = _Utilities::String2Words(fallacy_definition);
    //double* definition_vector = _NLU::getSentenceVectors(fallacy_definition_words);
    //double* definition_sentence_vector = _Utilities::VectorAverage(definition_vector, sizeof(fallacy_definition_words));
    //string* sentence_words = _Utilities::String2Words(fallacy_definition);
    //double* sentence_vector = _NLU::getSentenceVectors(sentence_words);
    //double* sentence_sentence_vector = _Utilities::VectorAverage(sentence_vector, sizeof(sentence_words));
    //int size = sizeof(definition_vector) / sizeof(definition_vector[0]);
    //double cosine_similarity = _Math::cosineSimilarity(definition_vector, sentence_vector, size);

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

//  Argumentum ad baculum(appeal to the stick, appeal to force, appeal to threat) – an argument made through coercion or threats of force to support position.
bool _Fallacy::AppealToThreat(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string model = "llama3";
    string fallacy_definition = "an argument made through coercion or threats of force to support position.";
    string prompt = "Check if the following text matches the following logical fallacies and limit the response to yes or no: " + fallacy_definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    //string* fallacy_definition_words = _Utilities::String2Words(fallacy_definition);
    //double* definition_vector = _NLU::getSentenceVectors(fallacy_definition_words);
    //double* definition_sentence_vector = _Utilities::VectorAverage(definition_vector, sizeof(fallacy_definition_words));
    //string* sentence_words = _Utilities::String2Words(fallacy_definition);
    //double* sentence_vector = _NLU::getSentenceVectors(sentence_words);
    //double* sentence_sentence_vector = _Utilities::VectorAverage(sentence_vector, sizeof(sentence_words));
    //int size = sizeof(definition_vector) / sizeof(definition_vector[0]);
    //double cosine_similarity = _Math::cosineSimilarity(definition_vector, sentence_vector, size);

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

//  Argumentum ad populum(appeal to widespread belief, bandwagon argument, appeal to the majority, appeal to the people) – a proposition is claimed to be true or good solely because a majority or many people believe it to be so.
bool _Fallacy::ArgumentumAdPopulum(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string model = "llama3";
    string fallacy_definition = "a proposition is claimed to be true or good solely because a majority or many people believe it to be so.";
    string prompt = "Check if the following text matches the following logical fallacies and limit the response to yes or no: " + fallacy_definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    //string* fallacy_definition_words = _Utilities::String2Words(fallacy_definition);
    //double* definition_vector = _NLU::getSentenceVectors(fallacy_definition_words);
    //double* definition_sentence_vector = _Utilities::VectorAverage(definition_vector, sizeof(fallacy_definition_words));
    //string* sentence_words = _Utilities::String2Words(fallacy_definition);
    //double* sentence_vector = _NLU::getSentenceVectors(sentence_words);
    //double* sentence_sentence_vector = _Utilities::VectorAverage(sentence_vector, sizeof(sentence_words));
    //int size = sizeof(definition_vector) / sizeof(definition_vector[0]);
    //double cosine_similarity = _Math::cosineSimilarity(definition_vector, sentence_vector, size);

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

//  Association fallacy(guilt by association and honor by association) – arguing that because two things share(or are implied to share) some property, they are the same..
bool _Fallacy::AssociationFallacy(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string model = "llama3";
    string fallacy_definition = "arguing that because two things share some property, they are the same";
    string prompt = "Check if the following text matches the following logical fallacies and limit the response to yes or no: " + fallacy_definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    //string* fallacy_definition_words = _Utilities::String2Words(fallacy_definition);
    //double* definition_vector = _NLU::getSentenceVectors(fallacy_definition_words);
    //double* definition_sentence_vector = _Utilities::VectorAverage(definition_vector, sizeof(fallacy_definition_words));
    //string* sentence_words = _Utilities::String2Words(fallacy_definition);
    //double* sentence_vector = _NLU::getSentenceVectors(sentence_words);
    //double* sentence_sentence_vector = _Utilities::VectorAverage(sentence_vector, sizeof(sentence_words));
    //int size = sizeof(definition_vector) / sizeof(definition_vector[0]);
    //double cosine_similarity = _Math::cosineSimilarity(definition_vector, sentence_vector, size);

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

//  Ipse dixit(bare assertion fallacy) – a claim that is presented as true without support, as self - evidently true, or as dogmatically true.This fallacy relies on the implied expertise of the speaker or on an unstated truism.
bool _Fallacy::IpseDixit(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string model = "llama3";
    string fallacy_definition = "a claim that is presented as true without support";
    string prompt = "Check if the following text matches the following logical fallacies and limit the response to yes or no: " + fallacy_definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    //string* fallacy_definition_words = _Utilities::String2Words(fallacy_definition);
    //double* definition_vector = _NLU::getSentenceVectors(fallacy_definition_words);
    //double* definition_sentence_vector = _Utilities::VectorAverage(definition_vector, sizeof(fallacy_definition_words));
    //string* sentence_words = _Utilities::String2Words(fallacy_definition);
    //double* sentence_vector = _NLU::getSentenceVectors(sentence_words);
    //double* sentence_sentence_vector = _Utilities::VectorAverage(sentence_vector, sizeof(sentence_words));
    //int size = sizeof(definition_vector) / sizeof(definition_vector[0]);
    //double cosine_similarity = _Math::cosineSimilarity(definition_vector, sentence_vector, size);

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

//  Bulverism(psychogenetic fallacy) – inferring why an argument is being used, associating it to some psychological reason, then assuming it is invalid as a result.The assumption that if the origin of an idea comes from a biased mind, then the idea itself must also be a falsehood.
bool _Fallacy::PsychogeneticFallacy(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string model = "llama3";
    string fallacy_definition = "inferring why an argument is being used";
    string prompt = "Check if the following text matches the following logical fallacies and limit the response to yes or no: " + fallacy_definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    //string* fallacy_definition_words = _Utilities::String2Words(fallacy_definition);
    //double* definition_vector = _NLU::getSentenceVectors(fallacy_definition_words);
    //double* definition_sentence_vector = _Utilities::VectorAverage(definition_vector, sizeof(fallacy_definition_words));
    //string* sentence_words = _Utilities::String2Words(fallacy_definition);
    //double* sentence_vector = _NLU::getSentenceVectors(sentence_words);
    //double* sentence_sentence_vector = _Utilities::VectorAverage(sentence_vector, sizeof(sentence_words));
    //int size = sizeof(definition_vector) / sizeof(definition_vector[0]);
    //double cosine_similarity = _Math::cosineSimilarity(definition_vector, sentence_vector, size);

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

//  Chronological snobbery – a thesis is deemed incorrect because it was commonly held when something else, known to be false, was also commonly held.
bool _Fallacy::ChronologicalSnobbery(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string model = "llama3";
    string fallacy_definition = "thesis is deemed incorrect because it was commonly held when something else, known to be false, was also commonly held";
    string prompt = "Check if the following text matches the following logical fallacies and limit the response to yes or no: " + fallacy_definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    //string* fallacy_definition_words = _Utilities::String2Words(fallacy_definition);
    //double* definition_vector = _NLU::getSentenceVectors(fallacy_definition_words);
    //double* definition_sentence_vector = _Utilities::VectorAverage(definition_vector, sizeof(fallacy_definition_words));
    //string* sentence_words = _Utilities::String2Words(fallacy_definition);
    //double* sentence_vector = _NLU::getSentenceVectors(sentence_words);
    //double* sentence_sentence_vector = _Utilities::VectorAverage(sentence_vector, sizeof(sentence_words));
    //int size = sizeof(definition_vector) / sizeof(definition_vector[0]);
    //double cosine_similarity = _Math::cosineSimilarity(definition_vector, sentence_vector, size);

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

//  Fallacy of relative privation(also known as "appeal to worse problems" or "not as bad as") – dismissing an argument or complaint due to what are perceived to be more important problems.First World problems are a subset of this fallacy.
bool _Fallacy::FallacyOfRelativePrivatation(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string model = "llama3";
    string fallacy_definition = "dismissing an argument or complaint due to what are perceived to be more important problems.First World problems are a subset of this fallacy.";
    string prompt = "Check if the following text matches the following logical fallacies and limit the response to yes or no: " + fallacy_definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    //string* fallacy_definition_words = _Utilities::String2Words(fallacy_definition);
    //double* definition_vector = _NLU::getSentenceVectors(fallacy_definition_words);
    //double* definition_sentence_vector = _Utilities::VectorAverage(definition_vector, sizeof(fallacy_definition_words));
    //string* sentence_words = _Utilities::String2Words(fallacy_definition);
    //double* sentence_vector = _NLU::getSentenceVectors(sentence_words);
    //double* sentence_sentence_vector = _Utilities::VectorAverage(sentence_vector, sizeof(sentence_words));
    //int size = sizeof(definition_vector) / sizeof(definition_vector[0]);
    //double cosine_similarity = _Math::cosineSimilarity(definition_vector, sentence_vector, size);

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

//  Genetic fallacy – a conclusion is suggested based solely on something or someone's origin rather than its current meaning or context.
bool _Fallacy::GeneticFallacy(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string model = "llama3";
    string fallacy_definition = "conclusion is suggested based solely on something or someones origin rather than its current meaning or context";
    string prompt = "Check if the following text matches the following logical fallacies and limit the response to yes or no: " + fallacy_definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    //string* fallacy_definition_words = _Utilities::String2Words(fallacy_definition);
    //double* definition_vector = _NLU::getSentenceVectors(fallacy_definition_words);
    //double* definition_sentence_vector = _Utilities::VectorAverage(definition_vector, sizeof(fallacy_definition_words));
    //string* sentence_words = _Utilities::String2Words(fallacy_definition);
    //double* sentence_vector = _NLU::getSentenceVectors(sentence_words);
    //double* sentence_sentence_vector = _Utilities::VectorAverage(sentence_vector, sizeof(sentence_words));
    //int size = sizeof(definition_vector) / sizeof(definition_vector[0]);
    //double cosine_similarity = _Math::cosineSimilarity(definition_vector, sentence_vector, size);

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

//  I'm entitled to my opinion – a person discredits any opposition by claiming that they are entitled to their opinion.
bool _Fallacy::EntitledToOpiniom(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string model = "llama3";
    string fallacy_definition = "a person discredits any opposition by claiming that they are entitled to their opinion.";
    string prompt = "Check if the following text matches the following logical fallacies and limit the response to yes or no: " + fallacy_definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    //string* fallacy_definition_words = _Utilities::String2Words(fallacy_definition);
    //double* definition_vector = _NLU::getSentenceVectors(fallacy_definition_words);
    //double* definition_sentence_vector = _Utilities::VectorAverage(definition_vector, sizeof(fallacy_definition_words));
    //string* sentence_words = _Utilities::String2Words(fallacy_definition);
    //double* sentence_vector = _NLU::getSentenceVectors(sentence_words);
    //double* sentence_sentence_vector = _Utilities::VectorAverage(sentence_vector, sizeof(sentence_words));
    //int size = sizeof(definition_vector) / sizeof(definition_vector[0]);
    //double cosine_similarity = _Math::cosineSimilarity(definition_vector, sentence_vector, size);

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

//  Moralistic fallacy – inferring factual conclusions from evaluative premises, in violation of fact - value distinction; e.g.making statements about what is, on the basis of claims about what ought to be.This is the inverse of the naturalistic fallacy.
//bool _Fallacy::MoralisticFallacy(string text)
//{
//    // Get the definition for the fallacy
//    // 1. Fallacy Additive
//    // 2. Fallacy Additive Average
//    string fallacy_definition = "inferring factual conclusions from evaluative premises, in violation of fact - value distinction";
//    double* definition = _NLU::getSentenceVectors(fallacy_definition);
//    double* definition_additive = _NLU::getSentenceVectorsAdditive(fallacy_definition);
//    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(fallacy_definition);
//    double* result = _NLU::VectorAddition(definition, result);
//    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
//    double* result_average = _NLU::VectorAddition(definition_average, result_average);
//    string* fallacy_texts;
//    string* fallacy_words;
//
//    fallacy_texts = _Utilities::String2Words(text);
//
//    for (int x = 0; x <= sizeof(fallacy_texts); x++)
//    {
//
//    }
//}

//  Naturalistic fallacy – inferring evaluative conclusions from purely factual premises in violation of fact - value distinction.Naturalistic fallacy(sometimes confused with appeal to nature) is the inverse of moralistic fallacy.
bool _Fallacy::NaturalisticFallacy(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string model = "llama3";
    string fallacy_definition = "inferring evaluative conclusions from purely factual premises in violation of fact - value distinction";
    string prompt = "Check if the following text matches the following logical fallacies and limit the response to yes or no: " + fallacy_definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    //string* fallacy_definition_words = _Utilities::String2Words(fallacy_definition);
    //double* definition_vector = _NLU::getSentenceVectors(fallacy_definition_words);
    //double* definition_sentence_vector = _Utilities::VectorAverage(definition_vector, sizeof(fallacy_definition_words));
    //string* sentence_words = _Utilities::String2Words(fallacy_definition);
    //double* sentence_vector = _NLU::getSentenceVectors(sentence_words);
    //double* sentence_sentence_vector = _Utilities::VectorAverage(sentence_vector, sizeof(sentence_words));
    //int size = sizeof(definition_vector) / sizeof(definition_vector[0]);
    //double cosine_similarity = _Math::cosineSimilarity(definition_vector, sentence_vector, size);

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

//  Is–ought fallacy – statements about what is, on the basis of claims about what ought to be.
bool _Fallacy::IsOughtFallacy(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string model = "llama3";
    string fallacy_definition = "statements about what is, on the basis of claims about what ought to be";
    string prompt = "Check if the following text matches the following logical fallacies and limit the response to yes or no: " + fallacy_definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    //string* fallacy_definition_words = _Utilities::String2Words(fallacy_definition);
    //double* definition_vector = _NLU::getSentenceVectors(fallacy_definition_words);
    //double* definition_sentence_vector = _Utilities::VectorAverage(definition_vector, sizeof(fallacy_definition_words));
    //string* sentence_words = _Utilities::String2Words(fallacy_definition);
    //double* sentence_vector = _NLU::getSentenceVectors(sentence_words);
    //double* sentence_sentence_vector = _Utilities::VectorAverage(sentence_vector, sizeof(sentence_words));
    //int size = sizeof(definition_vector) / sizeof(definition_vector[0]);
    //double cosine_similarity = _Math::cosineSimilarity(definition_vector, sentence_vector, size);

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

//  Naturalistic fallacy fallacy(anti - naturalistic fallacy) – inferring an impossibility to infer any instance of ought from is from the general invalidity of is - ought fallacy, mentioned above.
bool _Fallacy::NaturalisticFallacyFallacy (string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string model = "llama3";
    string fallacy_definition = "inferring an impossibility to infer any instance of ought from is from the general invalidity of is - ought fallacy, mentioned above.";
    string prompt = "Check if the following text matches the following logical fallacies and limit the response to yes or no: " + fallacy_definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);
    
    //string* fallacy_definition_words = _Utilities::String2Words(fallacy_definition);
    //double* definition_vector = _NLU::getSentenceVectors(fallacy_definition_words);
    //double* definition_sentence_vector = _Utilities::VectorAverage(definition_vector, sizeof(fallacy_definition_words));
    //string* sentence_words = _Utilities::String2Words(fallacy_definition);
    //double* sentence_vector = _NLU::getSentenceVectors(sentence_words);
    //double* sentence_sentence_vector = _Utilities::VectorAverage(sentence_vector, sizeof(sentence_words));
    //int size = sizeof(definition_vector) / sizeof(definition_vector[0]);
    //double cosine_similarity = _Math::cosineSimilarity(definition_vector, sentence_vector, size);

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

//  Straw man fallacy – misrepresenting an opponent's argument by broadening or narrowing the scope of a premise and refuting a weaker version (e.g.: saying “You tell us that A is the right thing to do, but the real reason you want us to do A is that you would personally profit from it).
bool _Fallacy::StrawManFallacy(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string model = "llama3";
    string fallacy_definition = "misrepresenting an opponent's argument by broadening or narrowing the scope of a premise and refuting a weaker version";
    string prompt = "Check if the following text matches the following logical fallacies and limit the response to yes or no: " + fallacy_definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);
    
    //string* fallacy_definition_words = _Utilities::String2Words(fallacy_definition);
    //double* definition_vector = _NLU::getSentenceVectors(fallacy_definition_words);
    //double* definition_sentence_vector = _Utilities::VectorAverage(definition_vector, sizeof(fallacy_definition_words));
    //string* sentence_words = _Utilities::String2Words(fallacy_definition);
    //double* sentence_vector = _NLU::getSentenceVectors(sentence_words);
    //double* sentence_sentence_vector = _Utilities::VectorAverage(sentence_vector, sizeof(sentence_words));
    //int size = sizeof(definition_vector) / sizeof(definition_vector[0]);
    //double cosine_similarity = _Math::cosineSimilarity(definition_vector, sentence_vector, size);

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

//  Texas sharpshooter fallacy – improperly asserting a cause to explain a cluster of data.
bool _Fallacy::TexasSharpshooterFallacy(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string model = "llama3";
    string fallacy_definition = "improperly asserting a cause to explain a cluster of data.";
    string prompt = "Check if the following text matches the following logical fallacies and limit the response to yes or no: " + fallacy_definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);
    
    //string* fallacy_definition_words = _Utilities::String2Words(fallacy_definition);
    //double* definition_vector = _NLU::getSentenceVectors(fallacy_definition_words);
    //double* definition_sentence_vector = _Utilities::VectorAverage(definition_vector, sizeof(fallacy_definition_words));
    //string* sentence_words = _Utilities::String2Words(fallacy_definition);
    //double* sentence_vector = _NLU::getSentenceVectors(sentence_words);
    //double* sentence_sentence_vector = _Utilities::VectorAverage(sentence_vector, sizeof(sentence_words));
    //int size = sizeof(definition_vector) / sizeof(definition_vector[0]);
    //double cosine_similarity = _Math::cosineSimilarity(definition_vector, sentence_vector, size);

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

//  Tu quoque('you too' – appeal to hypocrisy, whataboutism) – stating that a position is false, wrong, or should be disregarded because its proponent fails to act consistently in accordance with it.
bool _Fallacy::AppealToHypocrisy(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string model = "llama3";
    string fallacy_definition = "stating that a position is false, wrong, or should be disregarded because its proponent fails to act consistently in accordance with it.";
    string prompt = "Check if the following text matches the following logical fallacies and limit the response to yes or no: " + fallacy_definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);
    
    //string* fallacy_definition_words = _Utilities::String2Words(fallacy_definition);
    //double* definition_vector = _NLU::getSentenceVectors(fallacy_definition_words);
    //double* definition_sentence_vector = _Utilities::VectorAverage(definition_vector, sizeof(fallacy_definition_words));
    //string* sentence_words = _Utilities::String2Words(fallacy_definition);
    //double* sentence_vector = _NLU::getSentenceVectors(sentence_words);
    //double* sentence_sentence_vector = _Utilities::VectorAverage(sentence_vector, sizeof(sentence_words));
    //int size = sizeof(definition_vector) / sizeof(definition_vector[0]);
    //double cosine_similarity = _Math::cosineSimilarity(definition_vector, sentence_vector, size);

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

//  Two wrongs make a right – assuming that, if one wrong is committed, another wrong will rectify it.
bool _Fallacy::TwoWrongsMakeARight(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string model = "llama3";
    string fallacy_definition = "assuming that, if one wrong is committed, another wrong will rectify it.";
    string prompt = "Check if the following text matches the following logical fallacies and limit the response to yes or no: " + fallacy_definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    //string* fallacy_definition_words = _Utilities::String2Words(fallacy_definition);
    //double* definition_vector = _NLU::getSentenceVectors(fallacy_definition_words);
    //double* definition_sentence_vector = _Utilities::VectorAverage(definition_vector, sizeof(fallacy_definition_words));
    //string* sentence_words = _Utilities::String2Words(fallacy_definition);
    //double* sentence_vector = _NLU::getSentenceVectors(sentence_words);
    //double* sentence_sentence_vector = _Utilities::VectorAverage(sentence_vector, sizeof(sentence_words));
    //int size = sizeof(definition_vector) / sizeof(definition_vector[0]);
    //double cosine_similarity = _Math::cosineSimilarity(definition_vector, sentence_vector, size);

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

//  Vacuous truth – a claim that is technically true but meaningless, in the form no A in B has C, when there is no A in B.For example, claiming that no mobile phones in the room are on when there are no mobile phones in the room.
bool _Fallacy::VacuousTruth(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string model = "llama3";
    string fallacy_definition = "a claim that is technically true but meaningless";
    string prompt = "Check if the following text matches the following logical fallacies and limit the response to yes or no: " + fallacy_definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    //string* fallacy_definition_words = _Utilities::String2Words(fallacy_definition);
    //double* definition_vector = _NLU::getSentenceVectors(fallacy_definition_words);
    //double* definition_sentence_vector = _Utilities::VectorAverage(definition_vector, sizeof(fallacy_definition_words));
    //string* sentence_words = _Utilities::String2Words(fallacy_definition);
    //double* sentence_vector = _NLU::getSentenceVectors(sentence_words);
    //double* sentence_sentence_vector = _Utilities::VectorAverage(sentence_vector, sizeof(sentence_words));
    //int size = sizeof(definition_vector) / sizeof(definition_vector[0]);
    //double cosine_similarity = _Math::cosineSimilarity(definition_vector, sentence_vector, size);

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