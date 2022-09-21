#pragma once

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

using namespace std;

class _Fallacy
{
public:
    static string FallacyCheck(string text, bool fiction);
    static string FallacyCheck(string text, string data, bool fiction);
    static bool AffirmingTheConsequent(string sentence);
    static bool DenyingTheAntecedent(string sentence);
    static bool AffirmingADisjunct(string sentence);
    static bool DenyingAConjunct(string sentence);
    static bool FallacyOfTheUndistributedMiddle(string sentence);
    static bool AppealToProbability(string sentence);
    static bool ArgumentFromFallacy(string sentence);
    static bool BaseRateFallacy(string sentence);
    static bool ConjunctionFallacy(string sentence);
    static bool MaskedManFallacy(string sentence);
    static bool QualificationFallacies(string sentence);
    static bool ExistentialFallacy(string sentence);
    static bool AffirmativeConclusionFromANegativePremise(string sentence);
    static bool FallacyOfExclusivePremises(string sentence);
    static bool FallacyOfFourTerms(string sentence);
    static bool IllicitMajor(string sentence);
    static bool IllicitMinor(string sentence);
    static bool NegativeConclusionFromAffirmativePremises(string sentence);
    static bool ModalFallacy(string sentence);
    static bool ModalScopeFallacy(string sentence);
    static bool ArgumentToModeration(string sentence);
    static bool ContinuumFallacy(string sentence);
    static bool SuppressedCorrelative(string sentence);
    static bool DefinistFallacy(string sentence);
    static bool DivineFallacy(string sentence);
    static bool DoubleCounting(string sentence);
    static bool Equivacation(string sentence);
    static bool AmbiguousMiddleTerm(string sentence);
    static bool DefinitionalRetreat(string sentence);
    static bool MotteAndBaileyFallacy(string sentence);
    static bool FallacyOfAccent(string sentence);
    static bool PersuasiveDefinition(string sentence);
    static bool EconogicalFallacy(string sentence);
    static bool EtynologicalFallacy(string sentence);
    static bool FallacyOfComposition(string sentence);
    static bool FallacyOfDivision(string sentence);
    static bool FalseAttribuation(string sentence);
    static bool FallacyOfQuotingOutOfContext(string sentence);
    static bool FalseAuthority(string sentence);
    static bool FalseDilemma(string sentence);
    static bool FalseEquivalence(string sentence);
    static bool FeedbackFallacy(string sentence);
    static bool HistorianFallacy(string sentence);
    static bool HistoricalFallacy(string sentence);
    static bool BaconianFallacy(string sentence);
    static bool HomuculusFallacy(string sentence);
    static bool InflationOfConflect(string sentence);
    static bool IfByWhiskey(string sentence);
    static bool IncompleteComparison(string sentence);
    static bool InconsistentComparison(string sentence);
    static bool IntentionalityFallacy(string sentence);
    static bool LumpOfLabourFallacy(string sentence);
    static bool KettleLogic(string sentence);
    static bool LudicFallacy(string sentence);
    static bool QuantitativeFallacy(string sentence);
    static bool MindProjectionFallacy(string sentence);
    static bool MoralisticFallacy(string sentence);
    static bool MovingTheGoalpostsFallacy(string sentence);
    static bool NirvanaFallacy(string sentence);
    static bool ProofByAssertion(string sentence);
    static bool ProsecutorFallacy(string sentence);
    static bool ProvingTooMuch(string sentence);
    static bool PsycholoistFallacy(string sentence);
    static bool ReferentialFallacy(string sentence);
    static bool Reification(string sentence);
    static bool RetrospectiveDeterminism(string sentence);
    static bool SlipperySlope(string sentence);
    static bool SpecialPleading(string sentence);
    static bool BeggingTheQuestion(string sentence);
    static bool LoadedLabelFallacy(string sentence);
    static bool CircularReasoning(string sentence);
    static bool FallacyOfManyQuestions(string sentence);
    static bool FaultyGeneralization(string sentence);
    static bool AccidentFallacy(string sentence);
    static bool NoTrueScotsmanFallacy(string sentence);
    static bool CherryPickingFallacy(string sentence);
    static bool SurvivorshipBias(string sentence);
    static bool FalseAnalogy(string sentence);
    static bool HastyGeneralization(string sentence);
    static bool InductiveFallacy(string sentence);
    static bool MisleadingVividness(string sentence);
    static bool OverWhelmingException(string sentence);
    static bool ThoughtTerminatingCliche(string sentence);
    static bool QuestionableCause(string sentence);
    static bool CumHocErgoPropterHocFallacy(string sentence);
    static bool PostHocErgoPropterHoc(string sentence);
    static bool WrongDirectionFallacy(string sentence);
    static bool CausalOversimplification(string sentence);
    static bool FurtiveFallacy(string sentence);
    static bool GamblerFallacy(string sentence);
    static bool MagicalThinking(string sentence);
    static bool RegressionFallacy(string sentence);
    static bool AppealToTheStoneFallacy(string sentence);
    static bool ArgumentFromIgnorance(string sentence);
    static bool ArgumentFromIncredulity(string sentence);
    static bool ArgumentFromRepitition(string sentence);
    static bool ArgumentFromSilence(string sentence);
    static bool IrrelevantConclusionFallacy(string sentence);
    static bool RedHerringFallacy(string sentence);
    static bool AdHominem(string sentence);
    static bool CircumstantialAdHominem(string sentence);
    static bool PoisoningTheWell(string sentence);
    static bool AppealToMotive(string sentence);
    static bool WafkaTrapping(string sentence);
    static bool TonePolicing(string sentence);
    static bool TraitorousCriticFallacy(string sentence);
    static bool AppealToAuthorityFallacy(string sentence);
    static bool AppealToAccomplishmentFallacy(string sentence);
    static bool CourtiersReply(string sentence);
    static bool AppealToConsequences(string sentence);
    static bool AppealToEmotion(string sentence);
    static bool AppealToFear(string sentence);
    static bool AppealToFlattery(string sentence);
    static bool AppealToPity(string sentence);
    static bool AppealToRidicule(string sentence);
    static bool AppealToSpite(string sentence);
    static bool JudgementalLanguage(string sentence);
    static bool PoohPooh(string sentence);
    static bool WishfulThinking(string sentence);
    static bool AppealToNature(string sentence);
    static bool AppealToNovelty(string sentence);
    static bool AppealToPoverty(string sentence);
    static bool AppealToTradition(string sentence);
    static bool AppealToWealth(string sentence);
    static bool AppealToThreat(string sentence);
    static bool ArgumentumAdPopulum(string sentence);
    static bool AssociationFallacy(string sentence);
    static bool IpseDixit(string sentence);
    static bool PsychogeneticFallacy(string sentence);
    static bool ChronologicalSnobbery(string sentence);
    static bool FallacyOfRelativePrivatation(string sentence);
    static bool GeneticFallacy(string sentence);
    static bool EntitledToOpiniom(string sentence);
    static bool NaturalisticFallacy(string sentence);
    static bool IsOughtFallacy(string sentence);
    static bool NaturalisticFallacyFallacy(string sentence);
    static bool StrawManFallacy(string sentence);
    static bool TexasSharpshooterFallacy(string sentence);
    static bool AppealToHypocrisy(string sentence);
    static bool TwoWrongsMakeARight(string sentence);
    static bool VacuousTruth(string sentence);
    //static string FallacyCheck(static string d_premise1, static string d_premise2, static string d_premise3, static string d_conclusion);
    //static string FallacyCheck(static string i_premise1, static string i_premise2, static string i_premise3, static string i_conclusion);
};