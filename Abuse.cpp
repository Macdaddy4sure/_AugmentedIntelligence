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

#include "AugmentedIntelligence.hpp"
#include "Abuse.hpp"
#include "Large Language Models.hpp"
#include "Parsers.hpp"
#include "Long-Term Memory.hpp"
#include "Working-Memory.hpp"
#include "Short-Term Memory.hpp"
#include "Logic.hpp"
#include "NLP.hpp"
#include "NLU.hpp"
#include "NetworkingClient.hpp"
#include "Database Functions.hpp"
#include "Ethics.hpp"
#include "Qualitative Reasoning.hpp"
#include "Quantitative Reasoning.hpp"
#include "Reading.hpp"
#include "Settings.hpp"
#include "Utilities.hpp"

using namespace std;

/*
    1. Gaslighting
    Gaslighting is all about making you question yourself, including your memory, your trust in yourself, your sanity, what you’re feeling, and even your own identity.This often shows up as the abuser calling you “crazy” or manipulating situations to instill doubt in yourself.A manipulator does this so you eventually automatically trust and do what they say without question, giving them ultimate control.2
    
    2. Triangulation
    Triangulation is when two people disagree, and a third person gets pulled in to sway which side “wins.” A manipulator strategically uses triangulation to ensure that their side wins the argument, which can include choosing a third person they know will agree with them, or frontloading the information to be more favorable toward their side. This encourages the victim to question the manipulator less frequently, and to eventually stop questioning the manipulator altogether. It can also be used to increase the victim’s feelings of isolation, which increases their dependence on the manipulator.
    
    3. Projection
    Projection is a psychological defense mechanism where a person puts their own feelings, characteristics, or desires onto another person.4 This could look like the manipulator saying, “You’re so controlling” after the victim presents alternative activities or advocates to do something for themselves.The manipulator takes what they feeland wantand projects it onto the other person to avoid how that makes them feel or look.
    
    4. Controlling Your Life
    The goal of all manipulation is to increase control, but outside of controlling how you feeland behave, a manipulator can actually shape what your lifeand daily activities look like.This can include controlling access to your money(financial abuse), preventing you from furthering your education, or even restricting what friends you can and cannot spend time with. A manipulator’s goal in controlling your daily activities is to make sure you feel like you cannot function or make decisions without them.
    
    5. Name - Calling
    A manipulator will often label the victim’s personality traits or behaviors with negative verbiage.The purpose of this is to make the victim believe they are less than, and to subtly convince them that they aren’t worthy of better treatment.This often starts in small, less offensive ways, and builds in intensityand frequency as the victim becomes moreand more accustomed to the name - calling.
    
    6. Generalizations
    Generalizations are when the traits of one person are applied to an entire group of people in the same demographic.An example that a manipulative person might use could be, “All women are more focused on themselves than on their partners.” This encourages the victim to act or present themselves in a way that the manipulator sees as agreeable or easiest to control.
    
    7. Moving the Goalposts
    This is when a person essentially changes the rules of a situation midway through in order to prevent the other person from succeeding.This could look like giving additional stipulations needed for success, or highlighting disqualifying elements to your success.A manipulator uses this tactic to keep the other person in a constant state of chasing their approval.
    
    8. Love Bombing
    Love bombing is when someone bombards a person with affection, intense emotions, and an excess of their timeand energy. This can include gift giving, making elaborate declarations of admiration, and spending all of one’s timeand energy on pleasing the victim.A manipulator uses love bombing to quickly build intimacyand trust. This also gives the victim an ideal interaction to pursue.In this way, a manipulator preys on a person’s natural desire to feel wantedand appreciatedand turns it into a tool to increase the victim’s devotion to them.
    
    9. Changing the Subject
    Topic changes are a normal part of conversations, but a manipulator uses this passive - aggressive tactic to punish a person or make them feel devalued.When the victim makes a valid point in a conversation or receives a compliment from another person, a manipulator will change the subject to prevent them from gaining any confidence. An emotional manipulator does this to make sure the victim feels like they cannot get praise from any source other than the manipulator, and to have the victim question their own abilitiesand intelligence.
    
    10. Playing on Insecurities
    Unfortunately, emotional manipulators are highly skilled at noticing a person’s insecuritiesand intensifying them.6 At the core of this, a manipulator targets a person’s sense of shame, which is an internalized feeling of inadequacy.Since shame is a painful emotion that most people automatically try to avoid, triggering this encourages them to comply with the manipulator to avoid feeling it in the future. Rickeman states, “The most common tactic is for someone to learn your unique triggers or sensitivities and use those against you.Some people are naturally very good at studying you and learning exactly what buttons to press to manipulate you.For example, if you had a childhood where you didn’t feel important because you had a selfish or self - absorbed parent, accusing you of being selfish would be an excellent manipulation tactic.This is because it will press on a deep childhood woundand so you will question yourselfand be motivated to do what it takes not to appear selfish.”
    
    11. The Silent Treatment
    While it’s normal for a person to emotionallyand verbally shut down if they’re experiencing emotional overwhelm(sometimes called “emotional flooding”), it can also be used intentionally as a manipulation tactic.A manipulator will shut down communicationand connection as a form of punishment.This can include withholding affection, any form of communication, and intimacy.7
    
    12. Passive - Aggressiveness
    Passive aggressive communication is when someone says or indicates something without outright saying what they mean.This can take many forms, including sarcasm, pouting, or backhanded compliments.This keeps the victim in a constant pattern of monitoring, guessing, and trying to anticipate / adjust to the manipulator’s moods and reactions. Ultimately, this keeps the focus and the power on the manipulator, so that the victim doesn’t have timeand attention to evaluate their own feelings in the relationship.
    
    13. Being Dismissive or Diminishing
    When their victim makes a valid contribution in group discussions or has a success, a manipulator can react with a dismissing or diminishing comment in order to maintain control.This can look like giving reasons for why the success was not earned, or why their victim’s valid comment is unworthy of others’ attention and consideration.
    
    14. Treating You Like a Child
    A manipulator “infantilizes” their victim by purposely treating them like they’re younger or less capable, or by outright treating them like a child.This is a form of gaslighting that is specifically geared toward reducing the victim’s trust in themselves to handle responsibility. This can come in the form of talking down to a person like they’re less intelligent, stepping inand taking over in the middle of a task the person is capable of doing on their own, or physically treating them like they’re incapable of certain tasks.
    
    15. Blaming the Victim for the Abuse
    When a victim of emotional abuse speaks up, it’s common for the manipulator to shut it down by convincing them that they’ve done something to earn the emotional manipulation.This often comes down to “You should have known better because of XYZ reasons.” This leaves the victim constantly second guessing their actions to tryand avoid a negative interaction with the manipulator.
    
    16. Using Guilt Trips
    A manipulator uses guilt trips in order to change how the victim feels.This could be something along the lines of, “If you decide to go out with your friends tonight, I’m going to feel lonelyand sad.” The manipulator’s long - term goal is to convince you not to do that thing again in the future without discussing it with them first.
    
    17. Using Threats or Coercion
    Any time someone uses threats to force or convince you to do something, it’s considered emotional manipulation.8 This could include threats to leave you or take away something important if you don’t comply with what they want you to do.This could even include a threat to hurt themselves. While they may not actually hurt themselves, it’s important to always take threats of self - harm seriously.Holding your boundaries for physicaland emotional safety is critically important, and so is encouraging the other person to seek professional help if they threaten self - harm.
*/

string _Abuse::Terms::CheckAbuse(string text)
{
    if (_Abuse::Terms::Gaslighting(text))
    {
        return "Gaslighting";
    }
    if (_Abuse::Terms::Triangulation(text))
    {
        return "Triangulation";
    }
    if (_Abuse::Terms::Projection(text))
    {
        return "Projection";
    }
    if (_Abuse::Terms::NameCalling(text))
    {
        return "Name Calling";
    }
    if (_Abuse::Terms::Generalizations(text))
    {
        return "Generalizations";
    }
    if (_Abuse::Terms::MovingGoalposts(text))
    {
        return "Moving Goalposts";
    }
    if (_Abuse::Terms::LoveBomb(text))
    {
        return "Love Bomb";
    }
    if (_Abuse::Terms::ChangingSubject(text))
    {
        return "Changning Subject";
    }
    if (_Abuse::Terms::PlayingInsecurities(text))
    {
        return "Playing Insecurities";
    }
    if (_Abuse::Terms::SilentTreatment(text))
    {
        return "Silent Treatment";
    }
    if (_Abuse::Terms::PassiveAggressive(text))
    {
        return "Passive Agressive";
    }
    if (_Abuse::Terms::DismissiveDiminishing(text))
    {
        return "Dismissive Diminishing";
    }
    if (_Abuse::Terms::ChildLabelling(text))
    {
        return "Child Labeling";
    }
    if (_Abuse::Terms::VictimBlaming(text))
    {
        return "Victim Blaming";
    }
    if (_Abuse::Terms::GuiltTrip(text))
    {
        return "Guilt Trip";
    }
    if (_Abuse::Terms::ThreatsCoersion(text))
    {
        return "Threats Coersion";
    }
    else
    {
        return "false";
    }

    return "false";
}

bool _Abuse::Terms::Gaslighting(string text)
{
    string model = "llama3";
    string definition = "Gaslighting is all about making you question yourself, including your memory, your trust in yourself, your sanity, what you’re feeling, and even your own identity.This often shows up as the abuser calling you “crazy” or manipulating situations to instill doubt in yourself.A manipulator does this so you eventually automatically trust and do what they say without question, giving them ultimate control.";
    string prompt = "Check if the following text matches the following abuse definitions and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    return false;
}

bool _Abuse::Terms::Triangulation(string text)
{
    string model = "llama3";
    string definition = "Triangulation is when two people disagree, and a third person gets pulled in to sway which side “wins.” A manipulator strategically uses triangulation to ensure that their side wins the argument, which can include choosing a third person they know will agree with them, or frontloading the information to be more favorable toward their side. This encourages the victim to question the manipulator less frequently, and to eventually stop questioning the manipulator altogether. It can also be used to increase the victim’s feelings of isolation, which increases their dependence on the manipulator.";
    string prompt = "Check if the following text matches the following abuse definitions and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    return false;
}

bool _Abuse::Terms::Projection(string text)
{
    string model = "llama3";
    string definition = "Projection is a psychological defense mechanism where a person puts their own feelings, characteristics, or desires onto another person.4 This could look like the manipulator saying, “You’re so controlling” after the victim presents alternative activities or advocates to do something for themselves.The manipulator takes what they feeland wantand projects it onto the other person to avoid how that makes them feel or look.";
    string prompt = "Check if the following text matches the following abuse definitions and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    return false;
}

bool _Abuse::Terms::NameCalling(string text)
{
    string model = "llama3";
    string definition = "A manipulator will often label the victim’s personality traits or behaviors with negative verbiage.The purpose of this is to make the victim believe they are less than, and to subtly convince them that they aren’t worthy of better treatment.This often starts in small, less offensive ways, and builds in intensityand frequency as the victim becomes moreand more accustomed to the name - calling.";
    string prompt = "Check if the following text matches the following abuse definitions and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    return false;
}

bool _Abuse::Terms::Generalizations(string text)
{
    string model = "llama3";
    string definition = "Generalizations are when the traits of one person are applied to an entire group of people in the same demographic.An example that a manipulative person might use could be, “All women are more focused on themselves than on their partners.” This encourages the victim to act or present themselves in a way that the manipulator sees as agreeable or easiest to control.";
    string prompt = "Check if the following text matches the following abuse definitions and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    return false;
}

bool _Abuse::Terms::MovingGoalposts(string text)
{
    string model = "llama3";
    string definition = "This is when a person essentially changes the rules of a situation midway through in order to prevent the other person from succeeding.This could look like giving additional stipulations needed for success, or highlighting disqualifying elements to your success.A manipulator uses this tactic to keep the other person in a constant state of chasing their approval.";
    string prompt = "Check if the following text matches the following abuse definitions and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    return false;
}

bool _Abuse::Terms::LoveBomb(string text)
{
    string model = "llama3";
    string definition = "Love bombing is when someone bombards a person with affection, intense emotions, and an excess of their timeand energy. This can include gift giving, making elaborate declarations of admiration, and spending all of one’s timeand energy on pleasing the victim.A manipulator uses love bombing to quickly build intimacyand trust. This also gives the victim an ideal interaction to pursue.In this way, a manipulator preys on a person’s natural desire to feel wantedand appreciatedand turns it into a tool to increase the victim’s devotion to them.";
    string prompt = "Check if the following text matches the following abuse definitions and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    return false;
}

bool _Abuse::Terms::ChangingSubject(string text)
{
    string model = "llama3";
    string definition = "Topic changes are a normal part of conversations, but a manipulator uses this passive - aggressive tactic to punish a person or make them feel devalued.When the victim makes a valid point in a conversation or receives a compliment from another person, a manipulator will change the subject to prevent them from gaining any confidence. An emotional manipulator does this to make sure the victim feels like they cannot get praise from any source other than the manipulator, and to have the victim question their own abilitiesand intelligence.";
    string prompt = "Check if the following text matches the following abuse definitions and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    return false;
}

bool _Abuse::Terms::PlayingInsecurities(string text)
{
    string model = "llama3";
    string definition = "Unfortunately, emotional manipulators are highly skilled at noticing a person’s insecuritiesand intensifying them.6 At the core of this, a manipulator targets a person’s sense of shame, which is an internalized feeling of inadequacy.Since shame is a painful emotion that most people automatically try to avoid, triggering this encourages them to comply with the manipulator to avoid feeling it in the future. Rickeman states, “The most common tactic is for someone to learn your unique triggers or sensitivities and use those against you.Some people are naturally very good at studying you and learning exactly what buttons to press to manipulate you.For example, if you had a childhood where you didn’t feel important because you had a selfish or self - absorbed parent, accusing you of being selfish would be an excellent manipulation tactic.This is because it will press on a deep childhood woundand so you will question yourselfand be motivated to do what it takes not to appear selfish.”";
    string prompt = "Check if the following text matches the following abuse definitions and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    return false;
}

bool _Abuse::Terms::SilentTreatment(string text)
{
    string model = "llama3";
    string definition = "While it’s normal for a person to emotionallyand verbally shut down if they’re experiencing emotional overwhelm(sometimes called “emotional flooding”), it can also be used intentionally as a manipulation tactic.A manipulator will shut down communicationand connection as a form of punishment.This can include withholding affection, any form of communication, and intimacy.";
    string prompt = "Check if the following text matches the following abuse definitions and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    return false;
}

bool _Abuse::Terms::PassiveAggressive(string text)
{
    string model = "llama3";
    string definition = "Passive aggressive communication is when someone says or indicates something without outright saying what they mean.This can take many forms, including sarcasm, pouting, or backhanded compliments.This keeps the victim in a constant pattern of monitoring, guessing, and trying to anticipate / adjust to the manipulator’s moods and reactions. Ultimately, this keeps the focus and the power on the manipulator, so that the victim doesn’t have timeand attention to evaluate their own feelings in the relationship.";
    string prompt = "Check if the following text matches the following abuse definitions and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    return false;
}

bool _Abuse::Terms::DismissiveDiminishing(string text)
{
    string model = "llama3";
    string definition = "When their victim makes a valid contribution in group discussions or has a success, a manipulator can react with a dismissing or diminishing comment in order to maintain control.This can look like giving reasons for why the success was not earned, or why their victim’s valid comment is unworthy of others’ attention and consideration.";
    string prompt = "Check if the following text matches the following abuse definitions and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    return false;
}

bool _Abuse::Terms::ChildLabelling(string text)
{
    string model = "llama3";
    string definition = "A manipulator “infantilizes” their victim by purposely treating them like they’re younger or less capable, or by outright treating them like a child.This is a form of gaslighting that is specifically geared toward reducing the victim’s trust in themselves to handle responsibility. This can come in the form of talking down to a person like they’re less intelligent, stepping inand taking over in the middle of a task the person is capable of doing on their own, or physically treating them like they’re incapable of certain tasks.";
    string prompt = "Check if the following text matches the following abuse definitions and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    return false;
}

bool _Abuse::Terms::VictimBlaming(string text)
{
    string model = "llama3";
    string definition = "When a victim of emotional abuse speaks up, it’s common for the manipulator to shut it down by convincing them that they’ve done something to earn the emotional manipulation.This often comes down to “You should have known better because of XYZ reasons.” This leaves the victim constantly second guessing their actions to tryand avoid a negative interaction with the manipulator.";
    string prompt = "Check if the following text matches the following abuse definitions and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    return false;
}

bool _Abuse::Terms::GuiltTrip(string text)
{
    string model = "llama3";
    string definition = "A manipulator uses guilt trips in order to change how the victim feels.This could be something along the lines of, “If you decide to go out with your friends tonight, I’m going to feel lonelyand sad.” The manipulator’s long - term goal is to convince you not to do that thing again in the future without discussing it with them first.";
    string prompt = "Check if the following text matches the following abuse definitions and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    return false;
}

bool _Abuse::Terms::ThreatsCoersion(string text)
{
    string model = "llama3";
    string definition = "Any time someone uses threats to force or convince you to do something, it’s considered emotional manipulation.8 This could include threats to leave you or take away something important if you don’t comply with what they want you to do.This could even include a threat to hurt themselves.While they may not actually hurt themselves, it’s important to always take threats of self - harm seriously.Holding your boundaries for physicaland emotional safety is critically important, and so is encouraging the other person to seek professional help if they threaten self - harm.";
    string prompt = "Check if the following text matches the following abuse definitions and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    return false;
}