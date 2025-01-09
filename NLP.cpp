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
#include "NLP.hpp"
#include "Database Functions.hpp"
#include "Utilities.hpp"
//#include "MySQL.hpp"
#include "Settings.hpp"

using namespace std;

// Purpose: POS Tag Wikipedia and Wikisimple with - nyms, word part of speech, and grammatical objects
// List of Parts of Speech
// 1. Nouns
//    a. Proper Nouns: a name used for an individual person, place, or organization, spelled with initial capital letters,
//    b. Common Nouns: a noun denoting a class of objects or a concept as opposed to a particular individual. 
//    c. Nouns of address: the persons or things to which you are speaking. They are set off from the rest of the sentence by a comma or commas, may have modifiers, and are not related to the rest of the sentence grammatically. 
//    d. Concrete Nouns: a physical object in the real world, such as a dog, a ball, or an ice cream cone. 
//    e. Abstract Nouns: an idea or concept that does not exist in the real world and cannot be touched, like freedom, sadness, or permission. 
//    f. Countable Nouns: those that refer to something that can be counted. They have both singular and plural forms
//    g. Uncountable Nouns: are for things we can count using numbers. They have a singularand a plural form. 
//    h. Collective Nouns: a noun that denotes a group of individuals
//    i. Compound Nouns: a noun that is made with two or more words. 
//    j. Creating Nouns: the act or process of creating. the fact of being created or produced.something that has been brought into existence or created, esp a product of human intelligence or imagination.
// 2. Verbs
//    a. Transitive Verbs: a verb that requires an object to receive the action. 
//    b. Intransitive Verbs: defined as a verb that does not take a direct object. 
//    c. Irregular Verbs: the past tense is not formed by adding the usual - ed ending. 
//    d. Action Verbs: a verb that describes an action, like run, jump, kick, eat, break, cry, smile, or think. 
//    e. Stative Verbs: considered to be a stative verb if it is expressing a state or condition rather than an action. 
//    f. Linking Verbs: connects the subject of a sentence to an adjective, noun, or pronoun that completes the meaning of the verb. Common linking verbs are the forms of the verb to be; verbs relating to the five senses;and the verbs become, appear, and seem. 
//    g. Light Verbs: a light verb is a verb that has little semantic content of its ownand forms a predicate with some additional expression, which is usually a noun. Common verbs in English that can function as light verbs are do, give, have, make, get, and take. 
//    h. Phrasal Verbs: an idiomatic phrase consisting of a verband another element, typically either an adverb, as in break down, or a preposition
//    i. Conditional Verbs: used to create conditional sentences, which express hypothetical or unlikely situations. Conditional verbs can be used in the past, present, or future tense, and auxiliary verbs like can / could, will / would, and may / might are important in forming conditionals. 
//    j. Causative Verbs: let, make, have, get, and help are called causative verbs because they cause something else to happen. 
//    k. Factive Verbs: such as know, remember, understand, and forget, denote a true event, which is described in the complement clause. On the contrary, non - factive mental verbs, such as promise, agree, and propose, denote an obligation or an intention. 
//    l. Reflexive Verbs: a verb whose direct object is the same as its subject; for example, "I wash myself".More generally, a reflexive verb has the same semantic agentand patient(typically represented syntactically by the subject and the direct object).
// 3. Adjectives
//    a. Adjectives: a word or phrase naming an attribute, added to or grammatically related to a noun to modify or describe it. 
//    b. Attributative Adjectives: an adjective that is directly adjacent to the noun or pronoun it modifies. An attributive adjective is not separated from a noun by a linking verb. In English, attributive adjectives usually come directly before the noun they modify. 
//    c. Predicative Adjectives: a traditional term for an adjective that usually comes after a linking verb rather than before a noun.  (Contrast with an attributive adjective. ) Another term for a predicative adjective is a subject complement. 
//    d. Proper Adjectives: an adjective, typically capitalized, derived from a proper noun. 
//    e. Collective Adjectives: a subgroup of nominal adjectives, or adjectives that act as nouns. They are used to refer to a group of people based on a characteristic that they share. 
//    f. Demonstrative Adjectives: special adjectives or determiners used to identify or express the relative position of a noun in time or space. A demonstrative adjective comes before all other adjectives in the noun phrase. Some common demonstrative adjectives are this, that, these, and those. 
//    g. Interrogative Adjectives: interrogative determiner, is an adjective that modifies a noun by asking a question. The interrogative adjectives in English are 'what', 'which', and 'whose'. 
//    h. Nominal Adjectives: a word that normally functions as an adjective but is grammatically functioning as a noun in a sentence. A nominal adjective looks just like a regular adjective, but it is actually a noun by function. 
//    i. Compound Adjectives: an adjective that is made up of multiple individual words. Usually, the words are connected by a hyphen or hyphens when used as an adjective. Words like absent - minded and happy - go - lucky are examples of compound adjectives. 
//    j. Order of Adjectives: that multiple adjectives are always ranked accordingly: opinion, size, age, shape, colour, origin, material, purpose. Unlike many laws of grammar or syntax, this one is virtually inviolable, even in informal speech. 
//    k. Comparative Adjective: an adjective used to compare two people or things. We use comparative adjectives to say that one person or thing demonstrates a high degree of a quality or is a better example of a quality than the other. Words like taller, smarter, and slower are examples of comparative adjectives. 
//    l. Superlative Adjectives: an adjective used in comparisons to describe something as being of the highest degree or extreme. We use superlative adjectives when making comparisons of three or more people or things. The words biggest and fastest are examples of superlative adjectives. 
// 4. Adverbs
//    a. Adverbs: a word or phrase that modifies or qualifies an adjective, verb, or other adverb or a word group, expressing a relation of place, time, circumstance, manner, cause, degree
//    b. Adverbs of Time: a word that describes when, for how long, or how often a certain action happened. You will notice that many adverbs of time are the same as adverbs of frequency. 
//    c. Adverbs of Place: of place include above, anywhere, behind, below, downward, everywhere, forward, here, in, inside, left, near, outside, over there, sideways, underneath, and upward. 
//    d. Adverbs of Manner: describes how you do an action. For example, They dress elegantly. Some elderly people drive slowly. 
//    e. Mitigators: a person or thing that makes something bad less severe, serious, or painful. 
//    f. Intensifiers: an adverb used to give force or emphasis, for example really in my feet are really cold. 
//    g. Adverbs of Frequency: describes how often an action happens. There are six main adverbs of frequency that we use in English: always, usually(or normally), often, sometimes, rarely, and never. 
//    h. Adverbs of Purpose: help to describe why something happened. They can come in the form of individual words – so, since, thus, because – but also clauses – so that, in order to. 
//    i. Focusing Adverbs: used to draw attention to a particular part of a clause. They frequently point to verb phrases, but they can also draw attention to noun phrases, prepositional phrases, adjective phrases, and adverbial phrases. 
//    j. Negative Adverbs: have a negative meaning. When we use these at the beginning of the clause, we invert the subjectand verb(e. g. hardly, little, never, only, scarcely and seldom). 
//    k. Conjunctive Adverbs: subordinating adverb is an adverb that connects two clauses by converting the clause it introduces into an adverbial modifier of the verb in the main clause. 
//    l. Evaluative Adverbs: which are also referred to as commenting adverbs, are different. Instead of giving us information about the action itself, evaluative adverbs are used by the speaker to comment or give an opinion on something. Evaluative adverbs modify the entire clause. 
//    m. Viewpoint Adverbs: are often confused with evaluative adverbs. Although they are similar in form, and the specific adverbs used can overlap, the two actually serve different functions. While evaluative adverbs are used to give an opinion, viewpoint adverbs are used to indicate whose point of view we are expressing, or to specify what aspect of something we are talking about. They modify an entire sentence or independent clause. 
//    n. Relative Adverbs: connect nouns / pronouns to relative clauses, which can be essential or non‐essential(restrictive or nonrestrictive). Relative adverbs provide an alternative to more formal structures containing a preposition and which. 
//    o. Adverbial Nouns: is a word which serves the function of either a noun or an adverb depending on the sentence in which it is used. Nouns dealing in measurements of some kind, such as time frames or distances, are usually adverbial nouns. Like adverbs, these nouns normally modify verbs but can also modify adjectives
//    p. Regular Adverbs: adverbs that are formed by adding “ - ly” to the end of an adjective counterpart in one way or another according to normal spelling rules. Some regular adverbs are formed by adding only “ - ly” to the end of an adjective. 
//    q. Irregular Adverbs: adverbs(which are words that modify or change verbs and adjectives) that have the regular form of adjective plus the use of '' - ly'' (like quick / quickly). 
//    r. Comparative Adverbs: used to describe differences and similarities between two things. While comparative adjectives describe similarities and differences between two nouns(people, places, or objects), comparative adverbs make comparisons between two verbs—that is, they describe how, when, how often, or to what degree an action is done. 
//    s. Superlative Adverbs: you must use more to form the comparative, and most to form the superlative. 
//    t. Order Averbs: there is more than one adverb in a sentence describing a verb, they usually go in this order: manner, place(location), frequency, time, reason / purpose.It is uncommon to use all five types of adverbs to modify the same word.If a sentence uses two or more adverbs, it is good to follow this order to sound natural.
// 5. Pronouns
//    a. Pronouns: words that refer to either the people talking(like you or I) or someone or something that is being talked about(like she, they, and this). Gender pronouns(like he or them) specifically refer to people that you are talking about. 
//    b. Personal Pronouns: each of the pronouns in English(I, you, he, she, it, we, they, me, him, her, us, and them) comprising a set that shows contrasts of person, gender, number, and case. 
//    c. Intensive Pronouns: include myself, yourself, himself, herself, itself, ourselves, yourselves, themselves. Furthermore, an intensive pronoun is defined as a pronoun that ends in “self” or “selves” and places emphasis on its antecedent. 
//    d. Indefinite Pronouns: a pronoun that does not refer to any person, amount, or thing in particular, e. g. anything, something, anyone, everyone. 
//    e. Demonstrative Pronouns: A demonstrative pronoun is a pronoun used to point something out. The demonstrative pronouns are this, that, theseand those. 
//    f. Interogative Pronouns: who, whom, whose, what, and which. Less commonly, longer forms of these words ending in - ever are also used: whoever, whomever, whosever, whatever, and whichever. 
//    g. Relative Pronouns: used to connect a clause or phrase to a noun or pronoun. The clause modifies or describes the noun. The most common relative pronouns are who, whom, whose, which, and that. 
//    h. Reciprocal Pronouns: a pronoun that expresses a mutual relationship. Putting it another way, reciprocal pronouns refer to a situation where someone or something performs an action on others and receives the same action in return. 
//    i. Dummy Pronouns: the function of a word in a particular sentence, not a property of individual words. For example, it in the example from the previous paragraph is a dummy pronoun, but it in the sentence "I bought a sandwich and ate it" is a referential pronoun(referring to the sandwich). 
// 6. Interjections
//    a. Interjection Swear: known as an exclamation, is a word, phrase, or sound used to convey an emotion such as surprise, excitement, happiness, or anger. Interjections are very common in spoken English, but they appear in written English as well. Capable of standing alone, they are grammatically unrelated to any other part of a sentence. 
//    b. Emotive Interjections: interjections whose primary burden is to express feelings in the emotional sense, i. e. “cognitively based feelings” such as disgust, fear, and annoyance. 
//    c. Cognitive Interjections: words or phrases used to express a thought. For example, 'hmm', 'Hmm, I don't know about that, 'I see', etc. Cognitive interjections usually need a response from the person you are talking to. Cognitive Interjection in a sentence: Hmm, I don't know about that. 
//    d. Volitive Interjections: "Ahem", "Psst!", and "Shh!" could be considered imperative, as the speaker is requesting or demanding something from the listener.Similar to the deictic pronoun "you", the referent of these expressions changes, dependent on the context of the utterance.
// 7. Numbers
//    a. Numbers: an arithmetical value, expressed by a word, symbol, or figure, representing a particular quantityand used in countingand making calculationsand for showing order in a series or for identification. 
//    b. Numbers Digits: a single symbol used to make numerals. 0, 1, 2, 3, 4, 5, 6, 7, 8 and 9 are the ten digits we use in everyday numerals.
// 8. Conjunctions
//    a. Conjunction: a word used to connect clauses or sentences or to coordinate words in the same clause(e.g.and, but, if).
// 9. Determiners
//    a. Possessive Determiners: a possessive determiner is a type of function word used in front of a noun to express possession or belonging(as in "my phone"). The possessive determiners in English are my, your, his, her, its, our, and their. 
//    b. Pre-Determiner: normally placed before an indefinite article + adjective + noun to express an opinion about the noun they modify.
// 10. Articles
//    a. Indefinite Articles: a determiner(a and an in English) that introduces a noun phrase and implies that the thing referred to is nonspecific(as in she bought me a book; government is an art; he went to a public school). 
//    b. Definite Articles: a determiner(the in English) that introduces a noun phrase and implies that the thing mentioned has already been mentioned, or is common knowledge, or is about to be defined(as in the book on the table; the art of government; the famous poet and short story writer).
// 11. Prepositions
//    a. Categories of Prepositions
//        i. Time
//        ii. Place
//        iii. Direction
//        iv. Movement
//        v. Agency
//        vi. Instrument
//        vii. Device
//        viii. Reason
//        ix. Purpose
//        x. Connection
//        xi. Origin
//
// Grammatical Objects
// 1. Phrases
//    a. Prepositional Phrases: a modifying phrase consisting of a preposition and its object. 
//    b. Noun Phrase: a word or group of words that functions in a sentence as subject, object, or prepositional object. 
//    c. Subject Complements: a subject complement or predicative of the subject is a predicative expression that follows a linking verb(copula) and that complements the subject of the sentence by either(1) renaming it or (2) describing it. It completes the meaning of the subject. 
//    d. Relative Clause: is one kind of dependent clause. It has a subject and verb, but can't stand alone as a sentence.  It is sometimes called an “adjective clause” because it functions like an adjective—it gives more information about a noun. 
//    e. Infitive Phrase: a group of words consisting of an infinitive, a modifier or the use of pronouns, direct objects, indirect objects or complements of action or state expressed in the infinitive. 
//    f. Adjuncts: a word or phrase used to amplify or modify the meaning of another word or words in a sentence. 
//    g. Adjective Phrase: a phrase the head of which is an adjective. Almost any grammar or syntax textbook or dictionary of linguistics terminology defines the adjective phrase in a similar way
//    h. Adverbial Phrase: is a group of words that together behave as an adverb. Adverbial phrases, also known as adverb phrases, modify other parts of speech—such as verbs, adjectives, and other adverbs—and other phrases. 
//    i. Participle Phrase: a group of words containing a participle, modifier, and pronoun or noun phrases. The Pronoun / Noun will act the recipient of the action in the phrase. You need a comma after a Participle Phrase if it comes at the beginning of a sentenceand the following phrase is a complete sentence. 
//    j. Absolute Phrase: is generally made up of a noun or pronoun with a participial phrase.It modifies the whole sentence, not a single noun, which makes it different from a participial phrase.Absolute phrases : Its branches covered in icicles, the tall oak stood in our yard.
// 2. Clauses
//    a. Independent Clause: (a clause is a group of words that contains at least one subject and one verb) is one that can stand on its own two feet--independently. You can join independent clauses if you want to. This is called coordination. A dependent person is one who needs help from another, more independent person. 
//    b. Dependent Clause: a group of words that contains a subjectand verb but does not express a complete thought. A dependent clause cannot be a sentence. Often a dependent clause is marked by a dependent marker word. 
//    c. Noun Clause: a clause(a group of words with a subject and a verb) that serves as a noun in a sentence. In the English language, nouns are the words used to refer to people, places, or things. 
//    d. Adverbial Clause: sometimes referred to as an adverb clause, is a group of words that, together, functions as an adverb.
// 3. Types of sentences
//    a. Simple Sentence: a sentence consisting of only one clause, with a single subjectand predicate. 
//    b. Compound Sentence: a sentence with more than one subject or predicate. 
//    c. Complex Sentence: a sentence containing a subordinate clause or clauses. 
//    d. Compound Complex Sentence: a sentence having two or more coordinate independent clauses and one or more dependent clauses. 
//    e. Delclarative Sentence: is one of the four sentence types in the English language, along with interrogative sentences, exclamatory sentences, and imperative sentences. Each one serves a unique function; for declarative sentences, their function is to communicate information directly. 
//    f. Interrogative Sentence: a sentence that asks a question. Interrogative sentences can be direct or indirect, begin with or without pronouns, and feature yes / no interrogatives, alternative questions, or tag questions. Interrogative sentences often start with interrogative pronouns and end with a question mark. 
//    g. Negative Interrogative Sentence: “yes / no” questions usually imply that the speaker expects the answer to be(or believes the answer should be) “yes. ”
//    h. Imperative Sentence: used to issue a command or instruction, make a request, or offer advice. Basically, they tell people what to do. 
//    i. Conditional Sentence: are natural language sentences that express that one thing is contingent on something else, e. g.  "If it rains, the picnic will be cancelled. " They are so called because the impact of the main clause of the sentence is conditional on the dependent clause. 
//    j. Irregular Sentence: any sentence that does not have at least one independent clause—that is, it does not have both a subjectand a complete predicate—and yet is used in writing or speech as a complete sentence that stands on its own.
//
// Mathematical and Logical Operations
// 1. C++ Logical Operators
//    a. AND
//    b. OR
//    c. NOT
// 2. Oxford Logic
//    a. Inclusive disjunction: Where both disjuncts can be true at the same time. 
//    b. Exclusive disjunction: Where both disjuncts cannot be true at the same time. 
//    c. Order of operations: The order of handling the logical operators within a truth - functional proposition; it is a step - by - step method of generating a complete truth table. 
//    d. Contingent statements: Statements that are neither necessarily true nor necessarily false (they are sometimes true, sometimes false). 
//    e. Noncontingent statements: Statements such that the truth values in the main operator column do not depend on the truth values of the component parts. 
//    f. Tautology: A statement that is necessarily true. 
//    g. Self - contradiction: A statement that is necessarily false. 
//    h. Logically equivalent: When two truth - functional statements appear different but have identical truth tables. 
//    i. Contradictory statements: Two statements that have opposite truth values on every line of their respective truth tables. 
//    j. Consistent statements: Two(or more) statements that have at least one line on their respective truth tables where the main operators are true. 
//    k. Inconsistent statements: Two(or more) statements that do not have even one line on their respective truth tables where the main operators are true. 
//    l. Argument form: An arrangement of logical operatorsand statement variables in which a consistent replacement of the statement variables by statements results in an argument. 
//    m. Modus ponens: A valid argument form(also referred to as affirming the antecedent). 
//    n. Fallacy of affirming the consequent: An invalid argument form; it is a formal fallacy. 
//    o. Modus tollens: A valid argument form(also referred to as denying the consequent). 
//    p. Fallacy of denying the antecedent: An invalid argument form; it is a formal fallacy. 
// 3. Minecraft Logic Gates
//    a. NOR
//    b. NAND
//    c. XOR
//    d. XNOR
//    e. IMPLY
// 4. Conclusion Indicators
//    a. Therefore
//    b. Consequently
//    c. So
//    d. It Follows that
//    e. Hence
//    f. It can be inferred that
//    g. Implies that
//    h. It proves that
// 5. Some Premise Indicators
//    a. Since
//    b. Because
//    c. Assuming That
//    d. For the Reason(s) that
//    e. Moreover
//    f. It follows from
//    g. The Fact that
//    h. As indicated by
//
// -Nym words
// 1. Synonyms: One of two or more words(commonly words of the same language) which are equivalents of each other; one of two or more words which have very nearly the same signification, and therefore may often be used interchangeably.See under Synonymous.
// 2. Antonyms: A word of opposite meaning; a counterterm; --used as a correlative of synonym.
// 3. Homonyms: Each of two or more words having the same spelling or pronunciation but different meanings and origins.
// 4. Eponym: a person after whom a discovery, invention, place, etc., is named or thought to be named.
// 5. Patronymic: Derived from ancestors; as, a patronymic denomination.
// 6. Contronyms: a word with two opposite meanings
// 7. Cryptonym: a code name.
// 8. Hypernym: a word with a broad meaning that more specific words fall under; a superordinate.
// 9. Mononym: a person's name consisting of one word, typically a first name without a surname.
// 10. Xenonym: A name for a people or a language or a city etc.which is not used by the natives themselves.
// 11. Meronym: a term which denotes part of something but which is used to refer to the whole of it
// 12. Allonym: a name that is assumed by an author but that actually belongs to another person.
// 13. Patronymic: a name derived from the name of a father or ancestor, typically by the addition of a prefix or suffix,
// 14. Autonym: a person's own name. Compare pseudonym.
// 15. Acronym: an abbreviation formed from the initial letters of other words and pronounced as a word
// 16. Exonym: a name given to a place by foreigners
// 18. Hyponym: a word of more specific meaning than a general or superordinate term applicable to it
// 19. Metonym: a word, name, or expression used as a substitute for something else with which it is closely associated.
// 20. Toponym: place name, especially one derived from a topographical feature.
// 21. Paronym: a word which is a derivative of another and has a related meaning.
// 22. Holonym: A term that denotes a whole, a part of which is denoted by a second term.
// 23. Logonym:
// 24. Aptronym: a person's name that is regarded as amusingly appropriate to their occupation.
// 25. Autoantonym: A word that has two opposing meanings.
// 26. Contranym: a word with two opposite meanings
// 27. Bacronym: an acronym deliberately formed from a phrase whose initial letters spell out a particular word or words, either to create a memorable name or as a fanciful explanation of a word's origin.
// 28. Capitonym: a word that changes its meaning, and sometimes its pronunciation, when the first letter is capitalized.
// 31. Heteronym: each of two or more words that are spelled identically but have different sounds and meanings
// 33. Hyponym: a word of more specific meaning than a general or superordinate term applicable to it.
// 34. Metonym: a word, name, or expression used as a substitute for something else with which it is closely associated.
// 35. Metronym: The name of someone's mother. A matronymic surname.
// 36. Oronym: A string of words or phrase that sounds the same as another string of words or phrase but is spelt differently
// 37. Paronym: a word which is a derivative of another and has a related meaning.
// 38. Patronym: a name derived from the name of a father or ancestor, typically by the addition of a prefix or suffix,
// 39. Pseudonym: a fictitious name, especially one used by an author.
// 40. Retronym: a new term created from an existing word in order to distinguish it from the meaning that has emerged through progress or technological development
// 41. Tautonym: a scientific name in which the same word is used for both genusand species
// 42. Toponym: a place name, especially one derived from a topographical feature.

// Create the command sent to MySQL for the data member columns
// 1. Word
// 2. Wikipedia Section Name
// 3. Word Number in Sentence
// 4. Word type
// 5. Specific Word Type
// 6. -nym Types
// 7. Word Definition(s)
// 8. In subject
// 9. In predicate
// 10. Part of Grammatical Object?
// 11. Part of Grammatical Phrase?
// 12. Type of sentence

// Wikipedia POS Tagging Algorithm
// Pass 0: Create a table for temporary storage of the POS tagged sentence
// Pass 1: Get all the parts of speech from the dictionary and thesaurus
// Pass 2: Store all information in to the temporary table
// Pass 3: Use patterns of kinds of phrases to eliminate possible word types
// Pass 4: Use patterns of kinds of phrases to eliminate possible definitions
// Pass 5: Use patterns of kinds of clauses to eliminate possible word types
// Pass 6: Use patterns of kinds of clauses to eliminate possible word definitions
// Pass 7: Check if there are still multiple canidate word types and definitions 
// Pass 8: Use patterns of kids of sentences to eliminate possible word types
// Pass 9: Attempt to match the tagged words to determine the sentence type
// Pass 10: Pattern match the proper phrases in the sentence
// Pass 11: Pattern mathc the porper clauses in the sentence
// Pass 12: Itterate through the words in the sentence to determine special word types from MySQL
// Pass 13: Itterate through the words in the sentence to determine special -nym types from MySQL

// PURPOSE: Label and return the parts of speech in a given sentence
//  1. Get the subject
//  2. Get the number of words in the sentence, subject, or predicate
//  3. Get the object or noun
//      a. Common nouns
//          i.  Call the popular first name list
//          ii. Call the popular last name list
//          iii. Check for common nouns
//          iv. Check for nouns of address
//          v. Check for concrete nouns
//          vi. Check for abstract nouns
//          vii. Check for countable nouns
//          viii. Check for uncountable nouns
//          ix. Check for collective nouns
//          x. Check for compound nouns
//          xi. Check for nominalization (Creating nouns)
//      b. Pronouns
//          i. Get types of pronouns
//      c. Verbs
//          i. Get the types of verbs
//      d. Infinitives
//          i. Get the types of Infinitives
//      e. Adjectives
//          i. Get types of adverbs
//      f. Prepositions
//          i. get types of prepositions
//      g. Conjunctions
//  3. Get the predicate
//  4. Get the verb/linking verb
//  5. Check for adverbs
//  6. 
// Array Setup:
//  string completed[x][y]: [x][0] = word, [x][1] = word type, [x][2] = definition
//  100 words, 3 wordTypes, 5 definitions, 1 wordPlacement

// completed[x][0] = word
// completed[x][1] = wordtype
// completed[x][2] = definition
// completed[x][3] = subject
// completed[x][4] = predicate
// completed[x][5] = noun phrase
// completed[x][6] = subject_complements
// completed[x][7] = relative clause
// completed[x][8] = infinitive phrase
// completed[x][9] = adjuncts
// completed[x][10] = adjective phrase
// completed[x][11] = adverbial phrase
// completed[x][12] = participle phrase
// completed[x][13] = absolute phrase
// completed[x][14] = independent clause
// completed[x][15] = dependent clause
// completed[x][16] = noun clause
// completed[x][17] = adverbial clause
// completed[x][18] = simple sentence
// completed[x][19] = compound sentence
// completed[x][20] = complex sentence
// completed[x][21] = compound complex sentence
// completed[x][22] = declarative sentence
// completed[x][23] = interrogative sentence
// completed[x][24] = negative interrogative sentence
// completed[x][25] = imperative interrogative sentence
// completed[x][26] = conditional sentence
// completed[x][27] = irregular sentence
//void _NLP::getPartsofSpeech(string* words, string* compiled_word_types)
//{
//    //string definitions[5];
//    //string word_type[5];
//    string completed[100][3];
//    string temp;
//    int num_nouns = 0;
//    int count = 0;
//    int count2 = 0;
//    int periods = 0;
//
//    // 1. Get the syntactic keys
//    /*string* words = _NLP::returnWords(sentence);*/
//    string* subject = _NLP::getSubject(words, compiled_word_types);
//    /*string* subject_words = returnWords(subject);*/
//    int subject_word_num = sizeof(subject);
//    string* predicate = _NLP::getPredicate(words, compiled_word_types);
//    /*string* predicate_words = returnWords(predicate);*/
//    int predicate_word_num = sizeof(predicate);
//    int sentence_words_num = sizeof(words);
//    string noun_type;
//    string pronoun_type;
//    string verb_type;
//    string adjective_type;
//    string adverb_type;
//    string interjection_type;
//    string conjunction_type;
//    string determiner_type;
//    string numbers;
//    string article_type;
//    string preposition_type;
//    string* prepositional_phrase = _NLP::getPrepositionalPhrase(words, compiled_word_types);
//    string* noun_phrase = _NLP::getNounPhrase(words, compiled_word_types);
//    string* subject_complements = _NLP::getSubjectComplements(words, compiled_word_types);
//    string* relative_clause = _NLP::getRelativeClause(words, compiled_word_types);
//    string* infinitive_phrase = _NLP::getInfinitivePhrase(words, compiled_word_types);
//    string* adjuncts = _NLP::getAdjuncts(words, compiled_word_types);
//    string* adjective_phrase = _NLP::getAdjectivePhrase(words, compiled_word_types);
//    string* adverbial_phrase = _NLP::getAdverbialPhrase(words, compiled_word_types);
//    string* participle_phrase = _NLP::getParticiplePhrase(words, compiled_word_types);
//    string* absolute_phrase = _NLP::getAbsolutePhrase(words, compiled_word_types);
//    string* independent_clause = _NLP::getIndependentClause(words, compiled_word_types);
//    string* dependent_clause = _NLP::getDependentClause(words, compiled_word_types);
//    string* noun_clause = _NLP::getNounClause(words, compiled_word_types);
//    string* adverbial_clause = _NLP::getAdverbialClause(words, compiled_word_types);
//    bool simple_sentence = _NLP::isSimpleSentence(words, compiled_word_types);
//    bool compound_sentence = _NLP::isCompoundSentence(words, subject, predicate, compiled_word_types);
//    bool complex_sentence = _NLP::isComplexSentence(words, subject, predicate, compiled_word_types);
//    bool compound_complex_sentence = _NLP::isCompound_ComplexSentence(words, subject, predicate, compiled_word_types);
//    bool declaritive_sentence = _NLP::isDeclaritiveSentence(words, subject, predicate, compiled_word_types);
//    bool interrogative_sentence = _NLP::isInterrogativeSentence(words, subject, predicate, compiled_word_types);
//    bool negative_interrogative_sentence = _NLP::isNegativeInterrogativeSentence(words, subject, predicate, compiled_word_types);
//    bool imperative_interrogative_sentence = _NLP::isImperativeSentence(words, subject, predicate, compiled_word_types);
//    bool conditional_sentence = _NLP::isConditionalSentence(words, subject, predicate, compiled_word_types);
//    bool irregular_sentence = _NLP::isIrregularSentence(words, subject, predicate, compiled_word_types);
//
//    // Get the exact number of word types and definitions per given word
//    for (int x = 0; x <= sentence_words_num; x++)
//    {
//        string* wordtypes = _NLP::QueryDatabaseWordTypes(completed[x][0]);
//        string* definitions = _NLP::QueryDatabaseDefinitions(completed[x][0], wordtypes);
//
//        // Assign the word types and definitions to the completed array
//        for (int y = 0; y <= sizeof(wordtypes); y++)
//        {
//            if (y == 0)
//                completed[x][1] = wordtypes[y];
//            else
//                completed[x][1] += wordtypes[y];
//        }
//
//        for (int y = 0; y <= sizeof(definitions); y++)
//        {
//            if (y == 0)
//            {
//                completed[x][2] = definitions[y];
//            }
//            else
//            {
//                completed[x][2] += ", ";
//                completed[x][2] += definitions[y];
//            }
//        }
//    }
//
//    // 2. Iterate through the array checking for unique types of words
//    for (int x = 0; x <= sentence_words_num; x++)
//    {
//        noun_type = _NLP::isNoun(completed[x][0]);
//        pronoun_type = _NLP::isPronoun(completed[x][0]);
//        verb_type = _NLP::isVerb(completed[x][0]);
//        adjective_type = _NLP::isAdjective(completed[x][0]);
//        adverb_type = _NLP::isAdverb(completed[x][0]);
//        interjection_type = _NLP::isInterjection(completed[x][0]);
//        //conjunction_type = _NLP::isConjunction(completed[x][0]);
//        determiner_type = _NLP::isDeterminer(completed[x][0]);
//        article_type = _NLP::isArticle(completed[x][0]);
//        determiner_type = _NLP::isDeterminer(completed[x][0]);
//        numbers = _NLP::isNumber(completed[x][0]);
//        preposition_type = _NLP::isPreposition(completed[x][0]);
//    }
//
//    // 2. Use patterns to narrow the possible word_types and definitions
//    // 2a. Check for words with one or more word types and definitions
//    for (int x = 0; x <= sentence_words_num; x++)
//    {
//        for (int y = 1; y <= 5; y++)
//        {
//            for (int z = 1; z <= 5; z++)
//            {
//                if (completed[x][y] != completed[x][z])
//                {
//                    // Process of elimination
//                    if (sizeof(prepositional_phrase) != 0)
//                    {
//                        for (int a = 0; a <= sentence_words_num; a++)
//                        {
//                            for (int b = 0; b <= sizeof(prepositional_phrase); b++)
//                            {
//                                temp = completed[a][0];
//
//                                if (temp == prepositional_phrase[b])
//                                {
//                                    // We found a prepositional phrase in completed
//                                    // Eliminate all possible word types in completed other than the syntax of the prepositional phrase
//                                    for (int c = 0; c <= 5; c++)
//                                    {
//                                        completed[a][c];
//                                    }
//                                }
//                            }
//                        }
//                    }
//                    if (sizeof(noun_phrase) != 0)
//                    {
//                        // There is a noun phrase in the sentence, find the indicies place number
//                        for (int a = 0; a <= sentence_words_num; a++)
//                        {
//                            for (int b = 0; b <= sizeof(noun_phrase); b++)
//                            {
//                                temp = completed[a][0];
//
//                                if (temp == noun_phrase[b])
//                                {
//                                    // We found the noun_phrase in completed
//                                    // Eliminate all possible word types in completed other than the syntax of the noun_phrase
//                                    for (int c = 0; c <= 5; c++)
//                                    {
//                                        completed[a][c];
//                                    }
//                                }
//                            }
//                        }
//                    }
//                    if (sizeof(subject_complements) != 0)
//                    {
//                        for (int a = 0; a <= sentence_words_num; a++)
//                        {
//                            for (int b = 0; b <= sizeof(subject_complements); b++)
//                            {
//                                temp = completed[a][0];
//
//                                if (temp == subject_complements[b])
//                                {
//                                    // We found the subject complements in completed
//                                    // Eliminate all possible word types in completed other than the syntax of the subject complements
//                                    for (int c = 0; c <= 5; c++)
//                                    {
//                                        completed[a][c];
//                                    }
//                                }
//                            }
//                        }
//                    }
//                    if (sizeof(relative_clause) != 0)
//                    {
//                        for (int a = 0; a <= sentence_words_num; a++)
//                        {
//                            for (int b = 0; b <= sizeof(relative_clause); b++)
//                            {
//                                temp = completed[a][0];
//
//                                if (temp == relative_clause[b])
//                                {
//                                    // We found the relative_clause in completed
//                                    // Eliminate all possible word types in completed other than the syntax of the relative_clause
//                                    for (int c = 0; c <= 5; c++)
//                                    {
//                                        completed[a][c];
//                                    }
//                                }
//                            }
//                        }
//                    }
//                    if (sizeof(infinitive_phrase) != 0)
//                    {
//                        for (int a = 0; a <= sentence_words_num; a++)
//                        {
//                            for (int b = 0; b <= sizeof(infinitive_phrase); b++)
//                            {
//                                temp = completed[a][0];
//
//                                if (temp == infinitive_phrase[b])
//                                {
//                                    // We found the infinitive_phrase in completed
//                                    // Eliminate all possible word types in completed other than the syntax of the infinitive_phrase
//                                    for (int c = 0; c <= 5; c++)
//                                    {
//                                        completed[a][c];
//                                    }
//                                }
//                            }
//                        }
//                    }
//                    if (sizeof(adjuncts) != 0)
//                    {
//                        for (int a = 0; a <= sentence_words_num; a++)
//                        {
//                            for (int b = 0; b <= sizeof(adjuncts); b++)
//                            {
//                                temp = completed[a][0];
//
//                                if (temp == adjuncts[b])
//                                {
//                                    // We found the adjuncts in completed
//                                    // Eliminate all possible word types in completed other than the syntax of the adjuncts
//                                    for (int c = 0; c <= 5; c++)
//                                    {
//                                        completed[a][c];
//                                    }
//                                }
//                            }
//                        }
//                    }
//                    if (sizeof(adjective_phrase) != 0)
//                    {
//                        for (int a = 0; a <= sentence_words_num; a++)
//                        {
//                            for (int b = 0; b <= sizeof(adjective_phrase); b++)
//                            {
//                                temp = completed[a][0];
//
//                                if (temp == adjective_phrase[b])
//                                {
//                                    // We found the adjective_phrase in completed
//                                    // Eliminate all possible word types in completed other than the syntax of the adjective_phrase
//                                    for (int c = 0; c <= 5; c++)
//                                    {
//                                        completed[a][c];
//                                    }
//                                }
//                            }
//                        }
//                    }
//                    if (sizeof(adverbial_phrase))
//                    {
//                        for (int a = 0; a <= sentence_words_num; a++)
//                        {
//                            for (int b = 0; b <= sizeof(adverbial_phrase); b++)
//                            {
//                                temp = completed[a][0];
//
//                                if (temp == adverbial_phrase[b])
//                                {
//                                    // We found the adverbial_phrase in completed
//                                    // Eliminate all possible word types in completed other than the syntax of the adverbial_phrase
//                                    for (int c = 0; c <= 5; c++)
//                                    {
//                                        completed[a][c];
//                                    }
//                                }
//                            }
//                        }
//                    }
//                    if (sizeof(participle_phrase) != 0)
//                    {
//                        for (int a = 0; a <= sentence_words_num; a++)
//                        {
//                            for (int b = 0; b <= sizeof(participle_phrase); b++)
//                            {
//                                temp = completed[a][0];
//
//                                if (temp == participle_phrase[b])
//                                {
//                                    // We found the participle_phrase in completed
//                                    // Eliminate all possible word types in completed other than the syntax of the participle_phrase
//                                    for (int c = 0; c <= 5; c++)
//                                    {
//                                        completed[a][c];
//                                    }
//                                }
//                            }
//                        }
//                    }
//                    if (sizeof(absolute_phrase) != 0)
//                    {
//                        for (int a = 0; a <= sentence_words_num; a++)
//                        {
//                            for (int b = 0; b <= sizeof(absolute_phrase); b++)
//                            {
//                                temp = completed[a][0];
//
//                                if (temp == absolute_phrase[b])
//                                {
//                                    // We found the absolute_phrase in completed
//                                    // Eliminate all possible word types in completed other than the syntax of the absolute_phrase
//                                    for (int c = 0; c <= 5; c++)
//                                    {
//                                        completed[a][c];
//                                    }
//                                }
//                            }
//                        }
//                    }
//                    if (sizeof(independent_clause) != 0)
//                    {
//                        for (int a = 0; a <= sentence_words_num; a++)
//                        {
//                            for (int b = 0; b <= sizeof(independent_clause); b++)
//                            {
//                                temp = completed[a][0];
//
//                                if (temp == independent_clause[b])
//                                {
//                                    // We found the independent_clause in completed
//                                    // Eliminate all possible word types in completed other than the syntax of the independent_clause
//                                    for (int c = 0; c <= 5; c++)
//                                    {
//                                        completed[a][c];
//                                    }
//                                }
//                            }
//                        }
//                    }
//                    if (sizeof(dependent_clause) != 0)
//                    {
//                        for (int a = 0; a <= sentence_words_num; a++)
//                        {
//                            for (int b = 0; b <= sizeof(dependent_clause); b++)
//                            {
//                                temp = completed[a][0];
//
//                                if (temp == dependent_clause[b])
//                                {
//                                    // We found the dependent_clause in completed
//                                    // Eliminate all possible word types in completed other than the syntax of the dependent_clause
//                                    for (int c = 0; c <= 5; c++)
//                                    {
//                                        completed[a][c];
//                                    }
//                                }
//                            }
//                        }
//                    }
//                    if (sizeof(noun_clause) != 0)
//                    {
//                        for (int a = 0; a <= sentence_words_num; a++)
//                        {
//                            for (int b = 0; b <= sizeof(noun_clause); b++)
//                            {
//                                temp = completed[a][0];
//
//                                if (temp == noun_clause[b])
//                                {
//                                    // We found the noun_clause in completed
//                                    // Eliminate all possible word types in completed other than the syntax of the noun_clause
//                                    for (int c = 0; c <= 5; c++)
//                                    {
//                                        completed[a][c];
//                                    }
//                                }
//                            }
//                        }
//                    }
//                    if (sizeof(relative_clause) != 0)
//                    {
//                        for (int a = 0; a <= sentence_words_num; a++)
//                        {
//                            for (int b = 0; b <= sizeof(relative_clause); b++)
//                            {
//                                temp = completed[a][0];
//
//                                if (temp == relative_clause[b])
//                                {
//                                    // We found the relative_clause in completed
//                                    // Eliminate all possible word types in completed other than the syntax of the relative_clause
//                                    for (int c = 0; c <= 5; c++)
//                                    {
//                                        completed[a][c];
//                                    }
//                                }
//                            }
//                        }
//                    }
//                    if (sizeof(adverbial_clause) != 0)
//                    {
//                        for (int a = 0; a <= sentence_words_num; a++)
//                        {
//                            for (int b = 0; b <= sizeof(adverbial_clause); b++)
//                            {
//                                temp = completed[a][0];
//
//                                if (temp == adverbial_clause[b])
//                                {
//                                    // We found the adverbial_clause in completed
//                                    // Eliminate all possible word types in completed other than the syntax of the adverbial_clause
//                                    for (int c = 0; c <= 5; c++)
//                                    {
//                                        completed[a][c];
//                                    }
//                                }
//                            }
//                        }
//                    }
//                }
//            }
//        }
//    }
//
//    // 3. Check if any of the words of more than one definition
//}

// Purpose: Input a word and return the word types of the word from the dictionary
string* _NLP::getWordTypes(string word)
{
    MYSQL* conn = nullptr;
    MYSQL_ROW row;
    MYSQL_RES* result1;
    string sql1;
    string mysql_hostname;
    string mysql_dicionary_database;
    string mysql_username;
    string mysql_password;
    string mysql_table = "entries";
    word = _Utilities::FixArticle(word);
    string* word_types;
    word_types = new string[10];

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_dictionary_database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        sql1 = "SELECT * FROM ";
        sql1 += mysql_table;
        sql1 += ";";
        mysql_query(conn, sql1.c_str());
        result1 = mysql_store_result(conn);

        while (row = mysql_fetch_row(result1))
        {
            if (word == row[0])
            {
                for (int x = 0; x <= sizeof(word_types); x++)
                {
                    if (word_types[x] == "")
                    {
                        word_types[x] = row[1];
                        break;
                    }
                }
            }
        }

        return word_types;
    }
    else
    {
        cout << "Could not connect to MySQL Server..." << endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(1));
        mysql_close(conn);
    }
}

// Purpose: Input a word and return the word types of the word from the dictionary
string* _NLP::getDefinitions(string word)
{
    MYSQL* conn = nullptr;
    MYSQL_ROW row;
    MYSQL_RES* result1;
    string sql1;
    string mysql_table = "entries";
    word = _Utilities::FixArticle(word);
    string* definitions;
    definitions = new string[10];

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_dictionary_database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        sql1 = "SELECT * FROM ";
        sql1 += mysql_table;
        sql1 += ";";
        mysql_query(conn, sql1.c_str());
        result1 = mysql_store_result(conn);

        while (row = mysql_fetch_row(result1))
        {
            if (word == row[0])
            {
                for (int x = 0; x <= sizeof(definitions); x++)
                {
                    if (definitions[x] == "")
                    {
                        definitions[x] = row[1];
                        break;
                    }
                }
            }
        }

        return definitions;
    }
    else
    {
        cout << "Could not connect to MySQL Server..." << endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(1));
        mysql_close(conn);
    }
}

string _NLP::getSpecialType(string word, string word_type)
{
    string special_type;

    if (word_type == "noun")
        special_type = _NLP::isNoun(word);
    if (word_type == "pronoun")
        special_type = _NLP::isPronoun(word);
    if (word_type == "verb")
        special_type = _NLP::isVerb(word);
    if (word_type == "adjective")
        special_type = _NLP::isAdjective(word);
    if (word_type == "adverb")
        special_type = _NLP::isAdverb(word);
    if (word_type == "interjection")
        special_type = _NLP::isInterjection(word);
    if (word_type == "conjunction")
        //special_type = _NLP::isConjunction(word);
        if (word_type == "determiner")
            special_type = _NLP::isDeterminer(word);
    if (word_type == "article")
        special_type = _NLP::isArticle(word);
    if (word_type == "number")
        special_type = _NLP::isNumber(word);
    if (word_type == "preposition")
        special_type = _NLP::isPreposition(word);

    return special_type;
}

// Return the words of the sentence individually
// Separate the punctuation in a sentence and declare it aa another word
// 1. Commas
// 2. Colons
// 3. Semi-colons
// 4. Double Quotes
// 5. Single Quotes
// 6. Apostrophies
// 7. Hyphen
// 8. Dash
// 9. Parenthesis
// 10. Brackets
// 11. Forward slash
// 12. Addition
// 13. Subtraction
// 14. @ sign
// 14. Pound
// 15. Dollar Sign
// 16. Percent Sign
// 17. Exponents
// 18. multiplication
// 19. Asterisk
// 20. Underscore
// 21. Equal sign
// 22. Greater than sign
// 23. Lass than sign
// 24. Curly open bracket
// 25. Curly close bracket
// 26. Backslash
// 27. Bar
//string* _NLP::returnWords(string* sentence)
//{
//    //string words[100];
//    //int count = 0;
//
//    //for (int x = 0; sentence[x] != ' '; x++)
//    //{
//    //    if (sentence[x] == '.')
//    //    {
//    //        words[count] = '.';
//    //        count++;
//    //    }
//    //    else if (sentence[x] == ',')
//    //    {
//    //        words[count] = ',';
//    //        count++;
//    //    }
//    //    else if (sentence[x] == ':')
//    //    {
//    //        words[count] = ':';
//    //        count++;
//    //    }
//    //    else if (sentence[x] == ';')
//    //    {
//    //        words[count] = ';';
//    //        count++;
//    //    }
//    //    else if (sentence[x] == '\"')
//    //    {
//    //        words[count] = '\"';
//    //        count++;
//    //    }
//    //    else if (sentence[x] == '\'')
//    //    {
//    //        words[count] = '\'';
//    //        count++;
//    //    }
//    //    else if (sentence[x] == '-')
//    //    {
//    //        words[count] = '-';
//    //        count++;
//    //    }
//    //    else if (sentence[x] == '(')
//    //    {
//    //        words[count] = '(';
//    //        count++;
//    //    }
//    //    else if (sentence[x] == ')')
//    //    {
//    //        words[count] = ')';
//    //        count++;
//    //    }
//    //    else if (sentence[x] == '[')
//    //    {
//    //        words[count] = '[';
//    //        count++;
//    //    }
//    //    else if (sentence[x] == ']')
//    //    {
//    //        words[count] = ']';
//    //        count++;
//    //    }
//    //    else if (sentence[x] == '/')
//    //    {
//    //        words[count] = '/';
//    //        count++;
//    //    }
//    //    else if (sentence[x] == '+')
//    //    {
//    //        words[count] = '+';
//    //        count++;
//    //    }
//    //    else if (sentence[x] == '@')
//    //    {
//    //        words[count] = '@';
//    //        count++;
//    //    }
//    //    else if (sentence[x] == '#')
//    //    {
//    //        words[count] = '#';
//    //        count++;
//    //    }
//    //    else if (sentence[x] == '$')
//    //    {
//    //        words[count] = '$';
//    //        count++;
//    //    }
//    //    else if (sentence[x] == '%')
//    //    {
//    //        words[count] = '%';
//    //        count++;
//    //    }
//    //    else if (sentence[x] == '^')
//    //    {
//    //        words[count] = '^';
//    //        count++;
//    //    }
//    //    else if (sentence[x] == '*')
//    //    {
//    //        words[count] = '*';
//    //        count++;
//    //    }
//    //    else if (sentence[x] == '_')
//    //    {
//    //        words[count] = '_';
//    //        count++;
//    //    }
//    //    else if (sentence[x] == '=')
//    //    {
//    //        words[count] = '=';
//    //        count++;
//    //    }
//    //    else if (sentence[x] == '>')
//    //    {
//    //        words[count] = '>';
//    //        count++;
//    //    }
//    //    else if (sentence[x] == '<')
//    //    {
//    //        words[count] = '<';
//    //        count++;
//    //    }
//    //    else if (sentence[x] == '{')
//    //    {
//    //        words[count] = '{';
//    //        count++;
//    //    }
//    //    else if (sentence[x] == '}')
//    //    {
//    //        words[count] = '}';
//    //        count++;
//    //    }
//    //    else if (sentence[x] == '\\')
//    //    {
//    //        words[count] = '\\';
//    //        count++;
//    //    }
//    //    else if (sentence[x] == '|')
//    //    {
//    //        words[count] = '|';
//    //        count++;
//    //    }
//    //    else if (sentence[x] != ' ')
//    //    {
//    //        words[count] += sentence[x];
//    //    }
//
//    //    if (sentence[x + 1] == ' ')
//    //    {
//    //        x++;
//    //        count++;
//    //    }
//    //}
//
//    //return words;
//}

string _NLP::getVerb(string* words, string* compiled_word_types)
{
    for (int x = 0; x <= sizeof(compiled_word_types); x++)
    {
        if (_NLP::isVerb(compiled_word_types[x]) != "false")
        {
            return words[x];
        }
    }
    return "false";
}

string _NLP::getAverageVectorSentence(string* words, string* compiled_word_types)
{
    string vector_string;
    string sql1;
    string word;
    string word_type;
    string definition;
    string vector;
    size_t size = sizeof(words);
    string temp_vector;
    double* parsed_vector = new double[300];
    double* sentence_vector = new double[300];
    double* average_vector = new double[300];
    string return_vector;

    for (int x = 0; x <= sizeof(words); x++)
    {
        word_type = compiled_word_types[x];
        temp_vector = _DatabaseFunctions::QueryWordVector(words[x], word_type);
        parsed_vector = _Utilities::ParseVector(temp_vector);
        sentence_vector = _Utilities::VectorSum(sentence_vector, parsed_vector);
    }

    average_vector = _Utilities::VectorAverage(sentence_vector, size);
    return_vector = _Utilities::Vector2String(average_vector);

    return return_vector;
}

string _NLP::getSentenceVector(string* words, string* compiled_word_types)
{
    string vector_string;
    string sql1;
    string word;
    string word_type;
    string definition;
    string vector;
    size_t size = sizeof(words);
    string temp_vector;
    double* parsed_vector = new double[300];
    double* sentence_vector = new double[300];
    string return_vector;

    for (int x = 0; x <= sizeof(words); x++)
    {
        word_type = compiled_word_types[x];
        temp_vector = _MySQL::QueryWordVector(words[x], word_type);
        parsed_vector = _Utilities::ParseVector(temp_vector);
        sentence_vector = _Utilities::VectorSum(sentence_vector, parsed_vector);
    }

    return_vector = _Utilities::Vector2String(sentence_vector);

    return return_vector;
}

string _NLP::isNoun(string word)
{
    if (_NLP::isCommonNoun(word))
        return "CommonNoun";
    else if (_NLP::isProperNoun(word))
        return "ProperNoun";
    else if (_NLP::isFirstName(word))
        return "FirstName";
    else if (_NLP::isLastName(word))
        return "LastName";
    else if (_NLP::isBrandName(word))
        return "BrandName";
    else if (_NLP::isAppellations(word))
        return "Appellations";
    else if (_NLP::isJobTitle(word))
        return "JobTitle";
    else if (_NLP::isFamilialRole(word))
        return "FamilialRole";
    else if (_NLP::isNounAddress(word))
        return "NounAddress";
    else if (_NLP::isConcreteNoun(word))
        return "ConcreteNoun";
    else if (_NLP::isAbstractNoun(word))
        return "AbstractNoun";
    else if (_NLP::isCountableNoun(word))
        return "CountableNoun";
    else if (_NLP::isUncountableNoun(word))
        return "UncountableNoun";
    else if (_NLP::isCollectiveNoun(word))
        return "CollectiveNoun";
    else if (_NLP::isCompoundNoun(word))
        return "CompoundNoun";
    else if (_NLP::isCreatingNoun(word))
        return "CreatingNoun";
    else if (_NLP::isOtherNoun(word))
        return "noun";
    else
        return "false";
}

string _NLP::isPronoun(string word)
{
    if (_NLP::isPersonalNumberPronoun(word))
        return "PersonalNumber";
    else if (_NLP::isPersonalGenderPronoun(word))
        return "PersonalGender";
    else if (_NLP::isPersonalCasePronoun(word))
        return "PersonalCase";
    else if (_NLP::isPersonalReflexivePronoun(word))
        return "PersonalReflexive";
    else if (_NLP::isIntensivePronoun(word))
        return "Intensives";
    else if (_NLP::isIndefinitePronoun(word))
        return "Indefinite";
    else if (_NLP::isDemonstrativePronoun(word))
        return "Demonstrative";
    else if (_NLP::isInterogativePronoun(word))
        return "Interogative";
    else if (_NLP::isRelativePronoun(word))
        return "Relative";
    else if (_NLP::isReciprocalPronoun(word))
        return "Reciprocal";
    else if (_NLP::isDummyPronoun(word))
        return "Dummy";
    else if (_NLP::isPossessivePronoun(word))
        return "possessive_pronoun";
    else if (_NLP::isOtherPronoun(word))
        return "pronoun";
    else
        return "false";
}

string _NLP::isVerb(string word)
{
    if (_NLP::isFiniteVerb(word))
        return "Finite";
    else if (_NLP::isInfinitiveVerb(word))
        return "Infinitive";
    else if (_NLP::isTransitiveVerb(word))
        return "Transitive";
    else if (_NLP::isIntransitiveVerb(word))
        return "Intransitive";
    else if (_NLP::isRegularVerb(word))
        return "Regular";
    else if (_NLP::isIrregularVerb(word))
        return "Irregular";
    else if (_NLP::isPrimaryAuxiliaryVerb(word))
        return "PrimaryAuxiliary";
    else if (_NLP::isSemiModalAuxiliaryVerb(word))
        return "SemiModalAuxiliary";
    else if (_NLP::isParticiple(word))
        return "Participle";
    else if (_NLP::isActionVerb(word))
        return "Action";
    else if (_NLP::isStativeVerb(word))
        return "Stative";
    else if (_NLP::isLinkingVerb(word))
        return "Linking";
    else if (_NLP::isLightVerb(word))
        return "Light";
    else if (_NLP::isPhrasalVerbs(word))
        return "Phrasal";
    else if (_NLP::isConditionalVerb(word))
        return "Conditional";
    else if (_NLP::isCausativeVerb(word))
        return "Causative";
    else if (_NLP::isFactiveVerb(word))
        return "Factive";
    else if (_NLP::isReflexiveVerb(word))
        return "Reflexive";
    else if (_NLP::isOtherVerb(word))
        return "verb";
    else
        return "false";
}

string _NLP::isAdjective(string word)
{
    if (_NLP::isAttributiveAdjective(word))
        return "Attributive";
    else if (_NLP::isPredicativeAdjective(word))
        return "Predicative";
    else if (_NLP::isProperAdjective(word))
        return "Proper";
    else if (_NLP::isCollectiveAdjective(word))
        return "Collective";
    else if (_NLP::isDemonstrativeAdjective(word))
        return "Demonstrative";
    else if (_NLP::isInterrogativeAdjective(word))
        return "Interrogative";
    else if (_NLP::isNominalAdjective(word))
        return "Nominal";
    else if (_NLP::isCompoundAdjective(word))
        return "Compound";
    else if (_NLP::isOrderAdjective(word))
        return "Order";
    else if (_NLP::isComparativeAdjective(word))
        return "Comparative";
    else if (_NLP::isSuperlativeAdjective(word))
        return "Superlative";
    else if (_NLP::isOtherAdjective(word))
        return "adjective";
    else
        return "false";
}

string _NLP::isAdverb(string word)
{
    if (_NLP::isAdverbFrequency(word))
        return "Frequency";
    if (_NLP::isAdverbPurpose(word))
        return "AdverbPurpose";
    if (_NLP::isAdverbFocusing(word))
        return "AdverbFocusing";
    if (_NLP::isAdverbNegative(word))
        return "AdverbNegative";
    if (_NLP::isAdverbConjunctive(word))
        return "AdverbConjunctive";
    if (_NLP::isAdverbEvaluative(word))
        return "AdverbEvaluative";
    if (_NLP::isAdverbViewpoint(word))
        return "AdverbViewpoint";
    if (_NLP::isAdverbRelative(word))
        return "AdverbRelative";
    if (_NLP::isAdverbialNoun(word))
        return "AdverbialNoun";
    if (_NLP::isAdverbTime(word))
        return "Time";
    if (_NLP::isAdverbPlace(word))
        return "Place";
    if (_NLP::isAdverbManner(word))
        return "Manner";
    if (_NLP::isRegularAdverb(word))
        return "RegularAdverb";
    if (_NLP::isIrregularAdverb(word))
        return "IrregularAdverb";
    if (_NLP::isComparativeAdverb(word))
        return "ComparativeAdverb";
    if (_NLP::isSuperlativeAdverb(word))
        return "SuperlativeAdverb";
    if (_NLP::isOrderAdverb(word))
        return "OrderAdverb";
    if (_NLP::isOtherAdverb(word))
        return "adverb";
    else
        return "false";
}

string _NLP::isInterjection(string word)
{
    if (_NLP::isInterjectionSwear(word))
        return "interjuctions_swear";
    if (_NLP::isEmotiveInterjections(word))
        return "EmotiveInterjections";
    if (_NLP::isCognitiveInterjections(word))
        return "CognitiveInterjection";
    if (_NLP::isVolitiveInterjections(word))
        return "VolitiveInterjection";
    else
        return "false";
}

string _NLP::isConjunction(string* words)
{
    //if (_NLP::isConjunction(word) != "")
    //    return "Conjunction";
    //else
    //    return "false";

    return "false";
}

string _NLP::isDeterminer(string word)
{
    if (_NLP::isPossessiveDeterminer(word))
        return "PossessiveDeterminer";
    if (_NLP::isPreDeterminer(word))
        return "pre-determiner";
    else
        return "false";
}

string _NLP::isArticle(string word)
{
    if (_NLP::isDefiniteArticle(word))
        return "DefiniteArticle";
    if (_NLP::isIndefiniteArticle(word))
        return "IndefiniteArticle";
    else
        return "false";
}

string _NLP::isNumber(string word)
{
    if (_NLP::isNumberWords(word))
        return "NumberWords";
    if (_NLP::isNumberDigits(word))
        return "NumberDigits";
    else
        return "false";
}

string _NLP::isPreposition(string word)
{
    MYSQL* conn = nullptr;
    MYSQL_ROW row;
    MYSQL_RES* result;
    string query;

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_dictionary_database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        query = "SELECT * FROM prepositions;";
        mysql_query(conn, query.c_str());
        result = mysql_store_result(conn);

        while (row = mysql_fetch_row(result))
        {
            if (_Utilities::toLowerWord(word) == _Utilities::toLowerWord(row[0]))
                return word;
        }
    }
    else
    {

    }

    return "false";
}

bool _NLP::isNumberWords(string word)
{
    return false;
}

// TODO: Check if the direct object makes logical sense
// Purpose: Identify the pattens of a sentence object, in this case the direct object
// 1. Find the patterns of sentences with valid direct objects
//      a. The direct object must follow a transitive or intransitive verb
// 2. Find a transitive or intransitive verb
//      a. Intransitive verb: where, when, how, or how long?
//      b. Transitive verb: me, you, him, her, us, them, and whom
// 3. Object pronouns receive the action in the sentence in the case 
//      a. me, you, him, her, us, them, and whom
//      b. Object pronouns always are the recipients in sentences.
//      c. If an action is happening to a noun, you should use object nouns.
// 4. Subject nouns cannot follow the verb
//      a. I, you, he, she, we, they, and who
// 5. The direct object cannot be after a preposition
// 6. Two object pronouns at once
//      a. Don't mix cases. Both of the pronouns will be in either the subject or objective case
string* _NLP::getDirectObject(string* words, string* compiled_word_types)
{
    int transitive_verb;
    //int intransitive_verb;
    string direct_object;
    bool correct_verb = false;
    //bool contains_logic;
    //bool dual_pronouns;
    bool pronouns_list;
    string dual_pronoun[1];
    string pronoun_list[10];
    string temp;

    for (int x = 0; x <= sizeof(words); x++)
    {
        // 2. Check for transitive and intransitive verbs
        if (_NLP::isVerb(words[x]) == "TransitiveVerb")
        {
            transitive_verb = x;
            correct_verb = true;

            if (_NLP::isNoun(words[x + 1]) != "false")
            {
                string* temp = new string[1];
                temp[0] = words[transitive_verb + 1];

                return temp;
            }
        }
        if (_NLP::isIntransitiveVerb(words[x]))
        {
            string* temp = new string[1];
            temp[0] = "false";

            return temp;
        }
    }

    // Find a noun that follows the verb
    for (int word = transitive_verb + 1; word <= sizeof(words); word++)
    {
        if (_NLP::isPronoun(words[word]) != "false")
        {
            // If this is true, search if there is another proper noun
            // Check if there is another pronoun for dual nouns
            // Check for the proper pronouns for a direct object
            // 1. me, you, him, her, us, them, it, and whom
            //      a. Me: check the name of the person...
            //      b. Him: check for matching male names in database
            //      c. Her: check for matching female names in database
            //      d. Us: check for patterns of us
            //          1. "him/her and I"
            //      e. Them: him/her and him/her
            //      f. Whom: Who is it?
            //          1. Was it him/her/me/you/them?
            pronoun_list[0] = words[word];

            // Check for dual nouns
            for (int word2 = word + 1; word2 <= sizeof(words); word2++)
            {
                // Check for pronouns
                if (_NLP::isPronoun(words[word2]) != "false")
                {
                    // Check if there is a comma or logical operator as the previous word
                    if (words[word2 - 1] == "and" || words[word2 - 1] == "or")
                    {
                        dual_pronoun[1] = words[word2];

                        for (int word5 = word2 + 1; word5 <= sizeof(words); word5++)
                        {
                            if (_NLP::isNoun(words[word5]) != "false")
                            {
                                string* temp = new string[1];
                                temp[0] = words[word5];

                                return temp;
                            }
                        }
                    }
                    // Check for a list of pronouns
                    if (words[word2 - 1] == ",")
                    {
                        pronouns_list = true;

                        // Check for the next logical operator
                        for (int word3 = 0; word3 < sizeof(words); word3++)
                        {
                            for (int list_num3 = 0; list_num3 < 3; list_num3++)
                            {
                                if (words[word3] == _logic_operators[list_num3])
                                {
                                    word3++;

                                    // Find the difference between the current word with logical operators and all past
                                    for (int word4 = word3 - word2; word4 <= word3; word4++)
                                    {
                                        for (int empty = 0; empty < 20; empty++)
                                        {
                                            if (pronoun_list[empty] == "")
                                            {
                                                pronoun_list[empty] = words[word4];

                                                // Return the next noun as the object
                                                for (int word5 = word4 + 1; word5 < 20; word5++)
                                                {
                                                    if (_NLP::isNoun(words[word5]) != "false")
                                                    {
                                                        string* temp = new string[1];
                                                        temp[0] = words[word5];

                                                        return temp;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        if (_NLP::isNoun(words[word]) != "false")
        {
            // Check for proper nouns
            if (_NLP::isFirstName(words[word]))
            {
                string* temp = new string[1];
                temp[0] = words[word];

                return temp;
            }
            if (_NLP::isFirstName(words[word]) && _NLP::isLastName(words[word + 1]))
            {
                string* temp = new string[2];
                temp[0] = words[word];
                temp[1] = words[word + 1];

                return temp;
            }
            // Check for last names
            if (_NLP::isLastName(words[word]))
            {
                string* temp = new string[1];
                temp[0] = words[word];

                return temp;
            }
            if (_NLP::isFirstName(words[word]) && (words[word + 1] == "and" || words[word + 1] == "or") && _NLP::isFirstName(words[word + 2]))
            {
                string* temp = new string[3];
                temp[0] = words[word];
                temp[1] = words[word + 1];
                temp[2] = words[word + 2];

                return temp;
            }
            if (_NLP::isLastName(words[word]) && (words[word + 1] == "and" || words[word + 1] == "or") && _NLP::isLastName(words[word + 2]))
            {
                string* temp = new string[3];
                temp[0] = words[word];
                temp[1] = words[word + 1];
                temp[2] = words[word + 2];

                return temp;
            }
            if ((_NLP::isFirstName(words[word]) && _NLP::isLastName(words[word + 1])) && (words[word + 2] == "and" || words[word + 2] == "or") && (_NLP::isFirstName(words[word + 3]) && _NLP::isLastName(words[word + 4])))
            {
                string* temp = new string[4];
                temp[0] = words[word];
                temp[1] = words[word + 1];
                temp[2] = words[word + 2];
                temp[3] = words[word + 3];
                temp[4] = words[word + 4];

                return temp;
            }
        }
    }

    //return temp;
}

string _NLP::getIndirectObject(string* words, string* compiled_word_types)
{
    string indirect_object;
    string* direct_object = _NLP::getDirectObject(words, compiled_word_types);
    int direct_object_num;
    string noun_list;

    // Get the position of the direct object
    for (int word = 0; word < sizeof(words); word++)
    {
        if (words[word] == direct_object[0])
        {
            direct_object_num = word;
        }
    }

    // Find the transitive verb
    for (int z = 0; z < sizeof(words); z++)
    {
        if (_NLP::isVerb(words[z]) == "false")
        {
            // Get all proper and pronouns until the position of the direct object location
            for (int b = z + 1; b < direct_object_num; b++)
            {
                if (_NLP::isNoun(words[b]) != "false")
                {
                    indirect_object = words[b];

                    return indirect_object;
                }
            }
        }
    }

    return indirect_object;
}


string _NLP::getObjectofPreposition(string* words, string* compiled_word_types)
{
    string object_preposition;
    string preposition;

    // Get the first preposition in the sentence
    for (int word_count = 0; word_count <= sizeof(words); word_count++)
    {
        if (_NLP::isPreposition(words[word_count]) == "false")
        {
            preposition = words[word_count];

            // Find the object of the preposition, which is typically the next noun in the sentence
            for (int word_count2 = word_count + 1; word_count2 <= sizeof(words); word_count2++)
            {
                if (_NLP::isNoun(words[word_count2]) != "false")
                {
                    return words[word_count2];
                }
            }
        }
    }

    return object_preposition;
}

string* _NLP::getWordTypesDisambiguation(string word, string special_type, string* word_types)
{
    MYSQL* conn = nullptr;
    MYSQL_ROW row;
    MYSQL_RES* result1;
    string mysql_table = "entries";
    string sql1;
    string* disambiguation = new string[10];

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_dictionary_database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        sql1 = "SELECT * FROM `";
        sql1 += mysql_table.c_str();
        sql1 += "`;";
        mysql_query(conn, sql1.c_str());
        result1 = mysql_store_result(conn);

        while (row = mysql_fetch_row(result1))
        {

        }
    }
    else
    {
        cout << "Could not connect to MySQL Server..." << endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(10));
        mysql_close(conn);
    }

    return disambiguation;
}

string* _NLP::getDefinitionsDisambiguation(string word, string word_type, string* definitions)
{
    MYSQL* conn = nullptr;
    MYSQL_ROW row;
    MYSQL_RES* result1;
    string mysql_table = "entries";
    string sql1;
    string* disambiguation = new string[10];

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_dictionary_database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        sql1 = "SELECT * FROM `";
        sql1 += mysql_table.c_str();
        sql1 += "`;";
        mysql_query(conn, sql1.c_str());
        result1 = mysql_store_result(conn);

        while (row = mysql_fetch_row(result1))
        {
            return disambiguation;
        }
    }
    else
    {
        cout << "Could not connect to MySQL Server..." << endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(10));
        mysql_close(conn);
    }
}

// Noun Phrases are groups of two or more words within a sentence that function grammatically as nouns. They consits of a noun and other words that modify the noun. Some grammatarians also consider a single-word noun to be a noun phrase, while more traditional grammars hold that a phrase must be made up of more than on word.
// Noun phrase patterns:
//      a. "a book" | determiner + noun
//      b. "her sweet smiling child" | determiner + adverb + adjective + noun
//      c. "the red car" | determiner + adjective + noun
// A noun phrase consists of a noun plus any determiners or modifiers directly related to it. Noun phrases always have the grammatical function of nouns in a sentence
// Noun Phrase Item list
// 1. Adjectives
// 2. Articles
// 3. Determiners
// 4. Participles
// 5. Possessive Determiners
// 6. Compound nouns
// 7. Relative Clauses
// 8. Infinitives
// 9. Participle Phrases
// 10. Prepositional Phrases

// Todo:
// Change the Completed variable to two dimensions rather than three
// completed[0][0] = word
// completed[0][1] = word type
// completed[0][2] = definition
// completed[0][3] = vector
// completed[1][0] = word2
// completed[x][y] = vise versa
string* _NLP::getNounPhrase(string* words, string* compiled_word_types)
{
    string noun_phrase[10];
    string temp;
    string noun;

    // Search for basic noun_prhases
    for (int word = 0; word < sizeof(words); word++)
    {
        for (int word_type_num = 1; word_type_num < 5; word_type_num++)
        {
            if (completed[word][word_type_num] == "personal_pronoun")
            {
                noun_phrase[0] = completed[word][0];

                // The current word is a personal pro-noun, check if the next word is a noun
                for (int word_type_num2 = 1; word_type_num2 < 5; word_type_num2++)
                {
                    for (int list_num = 0; list_num < 20; list_num++)
                    {
                        if (completed[word + 1][word_type_num2] == _noun_list[list_num])
                        {
                            noun_phrase[1] = completed[word + 1][0];
                            return noun_phrase;
                        }
                    }
                }
            }
            else if (completed[word][word_type_num] == "the")
            {
                noun_phrase[0] = completed[word][0];

                // The current word is a personal pro-noun, check if the next word is a noun
                for (int word_type_num2 = 1; word_type_num2 < 5; word_type_num2++)
                {
                    for (int list_num = 0; list_num < 20; list_num++)
                    {
                        if (completed[word + 1][word_type_num2] == _noun_list[list_num])
                        {
                            noun_phrase[1] = completed[word + 1][0];
                            return noun_phrase;
                        }
                    }
                }
            }
            else if (completed[word][word_type_num] == "attributive_adjectives")
            {
                noun_phrase[0] = completed[word][0];

                // The current word is a personal pro-noun, check if the next word is a noun
                for (int word_type_num2 = 1; word_type_num2 < 5; word_type_num2++)
                {
                    for (int list_num = 0; list_num < 20; list_num++)
                    {
                        if (completed[word + 1][word_type_num2] == _noun_list[list_num])
                        {
                            noun_phrase[1] = completed[word + 1][0];
                            return noun_phrase;
                        }
                    }
                }
            }
        }
    }

    // Search for a noun
    for (int word = 0; word < sizeof(words); word++)
    {
        for (int word_type_num = 1; word_type_num < 5; word_type_num++)
        {
            for (int list_num = 0; list_num < 20; list_num++)
            {
                if (completed[word][word_type_num] == _noun_list[list_num])
                {
                    noun_phrase[0] = completed[word][0];
                    temp = completed[word + 1][0];

                    // Check if there is another noun creating a compound noun phrase
                    if (temp == "and" || temp == "or" || temp == "not")
                    {
                        noun_phrase[1] = temp;

                        // Check if word + 2 is a noun or pronoun
                        for (int word_type_num2 = 1; word_type_num2 < 5; word_type_num2++)
                        {
                            for (int list_num2 = 0; list_num2 < 20; list_num2++)
                            {
                                if (completed[word + 2][word_type_num2] == _noun_list[list_num2])
                                {
                                    noun_phrase[2] = completed[word + 2][0];
                                }
                                if (completed[word + 2][word_type_num2] == _pronoun_list[list_num2])
                                {
                                    noun_phrase[2] += completed[word + 2][0];
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    return noun_phrase;
}
// Subject complements follow a linking verb. For personal pronouns this is almost always with forms of the verb be.
//  The personal pronoun should be in the 'subjective case'. "It was I who did this" is more correct then "It was me who did this."
// "It is ways to mistake it as the direct object because it seems like it is receiving the action of the verb, but linking
//  verbs behav differently from action verbs. One way to be sure you are using the correct pronoun is to reverse the order of
//  of the verb and pronoun and see if th statement still makes sense."

// 0. Search for a being pronoun
// 1. Search for a linking verb
// 2. Me does not come before I
string* _NLP::getSubjectComplements(string* words, string* compiled_word_types)
{
    string* subject_complements = new string[20];

    for (int x = 0; x <= sizeof(words); x++)
    {
        if (_NLP::isPronoun(words[x]) != "")
        {
            // Check if there is a linking verb
            for (int y = x + 1; y <= sizeof(words); y++)
            {
                if (_NLP::isLinkingVerb(words[y]))
                {

                }
            }
        }
    }

    return subject_complements;
}

// "Nouns that follow linking verbs are knows as predicate nouns (sometimes known as predicative nouns). These serve to rename or re-identify the subject. If the noun is accompanied by any direct modifiers (such as articles, adjectives, or prepositional phrases, the entire noun phrase acts predicatively." Farlex Grammar Book
string* _NLP::getPredicateNoun(string* words, string* compiled_word_types)
{
    int noun_count = 0;

    for (int x = 0; x < sizeof(words); x++)
    {
        if (_NLP::isLinkingVerb(words[x]))
        {
            // Predicate nouns are simply nouns that follow a linking verb
            // The combination can be a noun after the verb or followed by direct modifiers such as articles, adjectives, or prepositional phrases
            size_t size = sizeof(words) - x;
            string* words_temp = new string[size];

            // Check for a prepositional phrase by sending all characters after the linking verb to the prep phrase function
            for (int y = x + 1; y <= size; y++)
            {
                for (int z = 0; z <= size; z++)
                {
                    if (words_temp[z] == "")
                    {
                        words_temp[z] = words[y];
                    }
                }
            }

            if (_NLP::isNoun(words[x + 1]) != "false")
            {
                string* predicate_noun = new string[1];
                predicate_noun[0] = words[x + 1];
                return predicate_noun;
            }
            if (_NLP::isArticle(words[x + 1]) != "false" && _NLP::isNoun(words[x + 2]) != "false")
            {
                string* predicate_noun = new string[2];
                predicate_noun[0] = words[x + 1];
                predicate_noun[1] = words[x + 2];
                return predicate_noun;
            }
            if (_NLP::isAdjective(words[x + 1]) != "false" && _NLP::isNoun(words[x + 2]) != "false")
            {
                string* predicate_noun = new string[2];
                predicate_noun[0] = words[x + 1];
                predicate_noun[1] = words[x + 2];
                return predicate_noun;
            }

            string* prepositional_phrase = getPrepositionalPhrase(words_temp, compiled_word_types);

            for (int z = 0; z <= sizeof(prepositional_phrase); z++)
            {
                if (_NLP::isNoun(prepositional_phrase[z]) != "false")
                {
                    // Assign the prepositional phrase to be the predicate noun
                    string* predicate_noun = prepositional_phrase;
                    return predicate_noun;
                }
            }

            // Check if there is more than one noun after the linking verb
            for (int z = x + 1; z <= size; z++)
            {
                if (_NLP::isNoun(words[z]) != "false")
                {
                    noun_count++;
                }
            }

            if (noun_count >= 2)
            {
                // This might be an error, refer back after running classification statistics
            }
        }
    }
}

string* _NLP::getPredicatePronoun(string* words, string* compiled_word_types)
{
    bool properNoun = false;

    // Check for propernouns in the subject
    for (int x = 0; x < sizeof(words); x++)
    {
        if (_NLP::isProperNoun(words[x]) || _NLP::isFirstName(words[x]) || _NLP::isLastName(words[x]) || _NLP::isBrandName(words[x]) || _NLP::isJobTitle(words[x]))
        {
            properNoun = true;
        }
    }

    if (!properNoun)
    {
        for (int x = 0; x < sizeof(words); x++)
        {
            // Look for the linking verb in the sentence
            if (_NLP::isLinkingVerb(words[x]))
            {
                // After a linking verb to re-identify the subject. Questions and responses in which the identity of the subject is not known. Predicate pronouns in declarative statements, but this is less common in everyday speech and writing.
                for (int y = x + 1; y <= sizeof(words); y++)
                {
                    if (_NLP::isPronoun(words[y]) != "false")
                    {
                        string* predicate_pronoun = new string[sizeof(words) - x + 1];

                        for (int z = 0; z <= sizeof(words) - x + 1; z++)
                        {
                            if (predicate_pronoun[z] == "")
                            {
                                predicate_pronoun[z] = words[y];
                            }
                        }
                        return predicate_pronoun;
                    }
                }
            }
        }
    }
}

string* _NLP::getPredicateAdjective(string* words, string* compiled_word_types)
{
    for (int x = 0; x < sizeof(words); x++)
    {
        // Look for the linking verb in the sentence
        if (_NLP::isLinkingVerb(words[x]))
        {
            // Look for an adjective
            for (int y = x + 1; y < sizeof(words); y++)
            {
                if (_NLP::isAdjective(words[y]) != "false")
                {
                    string* predicate_adjective = new string[sizeof(words) - y + 1];
                    return predicate_adjective;
                }
            }

            // Look for a prepositional phrase
            string* prepositional_phrase = getPrepositionalPhrase(words, compiled_word_types);

            if (prepositional_phrase[0] != "")
            {
                string* predicate_adjective = new string[sizeof(prepositional_phrase)];
                return predicate_adjective;
            }
        }
    }
}

// Clauses
// 1. Independent Clause
// 2. Dependent Clause
//      a. Noun Clauses
//      b. Relative Clauses
//      c. Adverbial Clauses
string* _NLP::getRelativeClause(string* words, string* compiled_word_types)
{
    // Get the subject
    string* subject = getSubject(words, compiled_word_types);
    string* predicate = getPredicate(words, compiled_word_types);

    // Look for relative pronouns
    for (int x = 0; x < sizeof(subject); x++)
    {
        if (_NLP::isRelativePronoun(subject[x]))
        {
            string* relative_clause = new string[sizeof(predicate) - 1];
            // Get all words that follow the relative pronoun to the relative clause
            for (int y = 0; y <= sizeof(predicate); y++)
            {
                if (_NLP::isVerb(predicate[0]) != "false")
                {
                    relative_clause[y] = predicate[y + 1];
                }
            }
            return relative_clause;
        }
    }
}

string* _NLP::getInfinitivePhrase(string* words, string* compiled_word_types)
{
    string* infinitive_phrase = new string[20];
    string* subject = getSubject(words, compiled_word_types);
    string* predicate = getPredicate(words, compiled_word_types);
    string* object = getDirectObject(words, compiled_word_types);
    int object_pos;

    // Get the position of the direct object in the sentence
    for (int x = 0; x <= sizeof(words); x++)
    {
        if (words[x] == object[0])
        {
            object_pos = x;
        }
    }

    // Check for infinitives
    for (int z = 0; z <= sizeof(words); z++)
    {
        if (_NLP::isInfinitiveVerb(words[z]))
        {
            // Return everything after the infinitive verb
            string* infinitive_phrase = new string[sizeof(words) - z];

            for (int a = z; a <= sizeof(words) - z; a++)
            {
                infinitive_phrase[a] = words[a];
            }

            return infinitive_phrase;
        }
    }
}

string* _NLP::getAdjectivePhrase(string* words, string* compiled_word_types)
{
    //string* subject;
    //string* predicate;

    for (int x = 0; x < sizeof(words); x++)
    {
        // Find a linking verb
        if (_NLP::isLinkingVerb(words[x]))
        {
            // Check for determiners
            if (_NLP::isDeterminer(words[x + 1]) != "false")
            {
                // Search for a adjective following the determiner
                if (_NLP::isAdjective(words[x + 2]) != "false")
                {
                    string* adjectivePhrase = new string[2];
                    adjectivePhrase[0] = words[x + 1];
                    adjectivePhrase[1] = words[x + 2];
                    return adjectivePhrase;
                }
            }
            // Check for an adjective
            if (_NLP::isAdjective(words[x + 2]) != "false")
            {
                string* adjectivePhrase = new string[1];
                adjectivePhrase[0] = words[x + 1];
                return adjectivePhrase;
            }
        }
    }
}

// Adverbial Phrase Types
// Manner					How something happens
// Place					Where something happens
// Time						When something happens
// duration 				How long something happens
// Frequency				How often something happens
// Focusing					Something specific
// Degree					How much and to what degree somethig happens
// Certainty or Necessity	How certain or necessary something is
// Evaluative				The speaker's opinion of something
// Viewpoint				The speaker's perspective or reaction
// Linking					Relationships between clauses and sentences

// Adverb Phrase Functions
// Adverb phrases + verbs
// Adverb phrases + be
// Adverb phrases + adjectives/adverbs
// Adverb phrases + other phrases
// Adverb phrases + determiners
string* _NLP::getAdverbialPhrase(string* words, string* compiled_word_types)
{
    string* adverbial_phrase = new string[20];

    for (int x = 0; x <= sizeof(words); x++)
    {
        if (_NLP::isVerb(words[x]) != "false")
        {
            if (_NLP::isAdverb(words[x + 1]) != "false")
            {
                if (_NLP::isAdverb(words[x + 2]) != "false")
                {

                }
            }
        }
    }

    return adverbial_phrase;
}

string* _NLP::getParticiplePhrase(string* words, string* compiled_word_types)
{
    string* participle_phrase = new string[20];

    for (int x = 0; x < sizeof(words); x++)
    {

    }

    return participle_phrase;
}

string* _NLP::getAbsolutePhrase(string* words, string* compiled_word_types)
{
    string* absolute_phrase = new string[20];

    for (int x = 0; x < sizeof(words); x++)
    {

    }

    return absolute_phrase;
}

// Modifiers
// 1. Adjuncts
string* _NLP::getAdjuncts(string* words, string* compiled_word_types)
{
    string* adjuncts = new string[20];

    for (int x = 0; x < sizeof(words); x++)
    {

    }

    return adjuncts;
}

string _NLP::getAppositive(string* words, string* compiled_word_types)
{
    string appositive;

    for (int x = 0; x < sizeof(words); x++)
    {

    }

    return appositive;
}

// Clauses
// 1. Independent Clauses
// 2. Dependent Clauses
//      a. Noun Clauses
//      b. Relative Clauses
//      c. Adverbial Clauses
// Independent Clause
// 1. Contains a Subject and Verb: At its core, an independent clause must have a subject (what the sentence is about or who is doing the action) and a predicate (the action or verb).
// 2. Expresses a Complete Thought: An independent clause makes sense on its own.It doesn't leave the reader hanging, wondering what comes next or feeling that the sentence is incomplete.
// 3. Can Stand Alone: Because it expresses a complete thought, an independent clause can stand alone as a sentence.
// 4. May Contain Conjunctions: Independent clauses can be joined by coordinating conjunctions(for, and, nor, but, or , yet, so) to form compound sentences.Even when joined in such a way, each clause could stand alone as a complete sentence if separated.
string* _NLP::getIndependentClause(string* words, string* compiled_word_types)
{
    //string* subject = _NLP::getSubject(words, compiled_word_types);
    //string verb = _NLP::getVerb(words, compiled_word_types);
    //string* predicate = _NLP::getPredicate(words, compiled_word_types);
    string* independent_clause;
    string* exploded_sentence = _Utilities::WordsArrPunctuationExplode(words);
    string sentence = _Utilities::StringArray2String(words);
    string temp;
    int commas = 0;
    int number_temp = 0;

    for (int x = 0; x <= sizeof(exploded_sentence); x++)
    {
        temp = exploded_sentence[x];

        for (int y = 0; y <= temp.length(); y++)
        {
            if (temp[y] == ',')
            {
                commas++;
            }
        }
    }

    string* temp_str = new string[sizeof(commas)];

    for (int a = 0; a <= sentence.length(); a++)
    {
        if (sentence[a] != ',')
        {
            temp_str[number_temp] += sentence[a];
        }
        if (sentence[a] == ',' || sentence[a] == '.')
        {
            number_temp++;
        }
    }

    for (int b = 0; b <= commas; b++)
    {
        if (_NLP::getSubject(words, compiled_word_types))
        {

        }
    }

    return independent_clause;
}

// A dependent clause, also known as a subordinate clause, is a group of words that also contains a subject and a verb, but unlike an independent clause, it cannot stand alone as a complete sentence because it does not express a complete thought.Dependent clauses rely on an independent clause to form a complete sentence by adding additional information.They often begin with subordinating conjunctions such as because, since, which, although, or when.
string* _NLP::getDependentClause(string* words, string* compiled_word_types)
{
    string* dependent_clause = new string[20];

    for (int x = 0; x < sizeof(words); x++)
    {

    }

    return dependent_clause;
}

string* _NLP::getNounClause(string* words, string* compiled_word_types)
{
    string* noun_clause = new string[20];

    for (int x = 0; x < sizeof(words); x++)
    {

    }

    return noun_clause;
}

string* _NLP::getAdverbialClause(string* words, string* compiled_word_types)
{
    string* adverbial_clause = new string[20];

    for (int x = 0; x < sizeof(words); x++)
    {

    }

    return adverbial_clause;
}

// Independent Clause
// 1. Contains a Subject and Verb: At its core, an independent clause must have a subject (what the sentence is about or who is doing the action) and a predicate (the action or verb).
// 2. Expresses a Complete Thought: An independent clause makes sense on its own.It doesn't leave the reader hanging, wondering what comes next or feeling that the sentence is incomplete.
// 3. Can Stand Alone: Because it expresses a complete thought, an independent clause can stand alone as a sentence.
// 4. May Contain Conjunctions: Independent clauses can be joined by coordinating conjunctions(for, and, nor, but, or , yet, so) to form compound sentences.Even when joined in such a way, each clause could stand alone as a complete sentence if separated.
bool _NLP::isIndependentClause(string* words, string* compiled_word_types)
{
    string* temp = new string[sizeof(words)];

    return false;
}

// A dependent clause, also known as a subordinate clause, is a group of words that also contains a subject and a verb, but unlike an independent clause, it cannot stand alone as a complete sentence because it does not express a complete thought.Dependent clauses rely on an independent clause to form a complete sentence by adding additional information.They often begin with subordinating conjunctions such as because, since, which, although, or when.
bool _NLP::isDependentClause(string* words, string* compiled_word_types)
{
    return false;
}

bool _NLP::isNounClause(string* words, string* compiled_word_types)
{
    return false;
}

bool _NLP::isAdverbialClause(string* words, string* compiled_word_types)
{
    return false;
}

// Sentences
// 1. Simple Sentence
// 2. Compound Sentences
// 3. Complex Sentences
// 4. Compound-Complex Sentences
// 5. Declarative Sentences
// 6. Interrogative Sentences
// 7. Negative Interoggative Sentences
// 8. Imperative Sentences
// 9. Conditional Sentences
// 10. Regular Sentence
// 11. Irregular Sentences
bool _NLP::isSimpleSentence(string* words, string* compiled_word_types)
{
    string* subject = getSubject(words, compiled_word_types);
    string* predicate = getPredicate(words, compiled_word_types);
    string temp;

    for (int x = 0; x <= sizeof(words); x++)
    {
        temp = words[x];

        if (temp[x] == ',' || temp[x] == ';' || temp[x] == ':')
        {
            return false;
        }
        //if (temp[x] == '.'|| temp[x] == '?' || temp[x] == '!')
        //{
        //    return false;
        //}
    }

    if (sizeof(subject) != 0 && sizeof(predicate) != 0)
    {
        return true;
    }
}

bool _NLP::isCompoundSentence(string* words, string* subject, string* predicate, string* compiled_word_types)
{
    string temp;
    string temp2;

    for (int x = 0; x < sizeof(words); x++)
    {
        temp = words[x];
        temp2 = words[x + 1];

        if (temp[x] == ',' || temp[x] == ';' && (isCoordinativeConjunction(temp2)))
        {
            return true;
        }
    }

    return false;
}

bool _NLP::isComplexSentence(string* words, string* subject, string* predicate, string* compiled_word_types)
{
    //string* complex_sentence;
    string* words2 = words;
    string* independent_clause = getIndependentClause(words, compiled_word_types);
    string* dependent_clause = getDependentClause(words, compiled_word_types);
    bool bool_indepentent_clause = false;
    bool bool_dependent_clause = false;

    // Remove the words in the dependent clause from the words2 array
    for (int x = 0; x <= sizeof(words); x++)
    {
        for (int y = 0; y <= sizeof(words2); y++)
        {
            if (independent_clause[x] == words2[y])
            {
                words2[y] = "";
                bool_indepentent_clause = true;
            }
            if (dependent_clause[x] == words2[y])
            {
                words2[y] = "";
                bool_dependent_clause = true;
            }
        }
    }

    if (bool_indepentent_clause && bool_dependent_clause)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool _NLP::isCompound_ComplexSentence(string* words, string* subject, string* predicate, string* compiled_word_types)
{
    //string* complex_sentence;
    string* words2 = words;
    string* independent_clause = getIndependentClause(words, compiled_word_types);
    string temp;
    int in_first;
    int in_last;
    //int int_temp1;
    //int int_temp2;
    bool bool_indepentent_clause = false;
    bool bool_dependent_clause = false;
    bool compound_sentence = false;

    // Check if there is a compound statement
    compound_sentence = isCompoundSentence(words, subject, predicate, compiled_word_types);

    // Check if there is more than one independent clause
    // Check if the first independent clause contains a dependent clause
    for (int x = 0; x <= sizeof(words2); x++)
    {
        for (int y = 0; y <= sizeof(independent_clause); y++)
        {
            temp = words2[x];

            // Find the first word of the clause
            if (temp == independent_clause[y])
            {
                in_first = x;
                in_last = x + sizeof(independent_clause);
            }
        }
    }

    // Check for another independent clause
    for (int x = in_last + 1; x <= sizeof(words); x++)
    {
        for (int y = 0; y <= sizeof(words); y++)
        {
            words2[x] = words[y];
        }
    }

    string* independent_clause2 = getIndependentClause(words2, compiled_word_types);
    string* dependent_clause = getDependentClause(independent_clause, compiled_word_types);
    string* dependent_clause2 = getDependentClause(independent_clause2, compiled_word_types);

    if (sizeof(dependent_clause) != 0 || sizeof(dependent_clause2) != 0)
    {
        // Check for a subject and predicate in general
        // Check for a subject and a predicate in the independent clauses
        // Check for a subject and a predicate in the dependent clause
        string* subject_in_clause_1 = getSubject(independent_clause, compiled_word_types);
        string* subject_in_clause_2 = getSubject(independent_clause2, compiled_word_types);
        string* predicate_in_clause_1 = getPredicate(independent_clause, compiled_word_types);
        string* predicate_in_clause_2 = getPredicate(independent_clause2, compiled_word_types);
        string* subject_dep_clause_1 = getSubject(dependent_clause, compiled_word_types);
        string* subject_dep_clause_2 = getSubject(dependent_clause2, compiled_word_types);
        string* predicate_dep_clause_1 = getPredicate(dependent_clause, compiled_word_types);
        string* predicate_dep_clause_2 = getPredicate(dependent_clause2, compiled_word_types);

        if (sizeof(subject) != 0 && sizeof(predicate) != 0)
        {
            if (sizeof(subject_in_clause_1) != 0 && sizeof(predicate_in_clause_1) != 0)
            {
                if (sizeof(subject_dep_clause_1) != 0 && sizeof(subject_dep_clause_1) != 0)
                {
                    if (compound_sentence)
                    {
                        return true;
                    }
                    else
                    {
                        return false;
                    }
                }
                if (sizeof(subject_dep_clause_2) != 0 && sizeof(predicate_dep_clause_2) != 0)
                {
                    if (compound_sentence)
                    {
                        return true;
                    }
                    else
                    {
                        return false;
                    }
                }
                else
                {
                    return false;
                }
            }
            if (sizeof(subject_in_clause_2) != 0 && sizeof(predicate_in_clause_2) != 0)
            {
                if (sizeof(subject_dep_clause_1) != 0 && sizeof(subject_dep_clause_1) != 0)
                {
                    if (compound_sentence)
                    {
                        return true;
                    }
                    else
                    {
                        return false;
                    }
                }
                if (sizeof(subject_dep_clause_2) != 0 && sizeof(predicate_dep_clause_2) != 0)
                {
                    if (compound_sentence)
                    {
                        return true;
                    }
                    else
                    {
                        return false;
                    }
                }
                else
                {
                    return false;
                }
            }
            else
            {
                return false;
            }
        }
        else
        {
            return false;
        }
    }
    else
    {
        return false;
    }
}

bool _NLP::isDeclaritiveSentence(string* words, string* subject, string* predicate, string* compiled_word_types)
{
    if (words[sizeof(words)] == ".")
    {
        return true;
    }
    if (words[sizeof(words) - 1] == "." && words[sizeof(words)] == "\"")
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool _NLP::isInterrogativeSentence(string* words, string* subject, string* predicate, string* compiled_word_types)
{
    if (words[sizeof(words)] == "?")
    {
        return true;
    }
    if (words[sizeof(words) - 1] == "?" && words[sizeof(words)] == "\"")
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool _NLP::isNegativeInterrogativeSentence(string* words, string* subject, string* predicate, string* compiled_word_types)
{
    string* negative_interrogative_sentence = new string[20];
    string temp;

    // Search for the word 'not'
    for (int x = 0; x < sizeof(words); x++)
    {
        temp = words[x];

        if ((temp == "not" || temp == "Not") && (words[sizeof(words)] == "?"))
        {
            return true;
        }
        if ((temp == "not" || temp == "Not") && (words[sizeof(words) - 1] == "?" && words[sizeof(words)] == "\""))
        {
            return true;
        }
    }

    return false;
}

bool _NLP::isImperativeSentence(string* words, string* subject, string* predicate, string* compiled_word_types)
{
    for (int x = 0; x < sizeof(words); x++)
    {
        if (isActionVerb(words[x]))
        {
            // Check for possessive pronouns
            for (int y = x + 1; y <= sizeof(words); y++)
            {
                if (isPossessivePronoun(words[y]))
                {

                }
            }
        }
    }

    return false;
}

bool _NLP::isConditionalSentence(string* words, string* subject, string* predicate, string* compiled_word_types)
{
    string* conditional_sentence = new string[20];

    for (int x = 0; x < sizeof(words); x++)
    {

    }

    return false;
}

bool _NLP::isRegularSentence(string* words, string* subject, string* predicate, string* compiled_word_types)
{
    string* regular_sentence = new string[20];

    for (int x = 0; x < sizeof(words); x++)
    {

    }

    return false;
}

bool _NLP::isIrregularSentence(string* words, string* subject, string* predicate, string* compiled_word_types)
{
    string irregular_sentence;

    for (int x = 0; x < sizeof(words); x++)
    {

    }

    return false;
}

bool _NLP::isSingleWordSentence(string* words, string* compiled_word_types)
{
    if (_NLP::isAdverb(words[0]) != "false" || _NLP::isNoun(words[0]) != "false")
    {
        if (words[1] == "!" || words[1] == "." || words[1] == "?")
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else
    {
        return false;
    }
}

bool _NLP::isSentenceFragment(string* words, string* compiled_word_types)
{
    return false;
}

bool _NLP::isInstructions(string* words, string* compiled_word_types)
{
    return false;
}

bool _NLP::isYesNoQuestion(string* words, string* compiled_word_types)
{
    return false;
}

bool _NLP::isLiteralQuestions(string* words, string* compiled_word_types)
{
    return false;
}

bool _NLP::isIndirectSentence(string* words, string* compiled_word_types)
{
    return false;
}

bool _NLP::isItDepends(string* words, string* compiled_word_types)
{
    return false;
}

bool _NLP::isStatementofUncertainty(string* words, string* compiled_word_types)
{
    return false;
}

bool _NLP::isRunOnSentence(string* words, string* compiled_word_types)
{
    return false;
}

bool _NLP::isCommaSplice(string* words, string* compiled_word_types)
{
    return false;
}

// PURPOSE: To identify the first syntactical unit in a sentence
// 1. Iterate through the words
// 2. Basic sentences and their syntax
//      a. [ARTICLE] [NOUN] [VERB]
//      b. [NOUN] [VERB]
//      c. [PREP_PHRASE], [NOUN] [VERB]
//      d. [INDEPENDENT_CLAUSE], [NOUN] [verb/linking_verb]
string* _NLP::getSubject(string* words, string* compiled_word_types)
{
    string* prepositional_phrase = _NLP::getPrepositionalPhrase(words, compiled_word_types);
    string prepositional_phrase_str = _Utilities::StringArray2String(prepositional_phrase);
    size_t prepositional_phrase_size = sizeof(prepositional_phrase);

    //// Find the verb in the completed array
    //for (int x = 0; x <= sizeof(words); x++)
    //{
    //    for (int y = 0; y <= sizeof(words); y++)
    //    {
    //        for (int z = 0; z < 5; z++)
    //        {
    //            if (completed[x][z] == _verb_list[y])
    //            {
    //                for (int a = 0; a < x - 1; a++)
    //                {
    //                    subject[a] = completed[a][0];
    //                }
    //            }
    //        }
    //    }
    //}
    // Get the position of the first word in the prepositional phrase in the sentence

    for (int x = 0; x <= sizeof(words); x++)
    {
        if ((_NLP::isDefiniteArticle(words[x]) || _NLP::isIndefiniteArticle(words[x])) && _NLP::isNoun(words[x + 1]) != "false" && _NLP::isVerb(words[x + 2]) != "false")
        {
            string* temp = new string[3];
            temp[0] = words[x];
            temp[1] = words[x + 1];
            temp[2] = words[x + 2];
            return temp;
        }
        if (_NLP::isNoun(words[x]) != "false" && _NLP::isVerb(words[x + 1]) != "false")
        {
            string* temp = new string[2];
            temp[0] = words[x];
            temp[1] = words[x + 1];
            return temp;
        }
        if (prepositional_phrase[x] == words[x] && prepositional_phrase[x + 1] == words[x + 1] && prepositional_phrase[x + 2] == words[x + 2] && (_NLP::isDefiniteArticle(words[x + 3]) || _NLP::isIndefiniteArticle(words[x + 3])) && (_NLP::isNoun(words[x + 4]) != "false" && _NLP::isVerb(words[x + 5]) != "false"))
        {
            string* temp = new string[6];
            temp[0] = words[x];
            temp[1] = words[x + 1];
            temp[2] = words[x + 2];
            temp[3] = words[x + 3];
            temp[4] = words[x + 4];
            temp[4] = words[x + 5];
            return temp;
        }
        if (prepositional_phrase[x] == words[x] && prepositional_phrase[x + 1] == words[x + 1] && prepositional_phrase[x + 2] == words[x + 2] && (_NLP::isNoun(words[x + 3]) != "false" && _NLP::isVerb(words[x + 4]) != "false"))
        {
            string* temp = new string[4];
            temp[0] = words[x];
            temp[1] = words[x + 1];
            temp[2] = words[x + 2];
            temp[3] = words[x + 3];
            //temp[3] = words[x + 4];
            return temp;
        }
        if (prepositional_phrase[x] == words[x] && prepositional_phrase[x + 1] == words[x + 1] && prepositional_phrase[x + 2] == words[x + 2] && prepositional_phrase[x + 3] == words[x + 3] && (_NLP::isNoun(words[x + 4]) != "false" && _NLP::isVerb(words[x + 5]) != "false"))
        {
            string* temp = new string[5];
            temp[0] = words[x];
            temp[1] = words[x + 1];
            temp[2] = words[x + 2];
            temp[3] = words[x + 3];
            temp[4] = words[x + 4];
            //temp[5] = words[x + 5];
            return temp;
        }
        if (prepositional_phrase[x] == words[x] && prepositional_phrase[x + 1] == words[x + 1] && prepositional_phrase[x + 2] == words[x + 2] && prepositional_phrase[x + 3] == words[x + 3] && (_NLP::isDefiniteArticle(words[x + 4]) || _NLP::isIndefiniteArticle(words[x + 4])) && (_NLP::isNoun(words[x + 5]) != "false" && _NLP::isVerb(words[x + 6]) != "false"))
        {
            string* temp = new string[6];
            temp[0] = words[x];
            temp[1] = words[x + 1];
            temp[2] = words[x + 2];
            temp[3] = words[x + 3];
            temp[4] = words[x + 4];
            temp[5] = words[x + 5];
            //temp[6] = words[x + 6];
            return temp;
        }
    }

    //return temp;
}

// PURPOSE: To identify the last syntactical unit in a sentence
// 1. Iterate through the words, looking for a verb.
// 2. Then look if there is a period following the verb and there is no comma.
string* _NLP::getPredicate(string* words, string* compiled_word_types)
{
    string* predicate = new string[20];

    for (int x = 0; x <= sizeof(words[x]); x++)
    {
        if (_NLP::isVerb(words[x]) != "false")
        {

        }
    }

    return predicate;
}

//string* parseDefinitions(string definition)
//{
//    string* words = returnWords(definition);
//    string temp;
//    int periods = 0;
//
//    // Organize the definitions into the output variable
//    // Find the first empty element in both dimensions of the array
//    for (int y = 0; y < 5; y++)
//    {
//        if (words[y] == "")
//        {
//            // Parse the definitions string
//            for (int z = 0; words[z] != '.'; z++)
//            {
//                if (words[z + 1] != '.' && periods == y)
//                {
//                    temp += words[z];
//                }
//                else
//                {
//                    temp += words[z + 1];
//                    words[y] = temp;
//                }
//            }
//        }
//    }
//
//    return definitions;
//}

// Get the various pieces of prepositional phrases
//  1. Categories of Prepositions
//  2. Common Prepositional Errors
//  3. Prepositions with nouns
//  4. Prepositions with verbs
//  5. Prepositions with adjectives
//  6. Prepositions in idioms
//  7. Dangling prepositions
string* _NLP::getPrepositionalPhrase(string* words, string* compiled_word_types)
{
    string prepositional_phrase[5];
    string words_temp[100];
    string clause_temp;
    string temp;

    for (int x = 0; completed[x][1] != ""; x++)
    {
        if (_NLP::isPreposition(words[x]) == "preposition" && (_NLP::isNoun(words[x + 1]) != "false" || completed[x + 1][1] == "pronoun"))
        {
            // Send the words past the second position searching for clauses.
            for (int y = x + 2; y <= 100; y++)
            {
                words_temp[y] = completed[y][0];
            }

            // Search for cluases
            if (getRelativeClause(words_temp, compiled_word_types))
            {
                prepositional_phrase[0] = completed[x][0];
                prepositional_phrase[1] = completed[x + 1][0];

                string* clause_temp = getRelativeClause(words_temp, compiled_word_types);

                for (int y = 0; y <= sizeof(clause_temp); y++)
                {
                    for (int z = 2; z <= 5; z++)
                    {
                        if (prepositional_phrase[z] == "")
                        {
                            prepositional_phrase[z] == clause_temp[y];
                            break;
                        }
                    }
                }
            }
            if (getNounClause(words_temp, compiled_word_types))
            {
                prepositional_phrase[0] = completed[x][0];
                prepositional_phrase[1] = completed[x + 1][0];

                string* clause_temp = getNounClause(words_temp, compiled_word_types);

                for (int y = 0; y <= sizeof(clause_temp); y++)
                {
                    for (int z = 2; z <= 5; z++)
                    {
                        if (prepositional_phrase[z] == "")
                        {
                            prepositional_phrase[z] == clause_temp[y];
                            break;
                        }
                    }
                }
            }
            if (getAdverbialClause(words_temp, compiled_word_types))
            {
                prepositional_phrase[0] = completed[x][0];
                prepositional_phrase[1] = completed[x + 1][0];

                string* clause_temp = getAdverbialClause(words_temp, compiled_word_types);

                for (int y = 0; y <= sizeof(clause_temp); y++)
                {
                    for (int z = 2; z <= 5; z++)
                    {
                        if (prepositional_phrase[z] == "")
                        {
                            prepositional_phrase[z] == clause_temp[y];
                            break;
                        }
                    }
                }
            }
        }
        else if (completed[x][1] == "prep.")
        {

        }
    }

    return prepositional_phrase;
}

// Syntax: Same as above
string* _NLP::getPrepositionalPhraseNoun(string* words, string* compiled_word_types)
{
    string* prepositional_phrase = _NLP::getPrepositionalPhrase(words, compiled_word_types);

    // Search for a noun within the prepositional phrase
    for (int x = 0; x <= sizeof(prepositional_phrase); x++)
    {
        if (_NLP::isNoun(prepositional_phrase[x]) != "false")
        {
            return prepositional_phrase;
        }
    }

    return prepositional_phrase;
}

// Syntax:
// 1. 
string* _NLP::getPreposionalPhraseVerb(string* words, string* compiled_word_types)
{
    string* prepositional_phrase = _NLP::getPrepositionalPhrase(words, compiled_word_types);

    // Search for a noun within the prepositional phrase
    for (int x = 0; x <= sizeof(prepositional_phrase); x++)
    {
        if (_NLP::isVerb(prepositional_phrase[x]) != "false")
        {
            return prepositional_phrase;
        }
    }


    return prepositional_phrase;
}

string* _NLP::getPrepositionalPhraseAdjective(string* words, string* compiled_word_types)
{
    string* prepositional_phrase = _NLP::getPrepositionalPhrase(words, compiled_word_types);

    // Search for a noun within the prepositional phrase
    for (int x = 0; x <= sizeof(prepositional_phrase); x++)
    {
        if (_NLP::isAdjective(prepositional_phrase[x]) != "false")
        {
            return prepositional_phrase;
        }
    }

    return prepositional_phrase;
}

string* _NLP::getPrepositionalPhraseAdverb(string* words, string* compiled_word_types)
{
    string* prepositional_phrase = _NLP::getPrepositionalPhrase(words, compiled_word_types);

    // Search for a noun within the prepositional phrase
    for (int x = 0; x <= sizeof(prepositional_phrase); x++)
    {
        if (_NLP::isAdverb(prepositional_phrase[x]) != "false")
        {
            return prepositional_phrase;
        }
    }

    return prepositional_phrase;
}

string* _NLP::getPrepositionalPhraseIdiom(string* words, string* compiled_word_types)
{
    string* prepositional_phrase = _NLP::getPrepositionalPhrase(words, compiled_word_types);

    // Search for a noun within the prepositional phrase
    for (int x = 0; x <= sizeof(prepositional_phrase); x++)
    {
        if (_NLP::isNoun(prepositional_phrase[x]) != "false")
        {
            return prepositional_phrase;
        }
    }

    return prepositional_phrase;
}

string* _NLP::getPrepositionalPhraseDangling(string* words, string* compiled_word_types)
{
    string* prepositional_phrase = _NLP::getPrepositionalPhrase(words, compiled_word_types);

    return prepositional_phrase;
}

// Interjection (Accidence)
// 1. Conjugation
// 2. Tense
//      a. Present Tense
//      b. Past Tense
//      c. Future Tense
// 3. Aspect
//      a. Perfective Aspect
//      b. Imperfective Aspect
//      c. Aspect of Present Tense
//      d. Aspect of Past Tense
//      e. Aspect of Future Tense
// 4. Mood
//      a. Indicative Mood
//      b. Subjunctive Mood
//      c. Subjuntive Mood - Expressing Wishes
// 5. Voice
//      a. Active Voice
//      b. Passive Voice
//      c. Middle Voice
// 6. Speech
//      a. Reported Speech (Indirect Speech)
// 7. Declension
//      a. Plurals
//      b. Gender in Nouns
// 8. Syntax

// 2. Tense
bool _NLP::isPresentTense(string word)
{

    return false;
}

bool _NLP::isPresentTenseSentence(string* words, string* compiled_word_types)
{
    return false;
}

bool _NLP::isPastTense(string word)
{
    MYSQL* conn = nullptr;
    MYSQL_ROW row;
    MYSQL_RES* result;
    string query;

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_dictionary_database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        query = "SELECT * FROM entries";
        mysql_query(conn, query.c_str());
        result = mysql_store_result(conn);

        while (row = mysql_fetch_row(result))
        {
            if (_Utilities::toLowerWord(row[0]) == _Utilities::toLowerWord(word))
            {
                string word_type_test = row[1];
                string* word_type_arr = _Utilities::String2Words(word_type_test);

                for (int x = 0; x <= sizeof(word_type_arr); x++)
                {
                    if (word_type_arr[x] == "p." && word_type_arr[x + 1] == "pr.")
                    {
                        return true;
                    }
                }

                mysql_close(conn);
                return false;
            }
        }
    }
    mysql_close(conn);
    return false;
}

bool _NLP::isPastTenseSentence(string* words, string* compiled_word_types)
{
    return false;
}

bool _NLP::isFutureTense(string word)
{
    return false;
}

bool _NLP::isFutureTenseSentence(string* words, string* compiled_word_types)
{
    return false;
}

// 3. Aspect
bool _NLP::isPerfectiveAspect(string word)
{
    return false;
}

bool _NLP::isPerfectiveAspectSentence(string* words, string* compiled_word_types)
{
    return false;
}

bool _NLP::isImperfectiveAspect(string word)
{
    return false;
}

bool _NLP::isImperfectiveAspectSentence(string* words, string* compiled_word_types)
{
    return false;
}

bool _NLP::isAspectofPresentTense(string word)
{
    return false;
}

bool _NLP::isAspectofPresentTenseSentence(string* words, string* compiled_word_types)
{
    return false;
}

bool _NLP::isAspectofPastTense(string word)
{
    return false;
}

bool _NLP::isAspectofPastTenseSentence(string* words, string* compiled_word_types)
{
    return false;
}

bool _NLP::isAspectofFutureTense(string word)
{
    return false;
}

bool _NLP::isAspectofFutureTenseSentence(string* words, string* compiled_word_types)
{
    return false;
}

// 4. Mood
bool _NLP::isIndicativeMood(string word)
{
    return false;
}

bool _NLP::isIndicativeMoodSentence(string* words, string* compiled_word_types)
{
    return false;
}

bool _NLP::isSubjunctiveMood(string word)
{
    return false;
}

bool _NLP::isSubjunctiveMoodSentence(string* words, string* compiled_word_types)
{
    return false;
}

bool _NLP::isSubjunctiveMoodWishes(string word)
{
    return false;
}

// 5. Voice
bool _NLP::isActiveVoice(string word)
{
    return false;
}

bool _NLP::isActiveVoiceSentence(string* words, string* compiled_word_types)
{
    return false;
}

bool _NLP::isPassiveVoice(string word)
{
    return false;
}

bool _NLP::isPassiveVoiceSentence(string* words, string* compiled_word_types)
{
    return false;
}

bool _NLP::isMiddleVoice(string word)
{
    return false;
}

bool _NLP::isMiddleVoiceSentence(string* words, string* compiled_word_types)
{
    return false;
}

// 6. Speech
bool _NLP::isReportedSpeech(string word)
{
    return false;
}

bool _NLP::isReportedSpeechSentence(string* words, string* compiled_word_types)
{
    return false;
}

// 7. Declension
bool _NLP::isPlural(string word)
{
    MYSQL* conn = nullptr;
    MYSQL_ROW row;
    MYSQL_RES* result;
    string query;

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_dictionary_database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        query = "SELECT * FROM entries";
        mysql_query(conn, query.c_str());
        result = mysql_store_result(conn);

        while (row = mysql_fetch_row(result))
        {
            if (_Utilities::toLowerWord(row[0]) == _Utilities::toLowerWord(word))
            {
                string word_type_test = row[1];
                string* word_type_arr = _Utilities::String2Words(word_type_test);

                for (int x = 0; x <= sizeof(word_type_arr); x++)
                {
                    if (word_type_arr[x] == "pl.")
                    {
                        return true;
                    }
                }

                mysql_close(conn);
                return false;
            }
        }
    }
    mysql_close(conn);
    return false;
}

bool _NLP::isPluralSentence(string* words, string* compiled_word_types)
{
    // Check if the words in the sentence are plural
    MYSQL* conn = nullptr;
    MYSQL_ROW row;
    MYSQL_RES* result;
    string query;

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_dictionary_database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        query = "SELECT * FROM entries";
        mysql_query(conn, query.c_str());
        result = mysql_store_result(conn);

        while (row = mysql_fetch_row(result))
        {
            for (int x = 0; x < sizeof(words); x++)
            {
                if (_Utilities::toLowerWord(row[0]) == _Utilities::toLowerWord(words[x]))
                {
                    string word_type_test = row[1];
                    string* word_type_arr = _Utilities::String2Words(word_type_test);

                    for (int x = 0; x <= sizeof(word_type_arr); x++)
                    {
                        if (word_type_arr[x] == "pl.")
                        {
                            return true;
                        }
                    }

                    mysql_close(conn);
                    return false;
                }
            }
        }
    }
    mysql_close(conn);
    return false;
}

bool _NLP::isSingular(string word)
{
    return false;
}

bool _NLP::isSingularSentence(string* words, string* compiled_word_types)
{
    return false;
}

string _NLP::getGenderNoun(string words)
{
    return "TEST";
}

string* _NLP::getGenderNouns(string* words, string* compiled_word_types)
{
    return words;
}

bool _NLP::isOtherAdverb(string word)
{
    MYSQL* conn = nullptr;
    MYSQL_ROW row;
    MYSQL_RES* result;
    string query;

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_dictionary_database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        query = "SELECT * FROM adverbs";
        mysql_query(conn, query.c_str());
        result = mysql_store_result(conn);

        while (row = mysql_fetch_row(result))
        {
            if (_Utilities::toLowerWord(row[0]) == _Utilities::toLowerWord(word))
            {
                mysql_close(conn);
                return true;
            }
        }
    }
    mysql_close(conn);
    return false;
}

bool _NLP::isOtherAdjective(string word)
{
    MYSQL* conn = nullptr;
    MYSQL_ROW row;
    MYSQL_RES* result;
    string query;

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_dictionary_database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        query = "SELECT * FROM adjectives";
        mysql_query(conn, query.c_str());
        result = mysql_store_result(conn);

        while (row = mysql_fetch_row(result))
        {
            if (_Utilities::toLowerWord(row[0]) == _Utilities::toLowerWord(word))
            {
                mysql_close(conn);
                return true;
            }
        }
    }
    mysql_close(conn);
    return false;
}

bool _NLP::isOtherVerb(string word)
{
    MYSQL* conn = nullptr;
    MYSQL_ROW row;
    MYSQL_RES* result;
    string query;

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_dictionary_database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        query = "SELECT * FROM verbs";
        mysql_query(conn, query.c_str());
        result = mysql_store_result(conn);

        while (row = mysql_fetch_row(result))
        {
            if (_Utilities::toLowerWord(row[0]) == _Utilities::toLowerWord(word))
            {
                mysql_close(conn);
                return true;
            }
        }
    }
    mysql_close(conn);
    return false;
}

bool _NLP::isOtherPronoun(string word)
{
    MYSQL* conn = nullptr;
    MYSQL_ROW row;
    MYSQL_RES* result;
    string query;

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_dictionary_database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        query = "SELECT * FROM pronouns";
        mysql_query(conn, query.c_str());
        result = mysql_store_result(conn);

        while (row = mysql_fetch_row(result))
        {
            if (_Utilities::toLowerWord(row[0]) == _Utilities::toLowerWord(word))
            {
                mysql_close(conn);
                return true;
            }
        }
    }
    mysql_close(conn);
    return false;
}

bool _NLP::isOtherNoun(string word)
{
    MYSQL* conn = nullptr;
    MYSQL_ROW row;
    MYSQL_RES* result;
    string query;

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_dictionary_database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        query = "SELECT * FROM nouns";
        mysql_query(conn, query.c_str());
        result = mysql_store_result(conn);

        while (row = mysql_fetch_row(result))
        {
            if (_Utilities::toLowerWord(row[0]) == _Utilities::toLowerWord(word))
            {
                mysql_close(conn);
                return true;
            }
        }
    }
    mysql_close(conn);
    return false;
}

bool _NLP::isCommonNoun(string word)
{
    MYSQL* conn = nullptr;
    MYSQL_ROW row;
    MYSQL_RES* result;
    string query;

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_dictionary_database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        query = "SELECT * FROM common_nouns";
        mysql_query(conn, query.c_str());
        result = mysql_store_result(conn);

        while (row = mysql_fetch_row(result))
        {
            if (_Utilities::toLowerWord(row[0]) == _Utilities::toLowerWord(word))
            {
                mysql_close(conn);
                return true;
            }
        }
    }
    mysql_close(conn);
    return false;
}

bool _NLP::isProperNoun(string word)
{
    MYSQL* conn = nullptr;
    MYSQL_ROW row;
    MYSQL_RES* result;
    string query;

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_dictionary_database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        query = "SELECT * FROM proper_noun";
        mysql_query(conn, query.c_str());
        result = mysql_store_result(conn);

        while (row = mysql_fetch_row(result))
        {
            if (_Utilities::toLowerWord(row[0]) == _Utilities::toLowerWord(word))
            {
                mysql_close(conn);
                return true;
            }
        }
    }
    mysql_close(conn);
    return false;
}

bool _NLP::isFirstName(string word)
{
    MYSQL* conn = nullptr;
    MYSQL_ROW row;
    MYSQL_RES* result;
    string query;

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_dictionary_database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        query = "SELECT * FROM first_name";
        mysql_query(conn, query.c_str());
        result = mysql_store_result(conn);

        while (row = mysql_fetch_row(result))
        {
            if (_Utilities::toLowerWord(row[0]) == _Utilities::toLowerWord(word))
            {
                mysql_close(conn);
                return true;
            }
        }
    }
    mysql_close(conn);
    return false;
}

bool _NLP::isLastName(string word)
{
    MYSQL* conn = nullptr;
    MYSQL_ROW row;
    MYSQL_RES* result;
    string query;

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_dictionary_database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        query = "SELECT * FROM last_name";
        mysql_query(conn, query.c_str());
        result = mysql_store_result(conn);

        while (row = mysql_fetch_row(result))
        {
            if (_Utilities::toLowerWord(row[0]) == _Utilities::toLowerWord(word))
            {
                mysql_close(conn);
                return true;
            }
        }
    }
    mysql_close(conn);
    return false;
}

bool _NLP::isBrandName(string word)
{
    MYSQL* conn = nullptr;
    MYSQL_ROW row;
    MYSQL_RES* result;
    string query;

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_dictionary_database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        query = "SELECT * FROM brand_names";
        mysql_query(conn, query.c_str());
        result = mysql_store_result(conn);

        while (row = mysql_fetch_row(result))
        {
            if (_Utilities::toLowerWord(row[0]) == _Utilities::toLowerWord(word))
            {
                mysql_close(conn);
                return true;
            }
        }
    }
    mysql_close(conn);
    return false;
}

bool _NLP::isAppellations(string word)
{
    MYSQL* conn = nullptr;
    MYSQL_ROW row;
    MYSQL_RES* result;
    string query;

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_dictionary_database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        query = "SELECT * FROM appelations";
        mysql_query(conn, query.c_str());
        result = mysql_store_result(conn);

        while (row = mysql_fetch_row(result))
        {
            if (_Utilities::toLowerWord(row[0]) == _Utilities::toLowerWord(word))
            {
                mysql_close(conn);
                return true;
            }
        }
    }
    mysql_close(conn);
    return false;
}

bool _NLP::isJobTitle(string word)
{
    MYSQL* conn = nullptr;
    MYSQL_ROW row;
    MYSQL_RES* result;
    string query;

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_dictionary_database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        query = "SELECT * FROM job_title";
        mysql_query(conn, query.c_str());
        result = mysql_store_result(conn);

        while (row = mysql_fetch_row(result))
        {
            if (_Utilities::toLowerWord(row[0]) == _Utilities::toLowerWord(word))
            {
                mysql_close(conn);
                return true;
            }
        }
    }
    mysql_close(conn);
    return false;
}

bool _NLP::isFamilialRole(string word)
{
    MYSQL* conn = nullptr;
    MYSQL_ROW row;
    MYSQL_RES* result;
    string query;

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_dictionary_database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        query = "SELECT * FROM familial_role";
        mysql_query(conn, query.c_str());
        result = mysql_store_result(conn);

        while (row = mysql_fetch_row(result))
        {
            if (_Utilities::toLowerWord(row[0]) == _Utilities::toLowerWord(word))
            {
                mysql_close(conn);
                return true;
            }
        }
    }
    mysql_close(conn);
    return false;
}

// Definition: used in direct speech to identify the person or group being directly spoken to, or to get that person�s attention. Like interjections, they are grammatically unrelated to the rest of the sentence�they don�t modify or affect any other part of it.
// Search for nouns of address
bool _NLP::isNounAddress(string word)
{
    MYSQL* conn = nullptr;
    MYSQL_ROW row;
    MYSQL_RES* result;
    string query;

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_dictionary_database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        query = "SELECT * FROM noun_of_address";
        mysql_query(conn, query.c_str());
        result = mysql_store_result(conn);

        while (row = mysql_fetch_row(result))
        {
            if (_Utilities::toLowerWord(row[0]) == _Utilities::toLowerWord(word))
            {
                mysql_close(conn);
                return true;
            }
        }
    }
    mysql_close(conn);
    return false;
}

// Definition: 
bool _NLP::isConcreteNoun(string word)
{
    MYSQL* conn = nullptr;
    MYSQL_ROW row;
    MYSQL_RES* result;
    string query;

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_dictionary_database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        query = "SELECT * FROM concrete_noun";
        mysql_query(conn, query.c_str());
        result = mysql_store_result(conn);

        while (row = mysql_fetch_row(result))
        {
            if (_Utilities::toLowerWord(row[0]) == _Utilities::toLowerWord(word))
            {
                mysql_close(conn);
                return true;
            }
        }
    }
    mysql_close(conn);
    return false;
}

// Definition: 
bool _NLP::isAbstractNoun(string word)
{
    MYSQL* conn = nullptr;
    MYSQL_ROW row;
    MYSQL_RES* result;
    string query;

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_dictionary_database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        query = "SELECT * FROM abstract_nouns";
        mysql_query(conn, query.c_str());
        result = mysql_store_result(conn);

        while (row = mysql_fetch_row(result))
        {
            if (_Utilities::toLowerWord(row[0]) == _Utilities::toLowerWord(word))
            {
                mysql_close(conn);
                return true;
            }
        }
    }
    mysql_close(conn);
    return false;
}

// Definition: 
bool _NLP::isCountableNoun(string word)
{
    MYSQL* conn = nullptr;
    MYSQL_ROW row;
    MYSQL_RES* result;
    string query;

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_dictionary_database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        query = "SELECT * FROM countable_nouns";
        mysql_query(conn, query.c_str());
        result = mysql_store_result(conn);

        while (row = mysql_fetch_row(result))
        {
            if (_Utilities::toLowerWord(row[0]) == _Utilities::toLowerWord(word))
            {
                mysql_close(conn);
                return true;
            }
        }
    }
    mysql_close(conn);
    return false;
}

// Definition: 
bool _NLP::isUncountableNoun(string word)
{
    MYSQL* conn = nullptr;
    MYSQL_ROW row;
    MYSQL_RES* result;
    string query;

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_dictionary_database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        query = "SELECT * FROM uncountable_nouns";
        mysql_query(conn, query.c_str());
        result = mysql_store_result(conn);

        while (row = mysql_fetch_row(result))
        {
            if (_Utilities::toLowerWord(row[0]) == _Utilities::toLowerWord(word))
            {
                mysql_close(conn);
                return true;
            }
        }
    }
    mysql_close(conn);
    return false;
}

// Definition: 
bool _NLP::isCollectiveNoun(string word)
{
    MYSQL* conn = nullptr;
    MYSQL_ROW row;
    MYSQL_RES* result;
    string query;

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_dictionary_database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        query = "SELECT * FROM collective_nouns";
        mysql_query(conn, query.c_str());
        result = mysql_store_result(conn);

        while (row = mysql_fetch_row(result))
        {
            if (_Utilities::toLowerWord(row[0]) == _Utilities::toLowerWord(word))
            {
                mysql_close(conn);
                return true;
            }
        }
    }
    mysql_close(conn);
    return false;
}

// Definition: 
bool _NLP::isCompoundNoun(string word)
{
    MYSQL* conn = nullptr;
    MYSQL_ROW row;
    MYSQL_RES* result;
    string query;

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_dictionary_database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        query = "SELECT * FROM compund_nouns";
        mysql_query(conn, query.c_str());
        result = mysql_store_result(conn);

        while (row = mysql_fetch_row(result))
        {
            if (_Utilities::toLowerWord(row[0]) == _Utilities::toLowerWord(word))
            {
                mysql_close(conn);
                return true;
            }
        }
    }
    mysql_close(conn);
    return false;
}

// Definition: 
bool _NLP::isCreatingNoun(string word)
{
    MYSQL* conn = nullptr;
    MYSQL_ROW row;
    MYSQL_RES* result;
    string query;

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_dictionary_database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        query = "SELECT * FROM creating_nouns";
        mysql_query(conn, query.c_str());
        result = mysql_store_result(conn);

        while (row = mysql_fetch_row(result))
        {
            if (_Utilities::toLowerWord(row[0]) == _Utilities::toLowerWord(word))
            {
                mysql_close(conn);
                return true;
            }
        }
    }
    mysql_close(conn);
    return false;
}

// Definition: 
bool _NLP::isPersonalNumberPronoun(string word)
{
    MYSQL* conn = nullptr;
    MYSQL_ROW row;
    MYSQL_RES* result;
    string query;

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_dictionary_database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        query = "SELECT * FROM personal_nouns";
        mysql_query(conn, query.c_str());
        result = mysql_store_result(conn);

        while (row = mysql_fetch_row(result))
        {
            if (_Utilities::toLowerWord(row[0]) == _Utilities::toLowerWord(word))
            {
                mysql_close(conn);
                return true;
            }
        }
    }
    mysql_close(conn);
    return false;
}

// Definition: 
bool _NLP::isPossessivePronoun(string word)
{
    MYSQL* conn = nullptr;
    MYSQL_ROW row;
    MYSQL_RES* result;
    string query;

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_dictionary_database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        query = "SELECT * FROM possessive_pronouns";
        mysql_query(conn, query.c_str());
        result = mysql_store_result(conn);

        while (row = mysql_fetch_row(result))
        {
            if (_Utilities::toLowerWord(row[0]) == _Utilities::toLowerWord(word))
            {
                mysql_close(conn);
                return true;
            }
        }
    }
    mysql_close(conn);
    return false;
}

// Definition: 
bool _NLP::isPersonalPersonPronoun(string word)
{
    MYSQL* conn = nullptr;
    MYSQL_ROW row;
    MYSQL_RES* result;
    string query;

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_dictionary_database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        query = "SELECT * FROM personal_pronouns_person_nouns";
        mysql_query(conn, query.c_str());
        result = mysql_store_result(conn);

        while (row = mysql_fetch_row(result))
        {
            if (_Utilities::toLowerWord(row[0]) == _Utilities::toLowerWord(word))
            {
                mysql_close(conn);
                return true;
            }
        }
    }
    mysql_close(conn);
    return false;
}

// Definition: 
bool _NLP::isPersonalGenderPronoun(string word)
{
    MYSQL* conn = nullptr;
    MYSQL_ROW row;
    MYSQL_RES* result;
    string query;

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_dictionary_database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        query = "SELECT * FROM personal_gender_pronoun";
        mysql_query(conn, query.c_str());
        result = mysql_store_result(conn);

        while (row = mysql_fetch_row(result))
        {
            if (_Utilities::toLowerWord(row[0]) == _Utilities::toLowerWord(word))
            {
                mysql_close(conn);
                return true;
            }
        }
    }
    mysql_close(conn);
    return false;
}

// Definition: 
bool _NLP::isPersonalCasePronoun(string word)
{
    MYSQL* conn = nullptr;
    MYSQL_ROW row;
    MYSQL_RES* result;
    string query;

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_dictionary_database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        query = "SELECT * FROM personal_case_pronoun";
        mysql_query(conn, query.c_str());
        result = mysql_store_result(conn);

        while (row = mysql_fetch_row(result))
        {
            if (_Utilities::toLowerWord(row[0]) == _Utilities::toLowerWord(word))
            {
                mysql_close(conn);
                return true;
            }
        }
    }
    mysql_close(conn);
    return false;
}

// Definition: 
bool _NLP::isPersonalReflexivePronoun(string word)
{
    MYSQL* conn = nullptr;
    MYSQL_ROW row;
    MYSQL_RES* result;
    string query;

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_dictionary_database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        query = "SELECT * FROM personal_reflexive_pronoun";
        mysql_query(conn, query.c_str());
        result = mysql_store_result(conn);

        while (row = mysql_fetch_row(result))
        {
            if (_Utilities::toLowerWord(row[0]) == _Utilities::toLowerWord(word))
            {
                mysql_close(conn);
                return true;
            }
        }
    }
    mysql_close(conn);
    return false;
}

// Definition: 
bool _NLP::isIntensivePronoun(string word)
{
    MYSQL* conn = nullptr;
    MYSQL_ROW row;
    MYSQL_RES* result;
    string query;

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_dictionary_database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        query = "SELECT * FROM intensive_pronoun";
        mysql_query(conn, query.c_str());
        result = mysql_store_result(conn);

        while (row = mysql_fetch_row(result))
        {
            if (_Utilities::toLowerWord(row[0]) == _Utilities::toLowerWord(word))
            {
                mysql_close(conn);
                return true;
            }
        }
    }
    mysql_close(conn);
    return false;
}
// Definition: 
bool _NLP::isIndefinitePronoun(string word)
{
    MYSQL* conn = nullptr;
    MYSQL_ROW row;
    MYSQL_RES* result;
    string query;

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_dictionary_database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        query = "SELECT * FROM indefinite_pronoun";
        mysql_query(conn, query.c_str());
        result = mysql_store_result(conn);

        while (row = mysql_fetch_row(result))
        {
            if (_Utilities::toLowerWord(row[0]) == _Utilities::toLowerWord(word))
            {
                mysql_close(conn);
                return true;
            }
        }
    }
    mysql_close(conn);
    return false;
}

// Definition: 
bool _NLP::isDemonstrativePronoun(string word)
{
    MYSQL* conn = nullptr;
    MYSQL_ROW row;
    MYSQL_RES* result;
    string query;

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_dictionary_database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        query = "SELECT * FROM demonstrative_pronoun";
        mysql_query(conn, query.c_str());
        result = mysql_store_result(conn);

        while (row = mysql_fetch_row(result))
        {
            if (_Utilities::toLowerWord(row[0]) == _Utilities::toLowerWord(word))
            {
                mysql_close(conn);
                return true;
            }
        }
    }
    mysql_close(conn);
    return false;
}

// Definition: 
bool _NLP::isInterogativePronoun(string word)
{
    MYSQL* conn = nullptr;
    MYSQL_ROW row;
    MYSQL_RES* result;
    string query;

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_dictionary_database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        query = "SELECT * FROM interogative_pronoun";
        mysql_query(conn, query.c_str());
        result = mysql_store_result(conn);

        while (row = mysql_fetch_row(result))
        {
            if (_Utilities::toLowerWord(row[0]) == _Utilities::toLowerWord(word))
            {
                mysql_close(conn);
                return true;
            }
        }
    }
    mysql_close(conn);
    return false;
}

// Definition: 
bool _NLP::isRelativePronoun(string word)
{
    MYSQL* conn = nullptr;
    MYSQL_ROW row;
    MYSQL_RES* result;
    string query;

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_dictionary_database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        query = "SELECT * FROM relative_pronoun";
        mysql_query(conn, query.c_str());
        result = mysql_store_result(conn);

        while (row = mysql_fetch_row(result))
        {
            if (_Utilities::toLowerWord(row[0]) == _Utilities::toLowerWord(word))
            {
                mysql_close(conn);
                return true;
            }
        }
    }
    mysql_close(conn);
    return false;
}

// Definition: 
bool _NLP::isReciprocalPronoun(string word)
{
    MYSQL* conn = nullptr;
    MYSQL_ROW row;
    MYSQL_RES* result;
    string query;

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_dictionary_database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        query = "SELECT * FROM reciprocal_pronoun";
        mysql_query(conn, query.c_str());
        result = mysql_store_result(conn);

        while (row = mysql_fetch_row(result))
        {
            if (_Utilities::toLowerWord(row[0]) == _Utilities::toLowerWord(word))
            {
                mysql_close(conn);
                return true;
            }
        }
    }
    mysql_close(conn);
    return false;
}

// Definition: 
bool _NLP::isDummyPronoun(string word)
{
    MYSQL* conn = nullptr;
    MYSQL_ROW row;
    MYSQL_RES* result;
    string query;

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_dictionary_database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        query = "SELECT * FROM dummy_pronoun";
        mysql_query(conn, query.c_str());
        result = mysql_store_result(conn);

        while (row = mysql_fetch_row(result))
        {
            if (_Utilities::toLowerWord(row[0]) == _Utilities::toLowerWord(word))
            {
                mysql_close(conn);
                return true;
            }
        }
    }
    mysql_close(conn);
    return false;
}

bool _NLP::isInterjectionSwear(string word)
{
    MYSQL* conn = nullptr;
    MYSQL_ROW row;
    MYSQL_RES* result;
    string query;

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_dictionary_database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        query = "SELECT * FROM swear_words_interjections";
        mysql_query(conn, query.c_str());
        result = mysql_store_result(conn);

        while (row = mysql_fetch_row(result))
        {
            if (_Utilities::toLowerWord(row[0]) == _Utilities::toLowerWord(word))
            {
                mysql_close(conn);
                return true;
            }
        }
    }
    mysql_close(conn);
    return false;
}

bool _NLP::isEmotiveInterjections(string word)
{
    MYSQL* conn = nullptr;
    MYSQL_ROW row;
    MYSQL_RES* result;
    string query;

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_dictionary_database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        query = "SELECT * FROM emotive_interjections";
        mysql_query(conn, query.c_str());
        result = mysql_store_result(conn);

        while (row = mysql_fetch_row(result))
        {
            if (_Utilities::toLowerWord(row[0]) == _Utilities::toLowerWord(word))
            {
                mysql_close(conn);
                return true;
            }
        }
    }
    mysql_close(conn);
    return false;
}

bool _NLP::isCognitiveInterjections(string word)
{
    MYSQL* conn = nullptr;
    MYSQL_ROW row;
    MYSQL_RES* result;
    string query;

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_dictionary_database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        query = "SELECT * FROM cognitive_interjections";
        mysql_query(conn, query.c_str());
        result = mysql_store_result(conn);

        while (row = mysql_fetch_row(result))
        {
            if (_Utilities::toLowerWord(row[0]) == _Utilities::toLowerWord(word))
            {
                mysql_close(conn);
                return true;
            }
        }
    }
    mysql_close(conn);
    return false;
}

bool _NLP::isVolitiveInterjections(string word)
{
    MYSQL* conn = nullptr;
    MYSQL_ROW row;
    MYSQL_RES* result;
    string query;

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_dictionary_database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        query = "SELECT * FROM volitive_interjections";
        mysql_query(conn, query.c_str());
        result = mysql_store_result(conn);

        while (row = mysql_fetch_row(result))
        {
            if (_Utilities::toLowerWord(row[0]) == _Utilities::toLowerWord(word))
            {
                mysql_close(conn);
                return true;
            }
        }
    }
    mysql_close(conn);
    return false;
}

bool _NLP::isPreDeterminer(string word)
{
    MYSQL* conn = nullptr;
    MYSQL_ROW row;
    MYSQL_RES* result;
    string query;

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_dictionary_database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        query = "SELECT * FROM pre_determiners";
        mysql_query(conn, query.c_str());
        result = mysql_store_result(conn);

        while (row = mysql_fetch_row(result))
        {
            if (_Utilities::toLowerWord(row[0]) == _Utilities::toLowerWord(word))
            {
                mysql_close(conn);
                return true;
            }
        }
    }
    mysql_close(conn);
    return false;
}

bool _NLP::isDefiniteArticle(string word)
{
    MYSQL* conn = nullptr;
    MYSQL_ROW row;
    MYSQL_RES* result;
    string query;

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_dictionary_database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        query = "SELECT * FROM definite_articles";
        mysql_query(conn, query.c_str());
        result = mysql_store_result(conn);

        while (row = mysql_fetch_row(result))
        {
            if (_Utilities::toLowerWord(row[0]) == _Utilities::toLowerWord(word))
            {
                mysql_close(conn);
                return true;
            }
        }
    }
    mysql_close(conn);
    return false;
}

bool _NLP::isIndefiniteArticle(string word)
{
    MYSQL* conn = nullptr;
    MYSQL_ROW row;
    MYSQL_RES* result;
    string query;

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_dictionary_database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        query = "SELECT * FROM indefinite_article";
        mysql_query(conn, query.c_str());
        result = mysql_store_result(conn);

        while (row = mysql_fetch_row(result))
        {
            if (_Utilities::toLowerWord(row[0]) == _Utilities::toLowerWord(word))
            {
                mysql_close(conn);
                return true;
            }
        }
    }
    mysql_close(conn);
    return false;
}

//bool _NLP::isNumber(string word)
//{
//
//}

bool _NLP::isNumberDigits(string word)
{
    return false;
}

// Definition: 
bool _NLP::isFiniteVerb(string word)
{
    MYSQL* conn = nullptr;
    MYSQL_ROW row;
    MYSQL_RES* result;
    string query;

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_dictionary_database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        query = "SELECT * FROM finite_verb";
        mysql_query(conn, query.c_str());
        result = mysql_store_result(conn);

        while (row = mysql_fetch_row(result))
        {
            if (row[0] == word)
            {
                mysql_close(conn);
                return true;
            }
        }
    }
    mysql_close(conn);
    return false;
}

// Definition: 
bool _NLP::isInfinitiveVerb(string word)
{
    MYSQL* conn = nullptr;
    MYSQL_ROW row;
    MYSQL_RES* result;
    string query;

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_dictionary_database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        query = "SELECT * FROM infinitive_verb";
        mysql_query(conn, query.c_str());
        result = mysql_store_result(conn);

        while (row = mysql_fetch_row(result))
        {
            if (row[0] == word)
            {
                mysql_close(conn);
                return true;
            }
        }
    }
    mysql_close(conn);
    return false;
}

// Definition: 
bool _NLP::isTransitiveVerb(string word)
{
    MYSQL* conn = nullptr;
    MYSQL_ROW row;
    MYSQL_RES* result;
    string query;

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_dictionary_database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        query = "SELECT * FROM transitive_verb";
        mysql_query(conn, query.c_str());
        result = mysql_store_result(conn);

        while (row = mysql_fetch_row(result))
        {
            if (row[0] == word)
            {
                mysql_close(conn);
                return true;
            }
        }
    }
    mysql_close(conn);
    return false;
}

bool _NLP::isIntransitiveVerb(string word)
{
    MYSQL* conn = nullptr;
    MYSQL_ROW row;
    MYSQL_RES* result;
    string query;

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_dictionary_database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        query = "SELECT * FROM intransitive_verb";
        mysql_query(conn, query.c_str());
        result = mysql_store_result(conn);

        while (row = mysql_fetch_row(result))
        {
            if (row[0] == word)
            {
                mysql_close(conn);
                return true;
            }
        }
    }
    mysql_close(conn);
    return false;
}

// Definition: 
bool _NLP::isRegularVerb(string word)
{
    MYSQL* conn = nullptr;
    MYSQL_ROW row;
    MYSQL_RES* result;
    string query;

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_dictionary_database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        query = "SELECT * FROM regular_verb";
        mysql_query(conn, query.c_str());
        result = mysql_store_result(conn);

        while (row = mysql_fetch_row(result))
        {
            if (row[0] == word)
            {
                mysql_close(conn);
                return true;
            }
        }
    }
    mysql_close(conn);
    return false;
}

// Definition: 
bool _NLP::isIrregularVerb(string word)
{
    MYSQL* conn = nullptr;
    MYSQL_ROW row;
    MYSQL_RES* result;
    string query;

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_dictionary_database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        query = "SELECT * FROM irregular_verbs";
        mysql_query(conn, query.c_str());
        result = mysql_store_result(conn);

        while (row = mysql_fetch_row(result))
        {
            if (row[0] == word)
            {
                mysql_close(conn);
                return true;
            }
        }
    }
    mysql_close(conn);
    return false;
}

// Definition: 
bool _NLP::isPrimaryAuxiliaryVerb(string word)
{
    MYSQL* conn = nullptr;
    MYSQL_ROW row;
    MYSQL_RES* result;
    string query;

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_dictionary_database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        query = "SELECT * FROM primary_auxiliary_verb";
        mysql_query(conn, query.c_str());
        result = mysql_store_result(conn);

        while (row = mysql_fetch_row(result))
        {
            if (row[0] == word)
            {
                mysql_close(conn);
                return true;
            }
        }
    }
    mysql_close(conn);
    return false;
}

// Definition: 
bool _NLP::isSemiModalAuxiliaryVerb(string word)
{
    MYSQL* conn = nullptr;
    MYSQL_ROW row;
    MYSQL_RES* result;
    string query;

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_dictionary_database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        query = "SELECT * FROM semi_modal_auxiliary_verb";
        mysql_query(conn, query.c_str());
        result = mysql_store_result(conn);

        while (row = mysql_fetch_row(result))
        {
            if (row[0] == word)
            {
                mysql_close(conn);
                return true;
            }
        }
    }
    mysql_close(conn);
    return false;
}

// Definition: 
bool _NLP::isParticiple(string word)
{
    MYSQL* conn = nullptr;
    MYSQL_ROW row;
    MYSQL_RES* result;
    string query;

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_dictionary_database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        query = "SELECT * FROM participle";
        mysql_query(conn, query.c_str());
        result = mysql_store_result(conn);

        while (row = mysql_fetch_row(result))
        {
            if (row[0] == word)
            {
                mysql_close(conn);
                return true;
            }
        }
    }
    mysql_close(conn);
    return false;
}

// Definition: 
bool _NLP::isActionVerb(string word)
{
    MYSQL* conn = nullptr;
    MYSQL_ROW row;
    MYSQL_RES* result;
    string query;

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_dictionary_database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        query = "SELECT * FROM action_verb";
        mysql_query(conn, query.c_str());
        result = mysql_store_result(conn);

        while (row = mysql_fetch_row(result))
        {
            if (row[0] == word)
            {
                mysql_close(conn);
                return true;
            }
        }
    }
    mysql_close(conn);
    return false;
}

// Definition: 
bool _NLP::isStativeVerb(string word)
{
    MYSQL* conn = nullptr;
    MYSQL_ROW row;
    MYSQL_RES* result;
    string query;

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_dictionary_database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        query = "SELECT * FROM stative_verb";
        mysql_query(conn, query.c_str());
        result = mysql_store_result(conn);

        while (row = mysql_fetch_row(result))
        {
            if (row[0] == word)
            {
                mysql_close(conn);
                return true;
            }
        }
    }
    mysql_close(conn);
    return false;
}

// Definition: 
bool _NLP::isLinkingVerb(string word)
{
    MYSQL* conn = nullptr;
    MYSQL_ROW row;
    MYSQL_RES* result;
    string query;

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_dictionary_database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        query = "SELECT * FROM linking_verb";
        mysql_query(conn, query.c_str());
        result = mysql_store_result(conn);

        while (row = mysql_fetch_row(result))
        {
            if (row[0] == word)
            {
                mysql_close(conn);
                return true;
            }
        }
    }
    mysql_close(conn);
    return false;
}

// Definition: 
bool _NLP::isLightVerb(string word)
{
    MYSQL* conn = nullptr;
    MYSQL_ROW row;
    MYSQL_RES* result;
    string query;

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_dictionary_database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        query = "SELECT * FROM light_verb";
        mysql_query(conn, query.c_str());
        result = mysql_store_result(conn);

        while (row = mysql_fetch_row(result))
        {
            if (row[0] == word)
            {
                mysql_close(conn);
                return true;
            }
        }
    }mysql_close(conn);
    return false;
}

// Definition: 
bool _NLP::isPhrasalVerbs(string word)
{
    MYSQL* conn = nullptr;
    MYSQL_ROW row;
    MYSQL_RES* result;
    string query;

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_dictionary_database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        query = "SELECT * FROM phrasal_verb";
        mysql_query(conn, query.c_str());
        result = mysql_store_result(conn);

        while (row = mysql_fetch_row(result))
        {
            if (row[0] == word)
            {
                mysql_close(conn);
                return true;
            }
        }
    }
    mysql_close(conn);
    return false;
}

// Definition: 
bool _NLP::isConditionalVerb(string word)
{
    MYSQL* conn = nullptr;
    MYSQL_ROW row;
    MYSQL_RES* result;
    string query;

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_dictionary_database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        query = "SELECT * FROM conditional_verb";
        mysql_query(conn, query.c_str());
        result = mysql_store_result(conn);

        while (row = mysql_fetch_row(result))
        {
            if (row[0] == word)
            {
                mysql_close(conn);
                return true;
            }
        }
    }
    mysql_close(conn);
    return false;
}

// Definition: 
bool _NLP::isCausativeVerb(string word)
{
    MYSQL* conn = nullptr;
    MYSQL_ROW row;
    MYSQL_RES* result;
    string query;

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_dictionary_database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        query = "SELECT * FROM causative_verb";
        mysql_query(conn, query.c_str());
        result = mysql_store_result(conn);

        while (row = mysql_fetch_row(result))
        {
            if (row[0] == word)
            {
                mysql_close(conn);
                return true;
            }
        }
    }
    mysql_close(conn);
    return false;
}

// Definition: 
bool _NLP::isFactiveVerb(string word)
{
    MYSQL* conn = nullptr;
    MYSQL_ROW row;
    MYSQL_RES* result;
    string query;

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_dictionary_database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        query = "SELECT * FROM factive_verb";
        mysql_query(conn, query.c_str());
        result = mysql_store_result(conn);

        while (row = mysql_fetch_row(result))
        {
            if (row[0] == word)
            {
                mysql_close(conn);
                return true;
            }
        }
    }
    mysql_close(conn);
    return false;
}

// Definition: 
bool _NLP::isReflexiveVerb(string word)
{
    MYSQL* conn = nullptr;
    MYSQL_ROW row;
    MYSQL_RES* result;
    string query;

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_dictionary_database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        query = "SELECT * FROM reflexive_verb";
        mysql_query(conn, query.c_str());
        result = mysql_store_result(conn);

        while (row = mysql_fetch_row(result))
        {
            if (row[0] == word)
            {
                mysql_close(conn);
                return true;
            }
        }
    }
    mysql_close(conn);
    return false;
}

// Definition: 
bool _NLP::isAttributiveAdjective(string word)
{
    MYSQL* conn = nullptr;
    MYSQL_ROW row;
    MYSQL_RES* result;
    string query;

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_dictionary_database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        query = "SELECT * FROM attribute_adjective";
        mysql_query(conn, query.c_str());
        result = mysql_store_result(conn);

        while (row = mysql_fetch_row(result))
        {
            if (row[0] == word)
            {
                mysql_close(conn);
                return true;
            }
        }
    }
    mysql_close(conn);
    return false;
}

// Definition: 
bool _NLP::isPredicativeAdjective(string word)
{
    MYSQL* conn = nullptr;
    MYSQL_ROW row;
    MYSQL_RES* result;
    string query;

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_dictionary_database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        query = "SELECT * FROM predicative_adjective";
        mysql_query(conn, query.c_str());
        result = mysql_store_result(conn);

        while (row = mysql_fetch_row(result))
        {
            if (row[0] == word)
            {
                mysql_close(conn);
                return true;
            }
        }
    }
    mysql_close(conn);
    return false;
}

// Definition: 
bool _NLP::isProperAdjective(string word)
{
    MYSQL* conn = nullptr;
    MYSQL_ROW row;
    MYSQL_RES* result;
    string query;

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_dictionary_database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        query = "SELECT * FROM proper_adjective";
        mysql_query(conn, query.c_str());
        result = mysql_store_result(conn);

        while (row = mysql_fetch_row(result))
        {
            if (row[0] == word)
            {
                mysql_close(conn);
                return true;
            }
        }
    }
    mysql_close(conn);
    return false;
}

// Definition: 
bool _NLP::isCollectiveAdjective(string word)
{
    MYSQL* conn = nullptr;
    MYSQL_ROW row;
    MYSQL_RES* result;
    string query;

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_dictionary_database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        query = "SELECT * FROM collective_adjective";
        mysql_query(conn, query.c_str());
        result = mysql_store_result(conn);

        while (row = mysql_fetch_row(result))
        {
            if (row[0] == word)
            {
                mysql_close(conn);
                return true;
            }
        }
    }
    mysql_close(conn);
    return false;
}

// Definition: 
bool _NLP::isDemonstrativeAdjective(string word)
{
    MYSQL* conn = nullptr;
    MYSQL_ROW row;
    MYSQL_RES* result;
    string query;

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_dictionary_database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        query = "SELECT * FROM demonstrative_adjective";
        mysql_query(conn, query.c_str());
        result = mysql_store_result(conn);

        while (row = mysql_fetch_row(result))
        {
            if (row[0] == word)
            {
                mysql_close(conn);
                return true;
            }
        }
    }
    mysql_close(conn);
    return false;
}

// Definition: 
bool _NLP::isInterrogativeAdjective(string word)
{
    MYSQL* conn = nullptr;
    MYSQL_ROW row;
    MYSQL_RES* result;
    string query;

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_dictionary_database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        query = "SELECT * FROM interrogative_adjective";
        mysql_query(conn, query.c_str());
        result = mysql_store_result(conn);

        while (row = mysql_fetch_row(result))
        {
            if (row[0] == word)
            {
                mysql_close(conn);
                return true;
            }
        }
    }
    mysql_close(conn);
    return false;
}

// Definition: 
bool _NLP::isNominalAdjective(string word)
{
    MYSQL* conn = nullptr;
    MYSQL_ROW row;
    MYSQL_RES* result;
    string query;

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_dictionary_database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        query = "SELECT * FROM nominal_adjective";
        mysql_query(conn, query.c_str());
        result = mysql_store_result(conn);

        while (row = mysql_fetch_row(result))
        {
            if (row[0] == word)
            {
                mysql_close(conn);
                return true;
            }
        }
    }
    mysql_close(conn);
    return false;
}

// Definition: 
bool _NLP::isCompoundAdjective(string word)
{
    MYSQL* conn = nullptr;
    MYSQL_ROW row;
    MYSQL_RES* result;
    string query;

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_dictionary_database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        query = "SELECT * FROM compound_adjective";
        mysql_query(conn, query.c_str());
        result = mysql_store_result(conn);

        while (row = mysql_fetch_row(result))
        {
            if (row[0] == word)
            {
                mysql_close(conn);
                return true;
            }
        }
    }
    mysql_close(conn);
    return false;
}

// Definition: 
bool _NLP::isOrderAdjective(string word)
{
    MYSQL* conn = nullptr;
    MYSQL_ROW row;
    MYSQL_RES* result;
    string query;

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_dictionary_database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        query = "SELECT * FROM order_adjective";
        mysql_query(conn, query.c_str());
        result = mysql_store_result(conn);

        while (row = mysql_fetch_row(result))
        {
            if (row[0] == word)
            {
                mysql_close(conn);
                return true;
            }
        }
    }
    mysql_close(conn);
    return false;
}

// Definition: 
bool _NLP::isComparativeAdjective(string word)
{
    MYSQL* conn = nullptr;
    MYSQL_ROW row;
    MYSQL_RES* result;
    string query;

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_dictionary_database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        query = "SELECT * FROM comparitive_adjective";
        mysql_query(conn, query.c_str());
        result = mysql_store_result(conn);

        while (row = mysql_fetch_row(result))
        {
            if (row[0] == word)
            {
                mysql_close(conn);
                return true;
            }
        }
    }
    mysql_close(conn);
    return false;
}

// Definition: 
bool _NLP::isSuperlativeAdjective(string word)
{
    MYSQL* conn = nullptr;
    MYSQL_ROW row;
    MYSQL_RES* result;
    string query;

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_dictionary_database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        query = "SELECT * FROM superlative_adjective";
        mysql_query(conn, query.c_str());
        result = mysql_store_result(conn);

        while (row = mysql_fetch_row(result))
        {
            if (row[0] == word)
            {
                mysql_close(conn);
                return true;
            }
        }
    }
    mysql_close(conn);
    return false;
}

// Definition: 
bool _NLP::isAdverbTime(string word)
{
    MYSQL* conn = nullptr;
    MYSQL_ROW row;
    MYSQL_RES* result;
    string query;

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_dictionary_database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        query = "SELECT * FROM adverb_time";
        mysql_query(conn, query.c_str());
        result = mysql_store_result(conn);

        while (row = mysql_fetch_row(result))
        {
            if (row[0] == word)
            {
                mysql_close(conn);
                return true;
            }
        }
    }
    mysql_close(conn);
    return false;
}

// Definition: 
bool _NLP::isAdverbPlace(string word)
{
    MYSQL* conn = nullptr;
    MYSQL_ROW row;
    MYSQL_RES* result;
    string query;

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_dictionary_database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        query = "SELECT * FROM adverb_place";
        mysql_query(conn, query.c_str());
        result = mysql_store_result(conn);

        while (row = mysql_fetch_row(result))
        {
            if (row[0] == word)
            {
                mysql_close(conn);
                return true;
            }
        }
    }
    mysql_close(conn);
    return false;
}

// Definition: 
bool _NLP::isAdverbManner(string word)
{
    MYSQL* conn = nullptr;
    MYSQL_ROW row;
    MYSQL_RES* result;
    string query;

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_dictionary_database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        query = "SELECT * FROM adverb_manner";
        mysql_query(conn, query.c_str());
        result = mysql_store_result(conn);

        while (row = mysql_fetch_row(result))
        {
            if (row[0] == word)
            {
                mysql_close(conn);
                return true;
            }
        }
    }
    mysql_close(conn);
    return false;
}

// Definition: 
bool _NLP::isAdverbDegree(string word)
{
    MYSQL* conn = nullptr;
    MYSQL_ROW row;
    MYSQL_RES* result;
    string query;

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_dictionary_database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        query = "SELECT * FROM adverb_degree";
        mysql_query(conn, query.c_str());
        result = mysql_store_result(conn);

        while (row = mysql_fetch_row(result))
        {
            if (row[0] == word)
            {
                mysql_close(conn);
                return true;
            }
        }
    }
    mysql_close(conn);
    return false;
}

// Definition: 
bool _NLP::isMitigator(string word)
{
    MYSQL* conn = nullptr;
    MYSQL_ROW row;
    MYSQL_RES* result;
    string query;

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_dictionary_database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        query = "SELECT * FROM mitigator";
        mysql_query(conn, query.c_str());
        result = mysql_store_result(conn);

        while (row = mysql_fetch_row(result))
        {
            if (row[0] == word)
            {
                mysql_close(conn);
                return true;
            }
        }
    }
    mysql_close(conn);
    return false;
}

// Definition: 
bool _NLP::isIntensifier(string word)
{
    MYSQL* conn = nullptr;
    MYSQL_ROW row;
    MYSQL_RES* result;
    string query;

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_dictionary_database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        query = "SELECT * FROM intensifier";
        mysql_query(conn, query.c_str());
        result = mysql_store_result(conn);

        while (row = mysql_fetch_row(result))
        {
            if (row[0] == word)
            {
                mysql_close(conn);
                return true;
            }
        }
    }
    mysql_close(conn);
    return false;
}

// Definition: 
bool _NLP::isAdverbFrequency(string word)
{
    MYSQL* conn = nullptr;
    MYSQL_ROW row;
    MYSQL_RES* result;
    string query;

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_dictionary_database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        query = "SELECT * FROM adverb_frequency";
        mysql_query(conn, query.c_str());
        result = mysql_store_result(conn);

        while (row = mysql_fetch_row(result))
        {
            if (row[0] == word)
            {
                mysql_close(conn);
                return true;
            }
        }
    }
    mysql_close(conn);
    return false;
}

// Definition: 
bool _NLP::isAdverbPurpose(string word)
{
    MYSQL* conn = nullptr;
    MYSQL_ROW row;
    MYSQL_RES* result;
    string query;

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_dictionary_database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        query = "SELECT * FROM adverb_purpose";
        mysql_query(conn, query.c_str());
        result = mysql_store_result(conn);

        while (row = mysql_fetch_row(result))
        {
            if (row[0] == word)
            {
                mysql_close(conn);
                return true;
            }
        }
    }
    mysql_close(conn);
    return false;
}

// Definition: 
bool _NLP::isAdverbFocusing(string word)
{
    MYSQL* conn = nullptr;
    MYSQL_ROW row;
    MYSQL_RES* result;
    string query;

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_dictionary_database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        query = "SELECT * FROM superladverb_focusing";
        mysql_query(conn, query.c_str());
        result = mysql_store_result(conn);

        while (row = mysql_fetch_row(result))
        {
            if (row[0] == word)
            {
                mysql_close(conn);
                return true;
            }
        }
    }
    mysql_close(conn);
    return false;
}

// Definition: 
bool _NLP::isAdverbNegative(string word)
{
    MYSQL* conn = nullptr;
    MYSQL_ROW row;
    MYSQL_RES* result;
    string query;

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_dictionary_database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        query = "SELECT * FROM adverb_negative";
        mysql_query(conn, query.c_str());
        result = mysql_store_result(conn);

        while (row = mysql_fetch_row(result))
        {
            if (row[0] == word)
            {
                mysql_close(conn);
                return true;
            }
        }
    }
    mysql_close(conn);
    return false;
}

// Definition: 
bool _NLP::isAdverbConjunctive(string word)
{
    MYSQL* conn = nullptr;
    MYSQL_ROW row;
    MYSQL_RES* result;
    string query;

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_dictionary_database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        query = "SELECT * FROM adverb_conjunctive";
        mysql_query(conn, query.c_str());
        result = mysql_store_result(conn);

        while (row = mysql_fetch_row(result))
        {
            if (row[0] == word)
            {
                mysql_close(conn);
                return true;
            }
        }
    }
    mysql_close(conn);
    return false;
}

// Definition: 
bool _NLP::isAdverbEvaluative(string word)
{
    MYSQL* conn = nullptr;
    MYSQL_ROW row;
    MYSQL_RES* result;
    string query;

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_dictionary_database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        query = "SELECT * FROM adverb_evaluative";
        mysql_query(conn, query.c_str());
        result = mysql_store_result(conn);

        while (row = mysql_fetch_row(result))
        {
            if (row[0] == word)
            {
                mysql_close(conn);
                return true;
            }
        }
    }
    mysql_close(conn);
    return false;
}

// Definition: 
bool _NLP::isAdverbViewpoint(string word)
{
    MYSQL* conn = nullptr;
    MYSQL_ROW row;
    MYSQL_RES* result;
    string query;

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_dictionary_database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        query = "SELECT * FROM adverb_viewpoint";
        mysql_query(conn, query.c_str());
        result = mysql_store_result(conn);

        while (row = mysql_fetch_row(result))
        {
            if (row[0] == word)
            {
                mysql_close(conn);
                return true;
            }
        }
    }
    mysql_close(conn);
    return false;
}

// Definition: 
bool _NLP::isAdverbRelative(string word)
{
    MYSQL* conn = nullptr;
    MYSQL_ROW row;
    MYSQL_RES* result;
    string query;

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_dictionary_database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        query = "SELECT * FROM adverb_relative";
        mysql_query(conn, query.c_str());
        result = mysql_store_result(conn);

        while (row = mysql_fetch_row(result))
        {
            if (row[0] == word)
            {
                mysql_close(conn);
                return true;
            }
        }
    }
    mysql_close(conn);
    return false;
}

// Definition: 
bool _NLP::isAdverbialNoun(string word)
{
    MYSQL* conn = nullptr;
    MYSQL_ROW row;
    MYSQL_RES* result;
    string query;

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_dictionary_database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        query = "SELECT * FROM adverb_noun";
        mysql_query(conn, query.c_str());
        result = mysql_store_result(conn);

        while (row = mysql_fetch_row(result))
        {
            if (row[0] == word)
            {
                mysql_close(conn);
                return true;
            }
        }
    }
    mysql_close(conn);
    return false;
}

// Definition: 
bool _NLP::isRegularAdverb(string word)
{
    MYSQL* conn = nullptr;
    MYSQL_ROW row;
    MYSQL_RES* result;
    string query;

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_dictionary_database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        query = "SELECT * FROM regular_adverb";
        mysql_query(conn, query.c_str());
        result = mysql_store_result(conn);

        while (row = mysql_fetch_row(result))
        {
            if (row[0] == word)
            {
                mysql_close(conn);
                return true;
            }
        }
    }
    mysql_close(conn);
    return false;
}

// Definition: 
bool _NLP::isIrregularAdverb(string word)
{
    MYSQL* conn = nullptr;
    MYSQL_ROW row;
    MYSQL_RES* result;
    string query;

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_dictionary_database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        query = "SELECT * FROM irregular_adverb";
        mysql_query(conn, query.c_str());
        result = mysql_store_result(conn);

        while (row = mysql_fetch_row(result))
        {
            if (row[0] == word)
            {
                mysql_close(conn);
                return true;
            }
        }
    }
    mysql_close(conn);
    return false;
}

// Definition: 
bool _NLP::isComparativeAdverb(string word)
{
    MYSQL* conn = nullptr;
    MYSQL_ROW row;
    MYSQL_RES* result;
    string query;

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_dictionary_database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        query = "SELECT * FROM comparitive_adverb";
        mysql_query(conn, query.c_str());
        result = mysql_store_result(conn);

        while (row = mysql_fetch_row(result))
        {
            if (row[0] == word)
            {
                mysql_close(conn);
                return true;
            }
        }
    }
    mysql_close(conn);
    return false;
}

// Definition: 
bool _NLP::isSuperlativeAdverb(string word)
{
    MYSQL* conn = nullptr;
    MYSQL_ROW row;
    MYSQL_RES* result;
    string query;

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_dictionary_database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        query = "SELECT * FROM superlative_adverb";
        mysql_query(conn, query.c_str());
        result = mysql_store_result(conn);

        while (row = mysql_fetch_row(result))
        {
            if (row[0] == word)
            {
                mysql_close(conn);
                return true;
            }
        }
    }
    mysql_close(conn);
    return false;
}

// Definition: 
bool _NLP::isOrderAdverb(string word)
{
    MYSQL* conn = nullptr;
    MYSQL_ROW row;
    MYSQL_RES* result;
    string query;

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_dictionary_database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        query = "SELECT * FROM order_adverb";
        mysql_query(conn, query.c_str());
        result = mysql_store_result(conn);

        while (row = mysql_fetch_row(result))
        {
            if (row[0] == word)
            {
                mysql_close(conn);
                return true;
            }
        }
    }
    mysql_close(conn);
    return false;
}

// Preposition Types
//

// Definition: 
bool _NLP::isPrepositionwithNouns(string word)
{
    MYSQL* conn = nullptr;
    MYSQL_ROW row;
    MYSQL_RES* result;
    string query;

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_dictionary_database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        query = "SELECT * FROM preposition_nouns";
        mysql_query(conn, query.c_str());
        result = mysql_store_result(conn);

        while (row = mysql_fetch_row(result))
        {
            if (row[0] == word)
            {
                mysql_close(conn);
                return true;
            }
        }
    }
    mysql_close(conn);
    return false;
}

// Definition: 
bool _NLP::isPrepositionalwithVerbs(string word)
{
    MYSQL* conn = nullptr;
    MYSQL_ROW row;
    MYSQL_RES* result;
    string query;

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_dictionary_database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        query = "SELECT * FROM preposition_verbs";
        mysql_query(conn, query.c_str());
        result = mysql_store_result(conn);

        while (row = mysql_fetch_row(result))
        {
            if (row[0] == word)
            {
                mysql_close(conn);
                return true;
            }
        }
    }
    mysql_close(conn);
    return false;
}

// Definition: 
bool _NLP::isPrepositionalwithAdjectives(string word)
{
    MYSQL* conn = nullptr;
    MYSQL_ROW row;
    MYSQL_RES* result;
    string query;

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_dictionary_database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        query = "SELECT * FROM preposition_adjective";
        mysql_query(conn, query.c_str());
        result = mysql_store_result(conn);

        while (row = mysql_fetch_row(result))
        {
            if (row[0] == word)
            {
                mysql_close(conn);
                return true;
            }
        }
    }
    mysql_close(conn);
    return false;
}

// Definition: 
bool _NLP::isCoordinativeConjunction(string word)
{
    MYSQL* conn = nullptr;
    MYSQL_ROW row;
    MYSQL_RES* result;
    string query;

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_dictionary_database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        query = "SELECT * FROM coordinative_conjunction";
        mysql_query(conn, query.c_str());
        result = mysql_store_result(conn);

        while (row = mysql_fetch_row(result))
        {
            if (row[0] == word)
            {
                mysql_close(conn);
                return true;
            }
        }
    }
    mysql_close(conn);
    return false;
}

// Definition: 
bool _NLP::isCorrelativeConjunction(string word)
{
    MYSQL* conn = nullptr;
    MYSQL_ROW row;
    MYSQL_RES* result;
    string query;

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_dictionary_database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        query = "SELECT * FROM correlative_conjunction";
        mysql_query(conn, query.c_str());
        result = mysql_store_result(conn);

        while (row = mysql_fetch_row(result))
        {
            if (row[0] == word)
            {
                mysql_close(conn);
                return true;
            }
        }
    }
    mysql_close(conn);
    return false;
}

// Definition: 
bool _NLP::isSubordinatingConjunctions(string word)
{
    MYSQL* conn = nullptr;
    MYSQL_ROW row;
    MYSQL_RES* result;
    string query;

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_dictionary_database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        query = "SELECT * FROM subordinating_conjunctions";
        mysql_query(conn, query.c_str());
        result = mysql_store_result(conn);

        while (row = mysql_fetch_row(result))
        {
            if (row[0] == word)
            {
                mysql_close(conn);
                return true;
            }
        }
    }
    mysql_close(conn);
    return false;
}

// Definition: 
bool _NLP::isParticles(string word)
{
    MYSQL* conn = nullptr;
    MYSQL_ROW row;
    MYSQL_RES* result;
    string query;

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_dictionary_database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        query = "SELECT * FROM participle";
        mysql_query(conn, query.c_str());
        result = mysql_store_result(conn);

        while (row = mysql_fetch_row(result))
        {
            if (row[0] == word)
            {
                mysql_close(conn);
                return true;
            }
        }
    }
    mysql_close(conn);
    return false;
}

// Definition: 
bool _NLP::isDeterminers(string word)
{
    MYSQL* conn = nullptr;
    MYSQL_ROW row;
    MYSQL_RES* result;
    string query;

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_dictionary_database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        query = "SELECT * FROM determiners";
        mysql_query(conn, query.c_str());
        result = mysql_store_result(conn);

        while (row = mysql_fetch_row(result))
        {
            if (row[0] == word)
            {
                mysql_close(conn);
                return true;
            }
        }
    }
    mysql_close(conn);
    return false;
}

// Definition: 
bool _NLP::isPossessiveDeterminer(string word)
{
    MYSQL* conn = nullptr;
    MYSQL_ROW row;
    MYSQL_RES* result;
    string query;

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_dictionary_database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        query = "SELECT * FROM possessive_determiner";
        mysql_query(conn, query.c_str());
        result = mysql_store_result(conn);

        while (row = mysql_fetch_row(result))
        {
            if (row[0] == word)
            {
                mysql_close(conn);
                return true;
            }
        }
    }
    mysql_close(conn);
    return false;
}

// Definition: 
bool _NLP::isGerund(string word)
{
    MYSQL* conn = nullptr;
    MYSQL_ROW row;
    MYSQL_RES* result;
    string query;

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_dictionary_database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        query = "SELECT * FROM gerund";
        mysql_query(conn, query.c_str());
        result = mysql_store_result(conn);

        while (row = mysql_fetch_row(result))
        {
            if (row[0] == word)
            {
                mysql_close(conn);
                return true;
            }
        }
    }
    mysql_close(conn);
    return false;
}

// Definition: 
bool _NLP::isInterjections(string word)
{
    MYSQL* conn = nullptr;
    MYSQL_ROW row;
    MYSQL_RES* result;
    string query;

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_dictionary_database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        query = "SELECT * FROM interjections";
        mysql_query(conn, query.c_str());
        result = mysql_store_result(conn);

        while (row = mysql_fetch_row(result))
        {
            if (row[0] == word)
            {
                mysql_close(conn);
                return true;
            }
        }
    }
    mysql_close(conn);
    return false;
}

string* _NLP::getBeingVerbNegative(string* words)
{
    words = _Utilities::toLowerWordsArr(words);

    for (int x = 0; x <= sizeof(words); x++)
    {
        if (words[x] == "i" && words[x + 1] == "am" && words[x + 2] == "not")
        {
            string* temp = new string[3];
            temp[0] = words[x];
            temp[1] = words[x + 1];
            temp[2] = words[x + 2];
            return temp;
        }
        if (words[x] == "he" && words[x + 1] == "is" && words[x + 2] == "not")
        {
            string* temp = new string[3];
            temp[0] = words[x];
            temp[1] = words[x + 1];
            temp[2] = words[x + 2];
            return temp;
        }
        if (words[x] == "she" && words[x + 1] == "is" && words[x + 2] == "not")
        {
            string* temp = new string[3];
            temp[0] = words[x];
            temp[1] = words[x + 1];
            temp[2] = words[x + 2];
            return temp;
        }
        if (words[x] == "it" && words[x + 1] == "is" && words[x + 2] == "not")
        {
            string* temp = new string[3];
            temp[0] = words[x];
            temp[1] = words[x + 1];
            temp[2] = words[x + 2];
            return temp;
        }
        if (words[x] == "we" && words[x + 1] == "are" && words[x + 2] == "not")
        {
            string* temp = new string[3];
            temp[0] = words[x];
            temp[1] = words[x + 1];
            temp[2] = words[x + 2];
            return temp;
        }
        if (words[x] == "you" && words[x + 1] == "are" && words[x + 2] == "not")
        {
            string* temp = new string[3];
            temp[0] = words[x];
            temp[1] = words[x + 1];
            temp[2] = words[x + 2];
            return temp;
        }
        if (words[x] == "they" && words[x + 1] == "are" && words[x + 2] == "not")
        {
            string* temp = new string[3];
            temp[0] = words[x];
            temp[1] = words[x + 1];
            temp[2] = words[x + 2];
            return temp;
        }
    }
}

string* _NLP::getBeingVerbPositive(string* words)
{
    words = _Utilities::toLowerWordsArr(words);

    for (int x = 0; x <= sizeof(words); x++)
    {
        if (words[x] == "i" && words[x + 1] == "am")
        {
            string* temp = new string[2];
            temp[0] = words[x];
            temp[1] = words[x + 1];
            return temp;
        }
        if (words[x] == "i" && words[x + 1] == "am" && words[x + 2] == "not")
        {
            string* temp = new string[3];
            temp[0] = words[x];
            temp[1] = words[x + 1];
            temp[2] = words[x + 2];
            return temp;
        }
        if (words[x] == "he" && words[x + 1] == "is")
        {
            string* temp = new string[2];
            temp[0] = words[x];
            temp[1] = words[x + 1];
            return temp;
        }
        if (words[x] == "he" && words[x + 1] == "is" && words[x + 2] == "not")
        {
            string* temp = new string[3];
            temp[0] = words[x];
            temp[1] = words[x + 1];
            temp[2] = words[x + 2];
            return temp;
        }
        if (words[x] == "she" && words[x + 1] == "is")
        {
            string* temp = new string[2];
            temp[0] = words[x];
            temp[1] = words[x + 1];
            return temp;
        }
        if (words[x] == "she" && words[x + 1] == "is" && words[x + 2] == "not")
        {
            string* temp = new string[3];
            temp[0] = words[x];
            temp[1] = words[x + 1];
            temp[2] = words[x + 2];
            return temp;
        }
        if (words[x] == "it" && words[x + 1] == "is")
        {
            string* temp = new string[3];
            temp[0] = words[x];
            temp[1] = words[x + 1];
            return temp;
        }
        if (words[x] == "it" && words[x + 1] == "is" && words[x + 2] == "not")
        {
            string* temp = new string[3];
            temp[0] = words[x];
            temp[1] = words[x + 1];
            temp[2] = words[x + 2];
            return temp;
        }
        if (words[x] == "we" && words[x + 1] == "are")
        {
            string* temp = new string[2];
            temp[0] = words[x];
            temp[1] = words[x + 1];
            return temp;
        }
        if (words[x] == "we" && words[x + 1] == "are" && words[x + 2] == "not")
        {
            string* temp = new string[3];
            temp[0] = words[x];
            temp[1] = words[x + 1];
            temp[2] = words[x + 2];
            return temp;
        }
        if (words[x] == "you" && words[x + 1] == "are")
        {
            string* temp = new string[2];
            temp[0] = words[x];
            temp[1] = words[x + 1];
            return temp;
        }
        if (words[x] == "you" && words[x + 1] == "are" && words[x + 2] == "not")
        {
            string* temp = new string[3];
            temp[0] = words[x];
            temp[1] = words[x + 1];
            temp[2] = words[x + 2];
            return temp;
        }
        if (words[x] == "they" && words[x + 1] == "are")
        {
            string* temp = new string[2];
            temp[0] = words[x];
            temp[1] = words[x + 1];
            return temp;
        }
        if (words[x] == "they" && words[x + 1] == "are" && words[x + 2] == "not")
        {
            string* temp = new string[3];
            temp[0] = words[x];
            temp[1] = words[x + 1];
            temp[2] = words[x + 2];
            return temp;
        }
    }
}

bool _NLP::isBeingVerbPositive(string* words)
{
    words = _Utilities::toLowerWordsArr(words);

    for (int x = 0; x <= sizeof(words); x++)
    {
        if (words[x] == "i" && words[x + 1] == "am")
        {
            return true;
        }
        if (words[x] == "he" && words[x + 1] == "is")
        {
            return true;
        }
        if (words[x] == "she" && words[x + 1] == "is")
        {
            return true;
        }
        if (words[x] == "it" && words[x + 1] == "is")
        {
            return true;
        }
        if (words[x] == "we" && words[x + 1] == "are")
        {
            return true;
        }
        if (words[x] == "you" && words[x + 1] == "are")
        {
            return true;
        }
        if (words[x] == "they" && words[x + 1] == "are")
        {
            return true;
        }
    }
    return false;
}

bool _NLP::isBeingVerbNegative(string* words)
{
    words = _Utilities::toLowerWordsArr(words);

    for (int x = 0; x <= sizeof(words); x++)
    {
        if (words[x] == "i" && words[x + 1] == "am" && words[x + 2] == "not")
        {
            return true;
        }
        if (words[x] == "he" && words[x + 1] == "is" && words[x + 2] == "not")
        {
            return true;
        }
        if (words[x] == "she" && words[x + 1] == "is" && words[x + 2] == "not")
        {
            return true;
        }
        if (words[x] == "it" && words[x + 1] == "is" && words[x + 2] == "not")
        {
            return true;
        }
        if (words[x] == "we" && words[x + 1] == "are" && words[x + 2] == "not")
        {
            return true;
        }
        if (words[x] == "you" && words[x + 1] == "are" && words[x + 2] == "not")
        {
            return true;
        }
        if (words[x] == "they" && words[x + 1] == "are" && words[x + 2] == "not")
        {
            return true;
        }
    }
    return false;
}

// Purpose: Check if the current sentence has being verbs negative
string* _NLP::getPresentSimplePositive(string* words)
{
    words = _Utilities::toLowerWordsArr(words);

    for (int x = 0; x <= sizeof(words); x++)
    {
        if (words[x] == "i" && words[x + 1] == "work")
        {
            string* temp = new string[2];
            temp[0] = words[x];
            temp[1] = words[x + 1];
            return temp;
        }
        if (words[x] == "i" && words[x + 1] == "like")
        {
            string* temp = new string[2];
            temp[0] = words[x];
            temp[1] = words[x + 1];
            return temp;
        }
        if (words[x] == "i" && words[x + 1] == "do")
        {
            string* temp = new string[2];
            temp[0] = words[x];
            temp[1] = words[x + 1];
            return temp;
        }
        if (words[x] == "i" && words[x + 1] == "have")
        {
            string* temp = new string[2];
            temp[0] = words[x];
            temp[1] = words[x + 1];
            return temp;
        }
        if (words[x] == "we" && words[x + 1] == "work")
        {
            string* temp = new string[2];
            temp[0] = words[x];
            temp[1] = words[x + 1];
            return temp;
        }
        if (words[x] == "we" && words[x + 1] == "like")
        {
            string* temp = new string[2];
            temp[0] = words[x];
            temp[1] = words[x + 1];
            return temp;
        }
        if (words[x] == "we" && words[x + 1] == "do")
        {
            string* temp = new string[2];
            temp[0] = words[x];
            temp[1] = words[x + 1];
            return temp;
        }
        if (words[x] == "we" && words[x + 1] == "have")
        {
            string* temp = new string[2];
            temp[0] = words[x];
            temp[1] = words[x + 1];
            return temp;
        }
        if (words[x] == "you" && words[x + 1] == "work")
        {
            string* temp = new string[2];
            temp[0] = words[x];
            temp[1] = words[x + 1];
            return temp;
        }
        if (words[x] == "you" && words[x + 1] == "like")
        {
            string* temp = new string[2];
            temp[0] = words[x];
            temp[1] = words[x + 1];
            return temp;
        }
        if (words[x] == "you" && words[x + 1] == "do")
        {
            string* temp = new string[2];
            temp[0] = words[x];
            temp[1] = words[x + 1];
            return temp;
        }
        if (words[x] == "you" && words[x + 1] == "have")
        {
            string* temp = new string[2];
            temp[0] = words[x];
            temp[1] = words[x + 1];
            return temp;
        }
        if (words[x] == "they" && words[x + 1] == "work")
        {
            string* temp = new string[2];
            temp[0] = words[x];
            temp[1] = words[x + 1];
            return temp;
        }
        if (words[x] == "they" && words[x + 1] == "like")
        {
            string* temp = new string[2];
            temp[0] = words[x];
            temp[1] = words[x + 1];
            return temp;
        }
        if (words[x] == "they" && words[x + 1] == "do")
        {
            string* temp = new string[2];
            temp[0] = words[x];
            temp[1] = words[x + 1];
            return temp;
        }
        if (words[x] == "they" && words[x + 1] == "have")
        {
            string* temp = new string[2];
            temp[0] = words[x];
            temp[1] = words[x + 1];
            return temp;
        }
        if (words[x] == "they" && words[x + 1] == "have")
        {
            string* temp = new string[2];
            temp[0] = words[x];
            temp[1] = words[x + 1];
            return temp;
        }
        if (words[x] == "they" && words[x + 1] == "have")
        {
            string* temp = new string[2];
            temp[0] = words[x];
            temp[1] = words[x + 1];
            return temp;
        }
        if (words[x] == "he" && words[x + 1] == "works")
        {
            string* temp = new string[2];
            temp[0] = words[x];
            temp[1] = words[x + 1];
            return temp;
        }
        if (words[x] == "he" && words[x + 1] == "likes")
        {
            string* temp = new string[2];
            temp[0] = words[x];
            temp[1] = words[x + 1];
            return temp;
        }
        if (words[x] == "he" && words[x + 1] == "does")
        {
            string* temp = new string[2];
            temp[0] = words[x];
            temp[1] = words[x + 1];
            return temp;
        }
        if (words[x] == "he" && words[x + 1] == "has")
        {
            string* temp = new string[2];
            temp[0] = words[x];
            temp[1] = words[x + 1];
            return temp;
        }
        if (words[x] == "she" && words[x + 1] == "works")
        {
            string* temp = new string[2];
            temp[0] = words[x];
            temp[1] = words[x + 1];
            return temp;
        }
        if (words[x] == "she" && words[x + 1] == "likes")
        {
            string* temp = new string[2];
            temp[0] = words[x];
            temp[1] = words[x + 1];
            return temp;
        }
        if (words[x] == "she" && words[x + 1] == "does")
        {
            string* temp = new string[2];
            temp[0] = words[x];
            temp[1] = words[x + 1];
            return temp;
        }
        if (words[x] == "she" && words[x + 1] == "has")
        {
            string* temp = new string[2];
            temp[0] = words[x];
            temp[1] = words[x + 1];
            return temp;
        }
        if (words[x] == "it" && words[x + 1] == "works")
        {
            string* temp = new string[2];
            temp[0] = words[x];
            temp[1] = words[x + 1];
            return temp;
        }
        if (words[x] == "it" && words[x + 1] == "likes")
        {
            string* temp = new string[2];
            temp[0] = words[x];
            temp[1] = words[x + 1];
            return temp;
        }
        if (words[x] == "it" && words[x + 1] == "does")
        {
            string* temp = new string[2];
            temp[0] = words[x];
            temp[1] = words[x + 1];
            return temp;
        }
        if (words[x] == "it" && words[x + 1] == "has")
        {
            string* temp = new string[2];
            temp[0] = words[x];
            temp[1] = words[x + 1];
            return temp;
        }
    }
}

bool _NLP::isDoDoesInfinitive(string* words)
{
    //string* subject = getSubject(words);
    //string* predicate = getPredicate(words);

    // Check if the subject contains the word do or does
    //for (int x = 0; x <= sizeof(words); x++)
    //{
    //    if ()
    //    {

    //    }
    //}

    return false;
}

string* _NLP::getPresentSimpleNegative(string* words)
{
    words = _Utilities::toLowerWordsArr(words);

    for (int x = 0; x <= sizeof(words); x++)
    {
        if (words[x] == "i" && words[x + 1] == "do" && words[x + 2] == "not")
        {
            string* temp = new string[3];
            temp[0] = words[x];
            temp[1] = words[x + 1];
            temp[2] = words[x + 2];
            return temp;
        }
        if (words[x] == "i" && words[x + 1] == "do" && words[x + 2] == "not" && words[x + 3] == "work")
        {
            string* temp = new string[4];
            temp[0] = words[x];
            temp[1] = words[x + 1];
            temp[2] = words[x + 2];
            temp[3] = words[x + 3];
            return temp;
        }
        if (words[x] == "i" && words[x + 1] == "do" && words[x + 2] == "not" && words[x + 3] == "like")
        {
            string* temp = new string[3];
            temp[0] = words[x];
            temp[1] = words[x + 1];
            temp[2] = words[x + 2];
            temp[3] = words[x + 3];
            return temp;
        }
        if (words[x] == "i" && words[x + 1] == "do" && words[x + 2] == "not" && words[x + 3] == "do")
        {
            string* temp = new string[3];
            temp[0] = words[x];
            temp[1] = words[x + 1];
            temp[2] = words[x + 2];
            temp[3] = words[x + 3];
            return temp;
        }
        if (words[x] == "i" && words[x + 1] == "do" && words[x + 2] == "not" && words[x + 3] == "have")
        {
            string* temp = new string[3];
            temp[0] = words[x];
            temp[1] = words[x + 1];
            temp[2] = words[x + 2];
            temp[3] = words[x + 3];
            return temp;
        }
        if (words[x] == "we" && words[x + 1] == "do" && words[x + 2] == "not")
        {
            string* temp = new string[3];
            temp[0] = words[x];
            temp[1] = words[x + 1];
            temp[2] = words[x + 2];
            return temp;
        }
        if (words[x] == "we" && words[x + 1] == "do" && words[x + 2] == "not" && words[x + 3] == "work")
        {
            string* temp = new string[4];
            temp[0] = words[x];
            temp[1] = words[x + 1];
            temp[2] = words[x + 2];
            temp[3] = words[x + 3];
            return temp;
        }
        if (words[x] == "we" && words[x + 1] == "do" && words[x + 2] == "not" && words[x + 3] == "like")
        {
            string* temp = new string[4];
            temp[0] = words[x];
            temp[1] = words[x + 1];
            return temp;
        }
        if (words[x] == "we" && words[x + 1] == "do" && words[x + 2] == "not" && words[x + 3] == "do")
        {
            string* temp = new string[4];
            temp[0] = words[x];
            temp[1] = words[x + 1];
            temp[2] = words[x + 2];
            temp[3] = words[x + 3];
            return temp;
        }
        if (words[x] == "we" && words[x + 1] == "do" && words[x + 2] == "not" && words[x + 3] == "have")
        {
            string* temp = new string[4];
            temp[0] = words[x];
            temp[1] = words[x + 1];
            temp[2] = words[x + 2];
            temp[3] = words[x + 3];
            return temp;
        }
        if (words[x] == "you" && words[x + 1] == "do" && words[x + 2] == "not")
        {
            string* temp = new string[3];
            temp[0] = words[x];
            temp[1] = words[x + 1];
            temp[2] = words[x + 2];
            return temp;
        }
        if (words[x] == "you" && words[x + 1] == "do" && words[x + 2] == "not" && words[x + 3] == "work")
        {
            string* temp = new string[4];
            temp[0] = words[x];
            temp[1] = words[x + 1];
            temp[2] = words[x + 2];
            temp[3] = words[x + 3];
            return temp;
        }
        if (words[x] == "you" && words[x + 1] == "do" && words[x + 2] == "not" && words[x + 3] == "like")
        {
            string* temp = new string[4];
            temp[0] = words[x];
            temp[1] = words[x + 1];
            temp[1] = words[x + 1];
            temp[1] = words[x + 1];
            return temp;
        }
        if (words[x] == "you" && words[x + 1] == "do" && words[x + 2] == "not" && words[x + 3] == "do")
        {
            string* temp = new string[4];
            temp[0] = words[x];
            temp[1] = words[x + 1];
            temp[2] = words[x + 2];
            temp[3] = words[x + 3];
            return temp;
        }
        if (words[x] == "you" && words[x + 1] == "do" && words[x + 2] == "not" && words[x + 3] == "have")
        {
            string* temp = new string[4];
            temp[0] = words[x];
            temp[1] = words[x + 1];
            temp[2] = words[x + 2];
            temp[3] = words[x + 3];
            return temp;
        }
        if (words[x] == "they" && words[x + 1] == "do" && words[x + 2] == "not")
        {
            string* temp = new string[3];
            temp[0] = words[x];
            temp[1] = words[x + 1];
            temp[2] = words[x + 2];
            return temp;
        }
        if (words[x] == "they" && words[x + 1] == "do" && words[x + 2] == "not" && words[x + 3] == "work")
        {
            string* temp = new string[4];
            temp[0] = words[x];
            temp[1] = words[x + 1];
            temp[2] = words[x + 2];
            temp[3] = words[x + 3];
            return temp;
        }
        if (words[x] == "they" && words[x + 1] == "do" && words[x + 2] == "not" && words[x + 3] == "like")
        {
            string* temp = new string[4];
            temp[0] = words[x];
            temp[1] = words[x + 1];
            temp[2] = words[x + 2];
            temp[3] = words[x + 3];
            return temp;
        }
        if (words[x] == "they" && words[x + 1] == "do" && words[x + 2] == "not" && words[x + 3] == "do")
        {
            string* temp = new string[4];
            temp[0] = words[x];
            temp[1] = words[x + 1];
            temp[2] = words[x + 2];
            temp[3] = words[x + 3];
            return temp;
        }
        if (words[x] == "they" && words[x + 1] == "do" && words[x + 2] == "not" && words[x + 3] == "have")
        {
            string* temp = new string[4];
            temp[0] = words[x];
            temp[1] = words[x + 1];
            temp[2] = words[x + 2];
            temp[3] = words[x + 3];
            return temp;
        }

        if (words[x] == "he" && words[x + 1] == "does" && words[x + 2] == "not")
        {
            string* temp = new string[3];
            temp[0] = words[x];
            temp[1] = words[x + 1];
            temp[2] = words[x + 2];
            return temp;
        }
        if (words[x] == "he" && words[x + 1] == "does" && words[x + 2] == "not" && words[x + 3] == "work")
        {
            string* temp = new string[4];
            temp[0] = words[x];
            temp[1] = words[x + 1];
            temp[2] = words[x + 2];
            temp[3] = words[x + 3];
            return temp;
        }
        if (words[x] == "he" && words[x + 1] == "does" && words[x + 2] == "not" && words[x + 3] == "like")
        {
            string* temp = new string[4];
            temp[0] = words[x];
            temp[1] = words[x + 1];
            temp[2] = words[x + 2];
            temp[3] = words[x + 3];
            return temp;
        }
        if (words[x] == "he" && words[x + 1] == "does" && words[x + 2] == "not" && words[x + 3] == "do")
        {
            string* temp = new string[4];
            temp[0] = words[x];
            temp[1] = words[x + 1];
            temp[2] = words[x + 2];
            temp[3] = words[x + 3];
            return temp;
        }
        if (words[x] == "he" && words[x + 1] == "does" && words[x + 2] == "not" && words[x + 3] == "have")
        {
            string* temp = new string[4];
            temp[0] = words[x];
            temp[1] = words[x + 1];
            temp[2] = words[x + 2];
            temp[3] = words[x + 3];
            return temp;
        }
        if (words[x] == "she" && words[x + 1] == "does" && words[x + 2] == "not")
        {
            string* temp = new string[3];
            temp[0] = words[x];
            temp[1] = words[x + 1];
            temp[2] = words[x + 2];
            return temp;
        }
        if (words[x] == "she" && words[x + 1] == "does" && words[x + 2] == "not" && words[x + 3] == "work")
        {
            string* temp = new string[4];
            temp[0] = words[x];
            temp[1] = words[x + 1];
            temp[2] = words[x + 2];
            temp[3] = words[x + 3];
            return temp;
        }
        if (words[x] == "she" && words[x + 1] == "does" && words[x + 2] == "not" && words[x + 3] == "like")
        {
            string* temp = new string[4];
            temp[0] = words[x];
            temp[1] = words[x + 1];
            temp[2] = words[x + 2];
            temp[3] = words[x + 3];
            return temp;
        }
        if (words[x] == "she" && words[x + 1] == "does" && words[x + 2] == "not" && words[x + 3] == "do")
        {
            string* temp = new string[4];
            temp[0] = words[x];
            temp[1] = words[x + 1];
            temp[2] = words[x + 2];
            temp[3] = words[x + 3];
            return temp;
        }
        if (words[x] == "she" && words[x + 1] == "does" && words[x + 2] == "not" && words[x + 3] == "have")
        {
            string* temp = new string[4];
            temp[0] = words[x];
            temp[1] = words[x + 1];
            temp[2] = words[x + 2];
            temp[3] = words[x + 3];
            return temp;
        }
        if (words[x] == "it" && words[x + 1] == "does" && words[x + 2] == "not")
        {
            string* temp = new string[3];
            temp[0] = words[x];
            temp[1] = words[x + 1];
            temp[2] = words[x + 2];
            return temp;
        }
        if (words[x] == "it" && words[x + 1] == "does" && words[x + 2] == "not" && words[x + 3] == "work")
        {
            string* temp = new string[4];
            temp[0] = words[x];
            temp[1] = words[x + 1];
            temp[2] = words[x + 2];
            temp[3] = words[x + 3];
            return temp;
        }
        if (words[x] == "it" && words[x + 1] == "does" && words[x + 2] == "not" && words[x + 3] == "like")
        {
            string* temp = new string[4];
            temp[0] = words[x];
            temp[1] = words[x + 1];
            temp[2] = words[x + 2];
            temp[3] = words[x + 3];
            return temp;
        }
        if (words[x] == "it" && words[x + 1] == "does" && words[x + 2] == "not" && words[x + 3] == "do")
        {
            string* temp = new string[4];
            temp[0] = words[x];
            temp[1] = words[x + 1];
            temp[2] = words[x + 2];
            temp[3] = words[x + 3];
            return temp;
        }
        if (words[x] == "it" && words[x + 1] == "does" && words[x + 2] == "not" && words[x + 3] == "have")
        {
            string* temp = new string[4];
            temp[0] = words[x];
            temp[1] = words[x + 1];
            temp[2] = words[x + 2];
            temp[3] = words[x + 3];
            return temp;
        }
    }
}

bool _NLP::isPresentSimpleNegative(string* words)
{
    words = _Utilities::toLowerWordsArr(words);

    for (int x = 0; x <= sizeof(words); x++)
    {
        if (words[x] == "i" && words[x + 1] == "do" && words[x + 2] == "not")
        {
            return true;
        }
        if (words[x] == "i" && words[x + 1] == "do" && words[x + 2] == "not" && words[x + 3] == "work")
        {
            return true;
        }
        if (words[x] == "i" && words[x + 1] == "do" && words[x + 2] == "not" && words[x + 3] == "like")
        {
            return true;
        }
        if (words[x] == "i" && words[x + 1] == "do" && words[x + 2] == "not" && words[x + 3] == "do")
        {
            return true;
        }
        if (words[x] == "i" && words[x + 1] == "do" && words[x + 2] == "not" && words[x + 3] == "have")
        {
            return true;
        }
        if (words[x] == "we" && words[x + 1] == "do" && words[x + 2] == "not")
        {
            return true;
        }
        if (words[x] == "we" && words[x + 1] == "do" && words[x + 2] == "not" && words[x + 3] == "work")
        {
            return true;
        }
        if (words[x] == "we" && words[x + 1] == "do" && words[x + 2] == "not" && words[x + 3] == "like")
        {
            return true;
        }
        if (words[x] == "we" && words[x + 1] == "do" && words[x + 2] == "not" && words[x + 3] == "do")
        {
            return true;
        }
        if (words[x] == "we" && words[x + 1] == "do" && words[x + 2] == "not" && words[x + 3] == "have")
        {
            return true;
        }
        if (words[x] == "you" && words[x + 1] == "do" && words[x + 2] == "not")
        {
            return true;
        }
        if (words[x] == "you" && words[x + 1] == "do" && words[x + 2] == "not" && words[x + 3] == "work")
        {
            return true;
        }
        if (words[x] == "you" && words[x + 1] == "do" && words[x + 2] == "not" && words[x + 3] == "like")
        {
            return true;
        }
        if (words[x] == "you" && words[x + 1] == "do" && words[x + 2] == "not" && words[x + 3] == "do")
        {
            return true;
        }
        if (words[x] == "you" && words[x + 1] == "do" && words[x + 2] == "not" && words[x + 3] == "have")
        {
            return true;
        }
        if (words[x] == "they" && words[x + 1] == "do" && words[x + 2] == "not")
        {
            return true;
        }
        if (words[x] == "they" && words[x + 1] == "do" && words[x + 2] == "not" && words[x + 3] == "work")
        {
            return true;
        }
        if (words[x] == "they" && words[x + 1] == "do" && words[x + 2] == "not" && words[x + 3] == "like")
        {
            return true;
        }
        if (words[x] == "they" && words[x + 1] == "do" && words[x + 2] == "not" && words[x + 3] == "do")
        {
            return true;
        }
        if (words[x] == "they" && words[x + 1] == "do" && words[x + 2] == "not" && words[x + 3] == "have")
        {
            return true;
        }
        if (words[x] == "he" && words[x + 1] == "does" && words[x + 2] == "not")
        {
            return true;
        }
        if (words[x] == "he" && words[x + 1] == "does" && words[x + 2] == "not" && words[x + 3] == "work")
        {
            return true;
        }
        if (words[x] == "he" && words[x + 1] == "does" && words[x + 2] == "not" && words[x + 3] == "like")
        {
            return true;
        }
        if (words[x] == "he" && words[x + 1] == "does" && words[x + 2] == "not" && words[x + 3] == "do")
        {
            return true;
        }
        if (words[x] == "he" && words[x + 1] == "does" && words[x + 2] == "not" && words[x + 3] == "have")
        {
            return true;
        }
        if (words[x] == "she" && words[x + 1] == "does" && words[x + 2] == "not")
        {
            return true;
        }
        if (words[x] == "she" && words[x + 1] == "does" && words[x + 2] == "not" && words[x + 3] == "work")
        {
            return true;
        }
        if (words[x] == "she" && words[x + 1] == "does" && words[x + 2] == "not" && words[x + 3] == "like")
        {
            return true;
        }
        if (words[x] == "she" && words[x + 1] == "does" && words[x + 2] == "not" && words[x + 3] == "do")
        {
            return true;
        }
        if (words[x] == "she" && words[x + 1] == "does" && words[x + 2] == "not" && words[x + 3] == "have")
        {
            return true;
        }
        if (words[x] == "it" && words[x + 1] == "does" && words[x + 2] == "not")
        {
            return true;
        }
        if (words[x] == "it" && words[x + 1] == "does" && words[x + 2] == "not" && words[x + 3] == "work")
        {
            return true;
        }
        if (words[x] == "it" && words[x + 1] == "does" && words[x + 2] == "not" && words[x + 3] == "like")
        {
            return true;
        }
        if (words[x] == "it" && words[x + 1] == "does" && words[x + 2] == "not" && words[x + 3] == "do")
        {
            return true;
        }
        if (words[x] == "it" && words[x + 1] == "does" && words[x + 2] == "not" && words[x + 3] == "have")
        {
            return true;
        }
    }

    return false;
}

string* _NLP::getPresentContinuousQuestions(string* words)
{
    words = _Utilities::toLowerWordsArr(words);

    for (int x = 0; x <= sizeof(words); x++)
    {
        if (words[x] == "no" && words[x + 1] == "i" && words[x + 2] == "am" && words[x + 3] == "not")
        {
            string* temp = new string[4];
            temp[0] = words[x];
            temp[1] = words[x + 1];
            temp[2] = words[x + 2];
            temp[3] = words[x + 3];
            return temp;
        }
        if (words[x] == "no" && words[x + 1] == "i'm" && words[x + 2] == "not")
        {
            string* temp = new string[3];
            temp[0] = words[x];
            temp[1] = words[x + 1];
            temp[2] = words[x + 2];
            return temp;
        }
        if (words[x] == "no" && words[x + 1] == "he" && words[x + 2] == "is" && words[x + 3] == "not")
        {
            string* temp = new string[4];
            temp[0] = words[x];
            temp[1] = words[x + 1];
            temp[2] = words[x + 2];
            temp[3] = words[x + 3];
            return temp;
        }
        if (words[x] == "no" && words[x + 1] == "he's" && words[x + 2] == "not")
        {
            string* temp = new string[3];
            temp[0] = words[x];
            temp[1] = words[x + 1];
            temp[2] = words[x + 2];
            return temp;
        }
        if (words[x] == "no" && words[x + 1] == "she" && words[x + 2] == "is" && words[x + 3] == "not")
        {
            string* temp = new string[4];
            temp[0] = words[x];
            temp[1] = words[x + 1];
            temp[2] = words[x + 2];
            temp[3] = words[x + 3];
            return temp;
        }
        if (words[x] == "no" && words[x + 1] == "she's" && words[x + 2] == "not")
        {
            string* temp = new string[3];
            temp[0] = words[x];
            temp[1] = words[x + 1];
            temp[2] = words[x + 2];
            return temp;
        }
        if (words[x] == "no" && words[x + 1] == "it" && words[x + 2] == "is" && words[x + 3] == "not")
        {
            string* temp = new string[4];
            temp[0] = words[x];
            temp[1] = words[x + 1];
            temp[2] = words[x + 2];
            temp[3] = words[x + 3];
            return temp;
        }
        if (words[x] == "no" && words[x + 1] == "it's" && words[x + 2] == "not")
        {
            string* temp = new string[3];
            temp[0] = words[x];
            temp[1] = words[x + 1];
            temp[2] = words[x + 2];
            return temp;
        }
        if (words[x] == "no" && words[x + 1] == "we" && words[x + 2] == "are" && words[x + 3] == "not")
        {
            string* temp = new string[4];
            temp[0] = words[x];
            temp[1] = words[x + 1];
            temp[2] = words[x + 2];
            temp[3] = words[x + 3];
            return temp;
        }
        if (words[x] == "no" && words[x + 1] == "we're" && words[x + 2] == "not")
        {
            string* temp = new string[3];
            temp[0] = words[x];
            temp[1] = words[x + 1];
            return temp;
        }
        if (words[x] == "no" && words[x + 1] == "you" && words[x + 2] == "are" && words[x + 3] == "not")
        {
            string* temp = new string[4];
            temp[0] = words[x];
            temp[1] = words[x + 1];
            temp[2] = words[x + 2];
            temp[3] = words[x + 3];
            return temp;
        }
        if (words[x] == "no" && words[x + 1] == "you're" && words[x + 2] == "not")
        {
            string* temp = new string[3];
            temp[0] = words[x];
            temp[1] = words[x + 1];
            temp[2] = words[x + 2];
            return temp;
        }
        if (words[x] == "no" && words[x + 1] == "they're" && words[x + 2] == "not")
        {
            string* temp = new string[3];
            temp[0] = words[x];
            temp[1] = words[x + 1];
            temp[2] = words[x + 2];
            return temp;
        }
        if (words[x] == "no" && words[x + 1] == "they" && words[x + 2] == "are" && words[x + 3] == "not")
        {
            string* temp = new string[4];
            temp[0] = words[x];
            temp[1] = words[x + 1];
            temp[2] = words[x + 2];
            temp[3] = words[x + 3];
            return temp;
        }
    }
}

bool _NLP::isPresentContinuousQuestions(string* words)
{
    words = _Utilities::toLowerWordsArr(words);

    for (int x = 0; x <= sizeof(words); x++)
    {
        if (words[x] == "no" && words[x + 1] == "i" && words[x + 2] == "am" && words[x + 3] == "not")
        {
            return true;
        }
        if (words[x] == "no" && words[x + 1] == "i'm" && words[x + 2] == "not")
        {
            return true;
        }
        if (words[x] == "no" && words[x + 1] == "he" && words[x + 2] == "is" && words[x + 3] == "not")
        {
            return true;
        }
        if (words[x] == "no" && words[x + 1] == "he's" && words[x + 2] == "not")
        {
            return true;
        }
        if (words[x] == "no" && words[x + 1] == "she" && words[x + 2] == "is" && words[x + 3] == "not")
        {
            return true;
        }
        if (words[x] == "no" && words[x + 1] == "she's" && words[x + 2] == "not")
        {
            return true;
        }
        if (words[x] == "no" && words[x + 1] == "it" && words[x + 2] == "is" && words[x + 3] == "not")
        {
            return true;
        }
        if (words[x] == "no" && words[x + 1] == "it's" && words[x + 2] == "not")
        {
            return true;
        }
        if (words[x] == "no" && words[x + 1] == "we" && words[x + 2] == "are" && words[x + 3] == "not")
        {
            return true;
        }
        if (words[x] == "no" && words[x + 1] == "we're" && words[x + 2] == "not")
        {
            return true;
        }
        if (words[x] == "no" && words[x + 1] == "you" && words[x + 2] == "are" && words[x + 3] == "not")
        {
            return true;
        }
        if (words[x] == "no" && words[x + 1] == "you're" && words[x + 2] == "not")
        {
            return true;
        }
        if (words[x] == "no" && words[x + 1] == "they're" && words[x + 2] == "not")
        {
            return true;
        }
        if (words[x] == "no" && words[x + 1] == "they" && words[x + 2] == "are" && words[x + 3] == "not")
        {
            return true;
        }
    }

    return false;
}

string* _NLP::getPresentHaveGotStatements(string* words)
{
    words = _Utilities::toLowerWordsArr(words);

    for (int x = 0; x <= sizeof(words); x++)
    {
        if (words[x] == "i" && words[x + 1] == "have" && words[x + 2] == "got")
        {
            string* temp = new string[3];
            temp[0] = words[x];
            temp[1] = words[x + 1];
            temp[2] = words[x + 2];
            return temp;
        }
        if (words[x] == "we" && words[x + 1] == "have" && words[x + 2] == "got")
        {
            string* temp = new string[3];
            temp[0] = words[x];
            temp[1] = words[x + 1];
            temp[2] = words[x + 2];
            return temp;
        }
        if (words[x] == "you" && words[x + 1] == "have" && words[x + 2] == "got")
        {
            string* temp = new string[3];
            temp[0] = words[x];
            temp[1] = words[x + 1];
            temp[2] = words[x + 2];
            return temp;
        }
        if (words[x] == "they" && words[x + 1] == "have" && words[x + 2] == "got")
        {
            string* temp = new string[3];
            temp[0] = words[x];
            temp[1] = words[x + 1];
            temp[2] = words[x + 2];
            return temp;
        }
        if (words[x] == "he" && words[x + 1] == "has" && words[x + 2] == "got")
        {
            string* temp = new string[3];
            temp[0] = words[x];
            temp[1] = words[x + 1];
            temp[2] = words[x + 2];
            return temp;
        }
        if (words[x] == "she" && words[x + 1] == "has" && words[x + 2] == "got")
        {
            string* temp = new string[3];
            temp[0] = words[x];
            temp[1] = words[x + 1];
            temp[2] = words[x + 2];
            return temp;
        }
        if (words[x] == "it" && words[x + 1] == "has" && words[x + 2] == "got")
        {
            string* temp = new string[3];
            temp[0] = words[x];
            temp[1] = words[x + 1];
            temp[2] = words[x + 2];
            return temp;
        }
    }
}

bool _NLP::isHaveGotStatement(string* words)
{
    words = _Utilities::toLowerWordsArr(words);

    for (int x = 0; x <= sizeof(words); x++)
    {
        if (words[x] == "i" && words[x + 1] == "have" && words[x + 2] == "got")
        {
            return true;
        }
        if (words[x] == "we" && words[x + 1] == "have" && words[x + 2] == "got")
        {
            return true;
        }
        if (words[x] == "you" && words[x + 1] == "have" && words[x + 2] == "got")
        {
            return true;
        }
        if (words[x] == "they" && words[x + 1] == "have" && words[x + 2] == "got")
        {
            return true;
        }
        if (words[x] == "he" && words[x + 1] == "has" && words[x + 2] == "got")
        {
            return true;
        }
        if (words[x] == "she" && words[x + 1] == "has" && words[x + 2] == "got")
        {
            return true;
        }
        if (words[x] == "it" && words[x + 1] == "has" && words[x + 2] == "got")
        {
            return true;
        }
    }

    return false;
}

string* _NLP::getPresentHaveStatements(string* words)
{
    words = _Utilities::toLowerWordsArr(words);

    for (int x = 0; x <= sizeof(words); x++)
    {
        if (words[x] == "i" && words[x + 1] == "have")
        {
            string* temp = new string[2];
            temp[0] = words[x];
            temp[1] = words[x + 1];
            return temp;
        }
        if (words[x] == "we" && words[x + 1] == "have")
        {
            string* temp = new string[2];
            temp[0] = words[x];
            temp[1] = words[x + 1];
            return temp;
        }
        if (words[x] == "you" && words[x + 1] == "have")
        {
            string* temp = new string[2];
            temp[0] = words[x];
            temp[1] = words[x + 1];
            return temp;
        }
        if (words[x] == "they" && words[x + 1] == "have")
        {
            string* temp = new string[2];
            temp[0] = words[x];
            temp[1] = words[x + 1];
            return temp;
        }
        if (words[x] == "he" && words[x + 1] == "has")
        {
            string* temp = new string[2];
            temp[0] = words[x];
            temp[1] = words[x + 1];
            return temp;
        }
        if (words[x] == "she" && words[x + 1] == "has")
        {
            string* temp = new string[2];
            temp[0] = words[x];
            temp[1] = words[x + 1];
            return temp;
        }
        if (words[x] == "it" && words[x + 1] == "has")
        {
            string* temp = new string[2];
            temp[0] = words[x];
            temp[1] = words[x + 1];
            return temp;
        }
    }
}

//bool _NLP::isPresentContinuousQuestions(string* words)
//{
//    words = _Utilities::toLowerWordsArr(words);
//
//    for (int x = 0; x <= sizeof(words); x++)
//    {
//        if (words[x] == "no" && words[x + 1] == "i" && words[x + 2] == "am" && words[x + 3] == "not")
//        {
//            return true;
//        }
//        if (words[x] == "no" && words[x + 1] == "i'm" && words[x + 2] == "not")
//        {
//            return true;
//        }
//        if (words[x] == "no" && words[x + 1] == "he" && words[x + 2] == "is" && words[x + 3] == "not")
//        {
//            return true;
//        }
//        if (words[x] == "no" && words[x + 1] == "he's" && words[x + 2] == "not")
//        {
//            return true;
//        }
//        if (words[x] == "no" && words[x + 1] == "she" && words[x + 2] == "is" && words[x + 3] == "not")
//        {
//            return true;
//        }
//        if (words[x] == "no" && words[x + 1] == "she's" && words[x + 2] == "not")
//        {
//            return true;
//        }
//        if (words[x] == "no" && words[x + 1] == "it" && words[x + 2] == "is" && words[x + 3] == "not")
//        {
//            return true;
//        }
//        if (words[x] == "no" && words[x + 1] == "it's" && words[x + 2] == "not")
//        {
//            return true;
//        }
//        if (words[x] == "no" && words[x + 1] == "we" && words[x + 2] == "are" && words[x + 3] == "not")
//        {
//            return true;
//        }
//        if (words[x] == "no" && words[x + 1] == "we're" && words[x + 2] == "not")
//        {
//            return true;
//        }
//        if (words[x] == "no" && words[x + 1] == "you" && words[x + 2] == "are" && words[x + 3] == "not")
//        {
//            return true;
//        }
//        if (words[x] == "no" && words[x + 1] == "you're" && words[x + 2] == "not")
//        {
//            return true;
//        }
//        if (words[x] == "no" && words[x + 1] == "they're" && words[x + 2] == "not")
//        {
//            return true;
//        }
//        if (words[x] == "no" && words[x + 1] == "they" && words[x + 2] == "are" && words[x + 3] == "not")
//        {
//            return true;
//        }
//    }
//
//    return false;
//}

string* _NLP::getPresentContinuousQuestionsYes(string* words)
{
    words = _Utilities::toLowerWordsArr(words);

    for (int x = 0; x <= sizeof(words); x++)
    {
        if (words[x] == "yes" && words[x + 1] == "i" && words[x + 2] == "am")
        {
            string* temp = new string[3];
            temp[0] = words[x];
            temp[1] = words[x + 1];
            temp[2] = words[x + 2];
            temp[3] = words[x + 3];
            return temp;
        }
        if (words[x] == "yes" && words[x + 1] == "he" && words[x + 2] == "is")
        {
            string* temp = new string[3];
            temp[0] = words[x];
            temp[1] = words[x + 1];
            temp[2] = words[x + 2];
            temp[3] = words[x + 3];
            return temp;
        }
        if (words[x] == "yes" && words[x + 1] == "she" && words[x + 2] == "is")
        {
            string* temp = new string[3];
            temp[0] = words[x];
            temp[1] = words[x + 1];
            temp[2] = words[x + 2];
            temp[3] = words[x + 3];
            return temp;
        }
        if (words[x] == "yes" && words[x + 1] == "it" && words[x + 2] == "is")
        {
            string* temp = new string[3];
            temp[0] = words[x];
            temp[1] = words[x + 1];
            temp[2] = words[x + 2];
            temp[3] = words[x + 3];
            return temp;
        }
        if (words[x] == "yes" && words[x + 1] == "we" && words[x + 2] == "are")
        {
            string* temp = new string[3];
            temp[0] = words[x];
            temp[1] = words[x + 1];
            temp[2] = words[x + 2];
            temp[3] = words[x + 3];
            return temp;
        }
        if (words[x] == "yes" && words[x + 1] == "you" && words[x + 2] == "are")
        {
            string* temp = new string[3];
            temp[0] = words[x];
            temp[1] = words[x + 1];
            temp[2] = words[x + 2];
            temp[3] = words[x + 3];
            return temp;
        }
        if (words[x] == "yes" && words[x + 1] == "they" && words[x + 2] == "are")
        {
            string* temp = new string[3];
            temp[0] = words[x];
            temp[1] = words[x + 1];
            temp[2] = words[x + 2];
            temp[3] = words[x + 3];
            return temp;
        }
    }
}

bool _NLP::isPresentContinuousQuestionsYes(string* words)
{
    words = _Utilities::toLowerWordsArr(words);

    for (int x = 0; x <= sizeof(words); x++)
    {
        if (words[x] == "yes" && words[x + 1] == "i" && words[x + 2] == "am")
        {
            return true;
        }
        if (words[x] == "yes" && words[x + 1] == "he" && words[x + 2] == "is")
        {
            return true;
        }
        if (words[x] == "yes" && words[x + 1] == "she" && words[x + 2] == "is")
        {
            return true;
        }
        if (words[x] == "yes" && words[x + 1] == "it" && words[x + 2] == "is")
        {
            return true;
        }
        if (words[x] == "yes" && words[x + 1] == "we" && words[x + 2] == "are")
        {
            return true;
        }
        if (words[x] == "yes" && words[x + 1] == "you" && words[x + 2] == "are")
        {
            return true;
        }
        if (words[x] == "yes" && words[x + 1] == "they" && words[x + 2] == "are")
        {
            return true;
        }
    }
}

bool _NLP::isPresentSimplePositive(string* words)
{
    words = _Utilities::toLowerWordsArr(words);

    for (int x = 0; x <= sizeof(words); x++)
    {
        if (words[x] == "i" && words[x + 1] == "work")
        {
            return true;
        }
        if (words[x] == "i" && words[x + 1] == "like")
        {
            return true;
        }
        if (words[x] == "i" && words[x + 1] == "do")
        {
            return true;
        }
        if (words[x] == "i" && words[x + 1] == "have")
        {
            return true;
        }
        if (words[x] == "we" && words[x + 1] == "work")
        {
            return true;
        }
        if (words[x] == "we" && words[x + 1] == "like")
        {
            return true;
        }
        if (words[x] == "we" && words[x + 1] == "do")
        {
            return true;
        }
        if (words[x] == "we" && words[x + 1] == "have")
        {
            return true;
        }
        if (words[x] == "you" && words[x + 1] == "work")
        {
            return true;
        }
        if (words[x] == "you" && words[x + 1] == "like")
        {
            return true;
        }
        if (words[x] == "you" && words[x + 1] == "do")
        {
            return true;
        }
        if (words[x] == "you" && words[x + 1] == "have")
        {
            return true;
        }
        if (words[x] == "they" && words[x + 1] == "work")
        {
            return true;
        }
        if (words[x] == "they" && words[x + 1] == "like")
        {
            return true;
        }
        if (words[x] == "they" && words[x + 1] == "do")
        {
            return true;
        }
        if (words[x] == "they" && words[x + 1] == "have")
        {
            return true;
        }
        if (words[x] == "they" && words[x + 1] == "have")
        {
            return true;
        }
        if (words[x] == "they" && words[x + 1] == "have")
        {
            return true;
        }
        if (words[x] == "he" && words[x + 1] == "works")
        {
            return true;
        }
        if (words[x] == "he" && words[x + 1] == "likes")
        {
            return true;
        }
        if (words[x] == "he" && words[x + 1] == "does")
        {
            return true;
        }
        if (words[x] == "he" && words[x + 1] == "has")
        {
            return true;
        }
        if (words[x] == "she" && words[x + 1] == "works")
        {
            return true;
        }
        if (words[x] == "she" && words[x + 1] == "likes")
        {
            return true;
        }
        if (words[x] == "she" && words[x + 1] == "does")
        {
            return true;
        }
        if (words[x] == "she" && words[x + 1] == "has")
        {
            return true;
        }
        if (words[x] == "it" && words[x + 1] == "works")
        {
            return true;
        }
        if (words[x] == "it" && words[x + 1] == "likes")
        {
            return true;
        }
        if (words[x] == "it" && words[x + 1] == "does")
        {
            return true;
        }
        if (words[x] == "it" && words[x + 1] == "has")
        {
            return true;
        }
    }
    return false;
}

string* _NLP::QueryDatabaseWordTypes(string word)
{
    MYSQL* conn = nullptr;
    MYSQL_ROW row;
    MYSQL_RES* result1;
    string mysql_database = "dictionary";
    //string mysql_username = "root";
    //string mysql_password = "Anaheim92801%";
    string sql1;
    string tableName = "entries";
    string* wordtypes = new string[10];
    int count = 0;

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        sql1 = "SELECT * FROM ";
        sql1 += tableName;
        /*cout << "SQL1: " << sql1 << endl;*/
        mysql_query(conn, sql1.c_str());
        result1 = mysql_store_result(conn);

        while (row = mysql_fetch_row(result1))
        {
            if (row[0] == word)
            {
                // Check if the current interation is a punctuation charcter, get the name of the punctuation
                for (int x = 0; x <= sizeof(wordtypes); x++)
                {
                    if (wordtypes[x] == "")
                    {
                        wordtypes[x] = row[1];
                    }
                }
            }
        }
    }
    mysql_close(conn);
    return wordtypes;
}

string* _NLP::QueryDatabaseDefinitions(string word, string* wordTypes)
{
    MYSQL* conn = nullptr;
    MYSQL_ROW row;
    MYSQL_RES* result1;
    string mysql_database = "dictionary";
    //string mysql_username = "root";
    //string mysql_password = "Anaheim92801%";
    string sql1;
    string tableName = "entries";
    string* definitions = new string[20];
    string temp;
    string temp2;

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        sql1 = "SELECT * FROM ";
        sql1 += tableName;
        /*cout << "SQL1: " << sql1 << endl;*/
        mysql_query(conn, sql1.c_str());
        result1 = mysql_store_result(conn);

        while (row = mysql_fetch_row(result1))
        {
            if (row[0] == word)
            {
                // Check if the current word type is included in the array. If yes, get the definition for the word type.
                for (int y = 0; y <= sizeof(wordTypes); y++)
                {
                    if (wordTypes[y] == row[1])
                    {
                        // Find empty space in rows
                        for (int x = 0; x <= sizeof(definitions); x++)
                        {
                            if (definitions[x] != "")
                            {
                                definitions[x] = row[2];
                            }
                        }
                    }
                }
            }
        }
    }
    mysql_close(conn);
    return definitions;
}

// 1. Call with a word and return all word types and definitions
//__global__ void wordSearchTypesDefinitions(string database, string table, string word, int num_rows, char* word_types, char* definitions)
//{
//    MYSQL* conn = nullptr;
//    MYSQL_ROW row;
//    MYSQL_RES* result;
//    string query;
//    string temp_string;
//    bool booleans;
//    int limit_a;
//    int limit_b;
//    int rows_blocks = 86;
//    int word_type_count = 0;
//
//    string mysql_database = "dictionary";
//    string mysql_username = "root";
//    string mysql_password = "Anaheim92801%";
//
//    conn = mysql_init(0);
//    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), database.c_str(), 3306, NULL, 0);
//
//    // Get the total number of rows and solve for the lower limit thread of the number of blocks
//    int limit_a = count * rows_blocks;
//    int limit_b = limit_a + rows_blocks;
//
//    query = "SELECT * FROM ";
//    query += table;
//    query += " LIMIT ";
//    query += limit_a;
//    query += ", ";
//    query += limit_b;
//
//    mysql_query(conn, query.c_str());
//
//    if (conn)
//    {
//        while (row = mysql_fetch_row(result))
//        {
//            if (row[0] == word)
//            {
//                word_type += row[1];
//                word_type += "|";
//
//                definitions += row[2];
//                definitions += "|";
//            }
//        }
//        __syncthreads();
//    }
//}

//// 2. Call with a word and word type and return all definitions of the type
//__global__ void wordSearchOneTypeDefinitions(string database, string table, string word, char* word_type, int num_rows, char* definitions)
//{
//    MYSQL* conn = nullptr;
//    MYSQL_ROW row;
//    MYSQL_RES* result;
//    string query;
//    string subject;
//    string temp_string;
//    bool booleans;
//    int limit_a;
//    int limit_b;
//    int rows_blocks = 86;
//
//    string mysql_database = "dictionary";
//    string mysql_username = "root";
//    string mysql_password = "Anaheim92801%";
//
//    conn = mysql_init(0);
//    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), database.c_str(), 3306, NULL, 0);
//
//    // Get the total number of rows and solve for the lower limit thread of the number of blocks
//    int limit_a = count * rows_blocks;
//    int limit_b = limit_a + rows_blocks;
//
//    query = "SELECT * FROM ";
//    query += table;
//    query += " LIMIT ";
//    query += limit_a;
//    query += ", ";
//    query += limit_b;
//
//    mysql_query(conn, query.c_str());
//
//    if (conn)
//    {
//        while (row = mysql_fetch_row(result))
//        {
//            if (row[0] == word && row[1] == word_type)
//            {
//                definition += row[2];
//                definition += "|";
//            }
//        }
//        __syncthreads();
//    }
//}
//
//// 3. Call the definition of the word and return the word and word type
//__global__ void wordSearchDefinitionWord(string database, string table, string definition, int num_rows, char* word, char* word_type)
//{
//    MYSQL* conn = nullptr;
//    MYSQL_ROW row;
//    MYSQL_RES* result;
//    string query;
//    string subject;
//    string temp_string;
//    bool booleans;
//    int limit_a;
//    int limit_b;
//    int rows_blocks = 86;
//
//    string mysql_database = "dictionary";
//    string mysql_username = "root";
//    string mysql_password = "Anaheim92801%";
//
//    conn = mysql_init(0);
//    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), database.c_str(), 3306, NULL, 0);
//
//    // Get the total number of rows and solve for the lower limit thread of the number of blocks
//    int limit_a = count * rows_blocks;
//    int limit_b = limit_a + rows_blocks;
//
//    query = "SELECT * FROM ";
//    query += table;
//    query += " LIMIT ";
//    query += limit_a;
//    query += ", ";
//    query += limit_b;
//
//    mysql_query(conn, query.c_str());
//
//    if (conn)
//    {
//        while (row = mysql_fetch_row(result))
//        {
//            if (row[0] == words[0] && row[1] == word_type)
//            {
//                definition += row[2];
//                definition += "|";
//            }
//        }
//        __syncthreads();
//    }
//}
//
//// 4. Call to return all definitions and word types for every word in a sentence
//__global__ void wordSearch(string database, string table, string word, string word_type, int num_rows, char* definitions)
//{
//    MYSQL* conn = nullptr;
//    MYSQL_ROW row;
//    MYSQL_RES* result;
//    string query;
//    string subject;
//    string temp_string;
//    bool booleans;
//    int limit_a;
//    int limit_b;
//    int rows_blocks = 86;
//
//    string mysql_database = "dictionary";
//    string mysql_username = "root";
//    string mysql_password = "Anaheim92801%";
//
//    conn = mysql_init(0);
//    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);
//
//    // Get the total number of rows and solve for the lower limit thread of the number of blocks
//    int limit_a = count * rows_blocks;
//    int limit_b = limit_a + rows_blocks;
//
//    query = "SELECT * FROM ";
//    query += table;
//    query += " LIMIT ";
//    query += limit_a;
//    query += ", ";
//    query += limit_b;
//
//    mysql_query(conn, query.c_str());
//
//    if (conn)
//    {
//        while (row = mysql_fetch_row(result))
//        {
//            if (row[0] == words[0] && row[1] == word_type)
//            {
//                definition += row[2];
//                definition += "|";
//            }
//        }
//        __syncthreads();
//    }
//}

// Syntax
// 1. Complements
//      a. Objects
//      b. Direct Objects
//      c. Indirect Objects
//      d. Objects of Preposition
//      e. Object Complements
//      f. Nouns and Noun Phrases
//      g. Adjectives and Adjective Phrases
//      h. Relative Clauses
//      i. Infinitives and Infinitive Phrases
//      j. Gerunds and Gerund Phrases
// 2. Adjective Complements
//      a. Prepositional Phrases
//      b. Infinitives and Infinitive Phrases
//      c. Noun Clauses
// 3. Adverbial Complement
// 4. Subject Complements
//      a. Predicate Nouns
//      b. Predicate pronouns
//          i. Predicative Adjectives

// 5. Call to search for the subject of a given sentence
//__global__ void wordSearchSubject(string database, string table, string* words[], string word_type, string subject_template, int num_rows, char* temp)
//{
//    MYSQL* conn = nullptr;
//    MYSQL_ROW row;
//    MYSQL_RES* result;
//    string query;
//    string subject;
//    string temp_string;
//    bool booleans[10];
//    int limit_a;
//    int limit_b;
//    int rows_blocks = 86;
//
//    string mysql_username = "root";
//    string mysql_password = "Anaheim92801%";
//
//    conn = mysql_init(0);
//    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), database.c_str(), 3306, NULL, 0);
//
//    // Get the total number of rows and solve for the lower limit thread of the number of blocks
//    int limit_a = count * rows_blocks;
//    int limit_b = limit_a + rows_blocks;
//
//    query = "SELECT * FROM ";
//    query += table;
//    query += " LIMIT ";
//    query += limit_a;
//    query += ", ";
//    query += limit_b;
//
//    mysql_query(conn, query.c_str());
//
//    if (conn)
//    {
//        if (subject_template == "ARTICLE NOUN VERB")
//        {
//            // Check if the first word is an article and exists in the dictionary
//            while (row = mysql_fetch_row(result))
//            {
//                if (row[0] == words[0] && row[1] == "a.")
//                {
//                    booleans[0] = true;
//                    break;
//                }
//            }
//
//            // Check if the second word is a noun
//            while (row = mysql_fetch_row(result)))
//            {
//            if (row[0] == words[1] && row[1] == "n.")
//            {
//                booleans[1] = true;
//                break;
//            }
//            }
//
//            // Check if the third word is a verb
//            while (row = mysql_fetch_row(result)))
//            {
//            if (row[0] == words[2] && row[1] == "v. t.")
//            {
//                booleans[2] = true;
//                break;
//            }
//            }
//
//            if (booleans[0] && booleans[1] && boolens[2])
//            {
//                temp = "ARTICLE NOUN VERB";
//                return;
//            }
//
//            for (int x = 0; x < 3; x++)
//            {
//                booleans[x] = false;
//            }
//        }
//        if (subject_template == "NOUN VERB")
//        {
//            while (row = mysql_fetch_row(result))
//            {
//                if (row[0] == words[0] && row[1] == "n.")
//                {
//                    booleans[0] = true;
//                    break;
//                }
//            }
//
//            while (row = mysql_fetch_row(result)))
//            {
//            if (row[0] == words[1] && row[1] == "v. t.")
//            {
//                booleans[1] = true;
//                break;
//            }
//            }
//
//            if (booleans[0] && booleans[1])
//            {
//                temp = "NOUN VERB";
//                return;
//            }
//
//            for (int x = 0; x < 3; x++)
//            {
//                booleans[x] = false;
//            }
//        }
//        if (subject_template == "PREP_PHRASE NOUN VERB")
//        {
//            // Find a preposition
//            while (row = mysql_fetch_row(result))
//            {
//                if (row[0] == words[0] && row[1] == "prep.")
//                {
//                    booleans[0] = true;
//                    break;
//                }
//            }
//
//            int x;
//
//            // Find the first comma in the sentence
//            for (int x = 1; x < 100; x++)
//            {
//                string_temp = words[x];
//
//                for (int y = 0; y < words.length(); y++)
//                {
//                    if (string_temp[y] == ',')
//                    {
//                        booleans[1] = true;
//                    }
//                }
//            }
//
//            while (row = mysql_fetch_row(result))
//            {
//                if (row[0] == words[x + 1] && row[1] == "n.")
//                {
//                    booleans[2] = true;
//                    break;
//                }
//            }
//
//            while (row = mysql_fetch_row(result)))
//            {
//            if (row[0] == words[x + 2] && row[1] == "v. t.")
//            {
//                booleans[3] = true;
//                break;
//            }
//            }
//
//            if (booleans[0] && booleans[1] && booleans[2] && booleans[3])
//            {
//                temp = "PREP_PHRASE NOUN VERB";
//                return;
//            }
//        }
//        if (subject_template == "INDEPENDENT CLAUSE NOUN VERB")
//        {
//            int x;
//            // Find the first comma in the sentence
//            for (x = 0; x < 100; x++)
//            {
//                string_temp = words[x];
//
//                for (int y = 0; y < words.length(); y++)
//                {
//                    if (string_temp[y] == ',')
//                    {
//                        booleans[0] = true;
//                    }
//                }
//            }
//
//            while (row = mysql_fetch_row(result))
//            {
//                if (row[0] == words[x + 1] && row[1] == "n.")
//                {
//                    booleans[1] = true;
//                    break;
//                }
//            }
//
//            while (row = mysql_fetch_row(result)))
//            {
//            if (row[0] == words[x + 2] && row[1] == "a.")
//            {
//                booleans[2] = true;
//                break;
//            }
//            }
//
//            if (boolenas[0] && booleans[1] && booleans[2])
//            {
//                temp = "PREP_PHRASE NOUN VERB";
//                return;
//            }
//        }
//    }
//}

// 6. Call to search for the predicate of the sentence
//__global__ void wordSearchPredicate(string database, string table, string* words[], string word_type, int num_rows, char* temp)
//{
//    MYSQL* conn = nullptr;
//    MYSQL_ROW row;
//    MYSQL_RES* result;
//    string query;
//    string predicate;
//    string temp_string;
//    bool boolean;
//    bool booleans[10];
//    int limit_a;
//    int limit_b;
//    int rows_blocks = 86;
//
//    string mysql_username = "root";
//    string mysql_password = "Anaheim92801%";
//
//    conn = mysql_init(0);
//    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), database.c_str(), 3306, NULL, 0);
//
//    // Get the total number of rows and solve for the lower limit thread of the number of blocks
//    int limit_a = count * rows_blocks;
//    int limit_b = limit_a + rows_blocks;
//
//    query = "SELECT * FROM ";
//    query += table;
//    query += " LIMIT ";
//    query += limit_a;
//    query += ", ";
//    query += limit_b;
//
//    mysql_query(conn, query.c_str());
//
//    if (conn)
//    {
//        // Check if the first word is an article and exists in the dictionary
//        while (row = mysql_fetch_row(result))
//        {
//            for (int y = 0; y < 100; y++)
//            {
//                if (row[0] == words[y] && row[1] == "v. t.")
//                {
//                    booleans[0] = true;
//                    predicate = words[y];
//                    break;
//                }
//            }
//        }
//
//        for (int z = 0; z < 10; z++)
//        {
//            temp_string = words[z];
//
//            for (int a = 0; a < temp_string.length(); a++)
//            {
//                // Check for a string
//                if (temp_string[a] == '.' && !boolean)
//                {
//                    predicate += temp_string;
//                    return;
//                }
//                else if (temp_string[a] == ',')
//                {
//                    boolean = true;
//                }
//            }
//        }
//    }
//}