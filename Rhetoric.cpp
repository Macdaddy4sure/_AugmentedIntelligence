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
#include "Rhetoric.hpp"
#include "Large Language Models.hpp"
#include "Parsers.hpp"
#include "Utilities.hpp"

using namespace std;

string _Rhetoric::Terms::Accumulatio(string text)
{
    string model = "llama3";
    string definition = "the emphasis or summary of previously made points or inferences by excessive praise or accusation.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Accumulatio";
        }
    }

    return nullptr;
}

string _Rhetoric::Terms::Actio(string text)
{
    string model = "llama3";
    string definition = "canon #5 in Cicero\'s list of rhetorical canons; traditionally linked to oral rhetoric, referring to how a speech is given (including tone of voice and nonverbal gestures, among others).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Actio";
        }
    }

    return nullptr;
}

string _Rhetoric::Terms::AdHominem(string text)
{
    string model = "llama3";
    string definition = "rebutting an argument by attacking the character, motive, or other attribute of the person making it rather than the substance of the argument itself.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Ad Hominem";
        }
    }

    return nullptr;
}

string _Rhetoric::Terms::Adianoeta(string text)
{
    string model = "llama3";
    string definition = "a phrase carrying two meanings: an obvious meaning and a second, more subtle and ingenious one (more commonly known as double entendre).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Adianoeta";
        }
    }

    return nullptr;
}

string _Rhetoric::Terms::Alliteration(string text)
{
    string model = "llama3";
    string definition = "the use of a series of two or more words beginning with the same letter.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Alliteration";
        }
    }

    return nullptr;
}

string _Rhetoric::Terms::Amphiboly(string text)
{
    string model = "llama3";
    string definition = "a sentence that may be interpreted in more than one way due to ambiguous structure.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Amphiboly";
        }
    }

    return nullptr;
}

string _Rhetoric::Terms::Anacoenosis(string text)
{
    string model = "llama3";
    string definition = "a speaker asks his or her audience or opponents for their opinion or answer to the point in question.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Anacoenosis";
        }
    }

    return nullptr;
}

string _Rhetoric::Terms::Anadiplosis(string text)
{
    string model = "llama3";
    string definition = "repeating the last word of one clause or phrase to begin the next.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Anadiplosis";
        }
    }

    return nullptr;
}

string _Rhetoric::Terms::Analogy(string text)
{
    string model = "llama3";
    string definition = "the use of a similar or parallel case or example to reason or argue a point.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Analogy";
        }
    }

    return nullptr;
}

string _Rhetoric::Terms::Anaphora(string text)
{
    string model = "llama3";
    string definition = "a succession of sentences beginning with the same word or group of words.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Anaphora";
        }
    }

    return nullptr;
}

string _Rhetoric::Terms::Anastrophe(string text)
{
    string model = "llama3";
    string definition = "inversion of the natural word order.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Anastrophe";
        }
    }

    return nullptr;
}

string _Rhetoric::Terms::Antanaclasis(string text)
{
    string model = "llama3";
    string definition = "a figure of speech involving a pun, consisting of the repeated use of the same word, each time with different meanings.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Antanaclasis";
        }
    }

    return nullptr;
}

string _Rhetoric::Terms::Anticlimax(string text)
{
    string model = "llama3";
    string definition = "a bathetic collapse from an elevated subject to a mundane or vulgar one.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Anticlimax";
        }
    }

    return nullptr;
}

string _Rhetoric::Terms::Antimetabole(string text)
{
    string model = "llama3";
    string definition = "repetition of two words or short phrases, but in reversed order to establish a contrast. It is a specialized form of chiasmus.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Antimetabole";
        }
    }

    return nullptr;
}

string _Rhetoric::Terms::Antinomy(string text)
{
    string model = "llama3";
    string definition = "two ideas about the same topic that can be worked out to a logical conclusion, but the conclusions contradict each other.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Antinomy";
        }
    }

    return nullptr;
}

string _Rhetoric::Terms::Antiptosis(string text)
{
    string model = "llama3";
    string definition = "type of enallage in which one grammatical case is substituted for another.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Antiptosis";
        }
    }

    return nullptr;
}

string _Rhetoric::Terms::Antistrophe(string text)
{
    string model = "llama3";
    string definition = "repeating the last word in successive phrases, for example (from Rhetorica ad Herennium), \"Since the time when from our state concord disappeared, liberty disappeared, good faith disappeared, friendship disappeared, the common weal disappeared.\" Also see: epiphora.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Antistrophe";
        }
    }

    return nullptr;
}

string _Rhetoric::Terms::Antithesis(string text)
{
    string model = "llama3";
    string definition = "the juxtaposition of contrasting ideas in balanced or parallel words, phrases, or grammatical structures; the second stage of the dialectic process.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Antithesis";
        }
    }

    return nullptr;
}

string _Rhetoric::Terms::Antonomasia(string text)
{
    string model = "llama3";
    string definition = "the substitution of an epithet for a proper name.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Antonomasia";
        }
    }

    return nullptr;
}

string _Rhetoric::Terms::Apophasis(string text)
{
    string model = "llama3";
    string definition = "pretending to deny something as a means of implicitly affirming it; as paralipsis, mentioning something by saying that you will not mention it; the opposite of occupatio.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Apophasis";
        }
    }

    return nullptr;
}

string _Rhetoric::Terms::Aporia(string text)
{
    string model = "llama3";
    string definition = "a declaration of doubt, made for rhetorical purpose and often feigned.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Aporia";
        }
    }

    return nullptr;
}

string _Rhetoric::Terms::Aposiopesis(string text)
{
    string model = "llama3";
    string definition = "an abrupt stop in the middle of a sentence; used by a speaker to convey unwillingness or inability to complete a thought or statement.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Aposiopesis";
        }
    }

    return nullptr;
}

string _Rhetoric::Terms::Apostrophe(string text)
{
    string model = "llama3";
    string definition = "a figure of speech consisting of a sudden turn in a text towards an exclamatory address to an imaginary person or a thing.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Apostrophe";
        }
    }

    return nullptr;
}

string _Rhetoric::Terms::Arete(string text)
{
    string model = "llama3";
    string definition = "virtue, excellence of character, qualities that would be inherent in a \"natural leader\", a component of ethos.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Arete";
        }
    }

    return nullptr;
}

string _Rhetoric::Terms::Argument(string text)
{
    string model = "llama3";
    string definition = "discourse characterized by reasons advanced to support conclusions.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Argument";
        }
    }

    return nullptr;
}

string _Rhetoric::Terms::ArgumentumAdBaculum(string text)
{
    string model = "llama3";
    string definition = "Argumentum ad baculum (Latin for \"argument to the cudgel\" or \"appeal to the stick\") is the fallacy committed when one makes an appeal to force to bring about the acceptance of a conclusion. One participates in argumentum ad baculum when one emphasizes the negative consequences of holding the contrary position, regardless of the contrary position\'s truth value-particularly when the argument-maker himself causes (or threatens to cause) those negative consequences. It is a special case of the appeal to consequences.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Argumentum Ad Baculum";
        }
    }

    return nullptr;
}

string _Rhetoric::Terms::ArsDictaminis(string text)
{
    string model = "llama3";
    string definition = "Ars dictaminis (or ars dictandi) is the art of letter-writing, which often intersects with the art of rhetoric.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Ars Dictaminis";
        }
    }

    return nullptr;
}

string _Rhetoric::Terms::Assonance(string text)
{
    string model = "llama3";
    string definition = "Assonance is the repetition of identical or similar phonemes in words or syllables that occur close together, either in terms of their vowel phonemes (e.g., lean green meat) or their consonant phonemes (e.g., Kip keeps capes ). However, in American usage, assonance exclusively refers to this phenomenon when affecting vowels, whereas, when affecting consonants, it is generally called consonance. The two types are often combined, as between the words six and switch, which contain the same vowel and similar consonants. If there is repetition of the same vowel or some similar vowels in literary work, especially in stressed syllables, this may be termed \"vowel harmony\" in poetry (though linguists have a different definition of \"vowel harmony\").";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Assonance";
        }
    }

    return nullptr;
}

string _Rhetoric::Terms::Asyndeton(string text)
{
    string model = "llama3";
    string definition = " a literary scheme in which one or several conjunctions are deliberately omitted from a series of related clauses. Examples include veni, vidi, vici and its English translation \"I came, I saw, I conquered\". Its use can have the effect of speeding up the rhythm of a passage and making a single idea more memorable. Asyndeton may be contrasted with syndeton (syndetic coordination) and polysyndeton, which describe the use of one or multiple coordinating conjunctions, respectively.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Asyndeton";
        }
    }

    return nullptr;
}

string _Rhetoric::Terms::Audience(string text)
{
    string model = "llama3";
    string definition = "An audience is a group of people who participate in a show or encounter a work of art, literature (in which they are called \"readers\"), theatre, music (in which they are called \"listeners\"), video games (in which they are called \"players\"), or academics in any medium. Audience members participate in different ways in different kinds of art. Some events invite overt audience participation and others allow only modest clapping and criticism and reception. Media audience studies have become a recognized part of the curriculum. Audience theory offers scholarly insight into audiences in general. These insights shape our knowledge of just how audiences affect and are affected by different forms of art. The biggest art form is the mass media. Films, video games, radio shows, software (and hardware), and other formats are affected by the audience and its reviews and recommendations. In the age of easy internet participation and citizen journalism, professional creators share space, and sometimes attention with the public. American journalist Jeff Jarvis said, \"Give the people control of media, they will use it. The corollary: Don\'t give the people control of media, and you will lose. Whenever citizens can exercise control, they will.\" Tom Curley, President of the Associated Press, similarly said, \"The users are deciding what the point of their engagement will be - what application, what device, what time, what place.\"";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Audience";
        }
    }

    return nullptr;
}

string _Rhetoric::Terms::Aureation(string text)
{
    string model = "llama3";
    string definition = "Aureation (\"to make golden\", from Latin: aureus) is a device in arts of rhetoric that involves the \"gilding\" (or supposed heightening) of diction in one language by the introduction of terms from another, typically a classical language considered to be more prestigious. Aureation commonly involves other mannered rhetorical features in diction; for example circumlocution, which bears a relation to more native literary devices such as the kenning. It can be seen as analogous to Gothic schools of ornamentation in carving, painting, or ceremonial armoury.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Aureation";
        }
    }

    return nullptr;
}

string _Rhetoric::Terms::Auxesis(string text)
{
    string model = "llama3";
    string definition = "to place words or phrases in a certain order for climactic effect.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Auxesis";
        }
    }

    return nullptr;
}

string _Rhetoric::Terms::Axioms(string text)
{
    string model = "llama3";
    string definition = "the point where scientific reasoning starts; principles that are not questioned.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Axioms";
        }
    }

    return nullptr;
}

string _Rhetoric::Terms::Barbarism(string text)
{
    string model = "llama3";
    string definition = "A barbarism is a nonstandard word, expression or pronunciation in a language, particularly one regarded as an error in morphology, while a solecism is an error in syntax. The label was originally applied to mixing Ancient Greek or Latin with other languages, but expanded to indicate any inappropriate words or expressions in classical studies and eventually to any language considered unpolished or rude. The term is used mainly for the written language.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Barbarism";
        }
    }

    return nullptr;
}

string _Rhetoric::Terms::Bathos(string text)
{
    string model = "llama3";
    string definition = "an emotional appeal that inadvertently evokes laughter or ridicule.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Bathos";
        }
    }

    return nullptr;
}

string _Rhetoric::Terms::BellesLettres(string text)
{
    string model = "llama3";
    string definition = "a category of writing, originally meaning beautiful or fine writing. In the modern narrow sense, it is a label for literary works that do not fall into the major categories such as fiction, poetry, or drama. The phrase is sometimes used pejoratively for writing that focuses on the aesthetic qualities of language rather than its practical application. A writer of belles-lettres is a belletrist.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Belles Lettres";
        }
    }

    return nullptr;
}

string _Rhetoric::Terms::Brevitas(string text)
{
    string model = "llama3";
    string definition = "Brevitas is a rhetorical style Rhetorica ad Herennium calls \"the expressing of an idea by the very minimum of essential words\". By implying more than is said, it is distinguished from tautology and understatement. Brevitas is related to concision, parataxis, sprezzatura and elliptic style. It contrasts with periphrasis, aureation and pleonasm.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Brevitas";
        }
    }

    return nullptr;
}

string _Rhetoric::Terms::BurdenOfProof(string text)
{
    string model = "llama3";
    string definition = "the burden of proof lies with the one who speaks, not the one who denies) is the obligation on a party in a dispute to provide sufficient warrant for its position.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Burden Of Proof";
        }
    }

    return nullptr;
}

string _Rhetoric::Terms::Buzzword(string text)
{
    string model = "llama3";
    string definition = "A buzzword is a word or phrase, new or already existing, that becomes popular for a period of time. Buzzwords often derive from technical terms yet often have much of the original technical meaning removed through fashionable use, being simply used to impress others. Some buzzwords retain their true technical meaning when used in the correct contexts, for example artificial intelligence. Buzzwords often originate in jargon, acronyms, or neologisms. Examples of overworked business buzzwords include synergy, vertical, dynamic, cyber and strategy.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Buzzword";
        }
    }

    return nullptr;
}

string _Rhetoric::Terms::Canons(string text)
{
    string model = "llama3";
    string definition = "Rhetorical education focused on five canons. The Five Canons of Rhetoric serve as a guide to creating persuasive messages and arguments: inventio (invention), the process that leads to the development and refinement of an argument. dispositio (disposition, or arrangement), used to determine how an argument should be organized for greatest effect, usually beginning with the exordium. elocutio (style), determining how to present the arguments. memoria (memory), the process of learning and memorizing the speech and persuasive messages. pronuntiatio (presentation) and actio (delivery), the gestures, pronunciation, tone, and pace used when presenting the persuasive arguments-the Grand Style.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Canons";
        }
    }

    return nullptr;
}

string _Rhetoric::Terms::CaptatioBenevolentiae(string text)
{
    string model = "llama3";
    string definition = "Captatio benevolentiae (Latin for \"winning of goodwill\") is a rhetorical technique aimed to capture the goodwill of the audience at the beginning of a speech or appeal. It was practiced by Roman orators, with Cicero considering it one of the pillars of oratory. For example, Roman historian Livy (Titus Livius) begins his prologue with a description of his own insignificance against the importance of the Roman people and history of Rome. By preaching his own humility, and especially by comparing himself to the much greater importance of the Roman people (his audience), he hopes to gain their favor at the start of his work.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Captatio Benevolentiae";
        }
    }

    return nullptr;
}

string _Rhetoric::Terms::Catachresis(string text)
{
    string model = "llama3";
    string definition = "originally meaning a semantic misuse or error-e.g., using \"militate\" for \"mitigate\", \"chronic\" for \"severe\", \"travesty\" for \"tragedy\", \"anachronism\" for \"anomaly\", \"alibi\" for \"excuse\", etc.-is also the name given to many different types of figures of speech in which a word or phrase is being applied in a way that significantly departs from conventional (or traditional) usage.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Catachresis";
        }
    }

    return nullptr;
}

string _Rhetoric::Terms::Charisma(string text)
{
    string model = "llama3";
    string definition = "Charisma is a personal quality of magnetic charm or appeal. In the fields of sociology and political science, psychology, and management, the term charismatic describes a type of leadership. In Christian theology, the term charisma appears as the Spiritual gift (charism) which is an endowment with an extraordinary power given by the Holy Spirit.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Charisma";
        }
    }

    return nullptr;
}

string _Rhetoric::Terms::Chiasmus(string text)
{
    string model = "llama3";
    string definition = "a \"reversal of grammatical structures in successive phrases or clauses - but no repetition of words\".";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Chiasmus";
        }
    }

    return nullptr;
}

string _Rhetoric::Terms::Chreia(string text)
{
    string model = "llama3";
    string definition = "an anecdote (a deed, a saying, a situation) involving a well-known figure.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Chreia";
        }
    }

    return nullptr;
}

string _Rhetoric::Terms::Circumlocution(string text)
{
    string model = "llama3";
    string definition = "use of many words where a few would do.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Circumlocution";
        }
    }

    return nullptr;
}

string _Rhetoric::Terms::Classicism(string text)
{
    string model = "llama3";
    string definition = "a revival in the interest of classical antiquity languages and texts.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Classicism";
        }
    }

    return nullptr;
}

string _Rhetoric::Terms::Climax(string text)
{
    string model = "llama3";
    string definition = "an arrangement of phrases or topics in increasing order, as with good, better, best.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Climax";
        }
    }

    return nullptr;
}

string _Rhetoric::Terms::Colon(string text)
{
    string model = "llama3";
    string definition = "a rhetorical figure consisting of a clause that is grammatically, but not logically, complete.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Colon";
        }
    }

    return nullptr;
}

string _Rhetoric::Terms::Colloquialism(string text)
{
    string model = "llama3";
    string definition = "a word or phrase that is not formal or literary, typically one used in ordinary or familiar conversation.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Colloquialism";
        }
    }

    return nullptr;
}

string _Rhetoric::Terms::CommonTopics(string text)
{
    string model = "llama3";
    string definition = "In classical rhetoric, the Common Topics were a short list of four traditional topics regarded as suitable to structure an argument. Definition, genus / division / species, etymology, description, definition, example, synonyms. Comparison, similarity, difference, degree. Circumstance, cause and effect, timing. Relationship, contraries, exclusion, open, closed, complicated, sexual, casual. Testimony, statistics, maxims, law, precedents, personal example, historical example, authoritative quotes.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Common Topics";
        }
    }

    return nullptr;
}

string _Rhetoric::Terms::Consubstantiality(string text)
{
    string model = "llama3";
    string definition = "denotes identity of substance or essence in spite of difference in aspect.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Consubstantiality";
        }
    }

    return nullptr;
}

string _Rhetoric::Terms::Contingency(string text)
{
    string model = "llama3";
    string definition = "the contextual circumstances that do not allow an issue to be settled with complete certainty.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Contingency";
        }
    }

    return nullptr;
}

string _Rhetoric::Terms::Context(string text)
{
    string model = "llama3";
    string definition = "the circumstances surrounding an issue that should be considered during its discussion.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Context";
        }
    }

    return nullptr;
}

string _Rhetoric::Terms::Deconstruction(string text)
{
    string model = "llama3";
    string definition = "analyzing communication artifacts by scrutinizing their meaning and related assumptions, with the goal of determining the social and systemic connotations behind their structure.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Deconstruction";
        }
    }

    return nullptr;
}

string _Rhetoric::Terms::Decorum(string text)
{
    string model = "llama3";
    string definition = "a principle of classical rhetoric, poetry, and theatrical theory concerning the fitness or otherwise of a style to a theatrical subject. The concept of decorum is also applied to prescribed limits of appropriate social behavior within set situations.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Decorum";
        }
    }

    return nullptr;
}

string _Rhetoric::Terms::Deduction(string text)
{
    string model = "llama3";
    string definition = "moving from an overall hypothesis to infer something specific about that hypothesis.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Deduction";
        }
    }

    return nullptr;
}

string _Rhetoric::Terms::Delectare(string text)
{
    string model = "llama3";
    string definition = "to delight; viewed by Cicero as one of the three duties of an orator.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Delectare";
        }
    }

    return nullptr;
}

