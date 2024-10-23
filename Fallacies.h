#pragma once

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

#include "AugmentedIntelligence.h"

using namespace std;

class _Fallacy
{
public:
    static string FallacyCheck(string text);
    static bool AffirmingTheConsequent(string text);
    static bool DenyingTheAntecedent(string text);
    static bool AffirmingADisjunct(string text);
    static bool DenyingAConjunct(string text);
    static bool FallacyOfTheUndistributedMiddle(string text);
    static bool AppealToProbability(string text);
    static bool ArgumentFromFallacy(string text);
    static bool BaseRateFallacy(string text);
    static bool ConjunctionFallacy(string text);
    static bool MaskedManFallacy(string text);
    static bool QualificationFallacies(string text);
    static bool ExistentialFallacy(string text);
    static bool AffirmativeConclusionFromANegativePremise(string text);
    static bool FallacyOfExclusivePremises(string text);
    static bool FallacyOfFourTerms(string text);
    static bool IllicitMajor(string text);
    static bool IllicitMinor(string text);
    static bool NegativeConclusionFromAffirmativePremises(string text);
    static bool ModalFallacy(string text);
    static bool ModalScopeFallacy(string text);
    static bool ArgumentToModeration(string text);
    static bool ContinuumFallacy(string text);
    static bool SuppressedCorrelative(string text);
    static bool DefinistFallacy(string text);
    static bool DivineFallacy(string text);
    static bool DoubleCounting(string text);
    static bool Equivacation(string text);
    static bool AmbiguousMiddleTerm(string text);
    static bool DefinitionalRetreat(string text);
    static bool MotteAndBaileyFallacy(string text);
    static bool FallacyOfAccent(string text);
    static bool PersuasiveDefinition(string text);
    static bool EconogicalFallacy(string text);
    static bool EtynologicalFallacy(string text);
    static bool FallacyOfComposition(string text);
    static bool FallacyOfDivision(string text);
    static bool FalseAttribuation(string text);
    static bool FallacyOfQuotingOutOfContext(string text);
    static bool FalseAuthority(string text);
    static bool FalseDilemma(string text);
    static bool FalseEquivalence(string text);
    static bool FeedbackFallacy(string text);
    static bool HistorianFallacy(string text);
    static bool HistoricalFallacy(string text);
    static bool BaconianFallacy(string text);
    static bool HomuculusFallacy(string text);
    static bool InflationOfConflect(string text);
    static bool IfByWhiskey(string text);
    static bool IncompleteComparison(string text);
    static bool InconsistentComparison(string text);
    static bool IntentionalityFallacy(string text);
    static bool LumpOfLabourFallacy(string text);
    static bool KettleLogic(string text);
    static bool LudicFallacy(string text);
    static bool QuantitativeFallacy(string text);
    static bool MindProjectionFallacy(string text);
    static bool MoralisticFallacy(string text);
    static bool MovingTheGoalpostsFallacy(string text);
    static bool NirvanaFallacy(string text);
    static bool ProofByAssertion(string text);
    static bool ProsecutorFallacy(string text);
    static bool ProvingTooMuch(string text);
    static bool PsycholoistFallacy(string text);
    static bool ReferentialFallacy(string text);
    static bool Reification(string text);
    static bool RetrospectiveDeterminism(string text);
    static bool SlipperySlope(string text);
    static bool SpecialPleading(string text);
    static bool BeggingTheQuestion(string text);
    static bool LoadedLabelFallacy(string text);
    static bool CircularReasoning(string text);
    static bool FallacyOfManyQuestions(string text);
    static bool FaultyGeneralization(string text);
    static bool AccidentFallacy(string text);
    static bool NoTrueScotsmanFallacy(string text);
    static bool CherryPickingFallacy(string text);
    static bool SurvivorshipBias(string text);
    static bool FalseAnalogy(string text);
    static bool HastyGeneralization(string text);
    static bool InductiveFallacy(string text);
    static bool MisleadingVividness(string text);
    static bool OverWhelmingException(string text);
    static bool ThoughtTerminatingCliche(string text);
    static bool QuestionableCause(string text);
    static bool CumHocErgoPropterHocFallacy(string text);
    static bool PostHocErgoPropterHoc(string text);
    static bool WrongDirectionFallacy(string text);
    static bool CausalOversimplification(string text);
    static bool FurtiveFallacy(string text);
    static bool GamblerFallacy(string text);
    static bool MagicalThinking(string text);
    static bool RegressionFallacy(string text);
    static bool AppealToTheStoneFallacy(string text);
    static bool ArgumentFromIgnorance(string text);
    static bool ArgumentFromIncredulity(string text);
    static bool ArgumentFromRepitition(string text);
    static bool ArgumentFromSilence(string text);
    static bool IrrelevantConclusionFallacy(string text);
    static bool RedHerringFallacy(string text);
    static bool AdHominem(string text);
    static bool CircumstantialAdHominem(string text);
    static bool PoisoningTheWell(string text);
    static bool AppealToMotive(string text);
    static bool WafkaTrapping(string text);
    static bool TonePolicing(string text);
    static bool TraitorousCriticFallacy(string text);
    static bool AppealToAuthorityFallacy(string text);
    static bool AppealToAccomplishmentFallacy(string text);
    static bool CourtiersReply(string text);
    static bool AppealToConsequences(string text);
    static bool AppealToEmotion(string text);
    static bool AppealToFear(string text);
    static bool AppealToFlattery(string text);
    static bool AppealToPity(string text);
    static bool AppealToRidicule(string text);
    static bool AppealToSpite(string text);
    static bool JudgementalLanguage(string text);
    static bool PoohPooh(string text);
    static bool WishfulThinking(string text);
    static bool AppealToNature(string text);
    static bool AppealToNovelty(string text);
    static bool AppealToPoverty(string text);
    static bool AppealToTradition(string text);
    static bool AppealToWealth(string text);
    static bool AppealToThreat(string text);
    static bool ArgumentumAdPopulum(string text);
    static bool AssociationFallacy(string text);
    static bool IpseDixit(string text);
    static bool PsychogeneticFallacy(string text);
    static bool ChronologicalSnobbery(string text);
    static bool FallacyOfRelativePrivatation(string text);
    static bool GeneticFallacy(string text);
    static bool EntitledToOpiniom(string text);
    static bool NaturalisticFallacy(string text);
    static bool IsOughtFallacy(string text);
    static bool NaturalisticFallacyFallacy(string text);
    static bool StrawManFallacy(string text);
    static bool TexasSharpshooterFallacy(string text);
    static bool AppealToHypocrisy(string text);
    static bool TwoWrongsMakeARight(string text);
    static bool VacuousTruth(string text);
    //static string FallacyCheck(static string d_premise1, static string d_premise2, static string d_premise3, static string d_conclusion);
    //static string FallacyCheck(static string i_premise1, static string i_premise2, static string i_premise3, static string i_conclusion);
};