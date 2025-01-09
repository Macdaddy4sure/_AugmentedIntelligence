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
#include "Philosophy.hpp"
#include "Large Language Models.hpp"
#include "Parsers.hpp"
#include "Utilities.hpp"

using namespace std;

string _Philosophy::Terms::Absolute(string text)
{
    string model = "llama3";
    string definition = "In philosophy (often specifically metaphysics), the absolute, in most common usage, is a perfect, self-sufficient reality that depends upon nothing external to itself. In theology, the term is also used to designate the supreme being.";
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
            return "Absolute";
        }
    }

    return nullptr;
}

string _Philosophy::Terms::Absurdism(string text)
{
    string model = "llama3";
    string definition = "The philosophy stating that the efforts of humanity to find meaning in the Universe will ultimately fail because no such meaning exists (at least in relation to humanity). Absurdism is related to existentialism, though should not be confused with it, nor with nihilism.";
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
            return "Absurdism";
        }
    }

    return nullptr;
}

string _Philosophy::Terms::Accidentalism(string text)
{
    string model = "llama3";
    string definition = "Any system of thought that denies the causal nexus and maintains that events succeed one another haphazardly or by chance (not in the mathematical but in the popular sense). In metaphysics, accidentalism denies the doctrine that everything occurs or results from a definite cause. In this connection it is synonymous with tychism (ruxi, chance), a term used by Charles Sanders Peirce for the theories that make chance an objective factor in the process of the Universe.";
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
            return "Accidentalism";
        }
    }

    return nullptr;
}

string _Philosophy::Terms::Acosmism(string text)
{
    string model = "llama3";
    string definition = "The philosophy that denies the reality of the Universe, seeing it as ultimately illusory, and only the infinite Unmanifest Absolute as real. In contrast to pantheism, acosmism begins with the recognition that there is only one Reality, which is infinite, non-dual, blissful, etc. Yet the phenomenal reality of which humans are normally aware is none of these things; it is in fact just the opposite-i.e., dualistic, finite, full of suffering and pain, and so on. And since the Absolute is the only reality, that means that everything that is not Absolute cannot be real. Thus, according to this viewpoint, the phenomenal dualistic world is ultimately an illusion (\"Maya\" to use the technical Indian term), irrespective of the apparent reality it possesses at the mundane or empirical level.";
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
            return "Acosmism";
        }
    }

    return nullptr;
}

string _Philosophy::Terms::Aestheticism(string text)
{
    string model = "llama3";
    string definition = "A loosely defined movement in art and literature popular in late 19th-century Britain which held that art does not have any didactic purpose (it need only be beautiful), and that life should imitate art. The main characteristics of the movement were suggestion rather than statement, sensuality, massive use of symbols, and synaesthetic effects - that is, correspondence between words, colors, and music.";
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
            return "Aestheticism";
        }
    }

    return nullptr;
}

string _Philosophy::Terms::AgnosticAtheism(string text)
{
    string model = "llama3";
    string definition = "The philosophical view that encompasses both atheism and agnosticism. Due to definitional variance, an agnostic atheist does not believe in god or gods and by extension holds true that \"the existence and nonexistence of deities is currently unknown and may be absolutely unknowable\", or that \"knowledge of the existence and nonexistence of deities is irrelevant or unimportant\", or that \"abstention from claims of knowledge of the existence and nonexistence of deities is optimal\". Contrast agnostic theism.";
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
            return "Agnostic Atheism";
        }
    }

    return nullptr;
}

string _Philosophy::Terms::AgnosticTheism(string text)
{
    string model = "llama3";
    string definition = "The philosophical view that encompasses both theism and agnosticism. An agnostic theist is one who views that the truth value of claims regarding the existence of god or gods is unknown or inherently unknowable, but still chooses to believe in god or gods in spite of this. Contrast agnostic atheism.";
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
            return "Agnostic Theism";
        }
    }

    return nullptr;
}

string _Philosophy::Terms::Agnosticism(string text)
{
    string model = "llama3";
    string definition = "The philosophical view that the truth values of certain claims - particularly theological claims regarding the existence of god, gods, or deities - are unknown, inherently unknowable, or incoherent, and therefore irrelevant to life. Agnosticism itself, in both its strong (explicit) and weak (implicit) forms, is necessarily neither an atheist nor a theist position, though an agnostic person may also be either an atheist, a theist, or one who endorses neither position.";
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
            return "Agnosticism";
        }
    }

    return nullptr;
}

string _Philosophy::Terms::Altruism(string text)
{
    string model = "llama3";
    string definition = "The belief that people have a moral obligation to serve others or the \"greater good\". It is generally opposed to the concepts of self-interest and egoism.";
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
            return "Altruism";
        }
    }

    return nullptr;
}

string _Philosophy::Terms::AmorFati(string text)
{
    string model = "llama3";
    string definition = "A Latin phrase that may be translated as \"love of fate\" or \"love of one\'s fate\". It is used to describe an attitude in which one sees everything that happens in one\'s life, including suffering and loss, as good or, at the very least, necessary, in that they are among the facts of one\'s life and existence, so they are always necessarily there whether one likes them or not. Moreover, amor fati is characterized by a passive acceptance of the events or situations that occur in one\'s life.";
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
            return "Amor Fati";
        }
    }

    return nullptr;
}

string _Philosophy::Terms::Anarchism(string text)
{
    string model = "llama3";
    string definition = "The political position of any of a number of views and movements which advocate the absence or elimination of rulership or government. Other than being opposed to the state, there is no single defining position that all anarchists hold. Compare and contrast libertarianism.";
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
            return "Anarchism";
        }
    }

    return nullptr;
}

string _Philosophy::Terms::AnarchoCapitalism(string text)
{
    string model = "llama3";
    string definition = "A philosophy based on the idea of individual sovereignty, and a prohibition against initiatory coercion and fraud. It sees the only just basis for law as arising from private property norms and an unlimited right of contract between sovereign individuals. From this basis, anarcho-capitalism rejects the state as an unjustified monopolist and aggressor against sovereign individuals, and embraces anti-statist laissez-faire capitalism. Anarcho-capitalists would aim to protect individual liberty and property by replacing a government monopoly, which is involuntarily funded through taxation, with private, competing businesses.";
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
            return "Anarcho Capitalism";
        }
    }

    return nullptr;
}

string _Philosophy::Terms::AnarchoPrimitivism(string text)
{
    string model = "llama3";
    string definition = "An anarchist critique of the origins and progress of civilization. Primitivists argue that the shift from hunter-gatherers to agricultural subsistence gave rise to social stratification, coercion, and alienation. They advocate a return to non-\"civilized\" ways of life through deindustrialisation, abolition of division of labor or specialization, and abandonment of technology.";
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
            return "Anarcho Primitivism";
        }
    }

    return nullptr;
}

string _Philosophy::Terms::AnarchoSyndicalism(string text)
{
    string model = "llama3";
    string definition = "A form of anarchism that allies itself with syndicalism, that is, with labor unions, as a force for revolutionary social change. Anarcho-syndicalists seek to replace capitalism and the state with a democratically worker-managed means of production. They seek to abolish the wage system and most forms of private property.";
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
            return "Anarcho Syndicalism";
        }
    }

    return nullptr;
}

string _Philosophy::Terms::AnimaMundi(string text)
{
    string model = "llama3";
    string definition = "The \"world soul\"; a universal soul encompassing all individual souls within itself.";
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
            return "Anima Mundi";
        }
    }

    return nullptr;
}

string _Philosophy::Terms::Animism(string text)
{
    string model = "llama3";
    string definition = "\"Animism\" has been applied to many different philosophical systems. This includes Aristotle\'s view of the relation of soul and body held also by the stoics and scholastics. On the other hand, monadology (Leibniz) has also been described as animistic. The name is most commonly applied to vitalism, which makes life, or life and mind, the directive principle in evolution and growth, holding that life is not merely mechanical but that there is a directive force that guides energy without altering its amount. An entirely different class of ideas, also termed animistic, is the belief in the \"world soul\", held by Plato, Schelling and others. Lastly, in discussions of religion, \"animism\" refers to the belief in indwelling souls or spirits, particularly so-called \"primitive\" religions that consider everything inhabited by spirits.";
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
            return "Animism";
        }
    }

    return nullptr;
}

string _Philosophy::Terms::Anthropocentrism(string text)
{
    string model = "llama3";
    string definition = "The practice, conscious or otherwise, of regarding the existence and concerns of human beings as the central fact of the universe. This is similar, but not identical, to the practice of relating all that happens in the universe to the human experience. To clarify, the first position concludes that the fact of human existence is the point of universal existence; the latter merely compares all activity to that of humanity, without making any teleological conclusions.";
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
            return "Anthropocentrism";
        }
    }

    return nullptr;
}

string _Philosophy::Terms::Anthropomorphism(string text)
{
    string model = "llama3";
    string definition = "A form of personification involving the attribution of human characteristics and qualities to non-human beings, objects, or natural phenomena. Animals, forces of nature, and unseen or unknown authors of chance are frequent subjects of anthropomorphosis. Two examples are the attribution of a human body or of human qualities generally to god (or the gods), and creating imaginary persons who are the embodiment of an abstraction such as Death, Lust, War, or the Four Horsemen of the Apocalypse. Anthropomorphism is similar to prosopopoeia (adopting the persona of another person).";
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
            return "Anthropomorphism";
        }
    }

    return nullptr;
}

string _Philosophy::Terms::Antinatalism(string text)
{
    string model = "llama3";
    string definition = "A philosophical position that assigns a negative value to birth. Antinatalists argue that people should refrain from procreation because it is morally bad.";
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
            return "Antinatalism";
        }
    }

    return nullptr;
}

string _Philosophy::Terms::Antinomianism(string text)
{
    string model = "llama3";
    string definition = "In theology, the idea that members of a particular religious group are under no obligation to obey the laws of ethics or morality as presented by religious authorities. Antinomianism is the polar opposite of legalism, the notion that obedience to a code of religious law is necessary for salvation. The term has become a point of contention among opposed religious authorities. Few groups or sects explicitly call themselves \"antinomian\", but the charge is often levelled by some sects against competing sects.";
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
            return "Antinomianism";
        }
    }

    return nullptr;
}

string _Philosophy::Terms::AntiRealism(string text)
{
    string model = "llama3";
    string definition = "Any position involving either the denial of the objective reality of entities of a certain type or the insistence that humans should be agnostic about their real existence. Thus, people may speak of anti-realism with respect to other minds, the past, the future, universals, mathematical entities (such as natural numbers), moral categories, the material world, or even thought.";
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
            return "Anti Realism";
        }
    }

    return nullptr;
}

string _Philosophy::Terms::Aristotelianism(string text)
{
    string model = "llama3";
    string definition = "The philosophical tradition that takes its defining inspiration from the work of Aristotle and the Peripatetic school. Sometimes contrasted by critics with the rationalism and idealism of Plato, Aristotelianism is understood by its proponents as critically developing Plato\'s theories. Most particularly, Aristotelianism brings Plato\'s ideals down to Earth as goals and goods internal to natural species that are realized in activity. This is the characteristically Aristotelian idea of teleology.";
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
            return "Aristotelianism";
        }
    }

    return nullptr;
}

string _Philosophy::Terms::Arminianism(string text)
{
    string model = "llama3";
    string definition = "A school of soteriological thought in Protestant Christian theology founded by the Dutch theologian Jacobus Arminius. Arminianism is closely related to Calvinism (or Reformed theology), and the two systems share both their histories and many doctrines in common.";
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
            return "Arminianism";
        }
    }

    return nullptr;
}

string _Philosophy::Terms::Asceticism(string text)
{
    string model = "llama3";
    string definition = "A way of life characterised by an austere existence that refrains from worldly pleasures. Those who practice ascetic lifestyles often perceive their practices as virtuous and pursue them to achieve greater spirituality. In a more cynical context, asceticism may connote some form of self-mortification, ritual punishment of the body, or harsh renunciation of pleasure, though the word itself does not necessarily imply a negative connotation.";
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
            return "Asceticism";
        }
    }

    return nullptr;
}

string _Philosophy::Terms::Ascriptivism(string text)
{
    string model = "llama3";
    string definition = "The view that human beings are to be held responsible for their actions even if determinism is true.";
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
            return "Ascriptivism";
        }
    }

    return nullptr;
}

string _Philosophy::Terms::Associationalism(string text)
{
    string model = "llama3";
    string definition = "A political project where \"human welfare and liberty are both best served when as many of the affairs of a society as possible are managed by voluntary and democratically self-governing associations\". Associationalism \"gives priority to freedom in its scale of values, but it contends that such freedom can only be pursued effectively if individuals join with their fellows\"";
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
            return "Associationalism";
        }
    }

    return nullptr;
}

string _Philosophy::Terms::Atheism(string text)
{
    string model = "llama3";
    string definition = "The absence of belief in the existence of god or gods, thus contrasting with theism; a condition of being without theistic beliefs. This definition includes both those who assert that there are no gods and those who maintain no beliefs at all regarding the existence of gods. However, narrower definitions often only qualify the former as atheism, with the latter falling under the more general (but rarely used) term nontheism.";
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
            return "Atheism";
        }
    }

    return nullptr;
}

string _Philosophy::Terms::Atomism(string text)
{
    string model = "llama3";
    string definition = "The theory that all objects in the Universe are composed of very small, indestructible elements called atoms. (This is the case for the Western  theories of atomism. Buddhists also have well-developed theories of atomism, which involve momentary, or non-eternal, atoms, that flash in and out of existence).";
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
            return "Atomism";
        }
    }

    return nullptr;
}

string _Philosophy::Terms::Authoritarianism(string text)
{
    string model = "llama3";
    string definition = "An organization or a state that enforces strong, and sometimes oppressive measures against those in its sphere of influence, generally without attempts at gaining their consent and often not allowing feedback on its policies. In an authoritarian state, citizens are subject to state authority in many aspects of their lives, including many that other political philosophies would see as matters of personal choice. There are various degrees of authoritarianism; even very democratic and liberal states will show authoritarianism to some extent, for example in areas of national security.";
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
            return "Authoritarianism";
        }
    }

    return nullptr;
}

string _Philosophy::Terms::Automatism(string text)
{
    string model = "llama3";
    string definition = "An artistic technique of spontaneous writing, drawing, or the like that is practiced without conscious aesthetic or moral self-censorship.";
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
            return "Automatism";
        }
    }

    return nullptr;
}

string _Philosophy::Terms::Behavioralism(string text)
{
    string model = "llama3";
    string definition = "An approach in political science that seeks to provide an objective, quantified approach to explaining and predicting political behavior. It is associated with the rise of the behavioral sciences, modeled after the natural sciences. It should not be confused with the behaviorism of psychology.";
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
            return "Behavioralism";
        }
    }

    return nullptr;
}

string _Philosophy::Terms::Behaviorism(string text)
{
    string model = "llama3";
    string definition = "An approach to psychology based on the proposition that behavior can be researched scientifically without recourse to inner mental states. It is a form of materialism, denying any independent significance for the mind. Its significance for psychological treatment has been profound, making it one of the pillars of pharmacological therapy. It should not be confused with the behavioralism of political science.";
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
            return "Behaviorism";
        }
    }

    return nullptr;
}

string _Philosophy::Terms::BiologicalDeterminism(string text)
{
    string model = "llama3";
    string definition = "Biological determinism, also known as genetic determinism, is the belief that human behaviour is directly controlled by an individual\'s genes or some component of their physiology, generally at the expense of the role of the environment, whether in embryonic development or in learning. Genetic reductionism is a similar concept, but it is distinct from genetic determinism in that the former refers to the level of understanding, while the latter refers to the supposed causal role of genes. Biological determinism has been associated with movements in science and society including eugenics, scientific racism, and the debates around the heritability of IQ, the basis of sexual orientation, and evolutionary foundations of cooperation in sociobiology.";
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
            return "Biological Determinism";
        }
    }

    return nullptr;
}

string _Philosophy::Terms::Capitalism(string text)
{
    string model = "llama3";
    string definition = "Capitalism is an economic system based on the private ownership of the means of production and their operation for profit. The defining characteristics of capitalism include private property, capital accumulation, competitive markets, price systems, recognition of property rights, self-interest, economic freedom, meritocracy, work ethic, consumer sovereignty, economic efficiency, decentralized decision-making, profit motive, a financial infrastructure of money and investment that makes possible credit and debt, entrepreneurship, commodification, voluntary exchange, wage labor, production of commodities and services, and a strong emphasis on innovation and economic growth. In a market economy, decision-making and investments are determined by owners of wealth, property, or ability to maneuver capital or production ability in capital and financial markets-whereas prices and the distribution of goods and services are mainly determined by competition in goods and services markets. Economists, historians, political economists, and sociologists have adopted different perspectives in their analyses of capitalism and have recognized various forms of it in practice. These include laissez-faire or free-market capitalism, anarcho-capitalism, state capitalism, and welfare capitalism. Different forms of capitalism feature varying degrees of free markets, public ownership, obstacles to free competition, and state-sanctioned social policies. The degree of competition in markets and the role of intervention and regulation, as well as the scope of state ownership, vary across different models of capitalism. The extent to which different markets are free and the rules defining private property are matters of politics and policy. Most of the existing capitalist economies are mixed economies that combine elements of free markets with state intervention and in some cases economic planning. Capitalism in its modern form emerged from agrarianism in England, as well as mercantilist practices by European countries between the 16th and 18th centuries. The Industrial Revolution of the 18th century established capitalism as a dominant mode of production, characterized by factory work and a complex division of labor. Through the process of globalization, capitalism spread across the world in the 19th and 20th centuries, especially before World War I and after the end of the Cold War. During the 19th century, capitalism was largely unregulated by the state, but became more regulated in the post-World War II period through Keynesianism, followed by a return of more unregulated capitalism starting in the 1980s through neoliberalism. The existence of market economies has been observed under many forms of government and across a vast array of historical periods, geographical locations, and cultural contexts. The modern industrial capitalist societies that exist today developed in Western Europe as a result of the Industrial Revolution. The accumulation of capital is the primary mechanism through which capitalist economies promote economic growth. However, it is a characteristic of such economies that they experience a business cycle of economic growth followed by recessions.";
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
            return "Capitalism";
        }
    }

    return nullptr;
}

string _Philosophy::Terms::Careerism(string text)
{
    string model = "llama3";
    string definition = "Careerism is the propensity to pursue career advancement, power, and prestige outside of work performance.";
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
            return "Careerism";
        }
    }

    return nullptr;
}

string _Philosophy::Terms::Cartesianism(string text)
{
    string model = "llama3";
    string definition = "Cartesianism is the philosophical and scientific system of René Descartes and its subsequent development by other seventeenth century thinkers, most notably François Poullain de la Barre, Nicolas Malebranche and Baruch Spinoza. Descartes is often regarded as the first thinker to emphasize the use of reason to develop the natural sciences. For him, philosophy was a thinking system that embodied all knowledge. Aristotle and St. Augustine\'s work influenced Descartes\'s cogito argument. Additionally, there is similarity between Descartes\'s work and that of Scottish philosopher George Campbell\'s 1776 publication, titled Philosophy of Rhetoric. In his Meditations on First Philosophy he writes, \"ut what then am I? A thing which thinks. What is a thing which thinks? It is a thing which doubts, understands, , affirms, denies, wills, refuses, which also imagines and feels.\" Cartesians view the mind as being wholly separate from the corporeal body. Sensation and the perception of reality are thought to be the source of untruth and illusions, with the only reliable truths to be had in the existence of a metaphysical mind. Such a mind can perhaps interact with a physical body, but it does not exist in the body, nor even in the same physical plane as the body. The question of how mind and body interact would be a persistent difficulty for Descartes and his followers, with different Cartesians providing different answers. To this point Descartes wrote, \"we should conclude from all this, that those things which we conceive clearly and distinctly as being diverse substances, as we regard mind and body to be, are really substances essentially distinct one from the other; and this is the conclusion of the Sixth Meditation.\" Therefore, we can see that, while mind and body are indeed separate, because they can be separated from each other, but, Descartes postulates, the mind is a whole, inseparable from itself, while the body can become separated from itself to some extent, as in when one loses an arm or a leg.";
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
            return "Cartesianism";
        }
    }

    return nullptr;
}

string _Philosophy::Terms::ChristianExistentialHumanism(string text)
{
    string model = "llama3";
    string definition = "Christian existentialism is a theo-philosophical movement which takes an existentialist approach to Christian theology. The school of thought is often traced back to the work of the Danish philosopher and theologian Soren Kierkegaard (1813-1855) who is widely regarded as the father of existentialism.";
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
            return "Christian Existential Humanism";
        }
    }

    return nullptr;
}

string _Philosophy::Terms::ChristianMaterialism(string text)
{
    string model = "llama3";
    string definition = "The philosophical view that the only thing that can truly be said to \'exist\' is matter due to the teachings of Christ.";
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
            return "Christian Materialism";
        }
    }

    return nullptr;
}

string _Philosophy::Terms::Christianism(string text)
{
    string model = "llama3";
    string definition = "Another name for Christianity, the monotheistic religion recognizing Jesus Christ as its founder and central figure. With more than two billion adherents, or about one-third of the total world population, it is the largest world religion. Its origins are intertwined with Judaism, with which it shares much sacred lore, including the Old Testament (Hebrew Bible). Christianity is sometimes termed an Abrahamic religion, along with Judaism and Islam.";
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
            return "Christianism";
        }
    }

    return nullptr;
}

string _Philosophy::Terms::ClassicalTheism(string text)
{
    string model = "llama3";
    string definition = "Traditional ideas of the monotheistic religions such as Judaism, Christianity, and Islam. Classical theism holds that God is an absolute, eternal, all-knowing (omniscient), all-powerful (omnipotent), and perfect being. God is related to the world as its cause, but is unaffected by the world (immutable). He is transcendent over the world, which exists relative to him as a temporal effect.";
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
            return "Classical Theism";
        }
    }

    return nullptr;
}

string _Philosophy::Terms::Classicism(string text)
{
    string model = "llama3";
    string definition = "In the arts, a high regard for classical antiquity, as setting standards for taste that the classicist seeks to emulate. Classicism is usually contrasted with Romanticism; the art of classicism typically seeks to be formal, restrained, and Apollonian (nothing in excess) rather than Dionysiac (excessive), in Friedrich Nietzsche\'s opposition. It can also refer to the other periods of classicism. In theater, Classicism was developed by 17th century French playwrights from what they judged to be the rules of Greek classical theater, including the Classical unities of time, place and action.";
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

string _Philosophy::Terms::Cognitivism(string text)
{
    string model = "llama3";
    string definition = "1.  In ethics, cognitivism is the philosophical view that ethical sentences express propositions, and hence are capable of being true or false. More generally, cognitivism with respect to any area of discourse is the position that sentences used in that discourse are cognitive, that is, are meaningful and capable of being true or false. 2.  In psychology, cognitivism is the approach to understanding the mind that argues that mental function can be understood as the \'internal\' rule bound manipulation of symbols. See Cognitivism (psychology).";
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
            return "Cognitivism";
        }
    }

    return nullptr;
}

string _Philosophy::Terms::Coherentism(string text)
{
    string model = "llama3";
    string definition = "There are two distinct types of coherentism. One refers to the coherence theory of truth, which restricts true sentences to those that cohere with some specified set of sentences. Someone\'s belief is true if and only if it is coherent with all or most of their other beliefs. Usually, coherence is taken to imply something stronger than mere consistency. Statements that are comprehensive and meet the requirements of Occam\'s razor are usually to be preferred. The second type of coherentism is the belief in the coherence theory of justification, an epistemological theory opposing foundationalism and offering a solution to the regress argument. In this epistemological capacity, it is a theory about how belief can be justified.";
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
            return "Coherentism";
        }
    }

    return nullptr;
}

string _Philosophy::Terms::Colbertism(string text)
{
    string model = "llama3";
    string definition = "A variation of mercantilism which was applied in France between 1661 and 1683 by the superintendent of Finances Jean-Baptiste Colbert.";
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
            return "Colbertism";
        }
    }

    return nullptr;
}

string _Philosophy::Terms::Collectivism(string text)
{
    string model = "llama3";
    string definition = "A theoretical or practical emphasis on the group, as opposed to (and seen by many of its opponents to be at the expense of) the individual. Some psychologists define collectivism as a syndrome of attitudes and behaviors based on the belief that the basic unit of survival lies within a group, not the individual. Collectivists typically hold that the \"greater good\" of the group, is more important than the good of any particular individual who is one part of that larger organization. Some collectivists argue that the individual incidentally serves his own interests by working for the benefit of the group.";
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
            return "Collectivism";
        }
    }

    return nullptr;
}

string _Philosophy::Terms::Communal(string text)
{
    string model = "llama3";
    string definition = "Outside of South Asia, communalism involves a broad range of social movements and social theories in some way centered upon the community. Communalism can take the form of communal living or communal property, among others. It is sometimes said to put the interests of the community above the interests of the individual, but this is usually only done on the principle that the community exists for the benefit of the individuals who participate in it, so the best way to serve the interests of the individual is through the interests of the community.";
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
            return "Communal";
        }
    }

    return nullptr;
}

string _Philosophy::Terms::Communism(string text)
{
    string model = "llama3";
    string definition = "A theoretical system of social organization and a political movement based on common ownership of the means of production. As a political movement, communism seeks to establish a classless society. A major force in world politics since the early 20th century, modern communism is generally associated with The Communist Manifesto of Karl Marx and Friedrich Engels, according to which the capitalist profit-based system of private ownership is replaced by a communist society in which the means of production are communally owned, such as through a gift economy. Often this process is said initiated by the revolutionary overthrow of the bourgeoisie (see Marxism), passes through a transitional period marked by the preparatory stage of socialism (see Leninism). Pure communism has never been implemented, it remains theoretical: communism is, in Marxist theory, the end-state, or the result of state-socialism. The word is now mainly understood to refer to the political, economic, and social theory of Marxist thinkers, or life under conditions of Communist party rule.";
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
            return "Communism";
        }
    }

    return nullptr;
}

string _Philosophy::Terms::Communitarianism(string text)
{
    string model = "llama3";
    string definition = "A group of related but distinct philosophies that began in the late 20th century, opposing aspects of liberalism and capitalism while advocating phenomena such as civil society. Not necessarily hostile to liberalism in the contemporary American sense of the word, communitarianism rather has a different emphasis, shifting the focus of interest toward communities and societies and away from the individual. The question of priority (individual or community) often has the largest impact in the most pressing ethical questions: health care, abortion, multiculturalism, hate speech, and so on.";
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
            return "Communitarianism";
        }
    }

    return nullptr;
}

string _Philosophy::Terms::Compatibilism(string text)
{
    string model = "llama3";
    string definition = "Also known as \"soft determinism\" and championed by David Hume, is a theory that holds that free will and determinism are compatible. According to Hume, free will should not be understood as an absolute ability to have chosen differently under exactly the same inner and outer circumstances. Rather, it is a hypothetical ability to have chosen differently if one had been differently psychologically disposed by some different beliefs or desires. Hume also maintains that free acts are not uncaused (or mysteriously self-caused as Immanuel Kant would have it) but caused by people\'s choices as determined by their beliefs, desires, and by their characters. While a decision making process exists in Hume\'s determinism, this process is governed by a causal chain of events.";
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
            return "Compatibilism";
        }
    }

    return nullptr;
}

string _Philosophy::Terms::Comtism(string text)
{
    string model = "llama3";
    string definition = "Auguste Comte\'s positivistic philosophy that metaphysics and theology should be replaced by a hierarchy of sciences from mathematics at the base to sociology at the top.";
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
            return "Comtism";
        }
    }

    return nullptr;
}

string _Philosophy::Terms::Conceptualism(string text)
{
    string model = "llama3";
    string definition = "A doctrine in philosophy intermediate between nominalism and realism, that universals exist only within the mind and have no external or substantial reality.";
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
            return "Conceptualism";
        }
    }

    return nullptr;
}

string _Philosophy::Terms::Consciousness(string text)
{
    string model = "llama3";
    string definition = "sentience or awareness of internal and external existence.";
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
            return "Consciousness";
        }
    }

    return nullptr;
}

string _Philosophy::Terms::Confucianism(string text)
{
    string model = "llama3";
    string definition = "An East Asian ethical and philosophical system originally developed from the teachings of the early Chinese sage Confucius. It is a complex system of moral, social, political, and religious thought that has had tremendous influence on the history of Chinese civilization down to the 21st century. Some have considered it to have been the \"state religion\" of imperial China.";
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
            return "Confucianism";
        }
    }

    return nullptr;
}

string _Philosophy::Terms::Consequentialism(string text)
{
    string model = "llama3";
    string definition = "The belief that what ultimately matters in evaluating actions or policies of action are the consequences that result from choosing one action or policy rather than the alternative.";
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
            return "Consequentialism";
        }
    }

    return nullptr;
}

string _Philosophy::Terms::Constructivism(string text)
{
    string model = "llama3";
    string definition = "The view that reality, or at least humans\' knowledge of it, is a value-laden subjective construction rather than a passive acquisition of objective features.";
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
            return "Constructivism";
        }
    }

    return nullptr;
}

string _Philosophy::Terms::Consumerism(string text)
{
    string model = "llama3";
    string definition = "Attachment to material values or possessions.";
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
            return "Consumerism";
        }
    }

    return nullptr;
}

string _Philosophy::Terms::Contextualism(string text)
{
    string model = "llama3";
    string definition = "A collection of views that emphasize the context in which an action, utterance or expression occurs, and argues that, in some important respect, the action, utterance or expression can only be understood within that context. Contextualist views hold that philosophically controversial concepts, such as \"meaning P\", \"knowing that P\", \"having a reason to A\", and possibly even \"being true\" or \"being right\" only have meaning relative to a specified context. Some philosophers hold that context-dependence may lead to relativism; nevertheless, contextualist views are increasingly popular within philosophy.";
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
            return "Contextualism";
        }
    }

    return nullptr;
}

string _Philosophy::Terms::Conventionalism(string text)
{
    string model = "llama3";
    string definition = "The philosophical attitude which holds that fundamental principles of a certain kind are grounded on (explicit or implicit) agreements in society, rather than on external reality. Although this attitude is commonly held with respect to the rules of grammar and the principles of etiquette, its application to the propositions of law, ethics, science, mathematics, and logic is more controversial.";
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
            return "Conventionalism";
        }
    }

    return nullptr;
}

string _Philosophy::Terms::Cosmotheism(string text)
{
    string model = "llama3";
    string definition = "Another name for pantheism.";
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
            return "Cosmotheism";
        }
    }

    return nullptr;
}

string _Philosophy::Terms::Creationism(string text)
{
    string model = "llama3";
    string definition = "The belief that humans, life, the Earth, and the Universe were created by the supernatural intervention of a supreme being or deity. This intervention may be seen either as an act of creation from nothing (ex nihilo) or the emergence of order from pre-existing chaos.";
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
            return "Creationism";
        }
    }

    return nullptr;
}

string _Philosophy::Terms::CriticalRationalism(string text)
{
    string model = "llama3";
    string definition = "The philosophy that tenets of science should always be criticized and questioned so as to continually prove their worth.";
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
            return "Critical Rationalism";
        }
    }

    return nullptr;
}

string _Philosophy::Terms::CriticalRealism(string text)
{
    string model = "llama3";
    string definition = "a view that certain types of sense data accurately represent a mind-independent reality while other types do not. A key example is the primary/secondary quality distinction.";
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
            return "Critical Realism";
        }
    }

    return nullptr;
}

string _Philosophy::Terms::Cynicism(string text)
{
    string model = "llama3";
    string definition = "Originally the philosophy of a group of ancient Greeks called the Cynics, founded by Antisthenes. Nowadays the word generally refers to the opinions of those inclined to disbelieve in human sincerity, in virtue, or in altruism: individuals who maintain that only self-interest motivates human behavior. A modern cynic typically has a highly contemptuous attitude towards social norms, especially those that serve more of a ritualistic purpose than a practical one, and will tend to dismiss a substantial proportion of popular beliefs, conventional morality, and accepted wisdom as obsolete or irrelevant nonsense.";
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
            return "Cynicism";
        }
    }

    return nullptr;
}

string _Philosophy::Terms::Darwinism(string text)
{
    string model = "llama3";
    string definition = "The theory of biological evolution developed by English naturalist Charles Darwin (1809-1882) and others, stating that all species of organisms arise and develop through the natural selection of small, inherited variations that increase the individual\'s ability to compete, survive, and reproduce. See also History of evolutionary thought.";
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
            return "Darwinism";
        }
    }

    return nullptr;
}

string _Philosophy::Terms::DayAgeCreationism(string text)
{
    string model = "llama3";
    string definition = "A type of Old Earth creationism, it is an effort to reconcile Creation as presented in Genesis with modern scientific theories on the age of the Universe. It holds that the six days referred to in Genesis are not ordinary 24-hour days, but are much longer periods, thus interpreting Genesis as cosmic evolution.";
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
            return "Day Age Creationism";
        }
    }

    return nullptr;
}

string _Philosophy::Terms::Deconstructionism(string text)
{
    string model = "llama3";
    string definition = "A school and a set of methods of textual criticism aimed at understanding the assumptions and ideas that form the basis for thought and belief. Also called \"deconstruction\", its central concern is a radical critique of the metaphysics of the Western philosophical tradition, in which it identifies a logicentrism or \"metaphysics of presence\" which holds that speech-thought (the logos) is a privileged, ideal, and self-present entity, through which all discourse and meaning derive. This logocentrism is the primary target of deconstruction.";
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
            return "Deconstructionism";
        }
    }

    return nullptr;
}

string _Philosophy::Terms::Deductivism(string text)
{
    string model = "llama3";
    string definition = "A philosophy that holds that scientific inquiry proceeds by formulating a hypothesis in a form that could conceivably be falsified by a test on observable data.";
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
            return "Deductivism";
        }
    }

    return nullptr;
}

string _Philosophy::Terms::Defeatism(string text)
{
    string model = "llama3";
    string definition = "The acceptance of and contentedness with defeat without struggle. In everyday use, defeatism has negative connotation, and is often linked to treason and pessimism. The term is commonly used in the context of war: a soldier can be a defeatist if he or she refuses to fight because he or she thinks that the fight will be lost for sure or that it is not worth fighting for some other reason. The term can also be used in other fields, like politics, sports, psychology and philosophy.";
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
            return "Defeatism";
        }
    }

    return nullptr;
}

string _Philosophy::Terms::Deism(string text)
{
    string model = "llama3";
    string definition = "The view that reason, rather than revelation or tradition, should be the basis of belief in God. Deists reject both organized and revealed religion and maintain that reason is the essential element in all knowledge. For a \"rational basis for religion\" they refer to the cosmological argument (first cause argument), the teleological argument (argument from design), and other aspects of what was called natural religion. Deism has become identified with the classical belief that God created but does not intervene in the world, though this is not a necessary component of deism. A form of monotheism in which it is believed that one god exists. However, a deist rejects the idea that this god intervenes in the world. Hence any notion of special revelation is impossible, and the nature of god can only be known through reason and observation from nature. A deist thus rejects the miraculous, and the claim to knowledge made for religious groups and texts.";
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
            return "Deism";
        }
    }

    return nullptr;
}

string _Philosophy::Terms::DemocraticTranshumanism(string text)
{
    string model = "llama3";
    string definition = "A transhumanist philosophy that is generally socially progressive. It also encompasses radical democratic political views.";
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
            return "Democratic Transhumanism";
        }
    }

    return nullptr;
}

string _Philosophy::Terms::Deontologism(string text)
{
    string model = "llama3";
    string definition = "An ethical theory considered solely on duty and rights, where one has an unchanging moral obligation to abide by a set of defined principles. Thus, the ends of any action never justify the means in this ethical system. If someone were to do their moral duty, then it would not matter if that duty had negative consequences. Because of this reasoning, consequentialism is sometimes considered the philosophical antithesis of deontologism.";
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
            return "Deontologism";
        }
    }

    return nullptr;
}

string _Philosophy::Terms::Descriptivism(string text)
{
    string model = "llama3";
    string definition = "A view of the nature of the meaning and reference of proper names, generally attributed to Gottlob Frege and Bertrand Russell. The theory consists essentially of the idea that the meanings of names are identical to the descriptions associated with them by speakers, while their referents are determined to be the objects that satisfy these descriptions.";
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
            return "Descriptivism";
        }
    }

    return nullptr;
}

string _Philosophy::Terms::Determinism(string text)
{
    string model = "llama3";
    string definition = "The philosophical proposition that every event, including human cognition, decision, and action, is causally determined by an unbroken chain of prior occurrences.";
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
            return "Determinism";
        }
    }

    return nullptr;
}

string _Philosophy::Terms::DialecticalMaterialism(string text)
{
    string model = "llama3";
    string definition = "The view that ideas and arguments can only exist as matter and that the subconscious protohuman does not exist. It is often considered the philosophical basis of Marxism.";
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
            return "Dialectical Materialism";
        }
    }

    return nullptr;
}

string _Philosophy::Terms::Dialetheism(string text)
{
    string model = "llama3";
    string definition = "A metaphysical doctrine according to which there are true contradictions.";
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
            return "Dialetheism";
        }
    }

    return nullptr;
}

string _Philosophy::Terms::Disjunctivism(string text)
{
    string model = "llama3";
    string definition = "A direct realist view that rejects the existence of some sense data.";
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
            return "Disjunctivism";
        }
    }

    return nullptr;
}
