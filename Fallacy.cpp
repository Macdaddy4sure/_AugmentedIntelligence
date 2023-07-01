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

#include "AugmentedIntelligence.h"
#include "Fallacies.h"
#include "Working-Memory.h"
#include "Short-Term Memory.h"
#include "Long-Term Memory.h"
#include "Reference.h"
#include "NLP.h"
#include "NLU.h"
#include "Variables.h"
#include "Settings.h"
#include "Utilities.h"

using namespace std;

// Purpose: Check if the argument is a deductive argument
// Purpose: Check if the argument is a inductive argument

// This function will be a simple fallacy check for actions, speach and writing
string _Fallacy::FallacyCheck(string text)
{
    if (_Fallacy::AffirmingTheConsequent(text))
    {
        cout << "Affirming the Consequent" << endl;
    }
    if (_Fallacy::DenyingTheAntecedent(text))
    {
        cout << "Denying The Antecedent" << endl;
    }
    if (_Fallacy::AffirmingADisjunct(text))
    {
        cout << "Affirming A Disjunct" << endl;
    }
    if (_Fallacy::DenyingAConjunct(text))
    {
        cout << "Denying A Conjunct" << endl;
    }
    if (_Fallacy::FallacyOfTheUndistributedMiddle(text))
    {
        cout << "Fallacy Of The Undistributed Middle" << endl;
    }
    if (_Fallacy::AppealToProbability(text))
    {
        cout << "Appeal To Probability" << endl;
    }
    if (_Fallacy::ArgumentFromFallacy(text))
    {
        cout << "Argument From Fallacy" << endl;
    }
    if (_Fallacy::BaseRateFallacy(text))
    {
        cout << "Base Rate Fallacy" << endl;
    }
    if (_Fallacy::ConjunctionFallacy(text))
    {
        cout << "Conjunction Fallacy" << endl;
    }
    if (_Fallacy::MaskedManFallacy(text))
    {
        cout << "Masked Man Fallacy" << endl;
    }
    if (_Fallacy::QualificationFallacies(text))
    {
        cout << "Qualification Fallacies" << endl;
    }
    if (_Fallacy::ExistentialFallacy(text))
    {
        cout << "Existential Fallacy" << endl;
    }
    if (_Fallacy::AffirmativeConclusionFromANegativePremise(text))
    {
        cout << "Affirmative Conclusion From A Negative Premise" << endl;
    }
    if (_Fallacy::FallacyOfExclusivePremises(text))
    {
        cout << "Fallacy Of Exclusive Premises" << endl;
    }
    if (_Fallacy::FallacyOfFourTerms(text))
    {
        cout << "Fallacy Of Four Terms" << endl;
    }
    if (_Fallacy::IllicitMajor(text))
    {
        cout << "Illicit Major" << endl;
    }
    if (_Fallacy::IllicitMinor(text))
    {
        cout << "Illicit Minor" << endl;
    }
    if (_Fallacy::NegativeConclusionFromAffirmativePremises(text))
    {
        cout << "Negative Conclusion From Affirmative Premises" << endl;
    }
    if (_Fallacy::ModalScopeFallacy(text))
    {
        cout << "Modal Scope Fallacy" << endl;
    }
    if (_Fallacy::ArgumentToModeration(text))
    {
        cout << "Argument To Moderation" << endl;
    }
    if (_Fallacy::ContinuumFallacy(text))
    {
        cout << "Continuum Fallacy" << endl;
    }
    if (_Fallacy::SuppressedCorrelative(text))
    {
        cout << "Suppressed Correlative" << endl;
    }
    if (_Fallacy::DefinistFallacy(text))
    {
        cout << "Definist Fallacy" << endl;
    }
    if (_Fallacy::DivineFallacy(text))
    {
        cout << "Divine Fallacy" << endl;
    }
    if (_Fallacy::DoubleCounting(text))
    {
        cout << "Double Counting" << endl;
    }
    if (_Fallacy::Equivacation(text))
    {
        cout << "Equivacation" << endl;
    }
    if (_Fallacy::AmbiguousMiddleTerm(text))
    {
        cout << "Ambiguous Middle Term" << endl;
    }
    if (_Fallacy::DefinitionalRetreat(text))
    {
        cout << "Definitional Retreat" << endl;
    }
    if (_Fallacy::MotteAndBaileyFallacy(text))
    {
        cout << "Motte And Bailey Fallacy" << endl;
    }
    if (_Fallacy::FallacyOfAccent(text))
    {
        cout << "Fallacy Of Accent" << endl;
    }
    if (_Fallacy::PersuasiveDefinition(text))
    {
        cout << "Persuasive Definition" << endl;
    }
    if (_Fallacy::EconogicalFallacy(text))
    {
        cout << "Econogical Fallacy" << endl;
    }
    if (_Fallacy::EtynologicalFallacy(text))
    {
        cout << "Etynological Fallacy" << endl;
    }
    if (_Fallacy::FallacyOfComposition(text))
    {
        cout << "Fallacy Of Composition" << endl;
    }
    if (_Fallacy::FallacyOfDivision(text))
    {
        cout << "Fallacy Of Division" << endl;
    }
    if (_Fallacy::FalseAttribuation(text))
    {
        cout << "False Attribuation" << endl;
    }
    if (_Fallacy::FallacyOfQuotingOutOfContext(text))
    {
        cout << "Fallacy Of Quoting Out Of Context" << endl;
    }
    if (_Fallacy::FalseDilemma(text))
    {
        cout << "False Dilemma" << endl;
    }
    if (_Fallacy::FalseEquivalence(text))
    {
        cout << "False Equivalence" << endl;
    }
    if (_Fallacy::FeedbackFallacy(text))
    {
        cout << "Feedback Fallacy" << endl;
    }
    if (_Fallacy::HistorianFallacy(text))
    {
        cout << "Historian Fallacy" << endl;
    }
    if (_Fallacy::HistoricalFallacy(text))
    {
        cout << "Historical Fallacy" << endl;
    }
    if (_Fallacy::BaconianFallacy(text))
    {
        cout << "Baconian Fallacy" << endl;
    }
    if (_Fallacy::HomuculusFallacy(text))
    {
        cout << "Homuculus Fallacy" << endl;
    }
    if (_Fallacy::InflationOfConflect(text))
    {
        cout << "Inflation Of Conflect" << endl;
    }
    if (_Fallacy::IfByWhiskey(text))
    {
        cout << "If By Whiskey" << endl;
    }
    if (_Fallacy::IncompleteComparison(text))
    {
        cout << "Incomplete Comparison" << endl;
    }
    if (_Fallacy::LumpOfLabourFallacy(text))
    {
        cout << "Lump Of Labour Fallacy" << endl;
    }
    if (_Fallacy::KettleLogic(text))
    {
        cout << "Kettle Logic" << endl;
    }
    if (_Fallacy::LudicFallacy(text))
    {
        cout << "Ludic Fallacy" << endl;
    }
    if (_Fallacy::QuantitativeFallacy(text))
    {
        cout << "Quantitative Fallacy" << endl;
    }
    if (_Fallacy::MindProjectionFallacy(text))
    {
        cout << "Mind Projection Fallacy" << endl;
    }
    if (_Fallacy::MoralisticFallacy(text))
    {
        cout << "Moralistic Fallacy" << endl;
    }
    if (_Fallacy::MovingTheGoalpostsFallacy(text))
    {
        cout << "Moving The Goalposts Fallacy" << endl;
    }
    if (_Fallacy::NirvanaFallacy(text))
    {
        cout << "Nirvana Fallacy" << endl;
    }
    if (_Fallacy::ProofByAssertion(text))
    {
        cout << "Proof By Assertion" << endl;
    }
    if (_Fallacy::ProsecutorFallacy(text))
    {
        cout << "Prosecutor Fallacy" << endl;
    }
    if (_Fallacy::ProvingTooMuch(text))
    {
        cout << "Proving Too Much" << endl;
    }
    if (_Fallacy::PsycholoistFallacy(text))
    {
        cout << "Psycholoist Fallacy" << endl;
    }
    if (_Fallacy::ReferentialFallacy(text))
    {
        cout << "Referential Fallacy" << endl;
    }
    if (_Fallacy::Reification(text))
    {
        cout << "Reification" << endl;
    }
    if (_Fallacy::RetrospectiveDeterminism(text))
    {
        cout << "Retrospective Determinism" << endl;
    }
    if (_Fallacy::SlipperySlope(text))
    {
        cout << "Slippery Slope" << endl;
    }
    if (_Fallacy::SpecialPleading(text))
    {
        cout << "Special Pleading" << endl;
    }
    if (_Fallacy::BeggingTheQuestion(text))
    {
        cout << "Begging The Question" << endl;
    }
    if (_Fallacy::LoadedLabelFallacy(text))
    {
        cout << "Loaded Label Fallacy" << endl;
    }
    if (_Fallacy::CircularReasoning(text))
    {
        cout << "Circular Reasoning" << endl;
    }
    if (_Fallacy::FallacyOfManyQuestions(text))
    {
        cout << "Fallacy Of Many Questions" << endl;
    }
    if (_Fallacy::FaultyGeneralization(text))
    {
        cout << "Faulty Generalization" << endl;
    }
    if (_Fallacy::AccidentFallacy(text))
    {
        cout << "Accident Fallacy" << endl;
    }
    if (_Fallacy::NoTrueScotsmanFallacy(text))
    {
        cout << "No True Scotsman Fallacy" << endl;
    }
    if (_Fallacy::CherryPickingFallacy(text))
    {
        cout << "Cherry Picking Fallacy" << endl;
    }
    if (_Fallacy::SurvivorshipBias(text))
    {
        cout << "Survivorship Bias" << endl;
    }
    if (_Fallacy::FalseAnalogy(text))
    {
        cout << "False Analogy" << endl;
    }
    if (_Fallacy::HastyGeneralization(text))
    {
        cout << "Hasty Generalization" << endl;
    }
    if (_Fallacy::InductiveFallacy(text))
    {
        cout << "Inductive Fallacy" << endl;
    }
    if (_Fallacy::MisleadingVividness(text))
    {
        cout << "Misleading Vividness" << endl;
    }
    if (_Fallacy::OverWhelmingException(text))
    {
        cout << "Over Whelming Exception" << endl;
    }
    if (_Fallacy::ThoughtTerminatingCliche(text))
    {
        cout << "Thought Terminating Cliche" << endl;
    }
    if (_Fallacy::QuestionableCause(text))
    {
        cout << "Questionable Cause" << endl;
    }
    if (_Fallacy::CumHocErgoPropterHocFallacy(text))
    {
        cout << "Cum Hoc Ergo Propter Hoc Fallacy" << endl;
    }
    if (_Fallacy::PostHocErgoPropterHoc(text))
    {
        cout << "Post Hoc Ergo Propter Hoc" << endl;
    }
    if (_Fallacy::WrongDirectionFallacy(text))
    {
        cout << "Wrong Direction Fallacy" << endl;
    }
    if (_Fallacy::CausalOversimplification(text))
    {
        cout << "Causal Oversimplification" << endl;
    }
    if (_Fallacy::FurtiveFallacy(text))
    {
        cout << "Furtive Fallacy" << endl;
    }
    if (_Fallacy::GamblerFallacy(text))
    {
        cout << "Gambler Fallacy" << endl;
    }
    if (_Fallacy::MagicalThinking(text))
    {
        cout << "Magical Thinking" << endl;
    }
    if (_Fallacy::RegressionFallacy(text))
    {
        cout << "Regression Fallacy" << endl;
    }
    if (_Fallacy::AppealToTheStoneFallacy(text))
    {
        cout << "Appeal To The Stone Fallacy" << endl;
    }
    if (_Fallacy::ArgumentFromIgnorance(text))
    {
        cout << "Argument From Ignorance" << endl;
    }
    if (_Fallacy::ArgumentFromIncredulity(text))
    {
        cout << "Argument From Incredulity" << endl;
    }
    if (_Fallacy::ArgumentFromRepitition(text))
    {
        cout << "Argument From Repitition" << endl;
    }
    if (_Fallacy::ArgumentFromSilence(text))
    {
        cout << "Argument From Silence" << endl;
    }
    if (_Fallacy::IrrelevantConclusionFallacy(text))
    {
        cout << "Irrelevant Conclusion Fallacy" << endl;
    }
    if (_Fallacy::RedHerringFallacy(text))
    {
        cout << "RedHerring Fallacy" << endl;
    }
    if (_Fallacy::AdHominem(text))
    {
        cout << "Ad Hominem" << endl;
    }
    if (_Fallacy::CircumstantialAdHominem(text))
    {
        cout << "Circumstantial Ad Hominem" << endl;
    }
    if (_Fallacy::PoisoningTheWell(text))
    {
        cout << "Poisoning The Well" << endl;
    }
    if (_Fallacy::AppealToMotive(text))
    {
        cout << "Appeal To Motive" << endl;
    }
    if (_Fallacy::WafkaTrapping(text))
    {
        cout << "Wafka Trapping" << endl;
    }
    if (_Fallacy::TonePolicing(text))
    {
        cout << "Tone Policing" << endl;
    }
    if (_Fallacy::TraitorousCriticFallacy(text))
    {
        cout << "Traitorous Critic Fallacy" << endl;
    }
    if (_Fallacy::AppealToAuthorityFallacy(text))
    {
        cout << "Appeal To Authority Fallacy" << endl;
    }
    if (_Fallacy::AppealToAccomplishmentFallacy(text))
    {
        cout << "Appeal To Accomplishment Fallacy" << endl;
    }
    if (_Fallacy::CourtiersReply(text))
    {
        cout << "Courtiers Reply" << endl;
    }
    if (_Fallacy::AppealToConsequences(text))
    {
        cout << "Appeal To Consequences" << endl;
    }
    if (_Fallacy::AppealToEmotion(text))
    {
        cout << "Appeal To Emotion" << endl;
    }
    if (_Fallacy::AppealToFear(text))
    {
        cout << "Appeal To Fear" << endl;
    }
    if (_Fallacy::AppealToFlattery(text))
    {
        cout << "Appeal To Flattery" << endl;
    }
    if (_Fallacy::AppealToPity(text))
    {
        cout << "Appeal To Pity" << endl;
    }
    if (_Fallacy::AppealToRidicule(text))
    {
        cout << "Appeal To Ridicule" << endl;
    }
    if (_Fallacy::AppealToSpite(text))
    {
        cout << "Appeal To Spite" << endl;
    }
    if (_Fallacy::JudgementalLanguage(text))
    {
        cout << "Judgemental Language" << endl;
    }
    if (_Fallacy::PoohPooh(text))
    {
        cout << "Pooh Pooh" << endl;
    }
    if (_Fallacy::WishfulThinking(text))
    {
        cout << "Wishful Thinking" << endl;
    }
    if (_Fallacy::AppealToNature(text))
    {
        cout << "Appeal To Nature" << endl;
    }
    if (_Fallacy::AppealToNovelty(text))
    {
        cout << "Appeal To Novelty" << endl;
    }
    if (_Fallacy::AppealToPoverty(text))
    {
        cout << "Appeal To Poverty" << endl;
    }
    if (_Fallacy::AppealToTradition(text))
    {
        cout << "Appeal To Tradition" << endl;
    }
    if (_Fallacy::AppealToWealth(text))
    {
        cout << "Appeal To Wealth" << endl;
    }
    if (_Fallacy::AppealToThreat(text))
    {
        cout << "Appeal To Threat" << endl;
    }
    if (_Fallacy::ArgumentumAdPopulum(text))
    {
        cout << "Argumentum Ad Populum" << endl;
    }
    if (_Fallacy::AssociationFallacy(text))
    {
        cout << "Association Fallacy" << endl;
    }
    if (_Fallacy::IpseDixit(text))
    {
        cout << "Ipse Dixit" << endl;
    }
    if (_Fallacy::PsychogeneticFallacy(text))
    {
        cout << "Psychogenetic Fallacy" << endl;
    }
    if (_Fallacy::ChronologicalSnobbery(text))
    {
        cout << "Chronological Snobbery" << endl;
    }
    if (_Fallacy::FallacyOfRelativePrivatation(text))
    {
        cout << "Fallacy Of Relative Privatation" << endl;
    }
    if (_Fallacy::GeneticFallacy(text))
    {
        cout << "Genetic Fallacy" << endl;
    }
    if (_Fallacy::EntitledToOpiniom(text))
    {
        cout << "Entitled To Opiniom" << endl;
    }
    if (_Fallacy::MoralisticFallacy(text))
    {
        cout << "Moralistic Fallacy" << endl;
    }
    if (_Fallacy::NaturalisticFallacy(text))
    {
        cout << "Naturalistic Fallacy" << endl;
    }
    if (_Fallacy::IsOughtFallacy(text))
    {
        cout << "Is Ought Fallacy" << endl;
    }
    if (_Fallacy::StrawManFallacy(text))
    {
        cout << "Straw Man Fallacy" << endl;
    }
    if (_Fallacy::TexasSharpshooterFallacy(text))
    {
        cout << "Texas Sharpshooter Fallacy" << endl;
    }
    if (_Fallacy::AppealToHypocrisy(text))
    {
        cout << "Appeal To Hypocrisy" << endl;
    }
    if (_Fallacy::TwoWrongsMakeARight(text))
    {
        cout << "Two Wrongs Make A Right" << endl;
    }
    if (_Fallacy::VacuousTruth(text))
    {
        cout << "Vacuous Truth" << endl;
    }
}
//  Affirming the Consequent - the antecedent in an indicative conditional is claimed to be true because the consequent is true; if A, then B; B, therefore A.
bool _Fallacy::AffirmingTheConsequent(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string fallacy_definition = "the antecedent in an indicative conditional is claimed to be true because the consequent is true";
    double* definition = _NLU::getSentenceVectors(fallacy_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(fallacy_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(fallacy_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
    string* fallacy_texts;
    string* fallacy_words;

    fallacy_texts = _Utilities::String2Words(text);

    for (int x = 0; x <= sizeof(fallacy_texts); x++)
    {

    }
}
 
//  Denying the Antecedent - the consequent in an indicative conditional is claimed to be false because the antecedent is false; if A, then B; not A, therefore not B.
bool _Fallacy::DenyingTheAntecedent(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string fallacy_definition = "the consequent in an indicative conditional is claimed to be false because the antecedent is false";
    double* definition = _NLU::getSentenceVectors(fallacy_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(fallacy_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(fallacy_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
    string* fallacy_texts;
    string* fallacy_words;

    fallacy_texts = _Utilities::String2Words(text);

    for (int x = 0; x <= sizeof(fallacy_texts); x++)
    {

    }
}

//  Affirming a Disjunct - concluding that one disjunct of a logical disjunction must be false because the other disjunct is true; A or B; A, therefore not B.
bool _Fallacy::AffirmingADisjunct(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string fallacy_definition = "concluding that one disjunct of a logical disjunction must be false because the other disjunct is true";
    double* definition = _NLU::getSentenceVectors(fallacy_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(fallacy_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(fallacy_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
    string* fallacy_texts;
    string* fallacy_words;

    fallacy_texts = _Utilities::String2Words(text);

    for (int x = 0; x <= sizeof(fallacy_texts); x++)
    {

    }
}

//  Denying a Conjunct - False Dilema
bool _Fallacy::DenyingAConjunct(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string fallacy_definition = "False Dilema";
    double* definition = _NLU::getSentenceVectors(fallacy_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(fallacy_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(fallacy_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
    string* fallacy_texts;
    string* fallacy_words;

    fallacy_texts = _Utilities::String2Words(text);

    for (int x = 0; x <= sizeof(fallacy_texts); x++)
    {

    }
}

//  Fallacy of the Undistributed Middle - a fallacy that is committed when the middle term in a categorical syllogism is not distributed.It is a syllogistic fallacy.More specifically it is also a form of non sequitur.
bool _Fallacy::FallacyOfTheUndistributedMiddle(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string fallacy_definition = "the middle term in a categorical syllogism is not distributed";
    double* definition = _NLU::getSentenceVectors(fallacy_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(fallacy_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(fallacy_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
    string* fallacy_texts;
    string* fallacy_words;

    fallacy_texts = _Utilities::String2Words(text);

    for (int x = 0; x <= sizeof(fallacy_texts); x++)
    {

    }
}

//  Appeal to probability – a statement that takes something for granted because it would probably be the case (or might be the case).
bool _Fallacy::AppealToProbability(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string fallacy_definition = "if an argument is fallacious, then the conclusion is false";
    double* definition = _NLU::getSentenceVectors(fallacy_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(fallacy_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(fallacy_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
    string* fallacy_texts;
    string* fallacy_words;

    fallacy_texts = _Utilities::String2Words(text);

    for (int x = 0; x <= sizeof(fallacy_texts); x++)
    {

    }
}

//  Argument from fallacy(also known as the fallacy fallacy) – the assumption that, if an argument is fallacious, then the conclusion is false.
bool _Fallacy::ArgumentFromFallacy(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string fallacy_definition = "fallacious, then the conclusion is false.";
    double* definition = _NLU::getSentenceVectors(fallacy_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(fallacy_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(fallacy_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
    string* fallacy_texts;
    string* fallacy_words;

    fallacy_texts = _Utilities::String2Words(text);

    for (int x = 0; x <= sizeof(fallacy_texts); x++)
    {

    }
}

//  Base rate fallacy – making a probability judgment based on conditional probabilities, without taking into account the effect of prior probabilities.
bool _Fallacy::BaseRateFallacy(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string fallacy_definition = "probability judgment based on conditional probabilities, without taking into account the effect of prior probabilities.";
    double* definition = _NLU::getSentenceVectors(fallacy_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(fallacy_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(fallacy_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
    string* fallacy_texts;
    string* fallacy_words;

    fallacy_texts = _Utilities::String2Words(text);

    for (int x = 0; x <= sizeof(fallacy_texts); x++)
    {

    }
}

//  Conjunction fallacy – the assumption that an outcome simultaneously satisfying multiple conditions is more probable than an outcome satisfying a single one of them.
bool _Fallacy::ConjunctionFallacy(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string fallacy_definition = "outcome simultaneously satisfying multiple conditions is more probable than an outcome satisfying a single one of them.";
    double* definition = _NLU::getSentenceVectors(fallacy_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(fallacy_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(fallacy_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
    string* fallacy_texts;
    string* fallacy_words;

    fallacy_texts = _Utilities::String2Words(text);

    for (int x = 0; x <= sizeof(fallacy_texts); x++)
    {

    }
}

//  Masked - man fallacy(illicit substitution of identicals) – the substitution of identical designators in a true statement can lead to a false one.
bool _Fallacy::MaskedManFallacy(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string fallacy_definition = "substitution of identical designators in a true statement can lead to a false one";
    double* definition = _NLU::getSentenceVectors(fallacy_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(fallacy_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(fallacy_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
    string* fallacy_texts;
    string* fallacy_words;

    fallacy_texts = _Utilities::String2Words(text);

    for (int x = 0; x <= sizeof(fallacy_texts); x++)
    {

    }
}

//  Quantification Fallacies - an error in logic where the quantifiers of the premises are in contradiction to the quantifier of the conclusion.
bool _Fallacy::QualificationFallacies(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string fallacy_definition = "error in logic where the quantifiers of the premises are in contradiction to the quantifier of the conclusion.";
    double* definition = _NLU::getSentenceVectors(fallacy_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(fallacy_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(fallacy_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
    string* fallacy_texts;
    string* fallacy_words;

    fallacy_texts = _Utilities::String2Words(text);

    for (int x = 0; x <= sizeof(fallacy_texts); x++)
    {

    }
}

//  Existential fallacy – an argument that has a universal premise and a particular conclusion.
bool _Fallacy::ExistentialFallacy(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string fallacy_definition = "a universal premise and a particular conclusion.";
    double* definition = _NLU::getSentenceVectors(fallacy_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(fallacy_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(fallacy_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
    string* fallacy_texts;
    string* fallacy_words;

    fallacy_texts = _Utilities::String2Words(text);

    for (int x = 0; x <= sizeof(fallacy_texts); x++)
    {

    }
}

//  Affirmative conclusion from a negative premise(illicit negative) – a categorical syllogism has a positive conclusion, but at least one negative premise.
bool _Fallacy::AffirmativeConclusionFromANegativePremise(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string fallacy_definition = "categorical syllogism has a positive conclusion, but at least one negative premise.";
    double* definition = _NLU::getSentenceVectors(fallacy_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(fallacy_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(fallacy_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
    string* fallacy_texts;
    string* fallacy_words;

    fallacy_texts = _Utilities::String2Words(text);

    for (int x = 0; x <= sizeof(fallacy_texts); x++)
    {

    }
}

//  Fallacy of exclusive premises – a categorical syllogism that is invalid because both of its premises are negative.
bool _Fallacy::FallacyOfExclusivePremises(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string fallacy_definition = "categorical syllogism that is invalid because both of its premises are negative";
    double* definition = _NLU::getSentenceVectors(fallacy_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(fallacy_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(fallacy_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
    string* fallacy_texts;
    string* fallacy_words;

    fallacy_texts = _Utilities::String2Words(text);

    for (int x = 0; x <= sizeof(fallacy_texts); x++)
    {

    }
}

//  Fallacy of four terms(quaternio terminorum) – a categorical syllogism that has four terms.
bool _Fallacy::FallacyOfFourTerms(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string fallacy_definition = "categorical syllogism that has four terms";
    double* definition = _NLU::getSentenceVectors(fallacy_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(fallacy_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(fallacy_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
    string* fallacy_texts;
    string* fallacy_words;

    fallacy_texts = _Utilities::String2Words(text);

    for (int x = 0; x <= sizeof(fallacy_texts); x++)
    {

    }
}

//  Illicit major – a categorical syllogism that is invalid because its major term is not distributed in the major premise but distributed in the conclusion.
bool _Fallacy::IllicitMajor(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string fallacy_definition = "categorical syllogism that is invalid because its major term is not distributed in the major premise but distributed in the conclusion";
    double* definition = _NLU::getSentenceVectors(fallacy_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(fallacy_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(fallacy_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
    string* fallacy_texts;
    string* fallacy_words;

    fallacy_texts = _Utilities::String2Words(text);

    for (int x = 0; x <= sizeof(fallacy_texts); x++)
    {

    }
}

//  Illicit minor – a categorical syllogism that is invalid because its minor term is not distributed in the minor premise but distributed in the conclusion.
bool _Fallacy::IllicitMinor(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string fallacy_definition = "categorical syllogism that is invalid because its minor term is not distributed in the minor premise but distributed in the conclusion";
    double* definition = _NLU::getSentenceVectors(fallacy_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(fallacy_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(fallacy_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
    string* fallacy_texts;
    string* fallacy_words;

    fallacy_texts = _Utilities::String2Words(text);

    for (int x = 0; x <= sizeof(fallacy_texts); x++)
    {

    }
}

//  Negative conclusion from affirmative premises(illicit affirmative) – a categorical syllogism has a negative conclusion but affirmative premises.
bool _Fallacy::NegativeConclusionFromAffirmativePremises(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string fallacy_definition = "a categorical syllogism has a negative conclusion but affirmative premises";
    double* definition = _NLU::getSentenceVectors(fallacy_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(fallacy_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(fallacy_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
    string* fallacy_texts;
    string* fallacy_words;

    fallacy_texts = _Utilities::String2Words(text);

    for (int x = 0; x <= sizeof(fallacy_texts); x++)
    {

    }
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
    string fallacy_definition = "confusing necessity with sufficiency.A condition X is necessary for Y if X is required for even the possibility of Y.X doesn’t bring about Y by itself, but if there is no X, there will be no Y.For example, oxygen is necessary for fire.But one cannot assume that everywhere there is oxygen, there is fire.A condition X is sufficient for Y if X, by itself, is enough to bring about Y.For example, riding the bus is a sufficient mode of transportation to get to work.But there are other modes of transportation – car, taxi, bicycle, walking – that can be used.";
    double* definition = _NLU::getSentenceVectors(fallacy_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(fallacy_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(fallacy_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
    string* fallacy_texts;
    string* fallacy_words;

    fallacy_texts = _Utilities::String2Words(text);

    for (int x = 0; x <= sizeof(fallacy_texts); x++)
    {

    }
}

//  Modal scope fallacy – a degree of unwarranted necessity is placed in the conclusion.
bool _Fallacy::ModalScopeFallacy(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string fallacy_definition = "a degree of unwarranted necessity is placed in the conclusion.";
    double* definition = _NLU::getSentenceVectors(fallacy_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(fallacy_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(fallacy_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
    string* fallacy_texts;
    string* fallacy_words;

    fallacy_texts = _Utilities::String2Words(text);

    for (int x = 0; x <= sizeof(fallacy_texts); x++)
    {

    }
}

//  Argument to moderation(false compromise, middle ground, fallacy of the mean, argumentum ad temperantiam) – assuming that a compromise between two positions is always correct.
bool _Fallacy::ArgumentToModeration(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string fallacy_definition = "assuming that a compromise between two positions is always correct.";
    double* definition = _NLU::getSentenceVectors(fallacy_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(fallacy_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(fallacy_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
    string* fallacy_texts;
    string* fallacy_words;

    fallacy_texts = _Utilities::String2Words(text);

    for (int x = 0; x <= sizeof(fallacy_texts); x++)
    {

    }
}

//  Continuum fallacy(fallacy of the beard, line - drawing fallacy, sorites fallacy, fallacy of the heap, bald man fallacy, decision - point fallacy) – improperly rejecting a claim for being imprecise.
bool _Fallacy::ContinuumFallacy(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string fallacy_definition = "improperly rejecting a claim for being imprecise";
    double* definition = _NLU::getSentenceVectors(fallacy_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(fallacy_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(fallacy_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
    string* fallacy_texts;
    string* fallacy_words;

    fallacy_texts = _Utilities::String2Words(text);

    for (int x = 0; x <= sizeof(fallacy_texts); x++)
    {

    }
}

//  Suppressed correlative – a correlative is redefined so that one alternative is made impossible(e.g., "I'm not fat because I'm thinner than him").
bool _Fallacy::SuppressedCorrelative(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string fallacy_definition = "a correlative is redefined so that one alternative is made impossible";
    double* definition = _NLU::getSentenceVectors(fallacy_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(fallacy_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(fallacy_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
    string* fallacy_texts;
    string* fallacy_words;

    fallacy_texts = _Utilities::String2Words(text);

    for (int x = 0; x <= sizeof(fallacy_texts); x++)
    {

    }
}

//  Definist fallacy – defining a term used in an argument in a biased manner(e.g., using "loaded terms").The person making the argument expects that the listener will accept the provided definition, making the argument difficult to refute.
bool _Fallacy::DefinistFallacy(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string fallacy_definition = "defining a term used in an argument in a biased manner";
    double* definition = _NLU::getSentenceVectors(fallacy_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(fallacy_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(fallacy_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
    string* fallacy_texts;
    string* fallacy_words;

    fallacy_texts = _Utilities::String2Words(text);

    for (int x = 0; x <= sizeof(fallacy_texts); x++)
    {

    }
}

//  Divine fallacy(argument from incredulity) – arguing that, because something is so incredible or amazing, it must be the result of superior, divine, alien or paranormal agency.
bool _Fallacy::DivineFallacy(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string fallacy_definition = "something is so incredible or amazing, it must be the result of superior, divine, alien or paranormal agency.";
    double* definition = _NLU::getSentenceVectors(fallacy_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(fallacy_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(fallacy_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
    string* fallacy_texts;
    string* fallacy_words;
    fallacy_texts = _Utilities::String2Words(text);

    for (int x = 0; x <= sizeof(fallacy_texts); x++)
    {

    }
}

//  Double counting – counting events or occurrences more than once in probabilistic reasoning, which leads to the sum of the probabilities of all cases exceeding unity.
bool _Fallacy::DoubleCounting(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string fallacy_definition = "counting events or occurrences more than once in probabilistic reasoning, which leads to the sum of the probabilities of all cases exceeding unity";
    double* definition = _NLU::getSentenceVectors(fallacy_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(fallacy_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(fallacy_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
    string* fallacy_texts;
    string* fallacy_words;

    fallacy_texts = _Utilities::String2Words(text);

    for (int x = 0; x <= sizeof(fallacy_texts); x++)
    {

    }
}

//  Equivocation – using a term with more than one meaning in a statement without specifying which meaning is intended.
bool _Fallacy::Equivacation(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string fallacy_definition = "using a term with more than one meaning in a statement without specifying which meaning is intended.";
    double* definition = _NLU::getSentenceVectors(fallacy_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(fallacy_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(fallacy_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
    string* fallacy_texts;
    string* fallacy_words;

    fallacy_texts = _Utilities::String2Words(text);

    for (int x = 0; x <= sizeof(fallacy_texts); x++)
    {

    }
}

//  Ambiguous middle term – using a middle term with multiple meanings.
bool _Fallacy::AmbiguousMiddleTerm(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string fallacy_definition = "a middle term with multiple meanings.";
    double* definition = _NLU::getSentenceVectors(fallacy_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(fallacy_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(fallacy_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
    string* fallacy_texts;
    string* fallacy_words;

    fallacy_texts = _Utilities::String2Words(text);

    for (int x = 0; x <= sizeof(fallacy_texts); x++)
    {

    }
}

//  Definitional retreat – changing the meaning of a word when an objection is raised.
bool _Fallacy::DefinitionalRetreat(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string fallacy_definition = "changing the meaning of a word when an objection is raised";
    double* definition = _NLU::getSentenceVectors(fallacy_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(fallacy_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(fallacy_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
    string* fallacy_texts;
    string* fallacy_words;

    fallacy_texts = _Utilities::String2Words(text);

    for (int x = 0; x <= sizeof(fallacy_texts); x++)
    {

    }
}

//  Motte - and -bailey fallacy – conflating two positions with similar properties, one modestand easy to defend(the "motte") and one more controversial(the "bailey").[22] The arguer first states the controversial position, but when challenged, states that they are advancing the modest position.
bool _Fallacy::MotteAndBaileyFallacy(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string fallacy_definition = "The arguer first states the controversial position, but when challenged, states that they are advancing the modest position.";
    double* definition = _NLU::getSentenceVectors(fallacy_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(fallacy_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(fallacy_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
    string* fallacy_texts;
    string* fallacy_words;

    fallacy_texts = _Utilities::String2Words(text);

    for (int x = 0; x <= sizeof(fallacy_texts); x++)
    {

    }
}

//  Fallacy of accent – changing the meaning of a statement by not specifying on which word emphasis falls.
bool _Fallacy::FallacyOfAccent(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string fallacy_definition = "changing the meaning of a statement by not specifying on which word emphasis falls.";
    double* definition = _NLU::getSentenceVectors(fallacy_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(fallacy_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(fallacy_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
    string* fallacy_texts;
    string* fallacy_words;

    fallacy_texts = _Utilities::String2Words(text);

    for (int x = 0; x <= sizeof(fallacy_texts); x++)
    {

    }
}

//  Persuasive definition – purporting to use the "true" or "commonly accepted" meaning of a term while, in reality, using an uncommon or altered definition.
bool _Fallacy::PersuasiveDefinition(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string fallacy_definition = "purporting to use the \"true\" or \"commonly accepted\" meaning of a term while, in reality, using an uncommon or altered definition";
    double* definition = _NLU::getSentenceVectors(fallacy_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(fallacy_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(fallacy_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
    string* fallacy_texts;
    string* fallacy_words;

    fallacy_texts = _Utilities::String2Words(text);

    for (int x = 0; x <= sizeof(fallacy_texts); x++)
    {

    }
}

//  Ecological fallacy – inferring about the nature of an entity based solely upon aggregate statistics collected for the group to which that entity belongs.
bool _Fallacy::EconogicalFallacy(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string fallacy_definition = "inferring about the nature of an entity based solely upon aggregate statistics collected for the group to which that entity belongs.";
    double* definition = _NLU::getSentenceVectors(fallacy_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(fallacy_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(fallacy_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
    string* fallacy_texts;
    string* fallacy_words;

    fallacy_texts = _Utilities::String2Words(text);

    for (int x = 0; x <= sizeof(fallacy_texts); x++)
    {

    }
}

//  Etymological fallacy – assuming that the original or historical meaning of a word or phrase is necessarily similar to its actual present - day usage.
bool _Fallacy::EtynologicalFallacy(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string fallacy_definition = "assuming that the original or historical meaning of a word or phrase is necessarily similar to its actual present - day usage";
    double* definition = _NLU::getSentenceVectors(fallacy_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(fallacy_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(fallacy_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
    string* fallacy_texts;
    string* fallacy_words;

    fallacy_texts = _Utilities::String2Words(text);

    for (int x = 0; x <= sizeof(fallacy_texts); x++)
    {

    }
}

//  Fallacy of composition – assuming that something true of part of a whole must also be true of the whole.
bool _Fallacy::FallacyOfComposition(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string fallacy_definition = "assuming that something true of part of a whole must also be true of the whole";
    double* definition = _NLU::getSentenceVectors(fallacy_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(fallacy_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(fallacy_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
    string* fallacy_texts;
    string* fallacy_words;

    fallacy_texts = _Utilities::String2Words(text);

    for (int x = 0; x <= sizeof(fallacy_texts); x++)
    {

    }
}

//  Fallacy of division – assuming that something true of a composite thing must also be true of all or some of its parts.
bool _Fallacy::FallacyOfDivision(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string fallacy_definition = "assuming that something true of a composite thing must also be true of all or some of its parts.";
    double* definition = _NLU::getSentenceVectors(fallacy_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(fallacy_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(fallacy_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
    string* fallacy_texts;
    string* fallacy_words;

    fallacy_texts = _Utilities::String2Words(text);

    for (int x = 0; x <= sizeof(fallacy_texts); x++)
    {

    }
}

//  False attribution – appealing to an irrelevant, unqualified, unidentified, biased or fabricated source in support of an argument.
bool _Fallacy::FalseAttribuation(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string fallacy_definition = "appealing to an irrelevant, unqualified, unidentified, biased or fabricated source in support of an argument.";
    double* definition = _NLU::getSentenceVectors(fallacy_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(fallacy_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(fallacy_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
    string* fallacy_texts;
    string* fallacy_words;

    fallacy_texts = _Utilities::String2Words(text);

    for (int x = 0; x <= sizeof(fallacy_texts); x++)
    {

    }
}

//  Fallacy of quoting out of context(contextotomy, contextomy; quotation mining) – selective excerpting of words from their original context to distort the intended meaning.
bool _Fallacy::FallacyOfQuotingOutOfContext(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string fallacy_definition = "selective excerpting of words from their original context to distort the intended meaning.";
    double* definition = _NLU::getSentenceVectors(fallacy_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(fallacy_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(fallacy_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
    string* fallacy_texts;
    string* fallacy_words;

    fallacy_texts = _Utilities::String2Words(text);

    for (int x = 0; x <= sizeof(fallacy_texts); x++)
    {

    }
}

//  False authority(single authority) – using an expert of dubious credentials or using only one opinion to promote a product or idea.Related to the appeal to authority.
bool _Fallacy::FalseAuthority(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string fallacy_definition = "using an expert of dubious credentials or using only one opinion to promote a product or idea.Related to the appeal to authority";
    double* definition = _NLU::getSentenceVectors(fallacy_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(fallacy_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(fallacy_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
    string* fallacy_texts;
    string* fallacy_words;

    fallacy_texts = _Utilities::String2Words(text);

    for (int x = 0; x <= sizeof(fallacy_texts); x++)
    {

    }
}

//  False dilemma(false dichotomy, fallacy of bifurcation, black - or -white fallacy) – two alternative statements are given as the only possible options when, in reality, there are more.
bool _Fallacy::FalseDilemma(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string fallacy_definition = "two alternative statements are given as the only possible options when, in reality, there are more.";
    double* definition = _NLU::getSentenceVectors(fallacy_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(fallacy_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(fallacy_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
    string* fallacy_texts;
    string* fallacy_words;

    fallacy_texts = _Utilities::String2Words(text);

    for (int x = 0; x <= sizeof(fallacy_texts); x++)
    {

    }
}

//  False equivalence – describing two or more statements as virtually equal when they are not.
bool _Fallacy::FalseEquivalence(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string fallacy_definition = "describing two or more statements as virtually equal when they are not";
    double* definition = _NLU::getSentenceVectors(fallacy_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(fallacy_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(fallacy_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
    string* fallacy_texts;
    string* fallacy_words;

    fallacy_texts = _Utilities::String2Words(text);

    for (int x = 0; x <= sizeof(fallacy_texts); x++)
    {

    }
}

//  Feedback fallacy – believing in the objectivity of an evaluation to be used as the basis for improvement without verifying that the source of the evaluation is a disinterested party.
bool _Fallacy::FeedbackFallacy(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string fallacy_definition = "believing in the objectivity of an evaluation to be used as the basis for improvement without verifying that the source of the evaluation is a disinterested party";
    double* definition = _NLU::getSentenceVectors(fallacy_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(fallacy_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(fallacy_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
    string* fallacy_texts;
    string* fallacy_words;

    fallacy_texts = _Utilities::String2Words(text);

    for (int x = 0; x <= sizeof(fallacy_texts); x++)
    {

    }
}

//  Historian's fallacy – assuming that decision makers of the past had identical information as those subsequently analyzing the decision. This should not to be confused with presentism, in which present-day ideas and perspectives are anachronistically projected into the past.
bool _Fallacy::HistorianFallacy(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string fallacy_definition = "assuming that decision makers of the past had identical information as those subsequently analyzing the decision. This should not to be confused with presentism, in which present-day ideas and perspectives are anachronistically projected into the past.";
    double* definition = _NLU::getSentenceVectors(fallacy_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(fallacy_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(fallacy_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
    string* fallacy_texts;
    string* fallacy_words;

    fallacy_texts = _Utilities::String2Words(text);

    for (int x = 0; x <= sizeof(fallacy_texts); x++)
    {

    }
}

//  Historical fallacy – a set of considerations is thought to hold good only because a completed process is read into the content of the process which conditions this completed result.
bool _Fallacy::HistoricalFallacy(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string fallacy_definition = "a set of considerations is thought to hold good only because a completed process is read into the content of the process which conditions this completed result";
    double* definition = _NLU::getSentenceVectors(fallacy_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(fallacy_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(fallacy_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
    string* fallacy_texts;
    string* fallacy_words;

    fallacy_texts = _Utilities::String2Words(text);

    for (int x = 0; x <= sizeof(fallacy_texts); x++)
    {

    }
}

//  Baconian fallacy – using pieces of historical evidence without the aid of specific methods, hypotheses, or theories in an attempt to make a general truth about the past.Commits historians "to the pursuit of an impossible object by an impracticable method".
bool _Fallacy::BaconianFallacy(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string fallacy_definition = "using pieces of historical evidence without the aid of specific methods, hypotheses, or theories in an attempt to make a general truth about the past";
    double* definition = _NLU::getSentenceVectors(fallacy_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(fallacy_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(fallacy_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
    string* fallacy_texts;
    string* fallacy_words;

    fallacy_texts = _Utilities::String2Words(text);

    for (int x = 0; x <= sizeof(fallacy_texts); x++)
    {

    }
}

//  Homunculus fallacy – using a "middle-man" for explanation; this sometimes leads to regressive middle - men.It explains a concept in terms of the concept itself without explaining its real nature(e.g.: explaining thought as something produced by a little thinker – a homunculus – inside the head simply identifies an intermediary actor and does not explain the product or process of thinking).
bool _Fallacy::HomuculusFallacy(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string fallacy_definition = "using a \"middle - man\" for explanation; this sometimes leads to regressive middle";
    double* definition = _NLU::getSentenceVectors(fallacy_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(fallacy_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(fallacy_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
    string* fallacy_texts;
    string* fallacy_words;

    fallacy_texts = _Utilities::String2Words(text);

    for (int x = 0; x <= sizeof(fallacy_texts); x++)
    {

    }
}

//  Inflation of conflict – arguing that, if experts in a field of knowledge disagree on a certain point within that field, no conclusion can be reached or that the legitimacy of that field of knowledge is questionable.
bool _Fallacy::InflationOfConflect(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string fallacy_definition = "if experts in a field of knowledge disagree on a certain point within that field, no conclusion can be reached or that the legitimacy of that field of knowledge is questionable.";
    double* definition = _NLU::getSentenceVectors(fallacy_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(fallacy_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(fallacy_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
    string* fallacy_texts;
    string* fallacy_words;

    fallacy_texts = _Utilities::String2Words(text);

    for (int x = 0; x <= sizeof(fallacy_texts); x++)
    {

    }
}

//  If - by - whiskey – an argument that supports both sides of an issue by using terms that are emotionally sensitiveand ambiguous.
bool _Fallacy::IfByWhiskey(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string fallacy_definition = "an argument that supports both sides of an issue by using terms that are emotionally sensitiveand ambiguous.";
    double* definition = _NLU::getSentenceVectors(fallacy_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(fallacy_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(fallacy_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
    string* fallacy_texts;
    string* fallacy_words;

    fallacy_texts = _Utilities::String2Words(text);

    for (int x = 0; x <= sizeof(fallacy_texts); x++)
    {

    }
}

//  Incomplete comparison – insufficient information is provided to make a complete comparison.
bool _Fallacy::IncompleteComparison(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string fallacy_definition = "insufficient information is provided to make a complete comparison.";
    double* definition = _NLU::getSentenceVectors(fallacy_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(fallacy_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(fallacy_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
    string* fallacy_texts;
    string* fallacy_words;

    fallacy_texts = _Utilities::String2Words(text);

    for (int x = 0; x <= sizeof(fallacy_texts); x++)
    {

    }
}

//  Inconsistent comparison – different methods of comparison are used, leaving a false impression of the whole comparison.
bool _Fallacy::InconsistentComparison(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string fallacy_definition = "different methods of comparison are used, leaving a false impression of the whole comparison";
    double* definition = _NLU::getSentenceVectors(fallacy_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(fallacy_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(fallacy_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
    string* fallacy_texts;
    string* fallacy_words;
}

//  Intentionality fallacy – the insistence that the ultimate meaning of an expression must be consistent with the intention of the person from whom the communication originated(e.g.a work of fiction that is widely received as a blatant allegory must necessarily not be regarded as such if the author intended it not to be so).
bool _Fallacy::IntentionalityFallacy(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string fallacy_definition = "insistence that the ultimate meaning of an expression must be consistent with the intention of the person from whom the communication originated";
    double* definition = _NLU::getSentenceVectors(fallacy_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(fallacy_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(fallacy_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
    string* fallacy_texts;
    string* fallacy_words;

    fallacy_texts = _Utilities::String2Words(text);

    for (int x = 0; x <= sizeof(fallacy_texts); x++)
    {

    }
}

//  Lump of labour fallacy – the misconception that there is a fixed amount of work to be done within an economy, which can be distributed to create more or fewer jobs.
bool _Fallacy::LumpOfLabourFallacy(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string fallacy_definition = "the misconception that there is a fixed amount of work to be done within an economy, which can be distributed to create more or fewer jobs.";
    double* definition = _NLU::getSentenceVectors(fallacy_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(fallacy_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(fallacy_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
    string* fallacy_texts;
    string* fallacy_words;

    fallacy_texts = _Utilities::String2Words(text);

    for (int x = 0; x <= sizeof(fallacy_texts); x++)
    {

    }
}

//  Kettle logic – using multiple, jointly inconsistent arguments to defend a position.
bool _Fallacy::KettleLogic(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string fallacy_definition = "using multiple, jointly inconsistent arguments to defend a position.";
    double* definition = _NLU::getSentenceVectors(fallacy_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(fallacy_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(fallacy_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
    string* fallacy_texts;
    string* fallacy_words;

    fallacy_texts = _Utilities::String2Words(text);

    for (int x = 0; x <= sizeof(fallacy_texts); x++)
    {

    }
}

//  Ludic fallacy – failing to take into account that non - regulated random occurrences unknown unknowns can affect the probability of an event taking place.
bool _Fallacy::LudicFallacy(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string fallacy_definition = "failing to take into account that non - regulated random occurrences unknown unknowns can affect the probability of an event taking place.";
    double* definition = _NLU::getSentenceVectors(fallacy_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(fallacy_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(fallacy_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
    string* fallacy_texts;
    string* fallacy_words;

    fallacy_texts = _Utilities::String2Words(text);

    for (int x = 0; x <= sizeof(fallacy_texts); x++)
    {

    }
}

//  McNamara fallacy(quantitative fallacy) – making an argument using only quantitative observations(measurements, statistical or numerical values) and discounting subjective information that focuses on quality(traits, features, or relationships).
bool _Fallacy::QuantitativeFallacy(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string fallacy_definition = "making an argument using only quantitative observations(measurements, statistical or numerical values) and discounting subjective information that focuses on quality";
    double* definition = _NLU::getSentenceVectors(fallacy_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(fallacy_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(fallacy_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
    string* fallacy_texts;
    string* fallacy_words;

    fallacy_texts = _Utilities::String2Words(text);

    for (int x = 0; x <= sizeof(fallacy_texts); x++)
    {

    }
}

//  Mind projection fallacy – assuming that a statement about an object describes an inherent property of the object, rather than a personal perception.
bool _Fallacy::MindProjectionFallacy(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string fallacy_definition = "assuming that a statement about an object describes an inherent property of the object, rather than a personal perception.";
    double* definition = _NLU::getSentenceVectors(fallacy_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(fallacy_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(fallacy_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
    string* fallacy_texts;
    string* fallacy_words;

    fallacy_texts = _Utilities::String2Words(text);

    for (int x = 0; x <= sizeof(fallacy_texts); x++)
    {

    }
}

//  Moralistic fallacy – inferring factual conclusions from evaluative premises in violation of fact–value distinction(e.g.: inferring is from ought).Moralistic fallacy is the inverse of naturalistic fallacy.
bool _Fallacy::MoralisticFallacy(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string fallacy_definition = "inferring factual conclusions from evaluative premises in violation of fact–value distinction";
    double* definition = _NLU::getSentenceVectors(fallacy_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(fallacy_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(fallacy_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
    string* fallacy_texts;
    string* fallacy_words;

    fallacy_texts = _Utilities::String2Words(text);

    for (int x = 0; x <= sizeof(fallacy_texts); x++)
    {

    }
}

//  Moving the goalposts(raising the bar) – argument in which evidence presented in response to a specific claim is dismissedand some other(often greater) evidence is demanded.
bool _Fallacy::MovingTheGoalpostsFallacy(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string fallacy_definition = "argument in which evidence presented in response to a specific claim is dismissedand some other(often greater) evidence is demanded.";
    double* definition = _NLU::getSentenceVectors(fallacy_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(fallacy_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(fallacy_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
    string* fallacy_texts;
    string* fallacy_words;

    fallacy_texts = _Utilities::String2Words(text);

    for (int x = 0; x <= sizeof(fallacy_texts); x++)
    {

    }
}

//  Nirvana fallacy(perfect - solution fallacy) – solutions to problems are rejected because they are not perfect.
bool _Fallacy::NirvanaFallacy(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string fallacy_definition = "solutions to problems are rejected because they are not perfect.";
    double* definition = _NLU::getSentenceVectors(fallacy_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(fallacy_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(fallacy_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
    string* fallacy_texts;
    string* fallacy_words;

    fallacy_texts = _Utilities::String2Words(text);

    for (int x = 0; x <= sizeof(fallacy_texts); x++)
    {

    }
}

//  Proof by assertion – a proposition is repeatedly restated regardless of contradiction; sometimes confused with argument from repetition(argumentum ad infinitum, argumentum ad nauseam)
bool _Fallacy::ProofByAssertion(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string fallacy_definition = "a proposition is repeatedly restated regardless of contradiction; sometimes confused with argument from repetition";
    double* definition = _NLU::getSentenceVectors(fallacy_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(fallacy_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(fallacy_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
    string* fallacy_texts;
    string* fallacy_words;

    fallacy_texts = _Utilities::String2Words(text);

    for (int x = 0; x <= sizeof(fallacy_texts); x++)
    {

    }
}

//  Prosecutor's fallacy – a low probability of false matches does not mean a low probability of some false match being found.
bool _Fallacy::ProsecutorFallacy(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string fallacy_definition = "a low probability of false matches does not mean a low probability of some false match being found.";
    double* definition = _NLU::getSentenceVectors(fallacy_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(fallacy_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(fallacy_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
    string* fallacy_texts;
    string* fallacy_words;

    fallacy_texts = _Utilities::String2Words(text);

    for (int x = 0; x <= sizeof(fallacy_texts); x++)
    {

    }
}

//  Proving too much – an argument that results in an overly - generalized conclusion(e.g.: arguing that drinking alcohol is bad because in some instances it has led to spousal or child abuse).
bool _Fallacy::ProvingTooMuch(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string fallacy_definition = "an argument that results in an overly - generalized conclusion";
    double* definition = _NLU::getSentenceVectors(fallacy_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(fallacy_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(fallacy_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
    string* fallacy_texts;
    string* fallacy_words;

    fallacy_texts = _Utilities::String2Words(text);

    for (int x = 0; x <= sizeof(fallacy_texts); x++)
    {

    }
}

//  Psychologist's fallacy – an observer presupposes the objectivity of their own perspective when analyzing a behavioral event.
bool _Fallacy::PsycholoistFallacy(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string fallacy_definition = "an observer presupposes the objectivity of their own perspective when analyzing a behavioral event.";
    double* definition = _NLU::getSentenceVectors(fallacy_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(fallacy_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(fallacy_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
    string* fallacy_texts;
    string* fallacy_words;

    fallacy_texts = _Utilities::String2Words(text);

    for (int x = 0; x <= sizeof(fallacy_texts); x++)
    {

    }
}

//  Referential fallacy – assuming that all words refer to existing things and that the meaning of words reside within the things they refer to, as opposed to words possibly referring to no real object(e.g.: Pegasus) or that the meaning comes from how they are used(e.g.: "nobody" was in the room).
bool _Fallacy::ReferentialFallacy(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string fallacy_definition = "assuming that all words refer to existing things and that the meaning of words reside within the things they refer to, as opposed to words possibly referring to no real object";
    double* definition = _NLU::getSentenceVectors(fallacy_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(fallacy_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(fallacy_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
    string* fallacy_texts;
    string* fallacy_words;

    fallacy_texts = _Utilities::String2Words(text);

    for (int x = 0; x <= sizeof(fallacy_texts); x++)
    {

    }
}

//  Reification(concretism, hypostatization, or the fallacy of misplaced concreteness) – treating an abstract belief or hypothetical construct as if it were a concrete, real event or physical entity(e.g.: saying that evolution selects which traits are passed on to future generations; evolution is not a conscious entity with agency).
bool _Fallacy::Reification(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string fallacy_definition = "treating an abstract belief or hypothetical construct as if it were a concrete, real event or physical entity";
    double* definition = _NLU::getSentenceVectors(fallacy_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(fallacy_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(fallacy_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
    string* fallacy_texts;
    string* fallacy_words;

    fallacy_texts = _Utilities::String2Words(text);

    for (int x = 0; x <= sizeof(fallacy_texts); x++)
    {

    }
}

//  Retrospective determinism – believing that, because an event has occurred under some circumstance, the circumstance must have made the event inevitable(e.g.: because someone won the lottery while wearing their lucky socks, wearing those socks made winning the lottery inevitable).
bool _Fallacy::RetrospectiveDeterminism(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string fallacy_definition = "because an event has occurred under some circumstance, the circumstance must have made the event inevitable";
    double* definition = _NLU::getSentenceVectors(fallacy_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(fallacy_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(fallacy_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
    string* fallacy_texts;
    string* fallacy_words;

    fallacy_texts = _Utilities::String2Words(text);

    for (int x = 0; x <= sizeof(fallacy_texts); x++)
    {

    }
}

//  Slippery slope(thin edge of the wedge, camel's nose) – asserting that a proposed, relatively small, first action will inevitably lead to a chain of related events resulting in a significant and negative event and, therefore, should not be permitted.
bool _Fallacy::SlipperySlope(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string fallacy_definition = "asserting that a proposed, relatively small, first action will inevitably lead to a chain of related events resulting in a significant and negative event and, therefore, should not be permitted.";
    double* definition = _NLU::getSentenceVectors(fallacy_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(fallacy_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(fallacy_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
    string* fallacy_texts;
    string* fallacy_words;

    fallacy_texts = _Utilities::String2Words(text);

    for (int x = 0; x <= sizeof(fallacy_texts); x++)
    {

    }
}

//  Special pleading – the arguer attempts to cite something as an exemption to a generally accepted rule or principle without justifying the exemption(e.g.: a defendant who murdered his parents asks for leniency because he is now an orphan).
bool _Fallacy::SpecialPleading(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string fallacy_definition = "the arguer attempts to cite something as an exemption to a generally accepted rule or principle without justifying the exemption";
    double* definition = _NLU::getSentenceVectors(fallacy_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(fallacy_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(fallacy_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
    string* fallacy_texts;
    string* fallacy_words;

    fallacy_texts = _Utilities::String2Words(text);

    for (int x = 0; x <= sizeof(fallacy_texts); x++)
    {

    }
}

//  Begging the question(petitio principii) – using the conclusion of the argument in support of itself in a premise(e.g.: saying that smoking cigarettes is deadly because cigarettes can kill you; something that kills is deadly).
bool _Fallacy::BeggingTheQuestion(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string fallacy_definition = "conclusion of the argument in support of itself in a premise";
    double* definition = _NLU::getSentenceVectors(fallacy_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(fallacy_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(fallacy_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
    string* fallacy_texts;
    string* fallacy_words;

    fallacy_texts = _Utilities::String2Words(text);

    for (int x = 0; x <= sizeof(fallacy_texts); x++)
    {

    }
}

//  Loaded label – while not inherently fallacious, use of evocative terms to support a conclusion is a type of begging the question fallacy.When fallaciously used, the term's connotations are relied on to sway the argument towards a particular conclusion. For example, an organic foods advertisement that says "Organic foods are safe and healthy foods grown without any pesticides, herbicides, or other unhealthy additives." Use of the term "unhealthy additives" is used as support for the idea that the product is safe.
bool _Fallacy::LoadedLabelFallacy(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string fallacy_definition = "while not inherently fallacious, use of evocative terms to support a conclusion is a type of begging the question fallacy.When fallaciously used, the term's connotations are relied on to sway the argument towards a particular conclusion. For example, an organic foods advertisement that says \"Organic foods are safe and healthy foods grown without any pesticides, herbicides, or other unhealthy additives.\" Use of the term \"unhealthy additives\" is used as support for the idea that the product is safe.";
    double* definition = _NLU::getSentenceVectors(fallacy_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(fallacy_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(fallacy_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
    string* fallacy_texts;
    string* fallacy_words;

    fallacy_texts = _Utilities::String2Words(text);

    for (int x = 0; x <= sizeof(fallacy_texts); x++)
    {

    }
}

//  Circular reasoning(circulus in demonstrando) – the reasoner begins with what he or she is trying to end up with(e.g.: all bachelors are unmarried males).
bool _Fallacy::CircularReasoning(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string fallacy_definition = "the reasoner begins with what he or she is trying to end up with";
    double* definition = _NLU::getSentenceVectors(fallacy_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(fallacy_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(fallacy_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
    string* fallacy_texts;
    string* fallacy_words;

    fallacy_texts = _Utilities::String2Words(text);

    for (int x = 0; x <= sizeof(fallacy_texts); x++)
    {

    }
}

//  Fallacy of many questions(complex question, fallacy of presuppositions, loaded question, plurium interrogationum) – someone asks a question that presupposes something that has not been proven or accepted by all the people involved.This fallacy is often used rhetorically so that the question limits direct replies to those that serve the questioner's agenda.
bool _Fallacy::FallacyOfManyQuestions(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string fallacy_definition = "someone asks a question that presupposes something that has not been proven or accepted by all the people involved.This fallacy is often used rhetorically so that the question limits direct replies to those that serve the questioner's agenda";
    double* definition = _NLU::getSentenceVectors(fallacy_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(fallacy_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(fallacy_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
    string* fallacy_texts;
    string* fallacy_words;

    fallacy_texts = _Utilities::String2Words(text);

    for (int x = 0; x <= sizeof(fallacy_texts); x++)
    {

    }
}

//  Faulty generalization – reaching a conclusion from weak premises.
bool _Fallacy::FaultyGeneralization(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string fallacy_definition = "reaching a conclusion from weak premises.";
    double* definition = _NLU::getSentenceVectors(fallacy_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(fallacy_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(fallacy_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
    string* fallacy_texts;
    string* fallacy_words;

    fallacy_texts = _Utilities::String2Words(text);

    for (int x = 0; x <= sizeof(fallacy_texts); x++)
    {

    }
}

//  Accident – an exception to a generalization is ignored.
bool _Fallacy::AccidentFallacy(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string fallacy_definition = "exception to a generalization is ignored";
    double* definition = _NLU::getSentenceVectors(fallacy_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(fallacy_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(fallacy_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
    string* fallacy_texts;
    string* fallacy_words;

    fallacy_texts = _Utilities::String2Words(text);

    for (int x = 0; x <= sizeof(fallacy_texts); x++)
    {

    }
}

//  No true Scotsman – makes a generalization true by changing the generalization to exclude a counterexample.
bool _Fallacy::NoTrueScotsmanFallacy(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string fallacy_definition = "a generalization true by changing the generalization to exclude a counterexample.";
    double* definition = _NLU::getSentenceVectors(fallacy_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(fallacy_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(fallacy_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
    string* fallacy_texts;
    string* fallacy_words;

    fallacy_texts = _Utilities::String2Words(text);

    for (int x = 0; x <= sizeof(fallacy_texts); x++)
    {

    }
}

//  Cherry picking(suppressed evidence, incomplete evidence) – using individual cases or data that confirm a particular position, while ignoring related cases or data that may contradict that position.
bool _Fallacy::CherryPickingFallacy(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string fallacy_definition = "individual cases or data that confirm a particular position, while ignoring related cases or data that may contradict that position.";
    double* definition = _NLU::getSentenceVectors(fallacy_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(fallacy_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(fallacy_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
    string* fallacy_texts;
    string* fallacy_words;

    fallacy_texts = _Utilities::String2Words(text);

    for (int x = 0; x <= sizeof(fallacy_texts); x++)
    {

    }
}

//  Survivorship bias – a small number of successes of a given process are actively promoted while completely ignoring a large number of failures.
bool _Fallacy::SurvivorshipBias(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string fallacy_definition = "a small number of successes of a given process are actively promoted while completely ignoring a large number of failures.";
    double* definition = _NLU::getSentenceVectors(fallacy_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(fallacy_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(fallacy_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
    string* fallacy_texts;
    string* fallacy_words;

    fallacy_texts = _Utilities::String2Words(text);

    for (int x = 0; x <= sizeof(fallacy_texts); x++)
    {

    }
}

//  False analogy – an argument by analogy in which the analogy is poorly suited.
bool _Fallacy::FalseAnalogy(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string fallacy_definition = "an argument by analogy in which the analogy is poorly suited.";
    double* definition = _NLU::getSentenceVectors(fallacy_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(fallacy_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(fallacy_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
    string* fallacy_texts;
    string* fallacy_words;

    fallacy_texts = _Utilities::String2Words(text);

    for (int x = 0; x <= sizeof(fallacy_texts); x++)
    {

    }
}

//  Hasty generalization(fallacy of insufficient statistics, fallacy of insufficient sample, fallacy of the lonely fact, hasty induction, secundum quid, converse accident, jumping to conclusions) – basing a broad conclusion on a small or unrepresentative sample.
bool _Fallacy::HastyGeneralization(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string fallacy_definition = "basing a broad conclusion on a small or unrepresentative sample";
    double* definition = _NLU::getSentenceVectors(fallacy_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(fallacy_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(fallacy_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
    string* fallacy_texts;
    string* fallacy_words;

    fallacy_texts = _Utilities::String2Words(text);

    for (int x = 0; x <= sizeof(fallacy_texts); x++)
    {

    }
}

//  Inductive fallacy – A more general name to some fallacies, such as hasty generalization.It happens when a conclusion is made of premises that lightly support it.
bool _Fallacy::InductiveFallacy(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string fallacy_definition = "A more general name to some fallacies, such as hasty generalization.It happens when a conclusion is made of premises that lightly support it";
    double* definition = _NLU::getSentenceVectors(fallacy_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(fallacy_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(fallacy_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
    string* fallacy_texts;
    string* fallacy_words;

    fallacy_texts = _Utilities::String2Words(text);

    for (int x = 0; x <= sizeof(fallacy_texts); x++)
    {

    }
}

//  Misleading vividness – involves describing an occurrence in vivid detail, even if it is an exceptional occurrence, to convince someone that it is a problem; this also relies on the appeal to emotion fallacy.
bool _Fallacy::MisleadingVividness(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string fallacy_definition = "involves describing an occurrence in vivid detail, even if it is an exceptional occurrence, to convince someone that it is a problem; this also relies on the appeal to emotion fallacy.";
    double* definition = _NLU::getSentenceVectors(fallacy_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(fallacy_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(fallacy_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
    string* fallacy_texts;
    string* fallacy_words;

    fallacy_texts = _Utilities::String2Words(text);

    for (int x = 0; x <= sizeof(fallacy_texts); x++)
    {

    }
}

//  Overwhelming exception – an accurate generalization that comes with qualifications that eliminate so many cases that what remains is much less impressive than the initial statement might have led one to assume.
bool _Fallacy::OverWhelmingException(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string fallacy_definition = "an accurate generalization that comes with qualifications that eliminate so many cases that what remains is much less impressive than the initial statement might have led one to assume";
    double* definition = _NLU::getSentenceVectors(fallacy_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(fallacy_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(fallacy_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
    string* fallacy_texts;
    string* fallacy_words;

    fallacy_texts = _Utilities::String2Words(text);

    for (int x = 0; x <= sizeof(fallacy_texts); x++)
    {

    }
}

//  Thought - terminating cliché – a commonly used phrase, sometimes passing as folk wisdom, used to quell cognitive dissonance, conceal lack of forethought, move on to other topics, etc.– but in any case, to end the debate with a cliché rather than a point.
bool _Fallacy::ThoughtTerminatingCliche(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string fallacy_definition = "commonly used phrase, sometimes passing as folk wisdom, used to quell cognitive dissonance, conceal lack of forethought, move on to other topics, etc.– but in any case, to end the debate with a cliché rather than a point.";
    double* definition = _NLU::getSentenceVectors(fallacy_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(fallacy_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(fallacy_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
    string* fallacy_texts;
    string* fallacy_words;

    fallacy_texts = _Utilities::String2Words(text);

    for (int x = 0; x <= sizeof(fallacy_texts); x++)
    {

    }
}

//  Questionable cause is a general type of error with many variants.Its primary basis is the confusion of association with causation, either by inappropriately deducing(or rejecting) causation or a broader failure to properly investigate the cause of an observed effect.
bool _Fallacy::QuestionableCause(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string fallacy_definition = "a general type of error with many variants.Its primary basis is the confusion of association with causation, either by inappropriately deducing(or rejecting) causation or a broader failure to properly investigate the cause of an observed effect.";
    double* definition = _NLU::getSentenceVectors(fallacy_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(fallacy_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(fallacy_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
    string* fallacy_texts;
    string* fallacy_words;

    fallacy_texts = _Utilities::String2Words(text);

    for (int x = 0; x <= sizeof(fallacy_texts); x++)
    {

    }
}

//  Cum hoc ergo propter hoc(Latin for "with this, therefore because of this"; correlation implies causation; faulty cause / effect, coincidental correlation, correlation without causation) – a faulty assumption that, because there is a correlation between two variables, one caused the other.
bool _Fallacy::CumHocErgoPropterHocFallacy(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string fallacy_definition = "a faulty assumption that, because there is a correlation between two variables, one caused the other.";
    double* definition = _NLU::getSentenceVectors(fallacy_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(fallacy_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(fallacy_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
    string* fallacy_texts;
    string* fallacy_words;

    fallacy_texts = _Utilities::String2Words(text);

    for (int x = 0; x <= sizeof(fallacy_texts); x++)
    {

    }
}

//  Post hoc ergo propter hoc(Latin for "after this, therefore because of this"; temporal sequence implies causation) – X happened, then Y happened; therefore X caused Y.
bool _Fallacy::PostHocErgoPropterHoc(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string fallacy_definition = "after this, therefore because of this";
    double* definition = _NLU::getSentenceVectors(fallacy_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(fallacy_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(fallacy_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
    string* fallacy_texts;
    string* fallacy_words;

    fallacy_texts = _Utilities::String2Words(text);

    for (int x = 0; x <= sizeof(fallacy_texts); x++)
    {

    }
}

//  Wrong direction(reverse causation) – causeand effect are reversed.The cause is said to be the effectand vice versa.The consequence of the phenomenon is claimed to be its root cause.
bool _Fallacy::WrongDirectionFallacy(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string fallacy_definition = "cause and effect are reversed.The cause is said to be the effectand vice versa.The consequence of the phenomenon is claimed to be its root cause.";
    double* definition = _NLU::getSentenceVectors(fallacy_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(fallacy_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(fallacy_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
    string* fallacy_texts;
    string* fallacy_words;

    fallacy_texts = _Utilities::String2Words(text);

    for (int x = 0; x <= sizeof(fallacy_texts); x++)
    {

    }
}

//  Fallacy of the single cause(causal oversimplification) - it is assumed that there is one, simple cause of an outcome when in reality it may have been caused by a number of only jointly sufficient causes.
bool _Fallacy::CausalOversimplification(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string fallacy_definition = "it is assumed that there is one, simple cause of an outcome when in reality it may have been caused by a number of only jointly sufficient causes.";
    double* definition = _NLU::getSentenceVectors(fallacy_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(fallacy_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(fallacy_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
    string* fallacy_texts;
    string* fallacy_words;

    fallacy_texts = _Utilities::String2Words(text);

    for (int x = 0; x <= sizeof(fallacy_texts); x++)
    {

    }
}

//  Furtive fallacy – outcomes are asserted to have been caused by the malfeasance of decision makers.
bool _Fallacy::FurtiveFallacy(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string fallacy_definition = "outcomes are asserted to have been caused by the malfeasance of decision makers.";
    double* definition = _NLU::getSentenceVectors(fallacy_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(fallacy_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(fallacy_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
    string* fallacy_texts;
    string* fallacy_words;

    fallacy_texts = _Utilities::String2Words(text);

    for (int x = 0; x <= sizeof(fallacy_texts); x++)
    {

    }
}

//  Gambler's fallacy – the incorrect belief that separate, independent events can affect the likelihood of another random event. If a fair coin lands on heads 10 times in a row, the belief that it is "due to the number of times it had previously landed on tails" is incorrect.
bool _Fallacy::GamblerFallacy(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string fallacy_definition = "the incorrect belief that separate, independent events can affect the likelihood of another random event";
    double* definition = _NLU::getSentenceVectors(fallacy_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(fallacy_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(fallacy_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
    string* fallacy_texts;
    string* fallacy_words;

    fallacy_texts = _Utilities::String2Words(text);

    for (int x = 0; x <= sizeof(fallacy_texts); x++)
    {

    }
}

//  Magical thinking – fallacious attribution of causal relationships between actions and events.In anthropology, it refers primarily to cultural beliefs that ritual, prayer, sacrifice, and taboos will produce specific supernatural consequences.In psychology, it refers to an irrational belief that thoughts by themselves can affect the world or that thinking something corresponds with doing it.
bool _Fallacy::MagicalThinking(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string fallacy_definition = "causal relationships between actions and events";
    double* definition = _NLU::getSentenceVectors(fallacy_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(fallacy_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(fallacy_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
    string* fallacy_texts;
    string* fallacy_words;

    fallacy_texts = _Utilities::String2Words(text);

    for (int x = 0; x <= sizeof(fallacy_texts); x++)
    {

    }
}

//  Regression fallacy – ascribes cause where none exists.The flaw is failing to account for natural fluctuations.It is frequently a special kind of post hoc fallacy.
bool _Fallacy::RegressionFallacy(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string fallacy_definition = "ascribes cause where none exists. The flaw is failing to account for natural fluctuations.It is frequently a special kind of post hoc fallacy.";
    double* definition = _NLU::getSentenceVectors(fallacy_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(fallacy_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(fallacy_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
    string* fallacy_texts;
    string* fallacy_words;

    fallacy_texts = _Utilities::String2Words(text);

    for (int x = 0; x <= sizeof(fallacy_texts); x++)
    {

    }
}

//  Appeal to the stone(argumentum ad lapidem) – dismissing a claim as absurd without demonstrating proof for its absurdity.
bool _Fallacy::AppealToTheStoneFallacy(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average 
    string fallacy_definition = "dismissing a claim as absurd without demonstrating proof for its absurdity.";
    double* definition = _NLU::getSentenceVectors(fallacy_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(fallacy_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(fallacy_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
    string* fallacy_texts;
    string* fallacy_words;

    fallacy_texts = _Utilities::String2Words(text);

    for (int x = 0; x <= sizeof(fallacy_texts); x++)
    {

    }
}

//  Argument from ignorance(appeal to ignorance, argumentum ad ignorantiam) – assuming that a claim is true because it has not been or cannot be proven false, or vice versa.
bool _Fallacy::ArgumentFromIgnorance(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string fallacy_definition = "assuming that a claim is true because it has not been or cannot be proven false, or vice versa";
    double* definition = _NLU::getSentenceVectors(fallacy_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(fallacy_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(fallacy_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
    string* fallacy_texts;
    string* fallacy_words;

    fallacy_texts = _Utilities::String2Words(text);

    for (int x = 0; x <= sizeof(fallacy_texts); x++)
    {

    }
}

//  Argument from incredulity(appeal to common sense) – "I cannot imagine how this could be true; therefore, it must be false."
bool _Fallacy::ArgumentFromIncredulity(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string fallacy_definition = "I cannot imagine how this could be true; therefore, it must be false.";
    double* definition = _NLU::getSentenceVectors(fallacy_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(fallacy_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(fallacy_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
    string* fallacy_texts;
    string* fallacy_words;

    fallacy_texts = _Utilities::String2Words(text);

    for (int x = 0; x <= sizeof(fallacy_texts); x++)
    {

    }
}

//  Argument from repetition(argumentum ad nauseam, argumentum ad infinitum) – repeating an argument until nobody cares to discuss it any more; sometimes confused with proof by assertion.
bool _Fallacy::ArgumentFromRepitition(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string fallacy_definition = "repeating an argument until nobody cares to discuss it any more; sometimes confused with proof by assertion.";
    double* definition = _NLU::getSentenceVectors(fallacy_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(fallacy_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(fallacy_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
    string* fallacy_texts;
    string* fallacy_words;

    fallacy_texts = _Utilities::String2Words(text);

    for (int x = 0; x <= sizeof(fallacy_texts); x++)
    {

    }
}

//  Argument from silence(argumentum ex silentio) – assuming that a claim is true based on the absence of textual or spoken evidence from an authoritative source, or vice versa.
bool _Fallacy::ArgumentFromSilence(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string fallacy_definition = "assuming that a claim is true based on the absence of textual or spoken evidence from an authoritative source, or vice vers";
    double* definition = _NLU::getSentenceVectors(fallacy_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(fallacy_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(fallacy_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
    string* fallacy_texts;
    string* fallacy_words;

    fallacy_texts = _Utilities::String2Words(text);

    for (int x = 0; x <= sizeof(fallacy_texts); x++)
    {

    }
}

//  Ignoratio elenchi(irrelevant conclusion, missing the point) – an argument that may in itself be valid, but does not address the issue in question.
bool _Fallacy::IrrelevantConclusionFallacy(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string fallacy_definition = "an argument that may in itself be valid, but does not address the issue in question";
    double* definition = _NLU::getSentenceVectors(fallacy_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(fallacy_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(fallacy_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
    string* fallacy_texts;
    string* fallacy_words;

    fallacy_texts = _Utilities::String2Words(text);

    for (int x = 0; x <= sizeof(fallacy_texts); x++)
    {

    }
}

//  Red herring – introducing a second argument in response to the first argument that is irrelevantand draws attention away from the original topic(e.g.: saying “If you want to complain about the dishes I leave in the sink, what about the dirty clothes you leave in the bathroom ? ”).
bool _Fallacy::RedHerringFallacy(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string fallacy_definition = "introducing a second argument in response to the first argument that is irrelevantand draws attention away from the original topic";
    double* definition = _NLU::getSentenceVectors(fallacy_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(fallacy_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(fallacy_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
    string* fallacy_texts;
    string* fallacy_words;

    fallacy_texts = _Utilities::String2Words(text);

    for (int x = 0; x <= sizeof(fallacy_texts); x++)
    {

    }
}

//  Ad hominem – attacking the arguer instead of the argument. (N.b., "ad hominem" can also refer to the dialectical strategy of arguing on the basis of the opponent's own commitments. This type of ad hominem is not a fallacy.)
bool _Fallacy::AdHominem(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string fallacy_definition = "attacking the arguer instead of the argumen";
    double* definition = _NLU::getSentenceVectors(fallacy_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(fallacy_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(fallacy_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
    string* fallacy_texts;
    string* fallacy_words;

    fallacy_texts = _Utilities::String2Words(text);

    for (int x = 0; x <= sizeof(fallacy_texts); x++)
    {

    }
}

//  Circumstantial ad hominem – stating that the arguer's personal situation or perceived benefit from advancing a conclusion means that their conclusion is wrong.
bool _Fallacy::CircumstantialAdHominem(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string fallacy_definition = "stating that the arguer's personal situation or perceived benefit from advancing a conclusion means that their conclusion is wrong";
    double* definition = _NLU::getSentenceVectors(fallacy_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(fallacy_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(fallacy_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
    string* fallacy_texts;
    string* fallacy_words;

    fallacy_texts = _Utilities::String2Words(text);

    for (int x = 0; x <= sizeof(fallacy_texts); x++)
    {

    }
}

//  Poisoning the well – a subtype of ad hominem presenting adverse information about a target person with the intention of discrediting everything that the target person says.
bool _Fallacy::PoisoningTheWell(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string fallacy_definition = "a subtype of ad hominem presenting adverse information about a target person with the intention of discrediting everything that the target person says.";
    double* definition = _NLU::getSentenceVectors(fallacy_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(fallacy_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(fallacy_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
    string* fallacy_texts;
    string* fallacy_words;

    fallacy_texts = _Utilities::String2Words(text);

    for (int x = 0; x <= sizeof(fallacy_texts); x++)
    {

    }
}

//  Appeal to motive – dismissing an idea by questioning the motives of its proposer.
bool _Fallacy::AppealToMotive(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string fallacy_definition = "dismissing an idea by questioning the motives of its proposer";
    double* definition = _NLU::getSentenceVectors(fallacy_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(fallacy_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(fallacy_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
    string* fallacy_texts;
    string* fallacy_words;

    fallacy_texts = _Utilities::String2Words(text);

    for (int x = 0; x <= sizeof(fallacy_texts); x++)
    {

    }
}

//  Kafka - trapping – a sophistical and unfalsifiable form of argument that attempts to overcome an opponent by inducing a sense of guilt and using the opponent's denial of guilt as further evidence of guilt.
bool _Fallacy::WafkaTrapping(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string fallacy_definition = "a sophistical and unfalsifiable form of argument that attempts to overcome an opponent by inducing a sense of guilt and using the opponent's denial of guilt as further evidence of guilt.";
    double* definition = _NLU::getSentenceVectors(fallacy_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(fallacy_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(fallacy_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
    string* fallacy_texts;
    string* fallacy_words;

    fallacy_texts = _Utilities::String2Words(text);

    for (int x = 0; x <= sizeof(fallacy_texts); x++)
    {

    }
}

//  Tone policing – focusing on emotion behind(or resulting from) a message rather than the message itself as a discrediting tactic.
bool _Fallacy::TonePolicing(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string fallacy_definition = "focusing on emotion behind(or resulting from) a message rather than the message itself as a discrediting tactic.";
    double* definition = _NLU::getSentenceVectors(fallacy_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(fallacy_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(fallacy_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
    string* fallacy_texts;
    string* fallacy_words;

    fallacy_texts = _Utilities::String2Words(text);

    for (int x = 0; x <= sizeof(fallacy_texts); x++)
    {

    }
}

//  Traitorous critic fallacy(ergo decedo, 'thus leave') – a critic's perceived affiliation is portrayed as the underlying reason for the criticism and the critic is asked to stay away from the issue altogether. Easily confused with the association fallacy ("guilt by association") below.
bool _Fallacy::TraitorousCriticFallacy(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string fallacy_definition = "a critic's perceived affiliation is portrayed as the underlying reason for the criticism and the critic is asked to stay away from the issue altogether. Easily confused with the association fallacy below";
    double* definition = _NLU::getSentenceVectors(fallacy_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(fallacy_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(fallacy_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
    string* fallacy_texts;
    string* fallacy_words;

    fallacy_texts = _Utilities::String2Words(text);

    for (int x = 0; x <= sizeof(fallacy_texts); x++)
    {

    }
}

//  Appeal to authority(argument from authority, argumentum ad verecundiam) – an assertion is deemed true because of the position or authority of the person asserting it.
bool _Fallacy::AppealToAuthorityFallacy(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string fallacy_definition = "an assertion is deemed true because of the position or authority of the person asserting it.";
    double* definition = _NLU::getSentenceVectors(fallacy_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(fallacy_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(fallacy_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
    string* fallacy_texts;
    string* fallacy_words;

    fallacy_texts = _Utilities::String2Words(text);

    for (int x = 0; x <= sizeof(fallacy_texts); x++)
    {

    }
}

//  Appeal to accomplishment – an assertion is deemed true or false based on the accomplishments of the proposer.This may often also have elements of appeal to emotion(see below).
bool _Fallacy::AppealToAccomplishmentFallacy(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string fallacy_definition = "an assertion is deemed true or false based on the accomplishments of the proposer.This may often also have elements of appeal to emotion";
    double* definition = _NLU::getSentenceVectors(fallacy_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(fallacy_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(fallacy_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
    string* fallacy_texts;
    string* fallacy_words;

    fallacy_texts = _Utilities::String2Words(text);

    for (int x = 0; x <= sizeof(fallacy_texts); x++)
    {

    }
}

//  Courtier's reply – a criticism is dismissed by claiming that the critic lacks sufficient knowledge, credentials, or training to credibly comment on the subject matter.
bool _Fallacy::CourtiersReply(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string fallacy_definition = "a criticism is dismissed by claiming that the critic lacks sufficient knowledge, credentials, or training to credibly comment on the subject matter.";
    double* definition = _NLU::getSentenceVectors(fallacy_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(fallacy_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(fallacy_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
    string* fallacy_texts;
    string* fallacy_words;

    fallacy_texts = _Utilities::String2Words(text);

    for (int x = 0; x <= sizeof(fallacy_texts); x++)
    {

    }
}

//  Appeal to consequences(argumentum ad consequentiam) – the conclusion is supported by a premise that asserts positive or negative consequences from some course of action in an attempt to distract from the initial discussion.
bool _Fallacy::AppealToConsequences(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string fallacy_definition = "the conclusion is supported by a premise that asserts positive or negative consequences from some course of action in an attempt to distract from the initial discussion.";
    double* definition = _NLU::getSentenceVectors(fallacy_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(fallacy_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(fallacy_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
    string* fallacy_texts;
    string* fallacy_words;

    fallacy_texts = _Utilities::String2Words(text);

    for (int x = 0; x <= sizeof(fallacy_texts); x++)
    {

    }
}

//  Appeal to emotion – manipulating the emotions of the listener rather than using valid reasoning to obtain common agreement.
bool _Fallacy::AppealToEmotion(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string fallacy_definition = "manipulating the emotions of the listener rather than using valid reasoning to obtain common agreement";
    double* definition = _NLU::getSentenceVectors(fallacy_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(fallacy_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(fallacy_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
    string* fallacy_texts;
    string* fallacy_words;

    fallacy_texts = _Utilities::String2Words(text);

    for (int x = 0; x <= sizeof(fallacy_texts); x++)
    {

    }
}

//  Appeal to fear – generating distress, anxiety, cynicism, or prejudice towards the opponent in an argument
bool _Fallacy::AppealToFear(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string fallacy_definition = "generating distress, anxiety, cynicism, or prejudice towards the opponent in an argument";
    double* definition = _NLU::getSentenceVectors(fallacy_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(fallacy_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(fallacy_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
    string* fallacy_texts;
    string* fallacy_words;

    fallacy_texts = _Utilities::String2Words(text);

    for (int x = 0; x <= sizeof(fallacy_texts); x++)
    {

    }
}

//  Appeal to flattery – using excessive or insincere praise to obtain common agreement.
bool _Fallacy::AppealToFlattery(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string fallacy_definition = "using excessive or insincere praise to obtain common agreement";
    double* definition = _NLU::getSentenceVectors(fallacy_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(fallacy_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(fallacy_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
    string* fallacy_texts;
    string* fallacy_words;

    fallacy_texts = _Utilities::String2Words(text);

    for (int x = 0; x <= sizeof(fallacy_texts); x++)
    {

    }
}

//  Appeal to pity(argumentum ad misericordiam) – generating feelings of sympathy or mercy in the listener to obtain common agreement.
bool _Fallacy::AppealToPity(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string fallacy_definition = "generating feelings of sympathy or mercy in the listener to obtain common agreement.";
    double* definition = _NLU::getSentenceVectors(fallacy_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(fallacy_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(fallacy_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
    string* fallacy_texts;
    string* fallacy_words;

    fallacy_texts = _Utilities::String2Words(text);

    for (int x = 0; x <= sizeof(fallacy_texts); x++)
    {

    }
}

//  Appeal to ridicule(reductio ad absurdum, ad absurdum, reductio ad ridiculum) – stating that the opponent's position would lead to an absurdity or contradiction.
bool _Fallacy::AppealToRidicule(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string fallacy_definition = "stating that the opponent's position would lead to an absurdity or contradiction";
    double* definition = _NLU::getSentenceVectors(fallacy_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(fallacy_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(fallacy_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
    string* fallacy_texts;
    string* fallacy_words;

    fallacy_texts = _Utilities::String2Words(text);

    for (int x = 0; x <= sizeof(fallacy_texts); x++)
    {

    }
}

//  Appeal to spite – generating bitterness or hostility in the listener toward an opponent in an argument.
bool _Fallacy::AppealToSpite(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string fallacy_definition = "generating bitterness or hostility in the listener toward an opponent in an argument.";
    double* definition = _NLU::getSentenceVectors(fallacy_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(fallacy_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(fallacy_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
    string* fallacy_texts;
    string* fallacy_words;

    fallacy_texts = _Utilities::String2Words(text);

    for (int x = 0; x <= sizeof(fallacy_texts); x++)
    {

    }
}

//  Judgmental language – using insulting or pejorative language in an argument.
bool _Fallacy::JudgementalLanguage(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string fallacy_definition = "using insulting or pejorative language in an argument.";
    double* definition = _NLU::getSentenceVectors(fallacy_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(fallacy_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(fallacy_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
    string* fallacy_texts;
    string* fallacy_words;

    fallacy_texts = _Utilities::String2Words(text);

    for (int x = 0; x <= sizeof(fallacy_texts); x++)
    {

    }
}

//  Pooh - pooh – stating that an opponent's argument is unworthy of consideration.
bool _Fallacy::PoohPooh(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string fallacy_definition = "stating that an opponent's argument is unworthy of consideration";
    double* definition = _NLU::getSentenceVectors(fallacy_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(fallacy_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(fallacy_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
    string* fallacy_texts;
    string* fallacy_words;

    fallacy_texts = _Utilities::String2Words(text);

    for (int x = 0; x <= sizeof(fallacy_texts); x++)
    {

    }
}

//  Wishful thinking – arguing for a course of action by the listener according to what might be pleasing to imagine rather than according to evidence or reason.
bool _Fallacy::WishfulThinking(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string fallacy_definition = "arguing for a course of action by the listener according to what might be pleasing to imagine rather than according to evidence or reason";
    double* definition = _NLU::getSentenceVectors(fallacy_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(fallacy_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(fallacy_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
    string* fallacy_texts;
    string* fallacy_words;

    fallacy_texts = _Utilities::String2Words(text);

    for (int x = 0; x <= sizeof(fallacy_texts); x++)
    {

    } 
}

//  Appeal to nature – judgment is based solely on whether the subject of judgment is 'natural' or 'unnatural'.[81](Sometimes also called the "naturalistic fallacy", but is not to be confused with the other fallacies by that name.)
bool _Fallacy::AppealToNature(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string fallacy_definition = "judgment is based solely on whether the subject of judgment is natural or unnatural";
    double* definition = _NLU::getSentenceVectors(fallacy_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(fallacy_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(fallacy_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
    string* fallacy_texts;
    string* fallacy_words;

    fallacy_texts = _Utilities::String2Words(text);

    for (int x = 0; x <= sizeof(fallacy_texts); x++)
    {

    }
}

//  Appeal to novelty(argumentum novitatis, argumentum ad antiquitatis) – a proposal is claimed to be superior or better solely because it is new or modern. (opposite of appeal to tradition)
bool _Fallacy::AppealToNovelty(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string fallacy_definition = "a proposal is claimed to be superior or better solely because it is new or modern";
    double* definition = _NLU::getSentenceVectors(fallacy_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(fallacy_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(fallacy_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
    string* fallacy_texts;
    string* fallacy_words;

    fallacy_texts = _Utilities::String2Words(text);

    for (int x = 0; x <= sizeof(fallacy_texts); x++)
    {

    }
}

//  Appeal to poverty(argumentum ad Lazarum) – supporting a conclusion because the arguer is poor(or refuting because the arguer is wealthy). (Opposite of appeal to wealth.)[
bool _Fallacy::AppealToPoverty(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string fallacy_definition = "a conclusion because the arguer is poor";
    double* definition = _NLU::getSentenceVectors(fallacy_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(fallacy_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(fallacy_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
    string* fallacy_texts;
    string* fallacy_words;

    fallacy_texts = _Utilities::String2Words(text);

    for (int x = 0; x <= sizeof(fallacy_texts); x++)
    {

    }
}

//  Appeal to tradition(argumentum ad antiquitatem) – a conclusion supported solely because it has long been held to be true.
bool _Fallacy::AppealToTradition(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string fallacy_definition = "a conclusion supported solely because it has long been held to be true.";
    double* definition = _NLU::getSentenceVectors(fallacy_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(fallacy_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(fallacy_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
    string* fallacy_texts;
    string* fallacy_words;

    fallacy_texts = _Utilities::String2Words(text);

    for (int x = 0; x <= sizeof(fallacy_texts); x++)
    {

    }
}

//  Appeal to wealth(argumentum ad crumenam) – supporting a conclusion because the arguer is wealthy(or refuting because the arguer is poor). (Sometimes taken together with the appeal to poverty as a general appeal to the arguer's financial situation.)
bool _Fallacy::AppealToWealth(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string fallacy_definition = "supporting a conclusion because the arguer is wealthy";
    double* definition = _NLU::getSentenceVectors(fallacy_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(fallacy_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(fallacy_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
    string* fallacy_texts;
    string* fallacy_words;

    fallacy_texts = _Utilities::String2Words(text);

    for (int x = 0; x <= sizeof(fallacy_texts); x++)
    {

    }
}

//  Argumentum ad baculum(appeal to the stick, appeal to force, appeal to threat) – an argument made through coercion or threats of force to support position.
bool _Fallacy::AppealToThreat(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string fallacy_definition = "an argument made through coercion or threats of force to support position.";
    double* definition = _NLU::getSentenceVectors(fallacy_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(fallacy_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(fallacy_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
    string* fallacy_texts;
    string* fallacy_words;

    fallacy_texts = _Utilities::String2Words(text);

    for (int x = 0; x <= sizeof(fallacy_texts); x++)
    {

    }
}

//  Argumentum ad populum(appeal to widespread belief, bandwagon argument, appeal to the majority, appeal to the people) – a proposition is claimed to be true or good solely because a majority or many people believe it to be so.
bool _Fallacy::ArgumentumAdPopulum(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string fallacy_definition = "a proposition is claimed to be true or good solely because a majority or many people believe it to be so.";
    double* definition = _NLU::getSentenceVectors(fallacy_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(fallacy_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(fallacy_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
    string* fallacy_texts;
    string* fallacy_words;

    fallacy_texts = _Utilities::String2Words(text);

    for (int x = 0; x <= sizeof(fallacy_texts); x++)
    {

    }
}

//  Association fallacy(guilt by association and honor by association) – arguing that because two things share(or are implied to share) some property, they are the same..
bool _Fallacy::AssociationFallacy(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string fallacy_definition = "arguing that because two things share some property, they are the same";
    double* definition = _NLU::getSentenceVectors(fallacy_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(fallacy_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(fallacy_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
    string* fallacy_texts;
    string* fallacy_words;

    fallacy_texts = _Utilities::String2Words(text);

    for (int x = 0; x <= sizeof(fallacy_texts); x++)
    {

    }
}

//  Ipse dixit(bare assertion fallacy) – a claim that is presented as true without support, as self - evidently true, or as dogmatically true.This fallacy relies on the implied expertise of the speaker or on an unstated truism.
bool _Fallacy::IpseDixit(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string fallacy_definition = "a claim that is presented as true without support";
    double* definition = _NLU::getSentenceVectors(fallacy_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(fallacy_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(fallacy_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
    string* fallacy_texts;
    string* fallacy_words;

    fallacy_texts = _Utilities::String2Words(text);

    for (int x = 0; x <= sizeof(fallacy_texts); x++)
    {

    }
}

//  Bulverism(psychogenetic fallacy) – inferring why an argument is being used, associating it to some psychological reason, then assuming it is invalid as a result.The assumption that if the origin of an idea comes from a biased mind, then the idea itself must also be a falsehood.
bool _Fallacy::PsychogeneticFallacy(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string fallacy_definition = "inferring why an argument is being used";
    double* definition = _NLU::getSentenceVectors(fallacy_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(fallacy_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(fallacy_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
    string* fallacy_texts;
    string* fallacy_words;

    fallacy_texts = _Utilities::String2Words(text);

    for (int x = 0; x <= sizeof(fallacy_texts); x++)
    {

    }
}

//  Chronological snobbery – a thesis is deemed incorrect because it was commonly held when something else, known to be false, was also commonly held.
bool _Fallacy::ChronologicalSnobbery(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string fallacy_definition = "thesis is deemed incorrect because it was commonly held when something else, known to be false, was also commonly held";
    double* definition = _NLU::getSentenceVectors(fallacy_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(fallacy_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(fallacy_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
    string* fallacy_texts;
    string* fallacy_words;

    fallacy_texts = _Utilities::String2Words(text);

    for (int x = 0; x <= sizeof(fallacy_texts); x++)
    {

    }
}

//  Fallacy of relative privation(also known as "appeal to worse problems" or "not as bad as") – dismissing an argument or complaint due to what are perceived to be more important problems.First World problems are a subset of this fallacy.
bool _Fallacy::FallacyOfRelativePrivatation(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string fallacy_definition = "dismissing an argument or complaint due to what are perceived to be more important problems.First World problems are a subset of this fallacy.";
    double* definition = _NLU::getSentenceVectors(fallacy_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(fallacy_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(fallacy_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
    string* fallacy_texts;
    string* fallacy_words;

    fallacy_texts = _Utilities::String2Words(text);

    for (int x = 0; x <= sizeof(fallacy_texts); x++)
    {

    }
}

//  Genetic fallacy – a conclusion is suggested based solely on something or someone's origin rather than its current meaning or context.
bool _Fallacy::GeneticFallacy(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string fallacy_definition = "conclusion is suggested based solely on something or someones origin rather than its current meaning or context";
    double* definition = _NLU::getSentenceVectors(fallacy_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(fallacy_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(fallacy_definition);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
    string* fallacy_texts;
    string* fallacy_words;

    fallacy_texts = _Utilities::String2Words(text);

    for (int x = 0; x <= sizeof(fallacy_texts); x++)
    {

    }
}

//  I'm entitled to my opinion – a person discredits any opposition by claiming that they are entitled to their opinion.
bool _Fallacy::EntitledToOpiniom(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string fallacy_definition = "a person discredits any opposition by claiming that they are entitled to their opinion.";
    double* definition = _NLU::getSentenceVectors(fallacy_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(fallacy_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(fallacy_definition);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
    string* fallacy_texts;
    string* fallacy_words;

    fallacy_texts = _Utilities::String2Words(text);

    for (int x = 0; x <= sizeof(fallacy_texts); x++)
    {

    }
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
    string fallacy_definition = "inferring evaluative conclusions from purely factual premises in violation of fact - value distinction";
    double* definition = _NLU::getSentenceVectors(fallacy_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(fallacy_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(fallacy_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
    string* fallacy_texts;
    string* fallacy_words;

    fallacy_texts = _Utilities::String2Words(text);

    for (int x = 0; x <= sizeof(fallacy_texts); x++)
    {

    }
}

//  Is–ought fallacy – statements about what is, on the basis of claims about what ought to be.
bool _Fallacy::IsOughtFallacy(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string fallacy_definition = "statements about what is, on the basis of claims about what ought to be";
    double* definition = _NLU::getSentenceVectors(fallacy_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(fallacy_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(fallacy_definition);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
    string* fallacy_texts;
    string* fallacy_words;

    fallacy_texts = _Utilities::String2Words(text);

    for (int x = 0; x <= sizeof(fallacy_texts); x++)
    {

    }
}

//  Naturalistic fallacy fallacy(anti - naturalistic fallacy) – inferring an impossibility to infer any instance of ought from is from the general invalidity of is - ought fallacy, mentioned above.
bool _Fallacy::NaturalisticFallacyFallacy (string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string fallacy_definition = "inferring an impossibility to infer any instance of ought from is from the general invalidity of is - ought fallacy, mentioned above.";
    double* definition = _NLU::getSentenceVectors(fallacy_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(fallacy_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(fallacy_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
    string* fallacy_texts;
    string* fallacy_words;

    fallacy_texts = _Utilities::String2Words(text);

    for (int x = 0; x <= sizeof(fallacy_texts); x++)
    {

    }
}

//  Straw man fallacy – misrepresenting an opponent's argument by broadening or narrowing the scope of a premise and refuting a weaker version (e.g.: saying “You tell us that A is the right thing to do, but the real reason you want us to do A is that you would personally profit from it).
bool _Fallacy::StrawManFallacy(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string fallacy_definition = "misrepresenting an opponent's argument by broadening or narrowing the scope of a premise and refuting a weaker version";
    double* definition = _NLU::getSentenceVectors(fallacy_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(fallacy_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(fallacy_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
    string* fallacy_texts;
    string* fallacy_words;

    fallacy_texts = _Utilities::String2Words(text);

    for (int x = 0; x <= sizeof(fallacy_texts); x++)
    {

    }
}

//  Texas sharpshooter fallacy – improperly asserting a cause to explain a cluster of data.
bool _Fallacy::TexasSharpshooterFallacy(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string fallacy_definition = "improperly asserting a cause to explain a cluster of data.";
    double* definition = _NLU::getSentenceVectors(fallacy_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(fallacy_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(fallacy_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
    string* fallacy_texts;
    string* fallacy_words;

    fallacy_texts = _Utilities::String2Words(text);

    for (int x = 0; x <= sizeof(fallacy_texts); x++)
    {

    }
}

//  Tu quoque('you too' – appeal to hypocrisy, whataboutism) – stating that a position is false, wrong, or should be disregarded because its proponent fails to act consistently in accordance with it.
bool _Fallacy::AppealToHypocrisy(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string fallacy_definition = "stating that a position is false, wrong, or should be disregarded because its proponent fails to act consistently in accordance with it.";
    double* definition = _NLU::getSentenceVectors(fallacy_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(fallacy_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(fallacy_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
    string* fallacy_texts;
    string* fallacy_words;

    fallacy_texts = _Utilities::String2Words(text);

    for (int x = 0; x <= sizeof(fallacy_texts); x++)
    {

    }
}

//  Two wrongs make a right – assuming that, if one wrong is committed, another wrong will rectify it.
bool _Fallacy::TwoWrongsMakeARight(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string fallacy_definition = "assuming that, if one wrong is committed, another wrong will rectify it.";
    double* definition = _NLU::getSentenceVectors(fallacy_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(fallacy_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(fallacy_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
    string* fallacy_texts;
    string* fallacy_words;

    fallacy_texts = _Utilities::String2Words(text);

    for (int x = 0; x <= sizeof(fallacy_texts); x++)
    {

    }
}

//  Vacuous truth – a claim that is technically true but meaningless, in the form no A in B has C, when there is no A in B.For example, claiming that no mobile phones in the room are on when there are no mobile phones in the room.
bool _Fallacy::VacuousTruth(string text)
{
    // Get the definition for the fallacy
    // 1. Fallacy Additive
    // 2. Fallacy Additive Average
    string fallacy_definition = "a claim that is technically true but meaningless";
    double* definition = _NLU::getSentenceVectors(fallacy_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(fallacy_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(fallacy_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
    string* fallacy_texts;
    string* fallacy_words;

    fallacy_texts = _Utilities::String2Words(text);

    for (int x = 0; x <= sizeof(fallacy_texts); x++)
    {

    }
}