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

class _NLP
{
public:
    static string* getWordTypes(string word);
    static string* getDefinitions(string word);
    static string getSpecialType(string word, string word_type);
    static string getVerb(string* words, string* compiled_word_types);
    static string getWordTypesDisambiguation(string word, string special_type, string* word_types);
    static string getDefinitionsDisambiguation(string word, string word_type, string* definitions);
    static string getAverageVectorSentence(string* words, string* compiled_word_types);
    static string getSentenceVector(string* words, string* compiled_word_types);
    static string isNoun(string word);
    static string isPronoun(string word);
    static string isVerb(string word);
    static string isAdjective(string word);
    static string isAdverb(string word);
    static bool isAdverbManner(string word);
    static string isInterjection(string word);
    static string isConjunction(string* word);
    static string isDeterminer(string word);
    static string isArticle(string word);
    static bool isOtherAdverb(string word);
    static bool isOtherAdjective(string word);
    static bool isOtherVerb(string word);
    static bool isOtherPronoun(string word);
    static bool isOtherNoun(string word);
    static bool isInterjectionSwear(string word);
    static bool isEmotiveInterjections(string word);
    static bool isCognitiveInterjections(string word);
    static bool isVolitiveInterjections(string word);
    static bool isPossessiveDeterminer(string word);
    static bool isPreDeterminer(string word);
    static bool isDefiniteArticle(string word);
    static bool isIndefiniteArticle(string word);
    static bool isNumberDigits(string word);
    static bool isFiniteVerb(string word);
    static bool isInfinitiveVerb(string word);
    static bool isTransitiveVerb(string word);
    static bool isIntransitiveVerb(string word);
    static bool isRegularVerb(string word);
    static bool isIrregularVerb(string word);
    static bool isPrimaryAuxiliaryVerb(string word);
    static bool isSemiModalAuxiliaryVerb(string word);
    static bool isParticiple(string word);
    static bool isActionVerb(string word);
    static bool isLinkingVerb(string word);
    static bool isCausativeVerb(string word);
    static bool isAdverbTime(string word);
    static bool isAdverbPlace(string word);
    static bool isAdverbDegree(string word);
    static string* getDirectObject(string* words, string* compiled_word_types);
    //static string getDirectObject();
    static string getIndirectObject(string* words, string* compiled_word_types);
    static string getObjectofPreposition(string* words, string* compiled_word_types);
    static string* getNounPhrase(string* words, string* compiled_word_types);
    static string* getSubjectComplements(string* words, string* compiled_word_types);
    static string* getPredicateNoun(string* words, string* compiled_word_types);
    static string* getPredicatePronoun(string* words, string* compiled_word_types);
    static string* getPredicateAdjective(string* words, string* compiled_word_types);
    static string* getRelativeClause(string* words, string* compiled_word_types);
    static string* getInfinitivePhrase(string* words, string* compiled_word_types);
    static string* getAdjuncts(string* words, string* compiled_word_types);
    static string* getAdjectivePhrase(string* words, string* compiled_word_types);
    static string* getAdverbialPhrase(string* words, string* compiled_word_types);
    static string* getParticiplePhrase(string* words, string* compiled_word_types);
    static string* getAbsolutePhrase(string* words, string* compiled_word_types);
    static string getAppositive(string* words, string* compiled_word_types);
    static string* getIndependentClause(string* words, string* compiled_word_types);
    static string* getDependentClause(string* words, string* compiled_word_types);
    static string* getNounClause(string* words, string* compiled_word_types);
    static string* getAdverbialClause(string* words, string* compiled_word_types);
    static string isPreposition(string word);
    static string isNumber(string word);
    static bool isNumberWords(string word);
    static bool isSimpleSentence(string* words, string* compiled_word_types);
    static bool isCompoundSentence(string* words, string* subject, string* predicate, string* compiled_word_types);
    static bool isComplexSentence(string* words, string* subject, string* predicate, string* compiled_word_types);
    static bool isCompound_ComplexSentence(string* words, string* subject, string* predicate, string* compiled_word_types);
    static bool isDeclaritiveSentence(string* words, string* subject, string* predicate, string* compiled_word_types);
    static bool isInterrogativeSentence(string* words, string* subject, string* predicate, string* compiled_word_types);
    static bool isNegativeInterrogativeSentence(string* words, string* subject, string* predicate, string* compiled_word_types);
    static bool isImperativeSentence(string* words, string* subject, string* predicate, string* compiled_word_types);
    static bool isConditionalSentence(string* words, string* subject, string* predicate, string* compiled_word_types);
    static bool isRegularSentence(string* words, string* subject, string* predicate, string* compiled_word_types);
    static bool isIrregularSentence(string* words, string* subject, string* predicate, string* compiled_word_types);
    static bool isSingleWordSentence(string* words, string* compiled_word_types);
    static bool isSentenceFragment(string* words, string* compiled_word_types);
    static bool isInstructions(string* words, string* compiled_word_types);
    static bool isYesNoQuestion(string* words, string* compiled_word_types);
    static bool isLiteralQuestions(string* words, string* compiled_word_types);
    static bool isIndirectSentence(string* words, string* compiled_word_types);
    static bool isItDepends(string* words, string* compiled_word_types);
    static bool isStatementofUncertainty(string* words, string* compiled_word_types);
    static bool isRunOnSentence(string* words, string* compiled_word_types);
    static bool isCommaSplice(string* words, string* compiled_word_types);
    static string* getSubject(string* words, string* compiled_word_types);
    static string* getPredicate(string* words, string* compiled_word_types);
    static void getPartsofSpeech(string* words, string* compiled_word_types);
    //static string* parseDefinitions(static string definitions);
    static string* getPrepositionalPhrase(string* words, string* compiled_word_types);
    static string* getPrepositionalPhraseNoun(string* words, string* compiled_word_types);
    static string* getPreposionalPhraseVerb(string* words, string* compiled_word_types);
    static string* getPrepositionalPhraseAdjective(string* words, string* compiled_word_types);
    static string* getPrepositionalPhraseAdverb(string* words, string* compiled_word_types);
    static string* getPrepositionalPhraseIdiom(string* words, string* compiled_word_types);
    static string* getPrepositionalPhraseDangling(string* words, string* compiled_word_types);
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
    static bool isPossessivePronoun(string word);
    static bool isStativeVerb(string word);
    static bool isLightVerb(string word);
    static bool isPhrasalVerbs(string word);
    static bool isConditionalVerb(string word);
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
    static bool isGerund(string word);
    static bool isInterjections(string word);
    static bool isIndependentClause(string* words, string* compiled_word_types);
    static bool isDependentClause(string* words, string* compiled_word_types);
    static bool isNounClause(string* words, string* compiled_word_types);
    static bool isAdverbialClause(string* words, string* compiled_word_types);
    static bool isPresentTense(string word);
    static bool isPresentTenseSentence(string* words, string* compiled_word_types);
    static bool isPastTense(string word);
    static bool isPastTenseSentence(string* words, string* compiled_word_types);
    static bool isFutureTense(string word);
    static bool isFutureTenseSentence(string* words, string* compiled_word_types);
    static bool isPerfectiveAspect(string word);
    static bool isPerfectiveAspectSentence(string* words, string* compiled_word_types);
    static bool isImperfectiveAspect(string word);
    static bool isImperfectiveAspectSentence(string* words, string* compiled_word_types);
    static bool isAspectofPresentTense(string word);
    static bool isAspectofPresentTenseSentence(string* words, string* compiled_word_types);
    static bool isAspectofPastTense(string word);
    static bool isAspectofPastTenseSentence(string* words, string* compiled_word_types);
    static bool isAspectofFutureTense(string word);
    static bool isAspectofFutureTenseSentence(string* words, string* compiled_word_types);
    static bool isIndicativeMood(string word);
    static bool isIndicativeMoodSentence(string* words, string* compiled_word_types);
    static bool isSubjunctiveMood(string word);
    static bool isSubjunctiveMoodSentence(string* words, string* compiled_word_types);
    static bool isSubjunctiveMoodWishes(string word);
    static bool isActiveVoice(string word);
    static bool isActiveVoiceSentence(string* words, string* compiled_word_types);
    static bool isPassiveVoice(string word);
    static bool isPassiveVoiceSentence(string* words, string* compiled_word_types);
    static bool isMiddleVoice(string word);
    static bool isMiddleVoiceSentence(string* words, string* compiled_word_types);
    static bool isReportedSpeech(string word);
    static bool isReportedSpeechSentence(string* words, string* compiled_word_types);
    //static bool isNumber(staticstring word);
    static bool isPlural(string word);
    static bool isPluralSentence(string* words, string* compiled_word_types);
    static bool isSingular(string word);
    static bool isSingularSentence(string* words, string* compiled_word_types);
    //staticstring getGenderNoun(staticstring word);
    static string getGenderNoun(string words);
    static string* getGenderNouns(string* words, string* compiled_word_types);
    static string* getPresentHaveStatements(string* words);
    static string* getPresentHaveGotStatements(string* words);
    static string* getPresentContinuousQuestions(string* words);
    static bool isPresentSimpleNegative(string* words);
    static string* getPresentSimplePositive(string* words);
    static string* getPresentSimpleNegative(string* words);
    static string* getBeingVerbPositive(string* words);
    static string* getBeingVerbNegative(string* words);
    static string* getPresentContinuousQuestionsYes(string* words);
    static bool isBeingVerbNegative(string* words);
    static bool isBeingVerbPositive(string* words);
    static bool isDoDoesInfinitive(string* words);
    static bool isPresentContinuousQuestions(string* words);
    static bool isHaveGotStatement(string* words);
    static bool isPresentContinuousQuestionsYes(string* words);
    static bool isPresentSimplePositive(string* words);
    static string* returnWords(string sentence);
    static string* QueryDatabaseWordTypes(string word);
    static string* QueryDatabaseDefinitions(string word, string* wordTypes);
    static void Writing();
};

static string completed[100][3];

static const string _verb_list[] = { "transitive_verb", "intransitive_verb", "irregular_verb", "action_verb", "stative_verb", "linking_verb", "light_verb", "phrasal_verb", "conditional_verb", "causative_verb", "factive_verb", "reflexive_verb" };
static const string _noun_list[] = { "common_noun", "proper_noun", "noun_of_address", "concrete_noun", "abstract_noun", "countable_noun", "uncountable_noun", "collective_noun", "compound_nouns", "nominalization" };
static const string _adjectives_list[] = { "attributive_adjectives", "predicative_adjectives", "proper_adjectives", "collective_adjectives", "demonstrative_adjectives", "iterrogative_adjectives", "nominal_adjectives", "compound_adjectives", "order_of_adjectives", "comparative_adjectives", "superlative_adjectives", "" };
static const string _adverb_list[] = { "adverb_of_time", "adverb_of_place", "adverb_of_manner", "mitigators", "intensifiers", "adverb_of_frequency", "adverb_of_purpose", "focusing_adverbs", "negative_adverbs", "conjunctive_adverbs", "evaluative_adverbs", "viewpoint_adverbs", "relative_adverbs", "adverbial_nouns", "regular_adverb", "irregular_adverb", "comparative_adverb", "superlative_adverb" };
static const string _pronoun_list[] = { "personal_pronouns", "intensive_pronoun", "indefinite_pronoun", "demonstrative_pronoun", "interogative_pronoun", "relative_pronoun", "reciprocal_pronoun", "dummy_pronoun" };
static const string _logic_operators[] = { "and", "or", "not" };
static const string _categories_of_preposition[] = { "time", "place", "direction", "movement", "agency", "instrument", "device", "reason", "purpose", "connection", "origin" };
static const string _being_verb_contractions[] = { "they'd", "they'll", "they're", "they've", "we'd", "we're", "we've", "he'd", "he'll", "he's", "I'd", "I'll", "I'm", "I've", "she'd", "she'll", "she's", "you've", "you're" };


//// Verbs
//static string** verbs;
//static string** transitive_verbs;
//static string** intransitive_verbs;
//static string** irregular_verbs;
//static string** action_verbs;
//static string** stative_verbs;
//static string** linking_verbs;
//static string** light_verbs;
//static string** phrasal_verbs;
//static string** conditional_verbs;
//static string** causative_verbs;
//static string** factive_verbs;
//static string** reflexive_verbs;
//
//// Nouns
//static string** nouns;
//static string** common_nouns;
//static string** proper_nouns;
//static string** noun_of_address;
//static string** concrete_nouns;
//static string** abstract_nouns;
//static string** countable_nouns;
//static string** uncountable_nouns;
//static string** collective_nouns;
//static string** compound_nouns;
//static string** nominalizations;
//
//// Adjectives
//static string** adjectives;
//static string** attributaive_adjectives;
//static string** predicative_adjectives;
//static string** proper_adjectives;
//static string** collective_adjectives;
//static string** demonstrative_adjectives;
//static string** interrogative_adjectives;
//static string** nominal_adjectives;
//static string** compund_adjectives;
//static string** order_of_adjectives;
//static string** comparative_adjectives;
//static string** superlative_adjectives;
//
//// Adverbs
//static string** adverbs;
//static string** adverbs_of_time;
//static string** adverbs_of_place;
//static string** adverbs_of_manner;
//static string** mitigators;
//static string** intensifiers;
//static string** adverbs_of_frequency;
//static string** adverbs_of_purpose;
//static string** focusing_adverbs;
//static string** negative_adverbs;
//static string** conjunctive_adverbs;
//static string** evaluative_adverbs;
//static string** viewpoint_adverbs;
//static string** relative_adverbs;
//static string** adverbial_nouns;
//static string** regular_adverbs;
//static string** irregular_adverbs;
//static string** comparative_adverbs;
//static string** superlative_adverbs;
//static string** order_adverb;
//
//// Pronouns
//static string** pronouns;
//static string** personal_pronouns;
//static string** intensive_pronouns;
//static string** indefinite_pronouns;
//static string** demonstrative_pronouns;
//static string** interogative_pronouns;
//static string** relative_pronouns;
//static string** reciprocal_pronouns;
//static string** dummy_pronouns;
//
//// Interjections
//static string** interjection_swear;
//static string** emotive_interjections;
//static string** cognitive_interjections;
//static string** volitive_interjections;
//
//// Numbers
//static string** numbers;
//static string** numbers_digits;
//
//// Conjunctions
//static string** conjunction;
//
//// Determiner
//static string** possessive_determiner;
//static string** pre_determiner;
//
//// Articles
//static string** definite_article;
//static string** indefinite_article;
//
//// Preposition
//static string** preposition;