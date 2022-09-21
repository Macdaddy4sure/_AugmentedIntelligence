/*
    Copyright(C) 2022 Tyler Crockett | Macdaddy4sure.com

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
#include "Bias.h"
#include "Working-Memory.h"
#include "Short-Term Memory.h"
#include "Long-Term Memory.h"
#include "Reference.h"
#include "NLP.h"
#include "NLU.h"
#include "Settings.h"
#include "Variables.h"
#include "Utilities.h"

using namespace std;

// This function will be a simple check for bias in actions, speech and writing
string _NLU::BiasCheck(string text)
{
    // 1. Connect to the biases database

    // 2. Use sensory data and bias concepts to check for bias in speech, reasoning, argument, 
    return "false";
}

// This function will check for bias in text and will compensate with the environment or context
string _NLU::BiasCheck(string text, string data)
{
    // 1. Connect to the biases database
    return "false";
}

// Ambiguity effect
// The tendency to avoid options for which the probability of a favorable outcome is unknown.
bool _Bias::AmbiguityEffect(string sentence)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string bias_definition = "The tendency to avoid options for which the probability of a favorable outcome is unknown.";
    double* definition = _NLU::getSentenceVectors(bias_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(bias_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(bias_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
}

// Anchoring or focalism
// The tendency to rely too heavily, or "anchor", on one trait or piece of information when making decisions(usually the first piece of information acquired on that subject).
bool _Bias::Anchoring(string sentence)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string bias_definition = "The tendency to rely too heavily, or \"anchor\", on one trait or piece of information when making decisions(usually the first piece of information acquired on that subject).";
    double* definition = _NLU::getSentenceVectors(bias_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(bias_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(bias_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
}

// Anthropocentric thinking
// The tendency to use human analogies as a basis for reasoning about other, less familiar, biological phenomena.
bool _Bias::AnthropocentricThinking(string sentence)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string bias_definition = "The tendency to use human analogies as a basis for reasoning about other, less familiar, biological phenomena.";
    double* definition = _NLU::getSentenceVectors(bias_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(bias_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(bias_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
}

// Anthropomorphism or personification
// The tendency to characterize animals, objects, and abstract concepts as possessing human like traits, emotions, and intentions.
bool _Bias::Anthropomorphism(string sentence)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string bias_definition = "The tendency to characterize animals, objects, and abstract concepts as possessing human like traits, emotions, and intentions.";
    double* definition = _NLU::getSentenceVectors(bias_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(bias_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(bias_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
}

// Attentional bias
// The tendency of perception to be affected by recurring thoughts.
bool _Bias::AttentionalBias(string sentence)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string bias_definition = "The tendency of perception to be affected by recurring thoughts.";
    double* definition = _NLU::getSentenceVectors(bias_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(bias_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(bias_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
}

// Automation bias
// The tendency to depend excessively on automated systems which can lead to erroneous automated information overriding correct decisions.
bool _Bias::AutomationBias(string sentence)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string bias_definition = "The tendency to depend excessively on automated systems which can lead to erroneous automated information overriding correct decisions.";
    double* definition = _NLU::getSentenceVectors(bias_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(bias_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(bias_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
}

// Availability heuristic
// The tendency to overestimate the likelihood of events with greater "availability" in memory, which can be influenced by how recent the memories are or how unusual or emotionally charged they may be.
bool _Bias::AvailabilityHeuristic (string sentence)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string bias_definition = "The tendency to overestimate the likelihood of events with greater \"availability\" in memory, which can be influenced by how recent the memories are or how unusual or emotionally charged they may be";
    double* definition = _NLU::getSentenceVectors(bias_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(bias_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(bias_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
}

// Availability cascade
// A self reinforcing process in which a collective belief gains more and more plausibility through its increasing repetition in public discourse(or "repeat something long enough and it will become true").
bool _Bias::AvailabilityCascade(string sentence)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string bias_definition = "A self reinforcing process in which a collective belief gains more and more plausibility through its increasing repetition in public discourse";
    double* definition = _NLU::getSentenceVectors(bias_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(bias_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(bias_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
}

// Backfire effect
// The reaction to disconfirming evidence by strengthening one's previous beliefs. Continued influence effect.
bool _Bias::BackfireEffect(string sentence)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string bias_definition = "The reaction to disconfirming evidence by strengthening one's previous beliefs. Continued influence effect.";
    double* definition = _NLU::getSentenceVectors(bias_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(bias_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(bias_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
}

// Bandwagon effect
// The tendency to do (or believe) things because many other people do (or believe) the same.Related to groupthinkand herd behavior.
bool _Bias::BandwagonEffect(string sentence)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string bias_definition = "The tendency to do (or believe) things because many other people do (or believe) the same.Related to groupthinkand herd behavior";
    double* definition = _NLU::getSentenceVectors(bias_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(bias_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(bias_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
}

// Base rate bias or Base rate neglect
// The tendency to ignore base rate information(generic, general information) and focus on specific information(information only pertaining to a certain case).
bool _Bias::BaseRateBias(string sentence)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string bias_definition = "The tendency to ignore base rate information";
    double* definition = _NLU::getSentenceVectors(bias_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(bias_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(bias_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
}

// Belief bias
// An effect where someone's evaluation of the logical strength of an argument is biased by the believability of the conclusion.
bool _Bias::BeliefBias(string sentence)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string bias_definition = "An effect where someone's evaluation of the logical strength of an argument is biased by the believability of the conclusion";
    double* definition = _NLU::getSentenceVectors(bias_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(bias_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(bias_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
}

// Ben Franklin effect
// A person who has performed a favor for someone is more likely to do another favor for that person than they would be if they had received a favor from that person.
bool _Bias::BenFranklynEffect(string sentence)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string bias_definition = "A person who has performed a favor for someone is more likely to do another favor for that person than they would be if they had received a favor from that person.";
    double* definition = _NLU::getSentenceVectors(bias_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(bias_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(bias_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
}

// Berkson's paradox
// The tendency to misinterpret statistical experiments involving conditional probabilities.
bool _Bias::BerksonParadox(string sentence)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string bias_definition = "The tendency to misinterpret statistical experiments involving conditional probabilities.";
    double* definition = _NLU::getSentenceVectors(bias_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(bias_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(bias_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
}

// Bias blind spot
// The tendency to see oneself as less biased than other people, or to be able to identify more cognitive biases in others than in oneself.
bool _Bias::BiasBlindSpot(string sentence)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string bias_definition = "The tendency to see oneself as less biased than other people, or to be able to identify more cognitive biases in others than in oneself.";
    double* definition = _NLU::getSentenceVectors(bias_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(bias_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(bias_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
}

// Choice supportive bias
// The tendency to remember one's choices as better than they actually were.
bool _Bias::ChoiceSupportiveBias(string sentence)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string bias_definition = "The tendency to remember one's choices as better than they actually were.";
    double* definition = _NLU::getSentenceVectors(bias_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(bias_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(bias_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
}

// Clustering illusion
// The tendency to overestimate the importance of small runs, streaks, or clusters in large samples of random data(that is, seeing phantom patterns).
bool _Bias::ClusteringIllusion(string sentence)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string bias_definition = "The tendency to overestimate the importance of small runs, streaks, or clusters in large samples of random data";
    double* definition = _NLU::getSentenceVectors(bias_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(bias_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(bias_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
}

// Confirmation bias
// The tendency to search for, interpret, focus onand remember information in a way that confirms one's preconceptions.
bool _Bias::ConfirmationBias(string sentence)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string bias_definition = "The tendency to search for, interpret, focus onand remember information in a way that confirms one's preconceptions";
    double* definition = _NLU::getSentenceVectors(bias_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(bias_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(bias_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
}

// Congruence bias
// The tendency to test hypotheses exclusively through direct testing, instead of testing possible alternative hypotheses.
bool _Bias::CongruenceBias(string sentence)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string bias_definition = "The tendency to test hypotheses exclusively through direct testing, instead of testing possible alternative hypotheses.";
    double* definition = _NLU::getSentenceVectors(bias_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(bias_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(bias_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
}

// Conjunction bias
// The tendency to assume that specific conditions are more probable than general ones.
bool _Bias::ConjunctionBias(string sentence)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string bias_definition = "The tendency to assume that specific conditions are more probable than general ones.";
    double* definition = _NLU::getSentenceVectors(bias_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(bias_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(bias_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
}

// Conservatism(belief revision)
// The tendency to revise one's belief insufficiently when presented with new evidence.
bool _Bias::Conservatism(string sentence)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string bias_definition = "The tendency to revise one's belief insufficiently when presented with new evidence.";
    double* definition = _NLU::getSentenceVectors(bias_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(bias_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(bias_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
}

// Continued influence effect
// The tendency to believe previously learned misinformation even after it has been corrected.Misinformation can still influence inferences one generates after a correction has occurred.Backfire effect.
bool _Bias::ContinuedInfluenceEffect(string sentence)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string bias_definition = "The tendency to believe previously learned misinformation even after it has been corrected.Misinformation can still influence inferences one generates after a correction has occurred.Backfire effect";
    double* definition = _NLU::getSentenceVectors(bias_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(bias_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(bias_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
}

// Contrast effect
// The enhancement or reduction of a certain stimulus' perception when compared with a recently observed, contrasting object.
bool _Bias::ContrastEffect(string sentence)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string bias_definition = "The enhancement or reduction of a certain stimulus' perception when compared with a recently observed, contrasting object.";
    double* definition = _NLU::getSentenceVectors(bias_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(bias_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(bias_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
}

// Courtesy bias
// The tendency to give an opinion that is more socially correct than one's true opinion, so as to avoid offending anyone.
bool _Bias::CourtesyBias(string sentence)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string bias_definition = "The tendency to give an opinion that is more socially correct than one's true opinion, so as to avoid offending anyone.";
    double* definition = _NLU::getSentenceVectors(bias_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(bias_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(bias_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
}

// Curse of knowledge
// When better informed people find it extremely difficult to think about problems from the perspective of lesser informed people.
bool _Bias::CurseOfKnowledge(string sentence)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string bias_definition = "When better informed people find it extremely difficult to think about problems from the perspective of lesser informed people.";
    double* definition = _NLU::getSentenceVectors(bias_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(bias_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(bias_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
}

// Declinism
// The predisposition to view the past favorably(rosy retrospection) and future negatively.
bool _Bias::Declinism(string sentence)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string bias_definition = "The predisposition to view the past favorably(rosy retrospection) and future negatively.";
    double* definition = _NLU::getSentenceVectors(bias_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(bias_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(bias_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
}

// Decoy effect
// Preferences for either option A or B change in favor of option B when option C is presented, which is completely dominated by option B(inferior in all respects) and partially dominated by option A.
bool _Bias::DecoyEffect(string sentence)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string bias_definition = "Preferences for either option A or B change in favor of option B when option C is presented, which is completely dominated by option B(inferior in all respects) and partially dominated by option A.";
    double* definition = _NLU::getSentenceVectors(bias_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(bias_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(bias_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
}

// Default effect
// When given a choice between several options, the tendency to favor the default one.
bool _Bias::DefaultEffect(string sentence)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string bias_definition = "When given a choice between several options, the tendency to favor the default one.";
    double* definition = _NLU::getSentenceVectors(bias_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(bias_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(bias_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
}

// Denomination effect
// The tendency to spend more money when it is denominated in small amounts(e.g., coins) rather than large amounts(e.g., bills).
bool _Bias::DenominationEffect(string sentence)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string bias_definition = "The tendency to spend more money when it is denominated in small amounts";
    double* definition = _NLU::getSentenceVectors(bias_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(bias_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(bias_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
}

// Disposition effect
// The tendency to sell an asset that has accumulated in valueand resist selling an asset that has declined in value.
bool _Bias::DispositionEffect(string sentence)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string bias_definition = "The tendency to sell an asset that has accumulated in valueand resist selling an asset that has declined in value.";
    double* definition = _NLU::getSentenceVectors(bias_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(bias_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(bias_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
}

// Distinction bias
// The tendency to view two options as more dissimilar when evaluating them simultaneously than when evaluating them separately.
bool _Bias::DistinktionBias(string sentence)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string bias_definition = "The tendency to view two options as more dissimilar when evaluating them simultaneously than when evaluating them separately.";
    double* definition = _NLU::getSentenceVectors(bias_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(bias_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(bias_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
}

// Dread aversion
// Just as losses yield double the emotional impact of gains, dread yields double the emotional impact of savouring.
bool _Bias::DreadAversion(string sentence)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string bias_definition = "Just as losses yield double the emotional impact of gains, dread yields double the emotional impact of savouring.";
    double* definition = _NLU::getSentenceVectors(bias_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(bias_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(bias_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
}

// Dunning–Kruger effect
// The tendency for unskilled individuals to overestimate their own abilityand the tendency for experts to underestimate their own ability.
bool _Bias::DunningKrugerEffect(string sentence)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string bias_definition = "The tendency for unskilled individuals to overestimate their own abilityand the tendency for experts to underestimate their own ability.";
    double* definition = _NLU::getSentenceVectors(bias_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(bias_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(bias_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
}

// Duration neglect
// The neglect of the duration of an episode in determining its value.
bool _Bias::DurationNeglect(string sentence)
{
    // Get the definition for the biasgetSentenceVectorsAdditiveAverage
    // 1. bias Additive
    // 2. bias Additive Average
    string bias_definition = "The neglect of the duration of an episode in determining its valuee";
    double* definition = _NLU::getSentenceVectors(bias_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(bias_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(bias_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
}

// Empathy gap
// The tendency to underestimate the influence or strength of feelings, in either oneself or others.
bool _Bias::EmpathyGap(string sentence)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string bias_definition = "The tendency to underestimate the influence or strength of feelings, in either oneself or others.";
    double* definition = _NLU::getSentenceVectors(bias_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(bias_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(bias_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
}

// Endowment effect
// The tendency for people to demand much more to give up an object than they would be willing to pay to acquire it.
bool _Bias::EndowmentEffect(string sentence)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string bias_definition = "The tendency for people to demand much more to give up an object than they would be willing to pay to acquire it.";
    double* definition = _NLU::getSentenceVectors(bias_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(bias_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(bias_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
}

// Exaggerated expectation
// The tendency to expect or predict more extreme outcomes than those outcomes that actually happen.
bool _Bias::ExaggeratedExpectation(string sentence)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string bias_definition = "The tendency to expect or predict more extreme outcomes than those outcomes that actually happen.";
    double* definition = _NLU::getSentenceVectors(bias_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(bias_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(bias_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
}

// Experimenter's or expectation bias
// The tendency for experimenters to believe, certify, and publish data that agree with their expectations for the outcome of an experiment, and to disbelieve, discard, or downgrade the corresponding weightings for data that appear to conflict with those expectations.
bool _Bias::ExpactationBias(string sentence)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string bias_definition = "The tendency for experimenters to believe, certify, and publish data that agree with their expectations for the outcome of an experiment, and to disbelieve, discard, or downgrade the corresponding weightings for data that appear to conflict with those expectations.";
    double* definition = _NLU::getSentenceVectors(bias_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(bias_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(bias_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
}

// Focusing effect
// The tendency to place too much importance on one aspect of an event.
bool _Bias::FocusingEffect(string sentence)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string bias_definition = "The tendency to place too much importance on one aspect of an event.";
    double* definition = _NLU::getSentenceVectors(bias_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(bias_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(bias_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
}

// Forer effect or Barnum effect
// The observation that individuals will give high accuracy ratings to descriptions of their personality that supposedly are tailored specifically for them, but are in fact vagueand general enough to apply to a wide range of people.This effect can provide a partial explanation for the widespread acceptance of some beliefsand practices, such as astrology, fortune telling, graphology, and some types of personality tests.
bool _Bias::ForerEffect(string sentence)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string bias_definition = "The observation that individuals will give high accuracy ratings to descriptions of their personality that supposedly are tailored specifically for them, but are in fact vagueand general enough to apply to a wide range of people.This effect can provide a partial explanation for the widespread acceptance of some beliefsand practices, such as astrology, fortune telling, graphology, and some types of personality tests.";
    double* definition = _NLU::getSentenceVectors(bias_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(bias_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(bias_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
}

// Form function attribution bias
// In human–robot interaction, the tendency of people to make systematic errors when interacting with a robot.People may base their expectationsand perceptions of a robot on its appearance(form) and attribute functions which do not necessarily mirror the true functions of the robot.
bool _Bias::FormFunctionAttributionBias(string sentence)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string bias_definition = "In human–robot interaction, the tendency of people to make systematic errors when interacting with a robot.People may base their expectationsand perceptions of a robot on its appearance(form) and attribute functions which do not necessarily mirror the true functions of the robot.";
    double* definition = _NLU::getSentenceVectors(bias_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(bias_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(bias_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
}

// Framing effect
// Drawing different conclusions from the same information, depending on how that information is presented.
bool _Bias::FramingEffect(string sentence)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string bias_definition = "Drawing different conclusions from the same information, depending on how that information is presented";
    double* definition = _NLU::getSentenceVectors(bias_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(bias_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(bias_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
}

// Frequency illusion or Baader–Meinhof effect
// The illusion in which a word, a name, or other thing that has recently come to one's attention suddenly seems to appear with improbable frequency shortly afterwards (not to be confused with the recency illusion or selection bias). This illusion is sometimes referred to as the Baader–Meinhof phenomenon.
bool _Bias::FrequencyIllusion(string sentence)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string bias_definition = "The illusion in which a word, a name, or other thing that has recently come to one's attention suddenly seems to appear with improbable frequency shortly afterwards (not to be confused with the recency illusion or selection bias). This illusion is sometimes referred to as the Baader–Meinhof phenomenon.";
    double* definition = _NLU::getSentenceVectors(bias_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(bias_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(bias_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
}

// Functional fixedness
// Limits a person to using an object only in the way it is traditionally used.[51]
bool _Bias::FunctionalFixedness(string sentence)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string bias_definition = "Limits a person to using an object only in the way it is traditionally used.";
    double* definition = _NLU::getSentenceVectors(bias_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(bias_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(bias_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
}

// Gambler's bias
// The tendency to think that future probabilities are altered by past events, when in reality they are unchanged.The bias arises from an erroneous conceptualization of the law of large numbers.For example, "I've flipped heads with this coin five times consecutively, so the chance of tails coming out on the sixth flip is much greater than heads."[52]
bool _Bias::Gamblersbias(string sentence)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string bias_definition = "The tendency to think that future probabilities are altered by past events, when in reality they are unchanged.The bias arises from an erroneous conceptualization of the law of large numbers";
    double* definition = _NLU::getSentenceVectors(bias_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(bias_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(bias_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
}

// Groupthink
// The psychological phenomenon that occurs within a group of people in which the desire for harmony or conformity in the group results in an irrational or dysfunctional decision making outcome.Group members try to minimize conflict and reach a consensus decision without critical evaluation of alternative viewpoints by actively suppressing dissenting viewpoints, and by isolating themselves from outside influences.
bool _Bias::Groupthink(string sentence)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string bias_definition = "The psychological phenomenon that occurs within a group of people in which the desire for harmony or conformity in the group results in an irrational or dysfunctional decision making outcome.Group members try to minimize conflict and reach a consensus decision without critical evaluation of alternative viewpoints by actively suppressing dissenting viewpoints, and by isolating themselves from outside influences.";
    double* definition = _NLU::getSentenceVectors(bias_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(bias_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(bias_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
}

// Hard–easy effect
// Based on a specific level of task difficulty, the confidence in judgments is too conservative and not extreme enough.
bool _Bias::HardEasyEffect(string sentence)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string bias_definition = "Based on a specific level of task difficulty, the confidence in judgments is too conservative and not extreme enough.";
    double* definition = _NLU::getSentenceVectors(bias_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(bias_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(bias_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
}

// Hindsight bias
// Sometimes called the "I-knew-it-all-along" effect, the tendency to see past events as being predictable at the time those events happened.
bool _Bias::HindsightBias(string sentence)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string bias_definition = "Sometimes called the I-new-it-all-along effect, the tendency to see past events as being predictable at the time those events happened.";
    double* definition = _NLU::getSentenceVectors(bias_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(bias_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(bias_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
}

// Hostile attribution bias
// The "hostile attribution bias" is the tendency to interpret others' behaviors as having hostile intent, even when the behavior is ambiguous or benign.[57]
bool _Bias::HostileAttributionBias(string sentence)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string bias_definition = "the tendency to interpret others behaviors as having hostile intent, even when the behavior is ambiguous or benign.";
    double* definition = _NLU::getSentenceVectors(bias_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(bias_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(bias_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
}

// Hot hand bias
// The "hot-hand bias" (also known as the "hot hand phenomenon" or "hot hand") is the belief that a person who has experienced success with a random event has a greater chance of further success in additional attempts.
bool _Bias::HotHandBias(string sentence)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string bias_definition = "the belief that a person who has experienced success with a random event has a greater chance of further success in additional attempts.";
    double* definition = _NLU::getSentenceVectors(bias_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(bias_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(bias_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
}

// Hyperbolic discounting
// Discounting is the tendency for people to have a stronger preference for more immediate payoffs relative to later payoffs.Hyperbolic discounting leads to choices that are inconsistent over time – people make choices today that their future selves would prefer not to have made, despite using the same reasoning.[58] Also known as current moment bias, present bias, and related to Dynamic inconsistency.A good example of this: a study showed that when making food choices for the coming week, 74 % of participants chose fruit, whereas when the food choice was for the current day, 70 % chose chocolate.
bool _Bias::HyperbolicDiscounting(string sentence)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string bias_definition = "the tendency for people to have a stronger preference for more immediate payoffs relative to later payoffs";
    double* definition = _NLU::getSentenceVectors(bias_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(bias_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(bias_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
}

// Identifiable victim effect
// The tendency to respond more strongly to a single identified person at risk than to a large group of people at risk.
bool _Bias::IdentifiableVictimEffect(string sentence)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string bias_definition = "The tendency to respond more strongly to a single identified person at risk than to a large group of people at risk.";
    double* definition = _NLU::getSentenceVectors(bias_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(bias_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(bias_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
}

// IKEA effect
// The tendency for people to place a disproportionately high value on objects that they partially assembled themselves, such as furniture from IKEA, regardless of the quality of the end result.
bool _Bias::IKEAEffect(string sentence)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string bias_definition = "The tendency for people to place a disproportionately high value on objects that they partially assembled themselves, such as furniture from IKEA, regardless of the quality of the end result";
    double* definition = _NLU::getSentenceVectors(bias_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(bias_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(bias_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
}

// Illicit transference
// Occurs when a term in the distributive(referring to every member of a class) and collective(referring to the class itself as a whole) sense are treated as equivalent.The two variants of this bias are the bias of compositionand the bias of division.
bool _Bias::IllicitTransference(string sentence)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string bias_definition = "Occurs when a term in the distributive and collective sense are treated as equivalent";
    double* definition = _NLU::getSentenceVectors(bias_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(bias_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(bias_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
}

// Illusion of control
// The tendency to overestimate one's degree of influence over other external events.
bool _Bias::IllusionOfControl(string sentence)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string bias_definition = "The tendency to overestimate one's degree of influence over other external events.";
    double* definition = _NLU::getSentenceVectors(bias_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(bias_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(bias_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
}

// Illusion of validity
// Belief that our judgments are accurate, especially when available information is consistent or inter correlated.
bool _Bias::IllusionOfValidity(string sentence)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string bias_definition = "Belief that our judgments are accurate, especially when available information is consistent or inter correlated.";
    double* definition = _NLU::getSentenceVectors(bias_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(bias_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(bias_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
}

// Illusory correlation
// Inaccurately perceiving a relationship between two unrelated events.
bool _Bias::IllusoryCorrelation (string sentence)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string bias_definition = "Inaccurately perceiving a relationship between two unrelated events";
    double* definition = _NLU::getSentenceVectors(bias_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(bias_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(bias_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
}

// Illusory truth effect
// A tendency to believe that a statement is true if it is easier to process, or if it has been stated multiple times, regardless of its actual veracity.These are specific cases of truthiness.
bool _Bias::IllusoryTruthEffect(string sentence)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string bias_definition = "tendency to believe that a statement is true if it is easier to process, or if it has been stated multiple times, regardless of its actual veracity.These are specific cases of truthiness.";
    double* definition = _NLU::getSentenceVectors(bias_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(bias_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(bias_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
}

// Impact bias
// The tendency to overestimate the length or the intensity of the impact of future feeling states.[65]
bool _Bias::ImpactBias(string sentence)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string bias_definition = "The tendency to overestimate the length or the intensity of the impact of future feeling states.";
    double* definition = _NLU::getSentenceVectors(bias_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(bias_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(bias_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
}

// Implicit association
// The speed with which people can match words depends on how closely they are associated.This has generated some controversy when some people are able to match pairings like "White" and "pleasant" faster than "Black" and "pleasant", with debate over whether this indicates a form of unconscious prejudice that could result in discrimination.
bool _Bias::ImplicitAssociation(string sentence)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string bias_definition = "The speed with which people can match words depends on how closely they are associated.";
    double* definition = _NLU::getSentenceVectors(bias_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(bias_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(bias_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
}

// Information bias
// The tendency to seek information even when it cannot affect action.
bool _Bias::InformationBias(string sentence)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string bias_definition = "The tendency to seek information even when it cannot affect action";
    double* definition = _NLU::getSentenceVectors(bias_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(bias_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(bias_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
}

// Insensitivity to sample size
// The tendency to under expect variation in small samples.
bool _Bias::InsenitiveityToSampleSize(string sentence)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string bias_definition = "The tendency to under expect variation in small samples.";
    double* definition = _NLU::getSentenceVectors(bias_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(bias_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(bias_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
}

// Interoceptive bias
// The tendency for sensory input from the body to be taken as evidence of external reality. (As for example, in parole judges who are more lenient when fedand rested.)
bool _Bias::InteroceptiveBias(string sentence)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string bias_definition = "The tendency for sensory input from the body to be taken as evidence of external reality.";
    double* definition = _NLU::getSentenceVectors(bias_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(bias_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(bias_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
}

// Irrational escalation
// The phenomenon where people justify increased investment in a decision, based on the cumulative prior investment, despite new evidence suggesting that the decision was probably wrong.Also known as the sunk cost bias.
bool _Bias::IrrationalEscalation(string sentence)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string bias_definition = "The phenomenon where people justify increased investment in a decision, based on the cumulative prior investment, despite new evidence suggesting that the decision was probably wrong.";
    double* definition = _NLU::getSentenceVectors(bias_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(bias_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(bias_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
}

// Law of the instrument
// An over reliance on a familiar tool or methods, ignoring or undervaluing alternative approaches. "If all you have is a hammer, everything looks like a nail."
bool _Bias::LawOfTheInstrument(string sentence)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string bias_definition = "over reliance on a familiar tool or methods, ignoring or undervaluing alternative approaches.";
    double* definition = _NLU::getSentenceVectors(bias_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(bias_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(bias_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
}

// Less is better effect
// The tendency to prefer a smaller set to a larger set judged separately, but not jointly.
bool _Bias::LessIsBetterEffect(string sentence)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string bias_definition = "The tendency to prefer a smaller set to a larger set judged separately, but not jointly.";
    double* definition = _NLU::getSentenceVectors(bias_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(bias_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(bias_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
}

// Look elsewhere effect
// An apparently statistically significant observation may have actually arisen by chance because of the size of the parameter space to be searched.
bool _Bias::LookElsewhereEffect(string sentence)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string bias_definition = "An apparently statistically significant observation may have actually arisen by chance because of the size of the parameter space to be searched.";
    double* definition = _NLU::getSentenceVectors(bias_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(bias_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(bias_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
}

// Loss aversion
// The disutility of giving up an object is greater than the utility associated with acquiring it. (see also Sunk cost effects and endowment effect).
bool _Bias::LossAversion(string sentence)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string bias_definition = "The disutility of giving up an object is greater than the utility associated with acquiring it.";
    double* definition = _NLU::getSentenceVectors(bias_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(bias_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(bias_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
}

// Mere exposure effect
// The tendency to express undue liking for things merely because of familiarity with them.
bool _Bias::MereExposureEffect(string sentence)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string bias_definition = "The tendency to express undue liking for things merely because of familiarity with them";
    double* definition = _NLU::getSentenceVectors(bias_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(bias_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(bias_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
}

// Money illusion
// The tendency to concentrate on the nominal value(face value) of money rather than its value in terms of purchasing power.
bool _Bias::MoneyIllusion(string sentence)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string bias_definition = "The tendency to concentrate on the nominal value(face value) of money rather than its value in terms of purchasing power.";
    double* definition = _NLU::getSentenceVectors(bias_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(bias_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(bias_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
}

// Moral credential effect
// The tendency of a track record of non prejudice to increase subsequent prejudice.
bool _Bias::MoralCredentialEffect(string sentence)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string bias_definition = "The tendency of a track record of non prejudice to increase subsequent prejudice.";
    double* definition = _NLU::getSentenceVectors(bias_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(bias_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(bias_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
}

// Negativity bias or Negativity effect
// Psychological phenomenon by which humans have a greater recall of unpleasant memories compared with positive memories. (see also actor observer bias, group attribution error, positivity effect, and negativity effect).
bool _Bias::NegativityBias(string sentence)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string bias_definition = "Psychological phenomenon by which humans have a greater recall of unpleasant memories compared with positive memories";
    double* definition = _NLU::getSentenceVectors(bias_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(bias_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(bias_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
}


// Neglect of probability
// The tendency to completely disregard probability when making a decision under uncertainty.
bool _Bias::NeglectOfProbability(string sentence)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string bias_definition = "The tendency to completely disregard probability when making a decision under uncertainty.";
    double* definition = _NLU::getSentenceVectors(bias_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(bias_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(bias_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
}

// Normalcy bias
// The refusal to plan for, or react to, a disaster which has never happened before.
bool _Bias::NormalcyBias(string sentence)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string bias_definition = "The refusal to plan for, or react to, a disaster which has never happened before.";
    double* definition = _NLU::getSentenceVectors(bias_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(bias_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(bias_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
}

// Not invented here
// Aversion to contact with or use of products, research, standards, or knowledge developed outside a group. Related to IKEA effect.
bool _Bias::NotInventedHere(string sentence)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string bias_definition = "Aversion to contact with or use of products, research, standards, or knowledge developed outside a group. Related to IKEA effect.";
    double* definition = _NLU::getSentenceVectors(bias_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(bias_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(bias_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
}

// Observer expectancy effect
// When a researcher expects a given result and therefore unconsciously manipulates an experiment or misinterprets data in order to find it(see also subject expectancy effect).
bool _Bias::ObserverExpectancyEffect(string sentence)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string bias_definition = "When a researcher expects a given result and therefore unconsciously manipulates an experiment or misinterprets data in order to find it";
    double* definition = _NLU::getSentenceVectors(bias_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(bias_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(bias_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
}

// Omission bias
// The tendency to judge harmful actions(commissions) as worse, or less moral, than equally harmful inactions(omissions).
bool _Bias::OmissionBias(string sentence)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string bias_definition = "The tendency to judge harmful actions(commissions) as worse, or less moral, than equally harmful inactions";
    double* definition = _NLU::getSentenceVectors(bias_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(bias_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(bias_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
}

// Optimism bias
// The tendency to be over optimistic, overestimating favorableand pleasing outcomes(see also wishful thinking, valence effect, positive outcome bias).
bool _Bias::OptimismBias(string sentence)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string bias_definition = "The tendency to be over optimistic, overestimating favorableand pleasing outcomese";
    double* definition = _NLU::getSentenceVectors(bias_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(bias_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(bias_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
}

// Ostrich effect
// Ignoring an obvious(negative) situation.
bool _Bias::OstrichEffect(string sentence)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string bias_definition = "Ignoring an obvious(negative) situation.";
    double* definition = _NLU::getSentenceVectors(bias_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(bias_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(bias_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
}

// Outcome bias
// The tendency to judge a decision by its eventual outcome instead of based on the quality of the decision at the time it was made.
bool _Bias::OutcomeBias(string sentence)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string bias_definition = "The tendency to judge a decision by its eventual outcome instead of based on the quality of the decision at the time it was made.";
    double* definition = _NLU::getSentenceVectors(bias_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(bias_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(bias_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
}

// Overconfidence effect
// Excessive confidence in one's own answers to questions. For example, for certain types of questions, answers that people rate as "99% certain" turn out to be wrong 40% of the time.
bool _Bias::OverconfidenceEffect(string sentence)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string bias_definition = "Excessive confidence in one's own answers to questions. For example, for certain types of questions, answers that people rate as 99 % certain turn out to be wrong 40% of the time.e";
    double* definition = _NLU::getSentenceVectors(bias_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(bias_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(bias_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
}

// Pareidolia
// A vague and random stimulus(often an image or sound) is perceived as significant, e.g., seeing images of animals or faces in clouds, the man in the moon, and hearing non existent hidden messages on records played in reverse.
bool _Bias::Parelidolia(string sentence)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string bias_definition = "A vague and random stimulus(often an image or sound) is perceived as significant";
    double* definition = _NLU::getSentenceVectors(bias_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(bias_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(bias_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
}

// Pygmalion effect
// The phenomenon whereby others' expectations of a target person affect the target person's performance.
bool _Bias::PygmalionEffect(string sentence)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string bias_definition = "The phenomenon whereby others expectations of a target person affect the target person's performance.";
    double* definition = _NLU::getSentenceVectors(bias_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(bias_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(bias_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
}

// Pessimism bias
// The tendency for some people, especially those suffering from depression, to overestimate the likelihood of negative things happening to them.
bool _Bias::PessimismBias(string sentence)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string bias_definition = "The tendency for some people, especially those suffering from depression, to overestimate the likelihood of negative things happening to them.";
    double* definition = _NLU::getSentenceVectors(bias_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(bias_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(bias_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
}

// Planning bias
// The tendency to underestimate task completion times.
bool _Bias::PlanningBias(string sentence)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string bias_definition = "The tendency to underestimate task completion times.e";
    double* definition = _NLU::getSentenceVectors(bias_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(bias_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(bias_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
}

// Post purchase rationalization
// The tendency to persuade oneself through rational argument that a purchase was good value.
bool _Bias::PostPurchaseRationalization(string sentence)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string bias_definition = "The tendency to persuade oneself through rational argument that a purchase was good value.";
    double* definition = _NLU::getSentenceVectors(bias_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(bias_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(bias_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
}

// Present bias
// The tendency of people to give stronger weight to payoffs that are closer to the present time when considering trade offs between two future moments.
bool _Bias::PresentBias(string sentence)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string bias_definition = "The tendency of people to give stronger weight to payoffs that are closer to the present time when considering trade offs between two future moments.";
    double* definition = _NLU::getSentenceVectors(bias_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(bias_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(bias_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
}

// Pro innovation bias
// The tendency to have an excessive optimism towards an invention or innovation's usefulness throughout society, while often failing to identify its limitations and weaknesses.
bool _Bias::ProInnovationBias(string sentence)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string bias_definition = "The tendency to have an excessive optimism towards an invention or innovation's usefulness throughout society, while often failing to identify its limitations and weaknesses.e";
    double* definition = _NLU::getSentenceVectors(bias_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(bias_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(bias_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
}

// Projection bias
// The tendency to overestimate how much our future selves share one's current preferences, thoughts and values, thus leading to sub-optimal choices.
bool _Bias::ProjectionBias(string sentence)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string bias_definition = "The tendency to overestimate how much our future selves share one's current preferences, thoughts and values, thus leading to sub-optimal choices.";
    double* definition = _NLU::getSentenceVectors(bias_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(bias_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(bias_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
}

// Pseudocertainty effect
// The tendency to make risk averse choices if the expected outcome is positive, but make risk seeking choices to avoid negative outcomes.
bool _Bias::PseudoertaintyEffect(string sentence)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string bias_definition = "The tendency to make risk averse choices if the expected outcome is positive, but make risk seeking choices to avoid negative outcomes.";
    double* definition = _NLU::getSentenceVectors(bias_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(bias_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(bias_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
}

// Reactance
// The urge to do the opposite of what someone wants you to do out of a need to resist a perceived attempt to constrain your freedom of choice(see also Reverse psychology).
bool _Bias::Reactance(string sentence)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string bias_definition = "The urge to do the opposite of what someone wants you to do out of a need to resist a perceived attempt to constrain your freedom of choice";
    double* definition = _NLU::getSentenceVectors(bias_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(bias_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(bias_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
}

// Reactive devaluation
// Devaluing proposals only because they purportedly originated with an adversary.
bool _Bias::ReactiveDevaluation(string sentence)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string bias_definition = "Devaluing proposals only because they purportedly originated with an adversary.";
    double* definition = _NLU::getSentenceVectors(bias_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(bias_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(bias_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
}

// Recency illusion
// The illusion that a phenomenon one has noticed only recently is itself recent.Often used to refer to linguistic phenomena; the illusion that a word or language usage that one has noticed only recently is an innovation when it is in fact long established(see also frequency illusion).
bool _Bias::RecencyIllusion(string sentence)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string bias_definition = "The illusion that a phenomenon one has noticed only recently is itself recent.Often used to refer to linguistic phenomena; the illusion that a word or language usage that one has noticed only recently is an innovation when it is in fact long established";
    double* definition = _NLU::getSentenceVectors(bias_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(bias_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(bias_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
}

// Regressive bias
// A certain state of mind wherein high values and high likelihoods are overestimated while low valuesand low likelihoods are underestimated.
bool _Bias::RegressiveBias(string sentence)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string bias_definition = "A certain state of mind wherein high values and high likelihoods are overestimated while low valuesand low likelihoods are underestimated.";
    double* definition = _NLU::getSentenceVectors(bias_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(bias_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(bias_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
}

// Restraint bias
// The tendency to overestimate one's ability to show restraint in the face of temptation.
bool _Bias::RestraintBias(string sentence)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string bias_definition = "The tendency to overestimate one's ability to show restraint in the face of temptation.";
    double* definition = _NLU::getSentenceVectors(bias_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(bias_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(bias_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
}

// Rhyme as reason effect
// Rhyming statements are perceived as more truthful.A famous example being used in the O.J Simpson trial with the defense's use of the phrase "If the gloves don't fit, then you must acquit."
bool _Bias::ReasonEffect(string sentence)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string bias_definition = "Rhyming statements are perceived as more truthful";
    double* definition = _NLU::getSentenceVectors(bias_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(bias_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(bias_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
}

// Risk compensation / Peltzman effect
// The tendency to take greater risks when perceived safety increases.
bool _Bias::RiskCompensation(string sentence)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string bias_definition = "The tendency to take greater risks when perceived safety increases.";
    double* definition = _NLU::getSentenceVectors(bias_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(bias_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(bias_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
}

// Salience bias
// The tendency to focus on items that are more prominent or emotionally striking and ignore those that are unremarkable, even though this difference is often irrelevant by objective standards.
bool _Bias::SalienceBias(string sentence)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string bias_definition = "The tendency to focus on items that are more prominent or emotionally striking and ignore those that are unremarkable, even though this difference is often irrelevant by objective standards.";
    double* definition = _NLU::getSentenceVectors(bias_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(bias_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(bias_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
}

// Selection bias
// The tendency to notice something more when something causes us to be more aware of it, such as when we buy a car, we tend to notice similar cars more often than we did before.They are not suddenly more common – we just are noticing them more.Also called the Observational Selection Bias.
bool _Bias::SelectionBias(string sentence)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string bias_definition = "The tendency to notice something more when something causes us to be more aware of it, such as when we buy a car, we tend to notice similar cars more often than we did before.";
    double* definition = _NLU::getSentenceVectors(bias_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(bias_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(bias_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
}

// Selective perception
// The tendency for expectations to affect perception.
bool _Bias::SelectivePerception(string sentence)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string bias_definition = "The tendency for expectations to affect perception.";
    double* definition = _NLU::getSentenceVectors(bias_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(bias_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(bias_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
}

// Semmelweis reflex
// The tendency to reject new evidence that contradicts a paradigm.
bool _Bias::SemmelweisReflex(string sentence)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string bias_definition = "The tendency to reject new evidence that contradicts a paradigm.";
    double* definition = _NLU::getSentenceVectors(bias_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(bias_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(bias_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
}

// Sexual overperception bias / sexual underperception bias
// The tendency to over / underestimate sexual interest of another person in oneself.
bool _Bias::SexualOverperceptionBias(string sentence)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string bias_definition = "The tendency to over / underestimate sexual interest of another person in oneself.";
    double* definition = _NLU::getSentenceVectors(bias_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(bias_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(bias_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
}

// Social comparison bias
// The tendency, when making decisions, to favour potential candidates who don't compete with one's own particular strengths.
bool _Bias::SocialComparisonBias(string sentence)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string bias_definition = "The tendency, when making decisions, to favour potential candidates who don't compete with one's own particular strengths.";
    double* definition = _NLU::getSentenceVectors(bias_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(bias_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(bias_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
}

// Social desirability bias
// The tendency to over report socially desirable characteristics or behaviours in oneself and under report socially undesirable characteristics or behaviours.
bool _Bias::SocialDesirabilityBias(string sentence)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string bias_definition = "The tendency to over report socially desirable characteristics or behaviours in oneself and under report socially undesirable characteristics or behaviours.";
    double* definition = _NLU::getSentenceVectors(bias_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(bias_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(bias_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
}

// Status quo bias
// The tendency to like things to stay relatively the same(see also loss aversion, endowment effect, and system justification).
bool _Bias::StatusQuoBias(string sentence)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string bias_definition = "The tendency to like things to stay relatively the same";
    double* definition = _NLU::getSentenceVectors(bias_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(bias_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(bias_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
}

// Stereotyping
// Expecting a member of a group to have certain characteristics without having actual information about that individual.
bool _Bias::Stereotypeing(string sentence)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string bias_definition = "Expecting a member of a group to have certain characteristics without having actual information about that individual.";
    double* definition = _NLU::getSentenceVectors(bias_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(bias_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(bias_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
}

// Subadditivity effect
// The tendency to judge probability of the whole to be less than the probabilities of the parts.
bool _Bias::SubAdditiveityEffect(string sentence)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string bias_definition = "The tendency to judge probability of the whole to be less than the probabilities of the parts.";
    double* definition = _NLU::getSentenceVectors(bias_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(bias_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(bias_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
}

// Subjective validation
// Perception that something is true if a subject's belief demands it to be true. Also assigns perceived connections between coincidences.
bool _Bias::SubjectiveValidation(string sentence)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string bias_definition = "Perception that something is true if a subject's belief demands it to be true. Also assigns perceived connections between coincidences.";
    double* definition = _NLU::getSentenceVectors(bias_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(bias_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(bias_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
}

// Surrogation
// Losing sight of the strategic construct that a measure is intended to represent, and subsequently acting as though the measure is the construct of interest.
bool _Bias::Surrogation(string sentence)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string bias_definition = "Losing sight of the strategic construct that a measure is intended to represent, and subsequently acting as though the measure is the construct of interest.e";
    double* definition = _NLU::getSentenceVectors(bias_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(bias_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(bias_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
}

// Survivorship bias
// Concentrating on the people or things that "survived" some process and inadvertently overlooking those that didn't because of their lack of visibility.
bool _Bias::SurvivorshipBias(string sentence)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string bias_definition = "Concentrating on the people or things that survived some process and inadvertently overlooking those that didn't because of their lack of visibility.";
    double* definition = _NLU::getSentenceVectors(bias_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(bias_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(bias_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
}

// Time
// saving bias
// Underestimations of the time that could be saved(or lost) when increasing(or decreasing) from a relatively low speed and overestimations of the time that could be saved(or lost) when increasing(or decreasing) from a relatively high speed.
bool _Bias::TimeSavingBias(string sentence)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string bias_definition = "Underestimations of the time that could be saved(or lost) when increasing(or decreasing) from a relatively low speed and overestimations of the time that could be saved(or lost) when increasing(or decreasing) from a relatively high speed.";
    double* definition = _NLU::getSentenceVectors(bias_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(bias_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(bias_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
}

// Third
// person effect
// Belief that mass communicated media messages have a greater effect on others than on themselves.
bool _Bias::ThirdPersonEffect(string sentence)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string bias_definition = "Belief that mass communicated media messages have a greater effect on others than on themselves.";
    double* definition = _NLU::getSentenceVectors(bias_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(bias_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(bias_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
}

// Parkinson's law of triviality
// The tendency to give disproportionate weight to trivial issues.Also known as bikeshedding, this bias explains why an organization may avoid specialized or complex subjects, such as the design of a nuclear reactor, and instead focus on something easy to grasp or rewarding to the average participant, such as the design of an adjacent bike shed.
bool _Bias::ParkinsonLawOfTriviality(string sentence)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string bias_definition = "The tendency to give disproportionate weight to trivial issues.Also known as bikeshedding, this bias explains why an organization may avoid specialized or complex subjects, such as the design of a nuclear reactor, and instead focus on something easy to grasp or rewarding to the average participant, such as the design of an adjacent bike shed.";
    double* definition = _NLU::getSentenceVectors(bias_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(bias_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(bias_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
}

// Unit bias
// The standard suggested amount of consumption(e.g., food serving size) is perceived to be appropriate, and a person would consume it all even if it is too much for this particular person.[96]
bool _Bias::UnitBias(string sentence)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string bias_definition = "The standard suggested amount of consumption is perceived to be appropriate, and a person would consume it all even if it is too much for this particular person.";
    double* definition = _NLU::getSentenceVectors(bias_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(bias_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(bias_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
}

// Weber–Fechner law
// Difficulty in comparing small differences in large quantities.
bool _Bias::WeberFechnerLaw(string sentence)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string bias_definition = "Difficulty in comparing small differences in large quantities.";
    double* definition = _NLU::getSentenceVectors(bias_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(bias_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(bias_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
}

// Well travelled road effect
// Underestimation of the duration taken to traverse traveled routes and overestimation of the duration taken to traverse less familiar routes.
bool _Bias::WellTravelledRoadEffect(string sentence)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string bias_definition = "Underestimation of the duration taken to traverse traveled routes and overestimation of the duration taken to traverse less familiar routes.";
    double* definition = _NLU::getSentenceVectors(bias_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(bias_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(bias_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
}

// Women are wonderful effect
// A tendency to associate more positive attributes with women than with men.
bool _Bias::WomanAreWonderfulEffect(string sentence)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string bias_definition = "A tendency to associate more positive attributes with women than with men";
    double* definition = _NLU::getSentenceVectors(bias_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(bias_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(bias_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
}

// Zero risk bias
// Preference for reducing a small risk to zero over a greater reduction in a larger risk.
bool _Bias::ZeroRiskBias(string sentence)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string bias_definition = "Preference for reducing a small risk to zero over a greater reduction in a larger risk.";
    double* definition = _NLU::getSentenceVectors(bias_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(bias_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(bias_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
}

// Zero sum bias
// A bias whereby a situation is incorrectly perceived to be like a zerosum game(i.e., one person gains at the expense of another).
bool _Bias::ZeroSumBias(string sentence)
{
    // Get the definition for the bias
    // 1. bias Additive
    // 2. bias Additive Average
    string bias_definition = "a situation is incorrectly perceived to be like a zerosum game";
    double* definition = _NLU::getSentenceVectors(bias_definition);
    double* definition_additive = _NLU::getSentenceVectorsAdditive(bias_definition);
    double* definition_average = _NLU::getSentenceVectorsAdditiveAverage(bias_definition);
    double* result = _NLU::VectorAddition(definition, result);
    double* result_additive = _NLU::VectorAddition(definition_additive, result_additive);
    double* result_average = _NLU::VectorAddition(definition_average, result_average);
}