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

#include "AugmentedIntelligence.hpp"

using namespace std;

class _Objections
{
public:

    class Terms
    {
    public:
        static bool Ambiguous(string text);
        static bool Confusing(string text);
        static bool Misleading(string text);
        static bool Vague(string text);
        static bool Unintelliligible(string text);
        static bool ArguingTheLaw(string text);
        static bool Argumentative(string text);
        static bool AskedAndAnswered(string text);
        static bool AssumesdFactsNotInEvidence(string text);
        static bool AsksJuryToPrejudgeEvidence(string text);
        static bool Badgering(string text);
        static bool BestEvidenceRule(string text);
        static bool BeyondTheScope(string text);
        static bool CallsForConclusion(string text);
        static bool CallsForSpeculation(string text);
        static bool CompoundQuestion(string text);
        static bool CounselIsTestifying(string text);
        static bool Foundation(string text);
        static bool Hearsay(string text);
        static bool Inflammatory(string text);
        static bool Incompetent(string text);
        static bool IrrelevantImmaterial(string text);
        static bool LeadingQuestion(string text);
        static bool MisstatesEvidence(string text);
        static bool MisquotesWitness(string text);
        static bool Narrative(string text);
        static bool Privilege(string text);
        static bool FruitOfThePoisonousTree(string text);
        static bool LackOfFoundation(string text);
        static bool NonResponsive(string text);
        static bool NothingPending(string text);
    };
};