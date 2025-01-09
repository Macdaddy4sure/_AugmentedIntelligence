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
#include "Golf.hpp"
#include "Ball.hpp"
#include "Large Language Models.hpp"
#include "Parsers.hpp"
#include "Utilities.hpp"
#include "Vision.hpp"

using namespace std;

bool _Golf::Terms::Ace(string text)
{
    string model = "llama3";
    string definition = "A hole in one whether it be on a par 3, 4 or 5.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

bool _Golf::Terms::Action(string text)
{
    string model = "llama3";
    string definition = "To impart backspin onto the ball.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

bool _Golf::Terms::Address(string text)
{
    string model = "llama3";
    string definition = "When a player lines up to hit the ball and begins the pre-swing routine, adjusting one stance and position relative to the ball. If the ball moves once a player has addressed the ball, there is a one-stroke penalty.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

bool _Golf::Terms::Aim(string text)
{
    string model = "llama3";
    string definition = "Generally, the direction in which your target lies and the direction you intend for your ball to go.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

bool _Golf::Terms::AimLine(string text)
{
    string model = "llama3";
    string definition = "When lining up for a putt, the direction of the invisible straight line running from the ball directly to the pin, which you must then adjust according to the amount of break which you have determined the green to have, based on your read of the green.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

bool _Golf::Terms::AimRail(string text)
{
    string model = "llama3";
    string definition = "the green When a player overpowers a shot aimed at the putting green, and the ball flight carries it completely over the green.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

bool _Golf::Terms::Albatross(string text)
{
    string model = "llama3";
    string definition = "";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

bool _Golf::Terms::Alignment(string text)
{
    string model = "llama3";
    string definition = "a hole played three strokes under par.  They are statistically more difficult to get on a par 5 than it is to get a hole in one on a par 4.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

bool _Golf::Terms::All(string text)
{
    string model = "llama3";
    string definition = "Square in match play, a match is all square (tied) when both players or teams have won the same number of holes. It is abbreviated Son the scorecard.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

bool _Golf::Terms::Ambrose(string text)
{
    string model = "llama3";
    string definition = "A system of team play whereby each player takes a shot, and the ball is next played from the best position.  All players then take a shot from this position, and so on.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

bool _Golf::Terms::AngleOfAttack(string text)
{
    string model = "llama3";
    string definition = "Also referred to as ngle of Approach The angle at which the club head strikes the ball. This affects the trajectory the ball will travel and spin.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

bool _Golf::Terms::Approach(string text)
{
    string model = "llama3";
    string definition = "A shot intended to land the ball on the green.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

bool _Golf::Terms::Apron(string text)
{
    string model = "llama3";
    string definition = "The grass surface on the perimeter of the green that separates it from the fairway.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

bool _Golf::Terms::Attend(string text)
{
    string model = "llama3";
    string definition = "When a player holds and removes the flagstick for another player.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

bool _Golf::Terms::BackNine(string text)
{
    string model = "llama3";
    string definition = "Holes 10 through 18 on a golf course.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

bool _Golf::Terms::Backspin(string text)
{
    string model = "llama3";
    string definition = "Striking the ball with a sloped clubface, a wedge for instance, with a downward motion that catches the rim of the ball along the ridges within the clubface, causing the ball to spin backward as is its lifted into the air. Backspin causes a ball to travel less far in the air, and to stop more quickly once it strikes the ground. Also called bite or action.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

bool _Golf::Terms::Ball(string text)
{
    string model = "llama3";
    string definition = "A small sphere used in playing golf, which is intended to be struck by a club and soar in the general direction of the green for a particular hole, if one is playing on a regulation golf course. The important thing is to be able to identify your ball and distinguish it from the balls used by other players. Normally this is done by noting the brand and number of a ball, though some players will often add personalized markings to further differentiate their own sphere of choice.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

bool _Golf::Terms::BallMarker(string text)
{
    string model = "llama3";
    string definition = "any small object used to indicate where a player ball is on the green. Coins are common ball-markers.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

bool _Golf::Terms::BananaBall(string text)
{
    string model = "llama3";
    string definition = "an extreme slice.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

bool _Golf::Terms::BareLie(string text)
{
    string model = "llama3";
    string definition = "When your ball is almost completely visible and free from interference from the grass or other surface. Also often the case when practicing at home with mats and practice tees, as the ball is always slightly elevated and free.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

bool _Golf::Terms::Barkie(string text)
{
    string model = "llama3";
    string definition = "achieving a score of par or better on a hole after the ball hits a tree on the same hole.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

bool _Golf::Terms::BaseballGrip(string text)
{
    string model = "llama3";
    string definition = "grip style with all ten fingers on the club. Also known as the en-Finger Grip";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

bool _Golf::Terms::BestBall(string text)
{
    string model = "llama3";
    string definition = "a hole played one stroke under par.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

bool _Golf::Terms::Birdie(string text)
{
    string model = "llama3";
    string definition = "a hole played one stroke under par.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

bool _Golf::Terms::Bite(string text)
{
    string model = "llama3";
    string definition = "heavy backspin applied to a ball that causes it to stop quickly instead of rolling when it lands.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

bool _Golf::Terms::Blade(string text)
{
    string model = "llama3";
    string definition = "term used to describe the type of iron made by forging the metal rather than from a cast mold. Also, describes a shot struck hinlywith an iron in the middle of the golf ball.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

bool _Golf::Terms::Blind(string text)
{
    string model = "llama3";
    string definition = "A shot that does not allow the golfer to see where the ball will land, such as onto an elevated green from below.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

bool _Golf::Terms::Block(string text)
{
    string model = "llama3";
    string definition = "a shot played severely to the right; as opposed to slices, which curve from left to right, a blocked shot goes directly right.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

bool _Golf::Terms::Bogey(string text)
{
    string model = "llama3";
    string definition = "a hole played one stroke over par.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

bool _Golf::Terms::Bounce(string text)
{
    string model = "llama3";
    string definition = "technically, the measure of the angle from the front edge of a club sole to the point that rests on the ground when addressing the ball.  Clubs (usually wedges) with a higher bounce angle will resist digging into the turf.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

bool _Golf::Terms::Break(string text)
{
    string model = "llama3";
    string definition = "the amount of lateral slope one must account for on a putt.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

bool _Golf::Terms::BumpAndRun(string text)
{
    string model = "llama3";
    string definition = "a low-trajectory shot that is intended to get the ball rolling along the fairway and up onto the green. Similar to a chip shot, but played from a greater distance.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

bool _Golf::Terms::Bunker(string text)
{
    string model = "llama3";
    string definition = "Fairway Hazard of bare earth or sand usually in a recessed depression. Grass and wooden walls or banks are not part of the hazard.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

bool _Golf::Terms::Caddie(string text)
{
    string model = "llama3";
    string definition = "A person paid to carry a player clubs and offer advice or suffer abuse. Players are responsible for the actions of their caddies.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

bool _Golf::Terms::Carry(string text)
{
    string model = "llama3";
    string definition = "How far the ball travels through the air. Contrasted with un.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

bool _Golf::Terms::Cart(string text)
{
    string model = "llama3";
    string definition = "The four-wheeled electrical vehicle for use in transporting players from hole to hole.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

bool _Golf::Terms::CasualWater(string text)
{
    string model = "llama3";
    string definition = "Any temporary standing water visible after a player has taken his stance. Snow and ice can also be taken as casual water, as well as water that overflows the banks of existing water hazards.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

bool _Golf::Terms::Chip(string text)
{
    string model = "llama3";
    string definition = "a short shot (typically played from very close to and around the green), that is intended to travel through the air over a very short distance and roll the remainder of the way to the hole.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

bool _Golf::Terms::Chunk(string text)
{
    string model = "llama3";
    string definition = "a swing that results in the clubhead hitting the ground several inches before the ball, resulting in a large hunkof ground being taken as a divot. Also called a atshot, or hili-dipping";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

bool _Golf::Terms::Clone(string text)
{
    string model = "llama3";
    string definition = "An umbrella term for generic brand golf clubs.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

bool _Golf::Terms::CloasedFace(string text)
{
    string model = "llama3";
    string definition = "Caused when the clubface does not strike the ball in a neutral plane of impact, but instead strikes it at an angle, sending the ball toward the player front foot, to the left for right-handed players.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

bool _Golf::Terms::ClosedStance(string text)
{
    string model = "llama3";
    string definition = "When a player front foot is closer to the ball, used to draw the ball or to prevent a slice.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

bool _Golf::Terms::Club(string text)
{
    string model = "llama3";
    string definition = "a tool for the player to hit the ball. 14 clubs are allowed by the rules.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

bool _Golf::Terms::ClubFace(string text)
{
    string model = "llama3";
    string definition = "The angled surface of the club head that is used to strike the golf ball. The center of the clubface is known as the weet spot.Players should strive to hit the ball with the center of the clubface to maximize distance and accuracy.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

bool _Golf::Terms::Clubhouse(string text)
{
    string model = "llama3";
    string definition = "This is where play begins and ends. The clubhouse is also your source for information about local rules, the conditions of the course, upcoming events and other essential information for the avid golfer. Normally, you can also purchase balls, clubs, clothes, and other golfing equipment at the clubhouse.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

bool _Golf::Terms::ComeBacker(string text)
{
    string model = "llama3";
    string definition = "a putt required after the previous putt went past the hole.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

bool _Golf::Terms::Compression(string text)
{
    string model = "llama3";
    string definition = "The measurement for expressing the hardness of a golf ball, normally 90 compression. Harder balls (100 compression) can be used in windy conditions.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

bool _Golf::Terms::Condor(string text)
{
    string model = "llama3";
    string definition = "a four-under par shot, a hole-in-one on a par 5. This has occurred on a hole with a heavy dogleg, hard ground, and no trees. Might also be called triple eagle";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

bool _Golf::Terms::CrossHandedPutting(string text)
{
    string model = "llama3";
    string definition = "grip in which the hands are placed in positions opposite that of the conventional grip. For right-handed golfers, a cross-handed grip would  place the left hand below the right. Also known as the eft-hand lowgrip, it has been known to help players combat the ips";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

bool _Golf::Terms::Cutor(string text)
{
    string model = "llama3";
    string definition = "cut after the first two rounds of a tournament, a select number of players will have earned the right to play over the weekend for a chance to win the championship on Sunday, by having a score at or lower than this number. The cut is calculated as (??) the mean average? median average? of all scores. As an example, if 5 players in a tournament score respectively 148, 144, 142, 140, and 146, then 142 would be the cut, and those scoring higher will watch as those who scored lower play on through the weekend.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

bool _Golf::Terms::CutShot(string text)
{
    string model = "llama3";
    string definition = "same as a fade, a cut curves from left to right, but is generally higher in trajectory and more controlled than a standard fade. The igh cutis a staple among PGA Tour players.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

bool _Golf::Terms::DanceFloor(string text)
{
    string model = "llama3";
    string definition = "slang term for the green.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

bool _Golf::Terms::Divot(string text)
{
    string model = "llama3";
    string definition = "the chunk of grass (either fairway or rough) displaced when an iron or wedge shot is played. Or, the indentation on the green caused by the ball on an approach shot (also called a pitch mark).";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

bool _Golf::Terms::Dormie(string text)
{
    string model = "llama3";
    string definition = "in match play, a player or team is dormie when leading a match by as many holes as there are left (i.e. 4 up with 4 holes to play). The player or team that is down must win every hole to save the match and force its continuation past the last regular hole (if a winner must be determined) or halve the match (in a team competition such as the Ryder Cup).";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

bool _Golf::Terms::DoubleBogey(string text)
{
    string model = "llama3";
    string definition = "a hole played two strokes over par.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

bool _Golf::Terms::DoubleCross(string text)
{
    string model = "llama3";
    string definition = "a shot whereby a player intends for a slice and hits a hook, or conversely, intends to play a draw and hits a slice.  So called because the player has aimed left (in the case of a slice) and compounds this with hitting a hook, which moves left as well.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

bool _Golf::Terms::DoubleEagle(string text)
{
    string model = "llama3";
    string definition = "a hole played three strokes under par.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

bool _Golf::Terms::DrawShot(string text)
{
    string model = "llama3";
    string definition = "a shot that, for a right-handed golfer, curves slightly to the left; often played intentionally by skilled golfers. An overdone draw usually becomes a hook.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

bool _Golf::Terms::Drive(string text)
{
    string model = "llama3";
    string definition = "a tee shot of great length, usually done with a river(a type of golf club)";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

bool _Golf::Terms::Duck(string text)
{
    string model = "llama3";
    string definition = "Hook see snap hook.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

bool _Golf::Terms::Eagle(string text)
{
    string model = "llama3";
    string definition = "a hole played in two strokes under par.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

bool _Golf::Terms::Explosion(string text)
{
    string model = "llama3";
    string definition = "a bunker shot that sends the ball, and accompanying sand, (hopefully) onto the green. Also known as a last";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

bool _Golf::Terms::Fairway(string text)
{
    string model = "llama3";
    string definition = "the short grass between the tee and the green.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

bool _Golf::Terms::FatShot(string text)
{
    string model = "llama3";
    string definition = "a poor shot in which the club is slowed by catching too much grass or soil, resulting in a short and slow ball flight.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

bool _Golf::Terms::Fade(string text)
{
    string model = "llama3";
    string definition = "a shot that, for a right-handed golfer, curves slightly to the right; often played intentionally by skilled golfers. An overdone fade usually becomes a slice.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

bool _Golf::Terms::Flier(string text)
{
    string model = "llama3";
    string definition = "a type of lie where the ball is in the rough and grass is likely to become trapped between the ball and the clubface at the moment of impact. Flier lies often result in lier shots which have little or no spin (due to the blades of grass blocking the grooves on the clubface) and travel much farther than intended.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

bool _Golf::Terms::Flop(string text)
{
    string model = "llama3";
    string definition = "a short shot, played with an open stance and an open clubface, designed to travel very high in the air and land softly on the green. The flop shot is useful when players do not have uch green to work with but should only be attempted on the best of lies. Phil Mickelson is a master of the flop shot.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

bool _Golf::Terms::Fore(string text)
{
    string model = "llama3";
    string definition = "is shouted as a warning when it appears possible a ball may hit other players or spectators.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

bool _Golf::Terms::FourBalls(string text)
{
    string model = "llama3";
    string definition = "In fourballs teams of 2 players compete against each other. There are four balls in play at any time, one for each player, with the player with the lowest score among the four competitors winning the hole for his team. This shouldnt be confused with the term fourball, which is often used to describe a casual or social game with 4 players. Fourballs are the opening matches played on the Friday and Saturday of the Ryder Cup.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

bool _Golf::Terms::FourSome(string text)
{
    string model = "llama3";
    string definition = "In foursomes teams of 2 players compete against each other. Players alternate hitting the same ball.  The first player tees off, the second player hits the second shot, the first player hits the third shot, and so on until the ball is holed.  Players alternate hitting tee shots so that the same player doesn hit every drive; therefore, one member of each team will always tee-off on the odd holes and the other will tee off on the even holes. Only one ball is used by each pairing in foursomes.  If Player A teed off on the first hole and Player B holed the final putt, Player B would still tee off at the second, even though this means in effect 2 consecutive shots (over 2 holes) by Player B. The team with the lowest score wins the hole. Foursomes can be played as stroke play or match play. As match play, foursomes are the matches played on the Friday and Saturday afternoon of the Ryder Cup, with 4 foursome matches being played on each day.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

bool _Golf::Terms::Gimme(string text)
{
    string model = "llama3";
    string definition = "a shot that the other players agree can count automatically without actually being played (under the tacit assumption that the putt would not have been missed). immesare not allowed by the rules in stroke play, but this is often practiced in casual matches. However, in match play, either player may formally oncedea stroke, a hole, or the entire match at any time, and this may not be refused or withdrawn. A player in match play will generally concede a tap-in or other short putt by his or her opponent.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

bool _Golf::Terms::GoldieBounce(string text)
{
    string model = "llama3";
    string definition = "Bounce when the ball strikes a tree deep in the rough and bounces out onto the fairway.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

bool _Golf::Terms::GreenInRegulationGIR(string text)
{
    string model = "llama3";
    string definition = "a green is considered hit in regulation if any part of the ball is touching the putting surface and the number of strokes taken is 2 or less than par, i.e. with the first stroke on a par-3 hole, second stroke on a par-4, etc. Greens in Regulation percentage is a statistic kept by the PGA Tour.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

bool _Golf::Terms::Green(string text)
{
    string model = "llama3";
    string definition = "the shortest cut of grass. where the pin and the objective of the game";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

bool _Golf::Terms::GroundUnderRepair(string text)
{
    string model = "llama3";
    string definition = "An area of the golf course that is being repaired. A free drop is allowed if the ball lands in an area marked UR";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

bool _Golf::Terms::Hack(string text)
{
    string model = "llama3";
    string definition = "A block who has limited ability and generally a swing like a dying octopus.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

bool _Golf::Terms::Halved(string text)
{
    string model = "llama3";
    string definition = "in match play, a hole is halved (drawn) when both players or teams have played the same number of strokes. In some team events, such as the Ryder Cup and Presidents Cup (though not in singles matches in the latter competition while its ultimate outcome remains in doubt), a match that is level after 18 holes is not continued, and is called alved with each team receiving half a point.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

bool _Golf::Terms::HardPan(string text)
{
    string model = "llama3";
    string definition = "a lie consisting of very hard turf.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

bool _Golf::Terms::Hazard(string text)
{
    string model = "llama3";
    string definition = "physical aspects of the course such as sand or water traps, hills, and bunkers that impede play and add strokes.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

bool _Golf::Terms::HoleInOne(string text)
{
    string model = "llama3";
    string definition = "Hole in one stroke";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

bool _Golf::Terms::Hook(string text)
{
    string model = "llama3";
    string definition = "a poor shot that, for a right-handed golfer, curves sharply to the left (may occasionally be played intentionally but is difficult to control). Hooks are often called the etter player miss thanks to the fact that many of the game greatest players (Ben Hogan, for instance) have been plagued by the hook at one time or another in their careers.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

bool _Golf::Terms::Hosel(string text)
{
    string model = "llama3";
    string definition = "the crooked area where the clubhead connects to the shaft. Hitting the ball off the hosel is known as a hank";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

bool _Golf::Terms::InterlockingGrip(string text)
{
    string model = "llama3";
    string definition = "grip style where (for right-handed players) the pinkie finger of the right hand is hooked around the index finger of the left. Jack Nicklaus and Tiger Woods use the interlocking grip.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

bool _Golf::Terms::InwardNine(string text)
{
    string model = "llama3";
    string definition = "the back nine holes, so named because older links courses were designed to come back ntoward the clubhouse after going out on the front nine.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

bool _Golf::Terms::Iron(string text)
{
    string model = "llama3";
    string definition = "";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

bool _Golf::Terms::JerseyBounce(string text)
{
    string model = "llama3";
    string definition = "Any ball that is advanced toward the green by virtue of the ball striking a cartpath, or highway running alongside a fairway, and remains or returns in bounds.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

bool _Golf::Terms::KnockDown(string text)
{
    string model = "llama3";
    string definition = "a type of shot designed to have a very low trajectory, usually employed to combat strong winds.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

bool _Golf::Terms::Lag(string text)
{
    string model = "llama3";
    string definition = "a long putt designed to simply get the ball close to the hole. Or, in the downswing, how far the clubhead agsbehind the hands prior to release.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

bool _Golf::Terms::LayUp(string text)
{
    string model = "llama3";
    string definition = "a conservative shot intentionally short of a hazard.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

bool _Golf::Terms::Lie(string text)
{
    string model = "llama3";
    string definition = "the ground that the ball is resting on. ood liesinclude the fairway and the green, while bunkers, pine straw, and the rough are examples of ad lies  Also, the angle between the center of the shaft and the sole. Incorrect ie anglecalibration will result in toe-first or heel-first contact with the ground when swinging the club.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

bool _Golf::Terms::Line(string text)
{
    string model = "llama3";
    string definition = "the expected path of the ball to the hole, particularly on putts. tepping in a player lineon the green is considered a major golf faux pas.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

bool _Golf::Terms::Links(string text)
{
    string model = "llama3";
    string definition = "a course on the ocean, usually devoid of trees and therefore windy. Many courses in the United Kingdom are links.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

bool _Golf::Terms::Loft(string text)
{
    string model = "llama3";
    string definition = "the angle between a vertical plane (usually the plane of the club shaft) and the clubface.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

bool _Golf::Terms::MickeyMantle(string text)
{
    string model = "llama3";
    string definition = "making a score of 7 on a hole.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

bool _Golf::Terms::Medal(string text)
{
    string model = "llama3";
    string definition = "style of scoring in which the player with the fewest strokes wins. Also known as stroke play.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

bool _Golf::Terms::MemberBounce(string text)
{
    string model = "llama3";
    string definition = "any favorable bounce of the golf ball that improves what initially appeared to be an errant shot.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

bool _Golf::Terms::MisRead(string text)
{
    string model = "llama3";
    string definition = "when a player takes an incorrect line on a putt.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

bool _Golf::Terms::Mulligan(string text)
{
    string model = "llama3";
    string definition = "a do-over, or replay of the shot. It is not allowed by the rules and not practiced in tournaments, but is common in casual rounds in some countries, especially the United States.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

bool _Golf::Terms::Nassau(string text)
{
    string model = "llama3";
    string definition = "a type of bet between golfers that is essentially three separate bets.  Money is wagered on the best score in the front 9, back 9, and total 18 holes.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

bool _Golf::Terms::OpenStance(string text)
{
    string model = "llama3";
    string definition = "when a player sets up with their front foot to the inside of the target line.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

bool _Golf::Terms::Ostrich(string text)
{
    string model = "llama3";
    string definition = "a hole played five strokes under par. This is widely considered impossible, requiring a hole in one on a par six.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

bool _Golf::Terms::OutwardNine(string text)
{
    string model = "llama3";
    string definition = "refers to the first nine holes, so named as links golf courses were set up where the first nine holes went utaway from the clubhouse.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

bool _Golf::Terms::OutOfBounce(string text)
{
    string model = "llama3";
    string definition = "the area designated as being outside the boundaries of the course. When a shot lands .B. the player oses stroke and distance,meaning that he/she must hit another shot from the original spot and is assessed a one-stroke penalty. Out-of-bounds areas are usually indicated by white posts.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

bool _Golf::Terms::Pace(string text)
{
    string model = "llama3";
    string definition = "the speed at which a putt should be moving to get to the hole. aceand reakare the two components of green-reading.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

bool _Golf::Terms::Par(string text)
{
    string model = "llama3";
    string definition = "(apocryphally an abbreviation for rofessional average result, standard score for a hole (defined by its length) or a course (sum of all the holespars).";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

bool _Golf::Terms::PGA(string text)
{
    string model = "llama3";
    string definition = "Professional GolfersAssociation, especially the Professional GolfersAssociation of America.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

bool _Golf::Terms::PinHigh(string text)
{
    string model = "llama3";
    string definition = "at the same level as (distance to) the hole.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

bool _Golf::Terms::Pitch(string text)
{
    string model = "llama3";
    string definition = "a short shot (typically from within 50 yards), usually played with a higher lofted club and made using a less than full swing, that is intended to flight the ball towards a target (usually the hole) with greater accuracy than a full iron shot.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

bool _Golf::Terms::PitchMark(string text)
{
    string model = "llama3";
    string definition = "another term for a divot on the green caused when a ball lands. Players must repair their pitch marks, usually with a tee or a ivot tool";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

bool _Golf::Terms::PluggedLie(string text)
{
    string model = "llama3";
    string definition = "a bad lie (typically in a bunker) where the ball is at least half-buried in sand. Also known as a uried lieor a ried egg";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

bool _Golf::Terms::PopUp(string text)
{
    string model = "llama3";
    string definition = "a poor tee shot where the top of the clubhead strikes under the ball, causing it to go straight up in the air. In addition to being bad shots, pop-ups frequently leave white scuff-marks on the top of the clubhead, or dents in persimmon clubs.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

bool _Golf::Terms::Pro(string text)
{
    string model = "llama3";
    string definition = "a professional is a golfer or person who plays or teaches golf for financial reward, may work as a ouring proin professional competitions, or as a eaching pro(also called a lub pro.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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
	
bool _Golf::Terms::Punch(string text)
{
    string model = "llama3";
    string definition = "a shot played with a very low trajectory, usually to avoid interference from tree branches when a player is hitting from the woods. Similar to the knock-down, it can also be used to avoid high winds.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

bool _Golf::Terms::Push(string text)
{
    string model = "llama3";
    string definition = "a shot played severely to the right; as opposed to slices, which curve from left to right, a pushed shot goes directly right. Similar to the lock Also, term used in Match Play where neither competitor wins the hole.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

bool _Golf::Terms::Putt(string text)
{
    string model = "llama3";
    string definition = "a shot played on the green, usually with a putter.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

bool _Golf::Terms::Putter(string text)
{
    string model = "llama3";
    string definition = "a special golf club with a very low loft that makes the ball roll.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

bool _Golf::Terms::Release(string text)
{
    string model = "llama3";
    string definition = "the point in the downswing at which the wrists uncock. A late release (creating ag is one of the keys to a powerful swing.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

bool _Golf::Terms::Rough(string text)
{
    string model = "llama3";
    string definition = "the grass that borders the fairway, usually taller and coarser than the fairway.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

bool _Golf::Terms::SandBagger(string text)
{
    string model = "llama3";
    string definition = "a golfer that carries a higher official handicap than his skills indicate, eg, carries an eight, plays to a two. Sandbaggers usually artificially inflate their handicaps with the intent of winning bets on the course, a practice that most golfers consider cheating.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

bool _Golf::Terms::Sand(string text)
{
    string model = "llama3";
    string definition = "";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

bool _Golf::Terms::SandWedge(string text)
{
    string model = "llama3";
    string definition = "a lofted club designed especially for playing out of a bunker. The modern sand wedge was invented by Gene Sarazen.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

bool _Golf::Terms::Scotch(string text)
{
    string model = "llama3";
    string definition = "In scotch foursomes teams of 2 players compete against each other. Players alternate hitting the same ball.  The first player tees off, the second player hits the second shot, the first player hits the third shot, and so on until the ball is holed.  To this point, the definition of scotch foursomes is the same as that of ordinary foursomes; however, players do not alternate hitting tee shots as they would in foursomes.  If Player A teed off on the first hole and Player B holed the final putt, Player B would not tee off at the second, meaning that Player A could, in theory, play every tee shot on the round. The team with the lowest score wins the hole.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

bool _Golf::Terms::Scramble(string text)
{
    string model = "llama3";
    string definition = "when a player misses the green in regulation, but still makes par or better on a hole. Scrambling percentage is a player statistic kept by the PGA Tour.  Also a two or four man format, similar to Best Ball, except in a scramble, each player strikes a shot, the best shot is selected, then all players play from that selected position.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

bool _Golf::Terms::ScratchGolfer(string text)
{
    string model = "llama3";
    string definition = "a player whose handicap equals zero.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

bool _Golf::Terms::Shank(string text)
{
    string model = "llama3";
    string definition = "a severe mishit in which the golf ball is struck by the hosel of the club. On a shank, a player has managed to strike the ball with a part of the club other than the clubface. A shanked shot will scoot a short distance, often out to the right, or might be severely sliced or hooked.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

bool _Golf::Terms::ShortGame(string text)
{
    string model = "llama3";
    string definition = "comprised of shots that take place on or near the green. Putting, chipping, pitching, and bunker play are all aspects of short game.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

bool _Golf::Terms::Skin(string text)
{
    string model = "llama3";
    string definition = "a skins game pits players in a type of match play in which each hole has a set value (usually in money or points). The player who wins the hole is said to win the kin,and whatever that skin is worth. Skins games are often more dramatic than standard match play because holes are not halved. When players tie on a given hole, the value of that hole is carried over and added to the value of the following hole. The more ties, the greater the value of the skin and the bigger the eventual payoff.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

bool _Golf::Terms::Slice(string text)
{
    string model = "llama3";
    string definition = "a poor shot that, for a right-handed golfer, curves sharply from the left to the right (may occasionally be played intentionally but is difficult to control). 9 out of 10 golfers suffer from slicing the ball.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

bool _Golf::Terms::SnapHook(string text)
{
    string model = "llama3";
    string definition = "Hook a severe hook that usually goes directly left rather than curving from right to left.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

bool _Golf::Terms::StablefordScoring(string text)
{
    string model = "llama3";
    string definition = "a scoring system using points.  The winner accumulates more points over the course of a round.  Stableford points are awarded as 1 point for one stroke over a fixed score, perhaps par, on a hole; 2 points for the fixed score; 3 points for one stroke under the fixed score; 4 points for two strokes under the fixed score; etc.  There are odifiedStableford scoring techniques, like that used in the International Tournament on the PGA Tour, which award points (or loss of points) for various scores over or under a fixed score.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

bool _Golf::Terms::SnowMan(string text)
{
    string model = "llama3";
    string definition = "An eight on a hole.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

bool _Golf::Terms::Sit(string text)
{
    string model = "llama3";
    string definition = "Telling the ball to drop softly, and not roll after landing.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

bool _Golf::Terms::TapIn(string text)
{
    string model = "llama3";
    string definition = "a ball that has come to rest very close to the hole, leaving only a very short putt to be played. Often recreational golfers will oncedetap-ins to each other to save time.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

bool _Golf::Terms::Tee(string text)
{
    string model = "llama3";
    string definition = "the specially prepared area, usually grass, from which the first stroke for each hole is made";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

bool _Golf::Terms::Tempo(string text)
{
    string model = "llama3";
    string definition = "the pacing of a player swing. Ideally, the swing should be like a metronome, with the same amount of time being used for the downswing and follow-through as was used for the backswing. Also known as the hythmof the swing. Ernie Els tempo is the envy of many professionals.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

bool _Golf::Terms::ThinShot(string text)
{
    string model = "llama3";
    string definition = "a poor shot where the clubhead strikes too high up on the ball, resulting in a shallow flight path. Also known as kullingor ladingthe ball.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

bool _Golf::Terms::ThroughLine(string text)
{
    string model = "llama3";
    string definition = "When putting, the imaginary path that a ball would travel on should the putted ball go past the hole.  Usually observed by PGA players and knowledgeable golfers when retrieving or marking a ball around the hole.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

bool _Golf::Terms::Topped(string text)
{
    string model = "llama3";
    string definition = "an errant shot where only the upper half of the golf ball is struck, causing the ball to roll or bounce rather than fly.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

bool _Golf::Terms::UpAndDown(string text)
{
    string model = "llama3";
    string definition = "when a player holes the ball in two strokes starting from off of the green. The first stroke, usually a itchor a hip gets the ball ponto the green, and the subsequent putt gets the ball owninto the hole.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

bool _Golf::Terms::VardonGrip(string text)
{
    string model = "llama3";
    string definition = "grip style in which (for right-handed players) the right pinkie finger rests on top of the left index finger. Also known as the verlapping grip,most golfers grip with this style. It is named for Harry Vardon, a champion golfer of the early 20th century.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

bool _Golf::Terms::Wedge(string text)
{
    string model = "llama3";
    string definition = "a type of golf club";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

bool _Golf::Terms::Whiff(string text)
{
    string model = "llama3";
    string definition = "an attempt to strike the ball which results in the player failing to make contact with the ball.";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

bool _Golf::Terms::Wood(string text)
{
    string model = "llama3";
    string definition = "a type of golf club";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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

bool _Golf::Terms::XOut(string text)
{
    string model = "llama3";
    string definition = "an inferior golf ball that does not meet quality control standards and is sold as a discount (often with several characters printed over the original logo).";
    string prompt = "Check if the following text matches the following definition. Limit the response to yes or no: " + definition + " " + text;
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