/*
    Copyright(c); 2021 Tyler Crockett | Macdaddy4sure.com

    Licensed under the Apache License, Version 2.0 (the "License");;
    you may not use this file except in compliance with the License.
    You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

    Unless required by applicable law or agreed to in writing, software
    distributed under the License is distributed on an "AS IS" BASIS,
    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
    See the License for the specific language governing permissionsand
    limitations under the License.
*/

#include <iostream>
#include <stdio.h>
#include <filesystem>
#include <fstream>
#include <mysql.h>
#include <thread>
#include <string>
#include <cuda_runtime.h>
#include <helper_functions.h>
#include <helper_cuda.h>

using namespace std;

static string* returnWords(string sentence);
static string getDirectObject(string completed[100][5][5][2]);
static string getDirectObject(string completed[100][5][5][2]);
static string getIndirectObject(string completed[100][5][5][2]);
static string getObjectofPreposition(string completed[100][5][5][2]);
static string* getNounPhrase(string completed[100][5][5][2]);
static string getSubjectComplements(string completed[100][5][5][2]);
static string getPredicateNoun(string completed[100][5][5][2]);
static string getPredicatePronoun(string completed[100][5][5][2]);
static string getPredicateAdjective(string completed[100][5][5][2]);
static string getRelativeClauses(string completed[100][5][5][2]);
static string getInfinitivePhrase(string completed[100][5][5][2]);
static string getAdjuncts(string completed[100][5][5][2]);
static string getAdjectivePhrase(string completed[100][5][5][2]);
static string getAdverbialPhrase(string completed[100][5][5][2]);
static string getParticiplePhrase(string completed[100][5][5][2]);
static string getAbsolutePhrase(string completed[100][5][5][2]);
static string getAppositive(string completed[100][5][5][2]);
static string getIndependentClause(string completed[100][5][5][2]);
static string getDependentClause(string completed[100][5][5][2]);
static string getNounClause(string completed[100][5][5][2]);
static string getRelativeClause(string completed[100][5][5][2]);
static string getAdverbialClause(string completed[100][5][5][2]);
static bool isCompoundSentence(string completed[100][5][5][2]);
static bool isComplexSentences(string completed[100][5][5][2]);
static bool isCompound_ComplexSentence(string completed[100][5][5][2]);
static bool isDeclaritiveSentence(string completed[100][5][5][2]);
static bool isInterrogativeSentence(string completed[100][5][5][2]);
static bool isNegativeInterrogativeSentence(string completed[100][5][5][2]);
static bool isImperativeSentence(string completed[100][5][5][2]);
static bool isConditionalSentence(string completed[100][5][5][2]);
static bool isRegularSentence(string completed[100][5][5][2]);
static bool isIrregularSentence(string completed[100][5][5][2]);
static string getSubject(string completed[100][5][5][2]);
static string getPredicate(string completed[100][5][5][2]);
static string* getPartsofSpeech(string sentence);
static string* parseDefinitions(string definitions);
static string getPrepositionalPhrase(string completed[100][5][5][2]);
static string getPrepositionalPhraseNoun(string completed[100][5][5][2]);
static string getPreposionalPhraseVerb(string completed[100][5][5][2]);
static string getPrepositionalPhraseAdjective(string completed[100][5][5][2]);
static string getPrepositionalPhraseIdiom(string completed[100][5][5][2]);
static string getPrepositionalPhraseDangling(string completed[100][5][5][2]);
static bool isCommonNoun(string word);
static bool isProperNoun(string word);
static bool isFirstName(string word);
static bool isLastName(string word);
static bool isBrandName(string word);
static bool isAppellations(string word);
static bool isJobTitle(string word);
static bool isFamilialRole(string word);
static bool isNounAddress(string word);
static bool isConcreteNoun(string word);
static bool isAbstractNoun(string word);
static bool isCountableNoun(string word);
static bool isUncountableNoun(string word);
static bool isCollectiveNoun(string word);
static bool isCompoundNoun(string word);
static bool isCreatingNoun(string word);
static bool isPersonalNumberPronoun(string word);
static bool isPersonalPersonPronoun(string word);
static bool isPersonalGenderPronoun(string word);
static bool isPersonalCasePronoun(string word);
static bool isPersonalReflexivePronoun(string word);
static bool isIntensivePronoun(string word);
static bool isIndefinitePronoun(string word);
static bool isDemonstrativePronoun(string word);
static bool isInterogativePronoun(string word);
static bool isRelativePronoun(string word);
static bool isReciprocalPronoun(string word);
static bool isDummyPronoun(string word);
static bool isFiniteVerb(string word);
static bool isInfiniteVerb(string word);
static bool isTransitiveVerb(string word);
static bool isIntransitiveVerb(string word);
static bool isRegularVerb(string word);
static bool isIrregularVerb(string word);
static bool isPrimaryAuxiliaryVerb(string word);
static bool isSemiModalAuxiliaryVerb(string word);
static bool isParticiple(string word);
static bool isActionVerb(string word);
static bool isStativeVerb(string word);
static bool isLinkingVerb(string word);
static bool isLightVerb(string word);
static bool isPhrasalVerbs(string word);
static bool isConditionalVerb(string word);
static bool isCausativeVerb(string word);
static bool isFactiveVerb(string word);
static bool isReflexiveVerb(string word);
static bool isAttributiveAdjective(string word);
static bool isPredicativeAdjective(string word);
static bool isProperAdjective(string word);
static bool isCollectiveAdjective(string word);
static bool isDemonstrativeAdjective(string word);
static bool isInterrogativeAdjective(string word);
static bool isNominalAdjective(string word);
static bool isCompoundAdjective(string word);
static bool isOrderAdjective(string word);
static bool isComparativeAdjective(string word);
static bool isSuperlativeAdjective(string word);
static bool isAdverbTime(string word);
static bool isAdverbPlace(string word);
static bool isAdverbManner(string word);
static bool isAdverbDegree(string word);
static bool isMitigator(string word);
static bool isIntensifier(string word);
static bool isAdverbFrequency(string word);
static bool isAdverbPurpose(string word);
static bool isAdverbFocusing(string word);
static bool isAdverbNegative(string word);
static bool isAdverbConjunctive(string word);
static bool isAdverbEvaluative(string word);
static bool isAdverbViewpoint(string word);
static bool isAdverbRelative(string word);
static bool isAdverbialNoun(string word);
static bool isRegularAdverb(string word);
static bool isIrregularAdverb(string word);
static bool isComparativeAdverb(string word);
static bool isSuperlativeAdverb(string word);
static bool isOrderAdverb(string word);
static bool isPrepositionwithNouns(string word);
static bool isPrepositionalwithVerbs(string word);
static bool isPrepositionalwithAdjectives(string word);
static bool isCoordinativeConjunction(string word);
static bool isCorrelativeConjunction(string word);
static bool isSubordinatingConjunctions(string word);
static bool isParticles(string word);
static bool isDeterminers(string word);
static bool isPossessiveDeterminer(string word);
static bool isGerund(string word);
static bool isInterjections(string word);
static bool isIndependentClause(string completed[100][5][5][2]);
static bool isDependentClause(string completed[100][5][5][2]);
static bool isNounClause(string completed[100][5][5][2]);
static bool isAdverbialClause(string completed[100][5][5][2]);
static bool isPresentTense(string word);
static bool isPresentTenseSentence(string completed[100][5][5][2]);
static bool isPastTense(string word);
static bool isPastTenseSentence(string completed[100][5][5][2]);
static bool isFutureTense(string word);
static bool isFutureTenseSentence(string completed[100][5][5][2]);
static bool isPerfectiveAspect(string word);
static bool isPerfectiveAspectSentence(string completed[100][5][5][2]);
static bool isImperfectiveAspect(string word);
static bool isImperfectiveAspectSentence(string completed[100][5][5][2]);
static bool isAspectofPresentTense(string word);
static bool isAspectofPresentTenseSentence(string completed[100][5][5][2]);
static bool isAspectofPastTense(string word);
static bool isAspectofPastTenseSentence(string completed[100][5][5][2]);
static bool isAspectofFutureTense(string word);
static bool isAspectofFutureTenseSentence(string completed[100][5][5][2]);
static bool isIndicativeMood(string word);
static bool isIndicativeMoodSentence(string completed[100][5][5][2]);
static bool isSubjunctiveMood(string word);
static bool isSubjunctiveMoodSentence(string completed[100][5][5][2]);
static bool isSubjunctiveMoodWishes(string word);
static bool isActiveVoice(string word);
static bool isActiveVoiceSentence(string completed[100][5][5][2]);
static bool isPassiveVoice(string word);
static bool isPassiveVoiceSentence(string completed[100][5][5][2]);
static bool isMiddleVoice(string word);
static bool isMiddleVoiceSentence(string completed[100][5][5][2]);
static bool isReportedSpeech(string word);
static bool isReportedSpeechSentence(string completed[100][5][5][2]);
static bool isPlural(string word);
static bool isPluralSentence(string completed[100][5][5][2]);
static bool isSingular(string word);
static bool isSingularSentence(string completed[100][5][5][2]);
static string getGenderNoun(string word);
static string* getGenderNouns(string completed[100][5][5][2]);
//__global__ void wordSearchSubject(string database, string table, string* words[], string word_type, string template, int num_rows, char* temp);
//__global__ void wordSearchPredicate(string database, string table, string* words[], string word_type, int num_rows, char* temp);
//__global__ void wordSearchTypesDefinitions(string database, string table, string word, int num_rows, char* word_types, char* definitions);
//__global__ void wordSearchOneTypeDefinitions(string database, string table, string word, char* word_type, int num_rows, char* definitions);
//__global__ void wordSearchDefinitionWord(string database, string table, string definition, int num_rows, char* word, char* word_type);
//__global__ void wordSearch(string database, string table, string word, string word_type, int num_rows, char* definitions);

string completed[100][5][5][2];