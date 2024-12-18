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
#include "Economics.hpp"
#include "Large Language Models.hpp"
#include "Parsers.hpp"
#include "Utilities.hpp"

using namespace std;

string _Economics::Terms::AbsoluteAdvantage(string text)
{
    string model = "llama3";
    string definition = "In economics, the principle of absolute advantage is the ability of a party (an individual, or firm, or country) to produce a good or service more efficiently than its competitors. The Scottish economist Adam Smith first described the principle of absolute advantage in the context of international trade in 1776, using labor as the only input. Since absolute advantage is determined by a simple comparison of labor productiveness, it is possible for a party to have no absolute advantage in anything.";
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
            return "Absolute Advantage";
        }
    }

    return nullptr;
}

string _Economics::Terms::Absorption(string text)
{
    string model = "llama3";
    string definition = "In economics, absorption is the total demand for all final marketed goods and services by all economic agents resident in an economy, regardless of the origin of the goods and services themselves. As the absorption is equal to the sum of all domestically-produced goods consumed locally and all imports, it is equal to national income  minus the balance of trade . The term was coined, and its relation to the balance of trade identified, by Sidney Alexander in 1952. The term \"absorption\" is often used in real estate to assess demand for leasing space.";
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
            return "Absorption";
        }
    }

    return nullptr;
}

string _Economics::Terms::AbandonmentOfTheGoldStandard(string text)
{
    string model = "llama3";
    string definition = "The decision by a government to abandon a monetary system in which the standard economic unit of account is based on a fixed quantity of gold.";
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
            return "Abandonment Of The Gold Standard";
        }
    }

    return nullptr;
}

string _Economics::Terms::AcceleratorEffect(string text)
{
    string model = "llama3";
    string definition = "The accelerator effect in economics is a positive effect on private fixed investment of the growth of the market economy (measured e.g. by a change in gross domestic product (GDP)). Rising GDP (an economic boom or prosperity) implies that businesses in general see rising profits, increased sales and cash flow, and greater use of existing capacity. This usually implies that profit expectations and business confidence rise, encouraging businesses to build more factories and other buildings and to install more machinery. (This expenditure is called fixed investment.) This may lead to further growth of the economy through the stimulation of consumer incomes and purchases, i.e., via the multiplier effect. In essence, the accelerator effect proposes that investment levels are contingent on the pace of change in GDP rather than its absolute level. In simpler terms, it is the acceleration or deceleration of economic growth that shapes businesses\' choices regarding investments. The accelerator effect operates in reverse as well: when the GDP declines (entering a recession), it negatively impacts business profits, sales, cash flow, capacity utilization, and expectations. Consequently, these factors discourage businesses from making fixed investments, which further intensifies the recession due to the multiplier effect. The accelerator effect fits the behavior of an economy best when either the economy is moving away from full employment or when it is already below that level of production. This is because high levels of aggregate demand hit against the limits set by the existing labour force, the existing stock of capital goods, the availability of natural resources, and the technical ability of an economy to convert inputs into products.";
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
            return "Accelerator Effect";
        }
    }

    return nullptr;
}

string _Economics::Terms::AdaptiveExpectations(string text)
{
    string model = "llama3";
    string definition = "In economics, adaptive expectations is a hypothesized process by which people form their expectations about what will happen in the future based on what has happened in the past. For example, if people want to create an expectation of the inflation rate in the future, they can refer to past inflation rates to infer some consistencies and could derive a more accurate expectation the more years they consider. ";
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
            return "Adaptive Expectations";
        }
    }

    return nullptr;
}

string _Economics::Terms::ADASModel(string text)
{
    string model = "llama3";
    string definition = "A macroeconomic model that explains inflation and output through the relationship of downward-sloping aggregate demand (AD) and horizontal inflation adjustment (IA). The monetary policy rule (MPR) is assumed, which is that the central bank increases interest rates in response to increase in inflation and vice versa.";
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
            return "A D A S Model";
        }
    }

    return nullptr;
}

string _Economics::Terms::AdvertisingElasticityOfDemand(string text)
{
    string model = "llama3";
    string definition = "Advertising elasticity of demand (or simply advertising elasticity, often shortened to AED) is an elasticity measuring the effect of an increase or decrease in advertising on a market. Traditionally, it is considered as being positively related, demand for the good that is subject of the advertising campaign can be inversely related to the amount spent if the advertising is negative.";
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
            return "Advertising Elasticity Of Demand";
        }
    }

    return nullptr;
}

string _Economics::Terms::Agflation(string text)
{
    string model = "llama3";
    string definition = "Agflation (or agrarian inflation) is an economic phenomenon of an advanced increase in the price for food and for industrial agricultural crops when compared with the general rise in prices or with the rise in prices in the non-agricultural sector. The term was increasingly used in the analytical reports, for example, by the investment banks Merrill Lynch in early 2007 and Goldman Sachs in early 2008. They used the term to denote a sharp rise in prices for agricultural products, or, more precisely, a rapid increase in food prices against the background of a decrease in its reserves, a relatively low general inflation rate, and insignificant growth in the level of wages. Agflation has become an increasingly important issue for many governments. From time to time agflation may become so severe that the World Food Programme has described the phenomenon as a \"silent tsunami\". Agflation endangers food security, particularly for developing countries, and can cause social unrest.";
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
            return "Agflation";
        }
    }

    return nullptr;
}

string _Economics::Terms::AggregateDemand(string text)
{
    string model = "llama3";
    string definition = "In economics, aggregate demand (AD) or domestic final demand (DFD) is the total demand for final goods and services in an economy at a given time. It is often called effective demand, though at other times this term is distinguished. This is the demand for the gross domestic product of a country. It specifies the amount of goods and services that will be purchased at all possible price levels. Consumer spending, investment, corporate and government expenditure, and net exports make up the aggregate demand. The aggregate demand curve is plotted with real output on the horizontal axis and the price level on the vertical axis. While it is theorized to be downward sloping, the Sonnenschein-Mantel-Debreu results show that the slope of the curve cannot be mathematically derived from assumptions about individual rational behavior. Instead, the downward sloping aggregate demand curve is derived with the help of three macroeconomic assumptions about the functioning of markets: Pigou\'s wealth effect, Keynes\' interest rate effect and the Mundell-Fleming exchange-rate effect. The Pigou effect states that a higher price level implies lower real wealth and therefore lower consumption spending, giving a lower quantity of goods demanded in the aggregate. The Keynes effect states that a higher price level implies a lower real money supply and therefore higher interest rates resulting from relevant market equilibrium condition, in turn resulting in lower investment spending on new physical capital and hence a lower quantity of goods being demanded in the aggregate. The Mundell-Fleming exchange-rate effect is an extension of the IS-LM model. Whereas the traditional IS-LM Model deals with a closed economy, Mundell-Fleming describes a small open economy. The Mundell-Fleming model portrays the short-run relationship between an economy\'s nominal exchange rate, interest rate, and output (in contrast to the closed-economy IS-LM model, which focuses only on the relationship between the interest rate and output). The aggregate demand curve illustrates the relationship between two factors: the quantity of output that is demanded and the aggregate price level. Aggregate demand is expressed contingent upon a fixed level of the nominal money supply. There are many factors that can shift the AD curve. Rightward shifts result from increases in the money supply, in government expenditure, or in autonomous components of investment or consumption spending, or from decreases in taxes. According to the aggregate demand-aggregate supply model, when aggregate demand increases, there is movement up along the aggregate supply curve, giving a higher level of prices.";
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
            return "Aggregate Demand";
        }
    }

    return nullptr;
}

string _Economics::Terms::AggregateSupply(string text)
{
    string model = "llama3";
    string definition = "In economics, aggregate supply (AS) or domestic final supply (DFS) is the total supply of goods and services that firms in a national economy plan on selling during a specific time period. It is the total amount of goods and services that firms are willing and able to sell at a given price level in an economy. Together with aggregate demand it serves as one of two components for the AD-AS model.";
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
            return "Aggregate Supply";
        }
    }

    return nullptr;
}

string _Economics::Terms::AggregationProblem(string text)
{
    string model = "llama3";
    string definition = "In economics, an aggregate is a summary measure. It replaces a vector that is composed of many real numbers by a single real number, or a scalar. Consequently, there occur various problems that are inherent in the formulations that use aggregated variables. The aggregation problem is the difficult problem of finding a valid way to treat an empirical or theoretical aggregate as if it reacted like a less-aggregated measure, say, about behavior of an individual agent as described in general microeconomic theory (see Representative agent, heterogeneity in economics). The second meaning of \"aggregation problem\" is the theoretical difficulty in using and treating laws and theorems that include aggregate variables. A typical example is the aggregate production function. Another famous problem is Sonnenschein-Mantel-Debreu theorem. Most of macroeconomic statements comprise this problem. ";
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
            return "Aggregation Problem";
        }
    }

    return nullptr;
}

string _Economics::Terms::Agent(string text)
{
    string model = "llama3";
    string definition = "In economics, an agent is an actor (more specifically, a decision maker) in a model of some aspect of the economy. Typically, every agent makes decisions by solving a well- or ill-defined optimization or choice problem. For example, buyers (consumers) and sellers (producers) are two common types of agents in partial equilibrium models of a single market. Macroeconomic models, especially dynamic stochastic general equilibrium models that are explicitly based on microfoundations, often distinguish households, firms, and governments or central banks as the main types of agents in the economy. Each of these agents may play multiple roles in the economy; households, for example, might act as consumers, as workers, and as voters in the model. Some macroeconomic models distinguish even more types of agents, such as workers and shoppers or commercial banks. The term agent is also used in relation to principal-agent models; in this case, it refers specifically to someone delegated to act on behalf of a principal. In agent-based computational economics, corresponding agents are \"computational objects modeled as interacting according to rules\" over space and time, not real people. The rules are formulated to model behavior and social interactions based on stipulated incentives and information. The concept of an agent may be broadly interpreted to be any persistent individual, social, biological, or physical entity interacting with other such entities in the context of a dynamic multi-agent economic system.";
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
            return "Agent";
        }
    }

    return nullptr;
}

string _Economics::Terms::AgriculturalEconomics(string text)
{
    string model = "llama3";
    string definition = "Agricultural economics is an applied field of economics concerned with the application of economic theory in optimizing the production and distribution of food and fiber products. Agricultural economics began as a branch of economics that specifically dealt with land usage. It focused on maximizing the crop yield while maintaining a good soil ecosystem. Throughout the 20th century the discipline expanded and the current scope of the discipline is much broader. Agricultural economics today includes a variety of applied areas, having considerable overlap with conventional economics. Agricultural economists have made substantial contributions to research in economics, econometrics, development economics, and environmental economics. Agricultural economics influences food policy, agricultural policy, and environmental policy.";
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
            return "Agricultural Economics";
        }
    }

    return nullptr;
}

string _Economics::Terms::AKModel(string text)
{
    string model = "llama3";
    string definition = "The AK model of economic growth is an endogenous growth model used in the theory of economic growth, a subfield of modern macroeconomics. In the 1980s it became progressively clearer that the standard neoclassical exogenous growth models were theoretically unsatisfactory as tools to explore long run growth, as these models predicted economies without technological change and thus they would eventually converge to a steady state, with zero per capita growth. A fundamental reason for this is the diminishing return of capital; the key property of AK endogenous-growth model is the absence of diminishing returns to capital. In lieu of the diminishing returns of capital implied by the usual parameterizations of a Cobb-Douglas production function, the AK model uses a linear model where output is a linear function of capital. Its appearance in most textbooks is to introduce endogenous growth theory.";
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
            return "A K Model";
        }
    }

    return nullptr;
}

string _Economics::Terms::AlchianAllenEffect(string text)
{
    string model = "llama3";
    string definition = "The Alchian-Allen effect was described in 1964 by Armen Alchian and William R Allen in the book University Economics (now called Exchange and Production). It states that when the prices of two substitute goods, such as high and low grades of the same product, are both increased by a fixed per-unit amount such as a transportation cost or a lump-sum tax, consumption will shift toward the higher-grade product. This is because the added per-unit amount decreases the relative price of the higher-grade product. Suppose, for example, that high-grade coffee beans are $3/pound and low-grade beans $1.50/pound; in this example, high-grade beans cost twice as much as low-grade beans. If a per-pound international shipping cost of $1 is added, the effective prices are now $4 and $2.50: High-grade beans now cost only 1.6 times as much as low-grade beans. This reduced ratio of difference will induce distant coffee-buyers to now choose a higher ratio of high-to-low grade beans than local coffee-buyers. The effect has been studied as it applies to illegal drugs and it has been shown that the potency of marijuana increased in response to higher enforcement budgets, and there was a similar effect for alcohol in the U.S. during Prohibition. This effect is called iron law of prohibition. Another example is that Australians drink higher-quality Californian wine than Californians, and vice versa, because it is only worth the transportation costs for the most expensive wine. Colloquially, the Alchian-Allen theorem is also known as the \"shipping the good apples out\" theorem (Thomas Borcherding), or as the \"third law of demand.\"";
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
            return "Alchian Allen Effect";
        }
    }

    return nullptr;
}

string _Economics::Terms::AllaisParadox(string text)
{
    string model = "llama3";
    string definition = "The Allais paradox is a choice problem designed by Maurice Allais (1953) to show an inconsistency of actual observed choices with the predictions of expected utility theory. The Allais paradox demonstrates that individuals rarely make rational decisions consistently when required to do so immediately. The independence axiom of expected utility theory, which requires that the preferences of an individual should not change when altering two lotteries by equal proportions, was proven to be violated by the paradox.";
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
            return "Allais Paradox";
        }
    }

    return nullptr;
}

string _Economics::Terms::AllocativeEfficiency(string text)
{
    string model = "llama3";
    string definition = "Allocative efficiency is a state of the economy in which production is aligned with the preferences of consumers and producers; in particular, the set of outputs is chosen so as to maximize the social welfare of society. This is achieved if every produced good or service has a marginal benefit equal to the marginal cost of production.";
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
            return "Allocative Efficiency";
        }
    }

    return nullptr;
}

string _Economics::Terms::AlternativeMinimumTax(string text)
{
    string model = "llama3";
    string definition = "The alternative minimum tax (AMT) is a tax imposed by the United States federal government in addition to the regular income tax for certain individuals, estates, and trusts. As of tax year 2018, the AMT raises about $5.2 billion, or 0.4% of all federal income tax revenue, affecting 0.1% of taxpayers, mostly in the upper income ranges.";
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
            return "Alternative Minimum Tax";
        }
    }

    return nullptr;
}

string _Economics::Terms::AmbiguityAversion(string text)
{
    string model = "llama3";
    string definition = "In decision theory and economics, ambiguity aversion (also known as uncertainty aversion) is a preference for known risks over unknown risks. An ambiguity-averse individual would rather choose an alternative where the probability distribution of the outcomes is known over one where the probabilities are unknown. This behavior was first introduced through the Ellsberg paradox (people prefer to bet on the outcome of an urn with 50 red and 50 black balls rather than to bet on one with 100 total balls but for which the number of black or red balls is unknown). There are two categories of imperfectly predictable events between which choices must be made: risky and ambiguous events (also known as Knightian uncertainty). Risky events have a known probability distribution over outcomes while in ambiguous events the probability distribution is not known. The reaction is behavioral and still being formalized. Ambiguity aversion can be used to explain incomplete contracts, volatility in stock markets, and selective abstention in elections (Ghirardato & Marinacci, 2001). The concept is expressed in the English proverb: \"Better the devil you know than the devil you don\'t.\"";
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
            return "Ambiguity Aversion";
        }
    }

    return nullptr;
}

string _Economics::Terms::AmericanSchool(string text)
{
    string model = "llama3";
    string definition = "The American School, also known as the National System, represents three different yet related constructs in politics, policy and philosophy. The policy existed from the 1790s to the 1970s, waxing and waning in actual degrees and details of implementation. Historian Michael Lind describes it as a coherent applied economic philosophy with logical and conceptual relationships with other economic ideas. It is the macroeconomic philosophy that dominated United States national policies from the time of the American Civil War until the mid-20th century. Closely related to mercantilism, it can be seen as contrary to classical economics. It consisted of these three core policies: 1. Protecting industry through selective high tariffs (especially 1861-1932) and through subsidies (especially 1932-1970). 2. Government investments in infrastructure creating targeted internal improvements (especially in transportation). A national bank with policies that promote the growth of productive enterprises rather than speculation.";
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
            return "American School";
        }
    }

    return nullptr;
}

string _Economics::Terms::AmorosoRobinsonRelation(string text)
{
    string model = "llama3";
    string definition = "The Amoroso-Robinson relation, named after economists Luigi Amoroso and Joan Robinson, describes the relation between price, marginal revenue, and price elasticity of demand. AR/Ax = p(1 + 1/Ex,p), AR/AX is the marginal revenue, x is the particular good, p is the good\'s price, Ex,p < 0 is the price elasticity of demand.";
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
            return "Amoroso Robinson Relation";
        }
    }

    return nullptr;
}

string _Economics::Terms::AncientEconomicThought(string text)
{
    string model = "llama3";
    string definition = "In the history of economic thought, ancient economic thought refers to the ideas from people before the Middle Ages. Economics in the classical age is defined in the modern analysis as a factor of ethics and politics, only becoming an object of study as a separate discipline during the 18th century.";
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
            return "Ancient Economic Thought";
        }
    }

    return nullptr;
}

string _Economics::Terms::AngloSaxonModel(string text)
{
    string model = "llama3";
    string definition = "The Anglo-Saxon model (so called because it is practiced in Anglosphere countries such as the United Kingdom, the United States, Canada, New Zealand, Australia and Ireland) is a regulated market-based economic model that emerged in the 1970s based on the Chicago school of economics, spearheaded in the 1980s in the United States by the economics of then President Ronald Reagan (dubbed Reaganomics), and reinforced in the United Kingdom by then Prime Minister Margaret Thatcher (dubbed Thatcherism). However, its origins are said to date to the 18th century in the United Kingdom and the ideas of the classical economist Adam Smith. Characteristics of this model include low levels of regulation and taxation, with the public sector providing minimal services. It also means strong private property rights, contract enforcement, and overall ease of doing business as well as low barriers to free trade.";
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
            return "Anglo Saxon Model";
        }
    }

    return nullptr;
}

string _Economics::Terms::AnnualEffectiveDiscountRate(string text)
{
    string model = "llama3";
    string definition = "The annual effective discount rate expresses the amount of interest paid or earned as a percentage of the balance at the end of the annual period. It is related to but slightly smaller than the effective rate of interest, which expresses the amount of interest as a percentage of the balance at the start of the period. The discount rate is commonly used for U.S. Treasury bills and similar financial instruments. For example, consider a government bond that sells for $95 (\'balance\' in the bond at the start of period) and pays $100 (\'balance\' in the bond at the end of period) in a year\'s time.";
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
            return "Annual Effective Discount Rate";
        }
    }

    return nullptr;
}

string _Economics::Terms::AntiRivalGood(string text)
{
    string model = "llama3";
    string definition = "\"Anti-rival good\" is a neologism suggested by Steven Weber. According to his definition, it is the opposite of a rival good. The more people share an anti-rival good, the more utility each person receives. Examples include software and other information goods created through the process of commons-based peer production. An anti-rival good meets the test of a public good because it is non-excludable (freely available to all) and non-rival (consumption by one person does not reduce the amount available for others). However, it has the additional quality of being created by private individuals for common benefit without being motivated by pure altruism, because the individual contributor also receives benefits from the contributions of others.";
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
            return "Anti Rival Good";
        }
    }

    return nullptr;
}

string _Economics::Terms::AntitrustLaw(string text)
{
    string model = "llama3";
    string definition = "Competition law is the field of law that promotes or seeks to maintain market competition by regulating anti-competitive conduct by companies. Competition law is implemented through public and private enforcement. It is also known as antitrust law (or just antitrust), anti-monopoly law, and trade practices law; the act of pushing for antitrust measures or attacking monopolistic companies (known as trusts) is commonly known as trust busting. The history of competition law reaches back to the Roman Empire. The business practices of market traders, guilds and governments have always been subject to scrutiny, and sometimes severe sanctions. Since the 20th century, competition law has become global. The two largest and most influential systems of competition regulation are United States antitrust law and European Union competition law. National and regional competition authorities across the world have formed international support and enforcement networks. Modern competition law has historically evolved on a national level to promote and maintain fair competition in markets principally within the territorial boundaries of nation-states. National competition law usually does not cover activity beyond territorial borders unless it has significant effects at nation-state level. Countries may allow for extraterritorial jurisdiction in competition cases based on so-called \"effects doctrine\". The protection of international competition is governed by international competition agreements. In 1945, during the negotiations preceding the adoption of the General Agreement on Tariffs and Trade (GATT) in 1947, limited international competition obligations were proposed within the Charter for an International Trade Organisation. These obligations were not included in GATT, but in 1994, with the conclusion of the Uruguay Round of GATT multilateral negotiations, the World Trade Organization (WTO) was created. The Agreement Establishing the WTO included a range of limited provisions on various cross-border competition issues on a sector specific basis. Competition law has failed to prevent monopolization of economic activity. \"The global economy is dominated by a handful of powerful transnational corporations (TNCs). ... Only 737 top holders accumulate 80% of the control over the value of all ... network control is much more unequally distributed than wealth. In particular, the top ranked actors hold a control ten times bigger than what could be expected based on their wealth. ... Recent works have shown that when a financial network is very densely connected it is prone to systemic risk. Indeed, while in good times the network is seemingly robust, in bad times firms go into distress simultaneously. This knife-edge property was witnessed during the recent (2009) financial turmoil \"";
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
            return "Antitrust Law";
        }
    }

    return nullptr;
}

string _Economics::Terms::AppliedEconomics(string text)
{
    string model = "llama3";
    string definition = "Applied economics is the application of economic theory and econometrics in specific settings. As one of the two sets of fields of economics (the other set being the core), it is typically characterized by the application of the core, i.e. economic theory and econometrics to address practical issues in a range of fields including demographic economics, labour economics, business economics, industrial organization, agricultural economics, development economics, education economics, engineering economics, financial economics, health economics, monetary economics, public economics, and economic history. From the perspective of economic development, the purpose of applied economics is to enhance the quality of business practices and national policy making. The process often involves a reduction in the level of abstraction of this core theory. There are a variety of approaches including not only empirical estimation using econometrics, input-output analysis or simulations but also case studies, historical analogy and so-called common sense or the \"vernacular\". This range of approaches is indicative of what Roger Backhouse and Jeff Biddle argue is the ambiguous nature of the concept of applied economics. It is a concept with multiple meanings. Among broad methodological distinctions, one source places it in neither positive nor normative economics but the art of economics, glossed as \"what most economists do\".";
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
            return "Applied Economics";
        }
    }

    return nullptr;
}

string _Economics::Terms::AppropriateTechnology(string text)
{
    string model = "llama3";
    string definition = "Appropriate technology is a movement (and its manifestations) encompassing technological choice and application that is small-scale, affordable by its users, labor-intensive, energy-efficient, environmentally sustainable, and locally autonomous. It was originally articulated as intermediate technology by the economist Ernst Friedrich \"Fritz\" Schumacher in his work Small Is Beautiful. Both Schumacher and many modern-day proponents of appropriate technology also emphasize the technology as people-centered. Appropriate technology has been used to address issues in a wide range of fields. Well-known examples of appropriate technology applications include: bike- and hand-powered water pumps (and other self-powered equipment), the bicycle, the universal nut sheller, self-contained solar lamps and streetlights, and passive solar building designs. Today appropriate technology is often developed using open source principles, which have led to open-source appropriate technology (OSAT) and thus many of the plans of the technology can be freely found on the Internet. OSAT has been proposed as a new model of enabling innovation for sustainable development. Appropriate technology is most commonly discussed in its relationship to economic development and as an alternative to technology transfer of more capital-intensive technology from industrialized nations to developing countries. However, appropriate technology movements can be found in both developing and developed countries. In developed countries, the appropriate technology movement grew out of the energy crisis of the 1970s and focuses mainly on environmental and sustainability issues. Today the idea is multifaceted; in some contexts, appropriate technology can be described as the simplest level of technology that can achieve the intended purpose, whereas in others, it can refer to engineering that takes adequate consideration of social and environmental ramifications. The facets are connected through robustness and sustainable living.";
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
            return "Appropriate Technology";
        }
    }

    return nullptr;
}

string _Economics::Terms::Arbitrage(string text)
{
    string model = "llama3";
    string definition = "In economics and finance, arbitrage (/\'??rb?tr???/, UK also /-tr?d?/) is the practice of taking advantage of a difference in prices in two or more markets - striking a combination of matching deals to capitalize on the difference, the profit being the difference between the market prices at which the unit is traded. When used by academics, an arbitrage is a transaction that involves no negative cash flow at any probabilistic or temporal state and a positive cash flow in at least one state; in simple terms, it is the possibility of a risk-free profit after transaction costs. For example, an arbitrage opportunity is present when there is the possibility to instantaneously buy something for a low price and sell it for a higher price. In principle and in academic use, an arbitrage is risk-free; in common use, as in statistical arbitrage, it may refer to expected profit, though losses may occur, and in practice, there are always risks in arbitrage, some minor (such as fluctuation of prices decreasing profit margins), some major (such as devaluation of a currency or derivative). In academic use, an arbitrage involves taking advantage of differences in price of a single asset or identical cash-flows; in common use, it is also used to refer to differences between similar assets (relative value or convergence trades), as in merger arbitrage. The term is mainly applied in the financial field. People who engage in arbitrage are called arbitrageurs Arbitrage has the effect of causing prices of the same or very similar assets in different markets to converge.";
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
            return "Arbitrage";
        }
    }

    return nullptr;
}

string _Economics::Terms::ArrowDebreuModel(string text)
{
    string model = "llama3";
    string definition = "In mathematical economics, the Arrow-Debreu model is a theoretical general equilibrium model. It posits that under certain economic assumptions (convex preferences, perfect competition, and demand independence), there must be a set of prices such that aggregate supplies will equal aggregate demands for every commodity in the economy. The model is central to the theory of general (economic) equilibrium, and it is used as a general reference for other microeconomic models. It was proposed by Kenneth Arrow, Gérard Debreu in 1954, and Lionel W. McKenzie independently in 1954, with later improvements in 1959. The A-D model is one of the most general models of competitive economy and is a crucial part of general equilibrium theory, as it can be used to prove the existence of general equilibrium (or Walrasian equilibrium) of an economy. In general, there may be many equilibria. Arrow (1972) and Debreu (1983) were separately awarded the Nobel Prize in Economics for their development of the model. McKenzie, however, did not receive the award.";
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
            return "Arrow Debreu Model";
        }
    }

    return nullptr;
}

string _Economics::Terms::ArrowDebreuSecurity(string text)
{
    string model = "llama3";
    string definition = "In financial economics, a state-price security, also called an Arrow-Debreu security (from its origins in the Arrow-Debreu model), a pure security, or a primitive security is a contract that agrees to pay one unit of a numeraire (a currency or a commodity) if a particular state occurs at a particular time in the future and pays zero numeraire in all the other states. The price of this security is the state price of this particular state of the world. The state price vector is the vector of state prices for all states.  See Financial economics  State prices. An Arrow security is an instrument with a fixed payout of one unit in a specified state and no payout in other states. It is a type of hypothetical asset used in the Arrow market structure model. In contrast to the Arrow-Debreu market structure model, an Arrow market is a market in which the individual agents engage in trading assets at every time period t. In an Arrow-Debreu model, trading occurs only once at the beginning of time. An Arrow Security is an asset traded in an Arrow market structure model which encompasses a complete market. The Arrow-Debreu model (also referred to as the Arrow-Debreu-McKenzie model or ADM model) is the central model in general equilibrium theory and uses state prices in the process of proving the existence of a unique general equilibrium. State prices may relatedly be applied in derivatives pricing and hedging: a contract whose settlement value is a function of an underlying asset whose value is uncertain at contract date, can be decomposed as a linear combination of its Arrow-Debreu securities, and thus as a weighted sum of its state prices;   see Contingent claim analysis. Breeden and Litzenberger\'s work in 1978  established the latter, more general use of state prices in finance.";
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
            return "Arrow Debreu Security";
        }
    }

    return nullptr;
}

string _Economics::Terms::ArrowInformationParadox(string text)
{
    string model = "llama3";
    string definition = "The Arrow information paradox (information paradox for short, or AIP), and occasionally referred to as Arrow\'s disclosure paradox, named after Kenneth Arrow, American economist and joint winner of the Nobel Memorial Prize in Economics with John Hicks, is a problem faced by companies when managing intellectual property across their boundaries. It occurs when they seek external technologies for their business or external markets for their own technologies. It has implications for the value of technology and innovations as well as their development by more than one firm, and for the need for and limitations of patent protection. Arrow\'s information paradox theory was set out in a 1962 article by K. J. Arrow. Cornell Law School professor Oskar Liivak has written in a paper for a conference at Stanford University that Arrow\'s article \"has been one of the foundational theoretical pillars of the incentive based theory of patents as Arrow\'s work is thought to rule out a strictly market-based solution\". A fundamental tenet of the paradox is that the customer, i.e. the potential purchaser of the information describing a technology (or other information having some value, such as facts), wants to know the technology and what it does in sufficient detail as to understand its capabilities or have information about the facts or products to decide whether or not to buy it. Once the customer has this detailed knowledge, however, the seller has in effect transferred the technology to the customer without any compensation. This has been argued to show the need for patent protection. If the buyer trusts the seller or is protected via contract, then they only need to know the results that the technology will provide, along with any caveats for its usage in a given context. A problem is that sellers lie, they may be mistaken, one or both sides overlook side consequences for usage in a given context, or some unknown unknown affects the actual outcome. Discussions of the value of patent rights have taken Arrow\'s information paradox into account in their evaluations. The theory has been the basis for many later economic studies. These include theories that pre-patent innovation can be carried out only by a single firm.";
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
            return "Arrow Information Paradox";
        }
    }

    return nullptr;
}

string _Economics::Terms::ArrowsImpossibilityTheorem(string text)
{
    string model = "llama3";
    string definition = "Arrow\'s impossibility theorem is a key result in social choice theory, showing that no ranking-based decision rule can satisfy the requirements of rational choice theory. Most notably, Arrow showed that no such rule can satisfy all of a certain set of seemingly simple and reasonable conditions that include independence of irrelevant alternatives, the principle that a choice between two alternatives A and B should not depend on the quality of some third, unrelated option C. The result is most often cited in discussions of voting rules. However, Arrow\'s theorem is substantially broader, and can be applied to methods of social decision-making other than voting. It therefore generalizes Condorcet\'s voting paradox, and shows similar problems exist for every collective decision-making procedure based on relative comparisons. Plurality-rule methods like first-past-the-post and ranked-choice (instant-runoff) voting are highly sensitive to spoilers, particularly in situations where they are not forced. By contrast, majority-rule (Condorcet) methods of ranked voting uniquely minimize the number of spoiled elections by restricting them to rare situations called cyclic ties. Under some idealized models of voter behavior (e.g. Black\'s left-right spectrum), spoiler effects can disappear entirely for these methods. Arrow\'s theorem does not cover rated voting rules, and thus cannot be used to inform their susceptibility to the spoiler effect. However, Gibbard\'s theorem shows these methods\' susceptibility to strategic voting, and generalizations of Arrow\'s theorem describe cases where rated methods are susceptible to the spoiler effect.";
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
            return "Arrows Impossibility Theorem";
        }
    }

    return nullptr;
}

string _Economics::Terms::AssociateDegree(string text)
{
    string model = "llama3";
    string definition = "An associate degree or associate\'s degree is an undergraduate degree awarded after a course of post-secondary study lasting two to three years. It is a level of academic qualification above a high school diploma and below a bachelor\'s degree. The first associate degrees were awarded in the UK (where they are no longer awarded) in 1873 before spreading to the US in 1898. In the United States, the associate degree may allow transfer into the third year of a bachelor\'s degree. Associate degrees have since been introduced in a small number of other countries.";
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
            return "Associate Degree";
        }
    }

    return nullptr;
}

string _Economics::Terms::AtkinsonStiglitzTheorem(string text)
{
    string model = "llama3";
    string definition = "The Atkinson-Stiglitz theorem is a theorem of public economics. It implies that no indirect taxes need to be employed where the utility function is separable between labor and all commodities. Non-linear income taxation can be used by the government and was in a seminal article by Joseph Stiglitz and Anthony Atkinson in 1976. The Atkinson-Stiglitz theorem is an important theoretical result in public economics, spawning a broad literature that delimited the conditions under which the theorem holds. For example, Emmanuel Saez, a French-American professor and economist demonstrated that the Atkinson-Stiglitz theorem does not hold if households have heterogeneous preferences rather than homogeneous ones. In practice, the Atkinson-Stiglitz theorem has often been invoked in the debate on optimal capital income taxation. As capital income taxation can be interpreted as the taxation of future consumption over the taxation of present consumption, the theorem implies that governments should abstain from capital income taxation if non-linear income taxation were an option since capital income taxation would not improve equity by comparison to the non-linear income tax, while additionally distorting savings.";
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
            return "Atkinson Stiglitz Theorem";
        }
    }

    return nullptr;
}

string _Economics::Terms::AumannsAgreementTheorem(string text)
{
    string model = "llama3";
    string definition = "Aumann\'s agreement theorem was stated and proved by Robert Aumann in a paper titled \"Agreeing to Disagree\", which introduced the set theoretic description of common knowledge. The theorem concerns agents who share a common prior and update their probabilistic beliefs by Bayes\' rule. It states that if the probabilistic beliefs of such agents, regarding a fixed event, are common knowledge then these probabilities must coincide. Thus, agents cannot agree to disagree, that is have common knowledge of a disagreement over the posterior probability of a given event.";
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
            return "Aumanns Agreement Theorem";
        }
    }

    return nullptr;
}

string _Economics::Terms::Austerity(string text)
{
    string model = "llama3";
    string definition = "In economic policy, austerity is a set of political-economic policies that aim to reduce government budget deficits through spending cuts, tax increases, or a combination of both. There are three primary types of austerity measures: higher taxes to fund spending, raising taxes while cutting spending, and lower taxes and lower government spending. Austerity measures are often used by governments that find it difficult to borrow or meet their existing obligations to pay back loans. The measures are meant to reduce the budget deficit by bringing government revenues closer to expenditures. Proponents of these measures state that this reduces the amount of borrowing required and may also demonstrate a government\'s fiscal discipline to creditors and credit rating agencies and make borrowing easier and cheaper as a result.In most macroeconomic models, austerity policies which reduce government spending lead to increased unemployment in the short term. These reductions in employment usually occur directly in the public sector and indirectly in the private sector. Where austerity policies are enacted using tax increases, these can reduce consumption by cutting household disposable income. Reduced government spending can reduce gross domestic product (GDP) growth in the short term as government expenditure is itself a component of GDP. In the longer term, reduced government spending can reduce GDP growth if, for example, cuts to education spending leave a country\'s workforce less able to do high-skilled jobs or if cuts to infrastructure investment impose greater costs on business than they saved through lower taxes. In both cases, if reduced government spending leads to reduced GDP growth, austerity may lead to a higher debt-to-GDP ratio than the alternative of the government running a higher budget deficit. In the aftermath of the Great Recession, austerity measures in many European countries were followed by rising unemployment and slower GDP growth. The result was increased debt-to-GDP ratios despite reductions in budget deficits. Theoretically in some cases, particularly when the output gap is low, austerity can have the opposite effect and stimulate economic growth. For example, when an economy is operating at or near capacity, higher short-term deficit spending (stimulus) can cause interest rates to rise, resulting in a reduction in private investment, which in turn reduces economic growth. Where there is excess capacity, the stimulus can result in an increase in employment and output. Alberto Alesina, Carlo Favero, and Francesco Giavazzi argue that austerity can be expansionary in situations where government reduction in spending is offset by greater increases in aggregate demand (private consumption, private investment, and exports).";
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
            return "Austerity";
        }
    }

    return nullptr;
}

string _Economics::Terms::AustrianSchool(string text)
{
    string model = "llama3";
    string definition = "The Austrian school is a heterodox school of economic thought that advocates strict adherence to methodological individualism, the concept that social phenomena result primarily from the motivations and actions of individuals along with their self interest. Austrian-school theorists hold that economic theory should be exclusively derived from basic principles of human action. The Austrian school originated in Vienna with the work of Carl Menger, Eugen von Böhm-Bawerk, Friedrich von Wieser, and others. It was methodologically opposed to the Historical school, in a dispute known as Methodenstreit, or methodology quarrel. Current-day economists working in this tradition are located in many countries, but their work is still referred to as Austrian economics. Among the theoretical contributions of the early years of the Austrian school are the subjective theory of value, marginalism in price theory and the formulation of the economic calculation problem.";
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
            return "Austrian School";
        }
    }

    return nullptr;
}

string _Economics::Terms::Autarky(string text)
{
    string model = "llama3";
    string definition = "Autarky is the characteristic of self-sufficiency, usually applied to societies, communities, states, and their economic systems. Autarky as an ideology or economic approach has been attempted by a range of political ideologies and movements, particularly leftist ones like African socialism, mutualism, war communism, communalism, swadeshi, syndicalism (especially anarcho-syndicalism), and left-wing populism, generally in an effort to build alternative economic structures or to control resources against structures a particular movement views as hostile. Conservative, centrist and nationalist movements have also adopted autarky, generally on a more limited scale, to develop a particular industry, to gain independence from other national entities or to preserve part of an existing social order. Proponents of autarky have argued for national self-sufficiency to reduce foreign economic, political and cultural influences, as well as to promote international peace. Economists are generally supportive of free trade. There is a broad consensus among economists that protectionism has a negative effect on economic growth and economic welfare, while free trade and the reduction of trade barriers has a positive effect on economic growth and economic stability. Autarky may be a policy of a state or some other type of entity when it seeks to be self-sufficient as a whole, but it also can be limited to a narrow field such as possession of a key raw material. Some countries have a policy of autarky with respect to foodstuffs (as South Korea), and water for national-security reasons. Autarky can result from economic isolation or from external circumstances in which a state or other entity reverts to localized production when it lacks currency or excess production to trade with the outside world.";
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
            return "Autarky";
        }
    }

    return nullptr;
}

string _Economics::Terms::AutomaticStabilizer(string text)
{
    string model = "llama3";
    string definition = "In macroeconomics, automatic stabilizers are features of the structure of modern government budgets, particularly income taxes and welfare spending, that act to damp out fluctuations in real GDP. The size of the government budget deficit tends to increase when a country enters a recession, which tends to keep national income higher by maintaining aggregate demand. There may also be a multiplier effect. This effect happens automatically depending on GDP and household income, without any explicit policy action by the government, and acts to reduce the severity of recessions. Similarly, the budget deficit tends to decrease during booms, which pulls back on aggregate demand. Therefore, automatic stabilizers tend to reduce the size of the fluctuations in a country\'s GDP.";
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
            return "Automatic Stabilizer";
        }
    }

    return nullptr;
}

string _Economics::Terms::AutonomousConsumption(string text)
{
    string model = "llama3";
    string definition = "Autonomous consumption (also exogenous consumption) is the consumption expenditure that occurs when income levels are zero. Such consumption is considered autonomous of income only when expenditure on these consumables does not vary with changes in income; generally, it may be required to fund necessities and debt obligations. If income levels are actually zero, this consumption counts as dissaving, because it is financed by borrowing or using up savings. Autonomous consumption contrasts with induced consumption, in that it does not systematically fluctuate with income, whereas induced consumption does. The two are related, for all households, through the consumption function: C = c0 + c1Yd. C = total consumption, c0 = autonomous consumption (c0 > 0), c1 = the marginal propensity to consume (the gradient of induced consumption) (0 < c1 < 1), and Yd = disposable income (income after government taxes, benefits, and transfer payments).";
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
            return "Autonomous Consumption";
        }
    }

    return nullptr;
}

string _Economics::Terms::AverageCost(string text)
{
    string model = "llama3";
    string definition = "In economics, average cost (AC) or unit cost is equal to total cost (TC) divided by the number of units of a good produced (the output Q): AC = TC/Q. Average cost is an important factor in determining how businesses will choose to price their products.";
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
            return "Average Cost";
        }
    }

    return nullptr;
}

string _Economics::Terms::AverageFixedCost(string text)
{
    string model = "llama3";
    string definition = "In economics, average fixed cost (AFC) is the fixed costs of production (FC) divided by the quantity (Q) of output produced. Fixed costs are those costs that must be incurred in fixed quantity regardless of the level of output produced. AFC = FC/Q. Average fixed cost is the fixed cost per unit of output. As the total number of units of the good produced increases, the average fixed cost decreases because the same amount of fixed costs is being spread over a larger number of units of output.";
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
            return "Average Fixed Cost";
        }
    }

    return nullptr;
}

string _Economics::Terms::AverageVariableCost(string text)
{
    string model = "llama3";
    string definition = "In economics, average variable cost (AVC) is a firm\'s variable costs (VC; labour, electricity, etc.) divided by the quantity of output produced (Q): AVC = VC/Q. Average variable cost plus average fixed cost equals average total cost (ATC): AVC + AFC = ATC. A firm would choose to shut down if the price of its output is below average variable cost at the profit-maximizing level of output (or, more generally if it sells at multiple prices, its average revenue is less than AVC). Producing anything would not generate revenue significant enough to offset the associated variable costs; producing some output would add losses (additional costs in excess of revenues) to the costs inevitably being incurred (the fixed costs). By not producing, the firm loses only the fixed costs.";
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
            return "Average Variable Cost";
        }
    }

    return nullptr;
}

string _Economics::Terms::AverageTaxRate(string text)
{
    string model = "llama3";
    string definition = "An average tax rate is the ratio of the total amount of taxes paid to the total tax base (taxable income or spending), expressed as a percentage. Average tax rates is used to measure tax burden of individuals and corporations and how taxes affect the individuals and corporations ability to consum. Let t be the total tax liability. Let i be the total tax base. = t/i. In a proportional tax, the tax rate is fixed and the average tax rate equals this tax rate. In case of tax brackets, commonly used for progressive taxes, the average tax rate increases as taxable income increases through tax brackets, asymptoting to the top tax rate. For example, consider a system with three tax brackets, 10%, 20%, and 30%, where the 10% rate applies to income from $1 to $10,000, the 20% rate applies to income from $10,001 to $20,000, and the 30% rate applies to all income above $20,000. Under this system, someone earning $25,000 would pay $1,000 for the first $10,000 of income (10%); $2,000 for the second $10,000 of income (20%); and $1,500 for the last $5,000 of income (30%). In total, they would pay $4,500, or an 18% average tax rate.";
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
            return "Average Tax Rate";
        }
    }

    return nullptr;
}

string _Economics::Terms::BackusKehoeKydlandPuzzle(string text)
{
    string model = "llama3";
    string definition = "In economics, the Backus-Kehoe-Kydland consumption correlation puzzle, also known as the BKK puzzle, is the observation that consumption is much less correlated across countries than output.";
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
            return "Backus Kehoe Kydland Puzzle";
        }
    }

    return nullptr;
}

string _Economics::Terms::BackusSmithPuzzle(string text)
{
    string model = "llama3";
    string definition = "In economics, the Backus-Smith puzzle or consumption - real-exchange-rate anomaly is the observation that the correlation between consumption and real exchange rates is zero or negative. This is contrary to economic theory which predicts that with full risk sharing, relative consumption should be perfectly correlated with the real exchange rate. Countries with relative low prices should receive a transfer to take advantage of cheap consumption. This anomaly was first documented by David K. Backus and Gregor W. Smith in 1993.";
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
            return "Backus Smith Puzzle";
        }
    }

    return nullptr;
}

string _Economics::Terms::BackwardAdvantage(string text)
{
    string model = "llama3";
    string definition = "The advantage that a still-developing country has because it can take advantage of the technology/industry gap with a developed country by implementing a new technology or venturing into an industry that is new to its economy but mature in the developed country.";
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
            return "Backward Advantage";
        }
    }

    return nullptr;
}

string _Economics::Terms::BackwardDisadvantage(string text)
{
    string model = "llama3";
    string definition = "The fact that it is easier for late-development countries to imitate technologies, but more difficult to imitate the system, because the reform will offend vested interests.";
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
            return "Backward Disadvantage";
        }
    }

    return nullptr;
}

string _Economics::Terms::BackwardInduction(string text)
{
    string model = "llama3";
    string definition = "The process of reasoning backward in time, from the end of a problem or situation, to determine a sequence of optimal actions. It proceeds by first considering the last time a decision might be made and choosing what to do in any situation at that time. Using this information, one can then determine what to do at the second-to-last time of decision. This process continues backward until one has determined the best action for every possible situation (i.e. for every possible information set) at every point in time.";
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
            return "Backward Induction";
        }
    }

    return nullptr;
}

string _Economics::Terms::BalanceOfPayments(string text)
{
    string model = "llama3";
    string definition = "A record or summary of all economic transactions between the residents of a country and the rest of the world in a particular period of time (e.g. over a quarter of a year or, more commonly, over a year). These transactions are made by individuals, firms and government bodies. Thus the balance of payments includes all external visible and non-visible transactions of a country.";
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
            return "Balance Of Payments";
        }
    }

    return nullptr;
}

string _Economics::Terms::BalanceOfTrade(string text)
{
    string model = "llama3";
    string definition = "Balance of trade is the difference between the monetary value of a nation\'s exports and imports over a certain time period. Sometimes a distinction is made between a balance of trade for goods versus one for services. The balance of trade measures a flow variable of exports and imports over a given period of time. The notion of the balance of trade does not mean that exports and imports are \"in balance\" with each other. If a country exports a greater value than it imports, it has a trade surplus or positive trade balance, and conversely, if a country imports a greater value than it exports, it has a trade deficit or negative trade balance. As of 2016, about 60 out of 200 countries have a trade surplus. The notion that bilateral trade deficits are per se detrimental to the respective national economies is overwhelmingly rejected by trade experts and economists.";
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
            return "Balance Of Trade";
        }
    }

    return nullptr;
}

string _Economics::Terms::BalancedBudget(string text)
{
    string model = "llama3";
    string definition = "A balanced budget (particularly that of a government) is a budget in which revenues are equal to expenditures. Thus, neither a budget deficit nor a budget surplus exists (the accounts \"balance\"). More generally, it is a budget that has no budget deficit, but could possibly have a budget surplus. A cyclically balanced budget is a budget that is not necessarily balanced year-to-year but is balanced over the economic cycle, running a surplus in boom years and running a deficit in lean years, with these offsetting over time. Balanced budgets and the associated topic of budget deficits are a contentious point within academic economics and within politics. Some economists argue that moving from a budget deficit to a balanced budget decreases interest rates, increases investment, shrinks trade deficits and helps the economy grow faster in the longer term. Other economists, especially (but not limited to) those associated with Modern Monetary Theory (MMT), downplay the need for balanced budgets among countries that have the power to issue their own currency, and argue that government spending helps boost productivity, innovation and savings in the private sector.";
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
            return "Balanced Budget";
        }
    }

    return nullptr;
}

string _Economics::Terms::Bank(string text)
{
    string model = "llama3";
    string definition = "A financial institution that accepts deposits from the public and creates credit. Lending activities can be performed either directly or indirectly through capital markets. Due to their importance in the financial stability of a country, banks are highly regulated in most countries. Most nations have institutionalized a system known as fractional reserve banking, under which banks hold liquid assets equal to only a portion of their current liabilities. In addition to other regulations intended to ensure liquidity, banks are generally subject to minimum capital requirements based on an international set of capital standards, known as the Basel Accords.";
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
            return "Bank";
        }
    }

    return nullptr;
}

string _Economics::Terms::BankRate(string text)
{
    string model = "llama3";
    string definition = "Bank rate, also known as discount rate in American English, and (familiarly) the base rate in British English, is the rate of interest which a central bank charges on its loans and advances to a commercial bank. The bank rate is known by a number of different terms depending on the country, and has changed over time in some countries as the mechanisms used to manage the rate have changed. Whenever a bank has a shortage of funds, they can typically borrow from the central bank based on the monetary policy of the country. The borrowing is commonly done via repos: the repo rate is the rate at which the central bank lends short-term money to the banks against securities. It is more applicable when there is a liquidity crunch in the market. In contrast, the reverse repo rate is the rate at which banks can park surplus funds with the reserve bank, which is mostly done when there is surplus liquidity.";
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
            return "Bank Rate";
        }
    }

    return nullptr;
}

string _Economics::Terms::Bankruptcy(string text)
{
    string model = "llama3";
    string definition = "The inability to pay debt due to loss of income, increased spending, or an unforeseen financial crisis.";
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
            return "Bankruptcy";
        }
    }

    return nullptr;
}

string _Economics::Terms::BargainingModelOfWar(string text)
{
    string model = "llama3";
    string definition = "In international relations theory, the bargaining model of war is a method of representing the potential gains and losses and ultimate outcome of war between two actors as a bargaining interaction. A central puzzle that motivates research in this vein is the \"inefficiency puzzle of war\": why do wars occur when it would be better for all parties involved to reach an agreement that goes short of war? In the bargaining model, war between rational actors is possible due to uncertainty and commitment problems. As a result, provision of reliable information and steps to alleviate commitment problems make war less likely. It is an influential strand of rational choice scholarship in the field of international relations. Thomas Schelling was an early proponent of formalizing conflicts as bargaining situations. Stanford University political scientist James Fearon brought prominence to the bargaining model in the 1990s. His 1995 article \"Rationalist Explanations for War\" is the most assigned journal article in International Relations graduate training at U.S. universities. The bargaining model of war has been described as \"the dominant framework used in the study of war in the international relations field.\"";
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
            return "Bargaining Model Of War";
        }
    }

    return nullptr;
}

string _Economics::Terms::BarriersToEntry(string text)
{
    string model = "llama3";
    string definition = "In theories of competition in economics, a barrier to entry, or an economic barrier to entry, is a fixed cost that must be incurred by a new entrant, regardless of production or sales activities, into a market that incumbents do not have or have not had to incur. Because barriers to entry protect incumbent firms and restrict competition in a market, they can contribute to distortionary prices and are therefore most important when discussing antitrust policy. Barriers to entry often cause or aid the existence of monopolies and oligopolies, or give companies market power. Barriers of entry also have an importance in industries. First of all it is important to identify that some exist naturally, such as brand loyalty. Governments can also create barriers to entry to meet consumer protection laws, protecting the public. In other cases it can also be due to inherent scarcity of public resources needed to enter a market.";
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
            return "Barriers To Entry";
        }
    }

    return nullptr;
}

string _Economics::Terms::Barter(string text)
{
    string model = "llama3";
    string definition = "In trade, barter (derived from baretor) is a system of exchange in which participants in a transaction directly exchange goods or services for other goods or services without using a medium of exchange, such as money. Economists usually distinguish barter from gift economies in many ways; barter, for example, features immediate reciprocal exchange, not one delayed in time. Barter usually takes place on a bilateral basis, but may be multilateral (if it is mediated through a trade exchange). In most developed countries, barter usually exists parallel to monetary systems only to a very limited extent. Market actors use barter as a replacement for money as the method of exchange in times of monetary crisis, such as when currency becomes unstable (such as hyperinflation or a deflationary spiral) or simply unavailable for conducting commerce. No ethnographic studies have shown that any present or past society has used barter without any other medium of exchange or measurement, and anthropologists have found no evidence that money emerged from barter. Nevertheless, economists since the times of Adam Smith (1723-1790) often imagined pre-modern societies as examples to use the inefficiency of barter to explain the emergence of money, of \"the\" economy, and hence of the discipline of economics itself.";
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
            return "Barter";
        }
    }

    return nullptr;
}

string _Economics::Terms::BaseErosionAndProfitShifting(string text)
{
    string model = "llama3";
    string definition = "Base erosion and profit shifting (BEPS) refers to corporate tax planning strategies used by multinationals to \"shift\" profits from higher-tax jurisdictions to lower-tax jurisdictions or no-tax locations where there is little or no economic activity, thus \"eroding\" the \"tax-base\" of the higher-tax jurisdictions using deductible payments such as interest or royalties. For the government, the tax base is a company\'s income or profit. Tax is levied as a percentage on this income/profit. When that income / profit is transferred to a tax haven, the tax base is eroded and the company does not pay taxes to the country that is generating the income. As a result, tax revenues are reduced and the country is disadvantaged. The Organisation for Economic Co-operation and Development (OECD) define BEPS strategies as \"exploiting gaps and mismatches in tax rules\". While some of the tactics are illegal, the majority are not. Because businesses that operate across borders can utilize BEPS to obtain a competitive edge over domestic businesses, it affects the righteousness and integrity of tax systems. Furthermore, it lessens deliberate compliance, when taxpayers notice multinationals legally avoiding corporate income taxes. Because developing nations rely more heavily on corporate income tax, they are disproportionately affected by BEPS. Corporate tax havens offer BEPS tools to \"shift\" profits to the haven, and additional BEPS tools to avoid paying taxes within the haven (e.g. Ireland\'s \"CAIA tool\"). BEPS activities cost nations 100-240 billion dollars in lost revenue each year, which is 4-10 percent of worldwide corporate income tax collection. It is alleged that BEPS tools are associated mostly with American technology and life science multinationals. A few studies showed that use of the BEPS tools by American multinationals maximized long-term American Treasury revenue and shareholder return, at the expense of other countries.";
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
            return "Base Erosion And Profit Shifting";
        }
    }

    return nullptr;
}

string _Economics::Terms::BaxterStockmanNeutralityOfExchangeRateRegimePuzzle(string text)
{
    string model = "llama3";
    string definition = "The unexpectedly weak relationship between the exchange rate and any other macroeconomic variable.";
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
            return "Baxter Stockman Neutrality Of Exchange Rate Regime Puzzle";
        }
    }

    return nullptr;
}

string _Economics::Terms::BeckstromsLaw(string text)
{
    string model = "llama3";
    string definition = "In economics, Beckstrom\'s law is a model or theorem formulated by Rod Beckstrom. It purports to answer \"the decades-old question of \'how valuable is a network\'\", and states in summary that \"The value of a network equals the net value added to each user\'s transactions conducted through that network, summed over all users.\"";
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
            return "Beckstroms Law";
        }
    }

    return nullptr;
}

string _Economics::Terms::BehavioralEconomics(string text)
{
    string model = "llama3";
    string definition = "Behavioral economics is the study of the psychological (e.g. cognitive, behavioral, affective, social) factors involved in the decisions of individuals or institutions, and how these decisions deviate from those implied by traditional economic theory. Behavioral economics is primarily concerned with the bounds of rationality of economic agents. Behavioral models typically integrate insights from psychology, neuroscience and microeconomic theory. Behavioral economics began as a distinct field of study in the 1970s and 1980s, but can be traced back to 18th-century economists, such as Adam Smith, who deliberated how the economic behavior of individuals could be influenced by their desires. The status of behavioral economics as a subfield of economics is a fairly recent development; the breakthroughs that laid the foundation for it were published through the last three decades of the 20th century. Behavioral economics is still growing as a field, being used increasingly in research and in teaching.";
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
            return "Behavioral Economics";
        }
    }

    return nullptr;
}

string _Economics::Terms::BellmanEquation(string text)
{
    string model = "llama3";
    string definition = "A Bellman equation, named after Richard E. Bellman, is a necessary condition for optimality associated with the mathematical optimization method known as dynamic programming. It writes the \"value\" of a decision problem at a certain point in time in terms of the payoff from some initial choices and the \"value\" of the remaining decision problem that results from those initial choices. This breaks a dynamic optimization problem into a sequence of simpler subproblems, as Bellman\'s \"principle of optimality\" prescribes. The equation applies to algebraic structures with a total ordering; for algebraic structures with a partial ordering, the generic Bellman\'s equation can be used. The Bellman equation was first applied to engineering control theory and to other topics in applied mathematics, and subsequently became an important tool in economic theory; though the basic concepts of dynamic programming are prefigured in John von Neumann and Oskar Morgenstern\'s Theory of Games and Economic Behavior and Abraham Wald\'s sequential analysis. The term \"Bellman equation\" usually refers to the dynamic programming equation (DPE) associated with discrete-time optimization problems. In continuous-time optimization problems, the analogous equation is a partial differential equation that is called the Hamilton-Jacobi-Bellman equation. In discrete time any multi-stage optimization problem can be solved by analyzing the appropriate Bellman equation. The appropriate Bellman equation can be found by introducing new state variables (state augmentation). However, the resulting augmented-state multi-stage optimization problem has a higher dimensional state space than the original multi-stage optimization problem - an issue that can potentially render the augmented problem intractable due to the \"curse of dimensionality\". Alternatively, it has been shown that if the cost function of the multi-stage optimization problem satisfies a \"backward separable\" structure, then the appropriate Bellman equation can be found without state augmentation.";
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
            return "Bellman Equation";
        }
    }

    return nullptr;
}

string _Economics::Terms::BequestMotive(string text)
{
    string model = "llama3";
    string definition = "A bequest motive seeks to provide an economic justification for the phenomenon of intergenerational transfers of wealth. In other words, to explain why people leave money behind when they die. Which bequest motive theory most realistically represents the intentions of estate planners is unclear. Attempts to test the theories empirically are mired by poor availability of data about wealth holdings. The most common explanation for this is altruism, in which it is held that the disponer gains some form of satisfaction from knowing that his/her heirs will enjoy their inherited wealth. An example might be a parent leaving a child the family home. Another common explanation is accidental bequest, developed by economists Yaari (1965) and Davies (1980). Here it is not assumed that the disponer (testator) gains any specific benefit from leaving a bequest, but rather that lifetime is uncertain, and so she/he holds precautionary savings to insure him/herself against the risk of living too long. Unspent wealth at time of death is transferred according to intestacy law. Finally, exchange bequest occurs where disponers engage in a sort of strategic game in which potential beneficiaries must render a (non-marketable) service in exchange for the promise of inherited wealth. The most widely read model of exchange bequest was published by Bernheim, Summers and Shleifer (1985).";
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
            return "Bequest Motive";
        }
    }

    return nullptr;
}

string _Economics::Terms::BertrandCompetition(string text)
{
    string model = "llama3";
    string definition = "Bertrand competition is a model of competition used in economics, named after Joseph Louis François Bertrand (1822-1900). It describes interactions among firms (sellers) that set prices and their customers (buyers) that choose quantities at the prices set. The model was formulated in 1883 by Bertrand in a review of Antoine Augustin Cournot\'s book Recherches sur les Principes Mathématiques de la Théorie des Richesses (1838) in which Cournot had put forward the Cournot model. Cournot\'s model argued that each firm should maximise its profit by selecting a quantity level and then adjusting price level to sell that quantity. The outcome of the model equilibrium involved firms pricing above marginal cost; hence, the competitive price. In his review, Bertrand argued that each firm should instead maximise its profits by selecting a price level that undercuts its competitors\' prices, when their prices exceed marginal cost. The model was not formalized by Bertrand; however, the idea was developed into a mathematical model by Francis Ysidro Edgeworth in 1889.";
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
            return "Bertrand Competition";
        }
    }

    return nullptr;
}

string _Economics::Terms::BertrandEdgeworthModel(string text)
{
    string model = "llama3";
    string definition = "In microeconomics, the Bertrand-Edgeworth model of price-setting oligopoly looks at what happens when there is a homogeneous product (i.e. consumers want to buy from the cheapest seller) where there is a limit to the output of firms which are willing and able to sell at a particular price. This differs from the Bertrand competition model where it is assumed that firms are willing and able to meet all demand. The limit to output can be considered as a physical capacity constraint which is the same at all prices (as in Edgeworth\'s work), or to vary with price under other assumptions.";
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
            return "Bertrand Edgeworth Model";
        }
    }

    return nullptr;
}

string _Economics::Terms::BertrandParadox(string text)
{
    string model = "llama3";
    string definition = "A situation in which two players (firms) reach a state of Nash equilibrium where both firms charge a price equal to marginal cost.";
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
            return "Bertrand Paradox";
        }
    }

    return nullptr;
}

string _Economics::Terms::Biflation(string text)
{
    string model = "llama3";
    string definition = "Biflation (sometimes mixflation, indeflation, or compartflation) is a state of the economy, in which the processes of inflation and deflation occur simultaneously in different parts of the economy. The term was first coined in 2003 by F. Osborne Brown, a senior financial analyst at Phoenix Investment Group, and has later been widely used in the media. During the biflation, there is a simultaneous rise in prices (inflation) for commodities bought out of the basic income (earnings), and a parallel fall in prices (deflation) for goods bought mainly on credit. Biflation may be seen in the CPI composition: some CPI components are in the inflationary territory, while others are facing deflationary pressure. As such, biflation reflects the complexity of the modern financial system.";
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
            return "Biflation";
        }
    }

    return nullptr;
}

string _Economics::Terms::BigPushModel(string text)
{
    string model = "llama3";
    string definition = "The Big Push Model is a concept in development economics or welfare economics that emphasizes the fact that a firm\'s decision whether to industrialize or not depends on the expectation of what other firms will do. It assumes economies of scale and oligopolistic market structure. It also explains when the industrialization would happen. The major contributions to the concept of the Big Push were made by Paul Rosenstein-Rodan in 1943 and later on by Murphy, Shleifer and Vishny in 1989. Also, some contributions of Matsuyama (1992), Krugman (1991) and Romer (1986) proved to be seminal for later literature on the Big Push. Analysis of this economic model usually involves using game theory. The hallmark of the `big-push\' approach lies in the reaping of external economies through the simultaneous installation of a host of technically interdependent industries. But before that could become possible, we have to overcome the economic indivisibilities by moving forward by a certain \"minimum indivisible step\". This can be realised through the injection of an initial big dose of a certain size of investment.";
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
            return "Big Push Model";
        }
    }

    return nullptr;
}

string _Economics::Terms::BirminghamSchool(string text)
{
    string model = "llama3";
    string definition = "The Birmingham School was a school of economic thought that emerged in Birmingham, England during the post-Napoleonic depression that affected England following the end of the Napoleonic wars in 1815.";
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
            return "Birmingham School";
        }
    }

    return nullptr;
}

string _Economics::Terms::BishopCanningsTheorem(string text)
{
    string model = "llama3";
    string definition = "The Bishop-Cannings theorem is a theorem in evolutionary game theory. It states that (i) all members of a mixed evolutionarily stable strategy (ESS) have the same payoff (Theorem 2), and (ii) that none of these can also be a pure ESS (from their Theorem 3). The usefulness of the results comes from the fact that they can be used to directly find ESSes algebraically, rather than simulating the game and solving it by iteration. The theorem was formulated by Tim Bishop and Chris Cannings at Sheffield University, who published it in 1978. A review is given by John Maynard Smith in Evolution and the Theory of Games, with proof in the appendix.";
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
            return "Bishop Cannings Theorem";
        }
    }

    return nullptr;
}

string _Economics::Terms::BlackScholesModel(string text)
{
    string model = "llama3";
    string definition = "A mathematical model for the dynamics of a financial market containing derivative investment instruments. From the partial differential equation in the model, known as the Black-Scholes equation, one can deduce the Black-Scholes formula, which gives a theoretical estimate of the price of European-style options and shows that the option has a unique price regardless of the risk of the security and its expected return (instead replacing the security\'s expected return with the risk-neutral rate). The formula led to a boom in options trading and provided mathematical legitimacy to the activities of the Chicago Board Options Exchange and other options markets around the world. It is widely used, although often with adjustments and corrections, by options market participants.";
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
            return "Black Scholes Model";
        }
    }

    return nullptr;
}

string _Economics::Terms::BoardOfGovernors(string text)
{
    string model = "llama3";
    string definition = "A board of directors is an executive committee that supervises the activities of a business, a nonprofit organization, or a government agency. The powers, duties, and responsibilities of a board of directors are determined by government regulations (including the jurisdiction\'s corporate law) and the organization\'s own constitution and by-laws. These authorities may specify the number of members of the board, how they are to be chosen, and how often they are to meet. In an organization with voting members, the board is accountable to, and may be subordinate to, the organization\'s full membership, which usually elect the members of the board. In a stock corporation, non-executive directors are elected by the shareholders, and the board has ultimate responsibility for the management of the corporation. In nations with codetermination (such as Germany and Sweden), the workers of a corporation elect a set fraction of the board\'s members. The board of directors appoints the chief executive officer of the corporation and sets out the overall strategic direction. In corporations with dispersed ownership, the identification and nomination of directors (that shareholders vote for or against) are often done by the board itself, leading to a high degree of self-perpetuation. In a non-stock corporation with no general voting membership, the board is the supreme governing body of the institution, and its members are sometimes chosen by the board itself.";
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
            return "Board Of Governors";
        }
    }

    return nullptr;
}

string _Economics::Terms::Bond(string text)
{
    string model = "llama3";
    string definition = "In finance, an instrument of indebtedness of the bond issuer to the holders. The most common types of bonds include municipal bonds and corporate bonds. The bond is a debt security, under which the issuer owes the holders a debt and (depending on the terms of the bond) is obliged to pay them interest (the coupon) or to repay the principal at a later date, termed the maturity date. Interest is usually payable at fixed intervals (semiannual, annual, or sometimes monthly). Very often the bond is negotiable, that is, the ownership of the instrument can be transferred in the secondary market. This means that once the transfer agents at the bank medallion stamp the bond, it is highly liquid on the secondary market.";
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
            return "Bond";
        }
    }

    return nullptr;
}

string _Economics::Terms::BondarevaShapleyTheorem(string text)
{
    string model = "llama3";
    string definition = "The Bondareva-Shapley theorem, in game theory, describes a necessary and sufficient condition for the non-emptiness of the core of a cooperative game in characteristic function form. Specifically, the game\'s core is non-empty if and only if the game is balanced. The Bondareva-Shapley theorem implies that market games and convex games have non-empty cores. The theorem was formulated independently by Olga Bondareva and Lloyd Shapley in the 1960s.";
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
            return "Bondareva Shapley Theorem";
        }
    }

    return nullptr;
}

string _Economics::Terms::BootsTheory(string text)
{
    string model = "llama3";
    string definition = "Purchasing cheap, low-quality goods may become more expensive in the long run because they must be replaced more frequently. For example, purchasing expensive, high-quality boots may be cheaper over a long time because cheaper boots would quickly wear out and require replacement.";
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
            return "Boots Theory";
        }
    }

    return nullptr;
}

string _Economics::Terms::Borrower(string text)
{
    string model = "llama3";
    string definition = "See debtor.";
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
            return "Borrower";
        }
    }

    return nullptr;
}

string _Economics::Terms::BoundedRationality(string text)
{
    string model = "llama3";
    string definition = "Bounded rationality is the idea that rationality is limited when individuals make decisions, and under these limitations, rational individuals will select a decision that is satisfactory rather than optimal. Limitations include the difficulty of the problem requiring a decision, the cognitive capability of the mind, and the time available to make the decision. Decision-makers, in this view, act as satisficers, seeking a satisfactory solution, with everything that they have at the moment rather than an optimal solution. Therefore, humans do not undertake a full cost-benefit analysis to determine the optimal decision, but rather, choose an option that fulfills their adequacy criteria. Some models of human behavior in the social sciences assume that humans can be reasonably approximated or described as rational entities, as in rational choice theory or Downs\' political agency model. The concept of bounded rationality complements the idea of rationality as optimization, which views decision-making as a fully rational process of finding an optimal choice given the information available. Therefore, bounded rationality can be said to address the discrepancy between the assumed perfect rationality of human behaviour (which is utilised by other economics theories), and the reality of human cognition. In short, bounded rationality revises notions of perfect rationality to account for the fact that perfectly rational decisions are often not feasible in practice because of the intractability of natural decision problems and the finite computational resources available for making them. The concept of bounded rationality continues to influence (and be debated in) different disciplines, including political science, economics, psychology, law, philosophy, and cognitive science.";
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
            return "Bounded Rationality";
        }
    }

    return nullptr;
}

string _Economics::Terms::BraesssParadox(string text)
{
    string model = "llama3";
    string definition = "The observation that adding one or more roads to a road network can slow down overall traffic flow through it.";
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
            return "Braesss Paradox";
        }
    }

    return nullptr;
}

string _Economics::Terms::BranderSpencerModel(string text)
{
    string model = "llama3";
    string definition = "The Brander-Spencer model is an economic model in international trade originally developed by James Brander and Barbara Spencer in the early 1980s. The model illustrates a situation where, under certain assumptions, a government can subsidize domestic firms to help them in their competition against foreign producers and in doing so enhances national welfare. This conclusion stands in contrast to results from most international trade models, in which government non-interference is socially optimal.";
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
            return "Brander Spencer Model";
        }
    }

    return nullptr;
}

string _Economics::Terms::BreakEven(string text)
{
    string model = "llama3";
    string definition = "The point at which total cost and total revenue are equal, i.e. \"even\". There is no net loss or gain, and one has \"broken even\", though opportunity costs have been paid and capital has received the risk-adjusted, expected return. In short, all costs that must be paid are paid, and there is neither profit nor loss.";
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
            return "Break Even";
        }
    }

    return nullptr;
}

string _Economics::Terms::BrettonWoodsSystem(string text)
{
    string model = "llama3";
    string definition = "A monetary system which established the rules for commercial and financial relations among the United States, Canada, Western Europe, Australia, and Japan after the 1944 Bretton Woods Agreement. The Bretton Woods system was the first example of a fully negotiated monetary order intended to govern monetary relations among independent states. The chief features were an obligation for each country to adopt a monetary policy that maintained its external exchange rates within 1 percent by tying its currency to gold and the ability of the IMF to bridge temporary imbalances of payments; there was also a need to address the lack of cooperation among other countries and to prevent competitive devaluation of the currencies.";
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
            return "Bretton Woods System";
        }
    }

    return nullptr;
}

string _Economics::Terms::Budget(string text)
{
    string model = "llama3";
    string definition = "The itemization of an individual\'s or firm\'s total income and total expenses for a set period of time, usually a month or a year.";
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
            return "Budget";
        }
    }

    return nullptr;
}

string _Economics::Terms::BudgetDeficit(string text)
{
    string model = "llama3";
    string definition = "The amount by which spending exceeds revenue over a particular period of time; it is the opposite of budget surplus. The term may be applied to the budget of a government, private company, or individual.";
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
            return "Budget Deficit";
        }
    }

    return nullptr;
}

string _Economics::Terms::BudgetSet(string text)
{
    string model = "llama3";
    string definition = "The set of all possible consumption bundles that an individual can afford, given the prices of goods and the individual\'s income level. The budget set is bounded above by the budget line. Graphically speaking, all the consumption bundles that lie inside and on the budget constraint form the budget set. By most definitions, budget sets must be compact and convex.";
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
            return "Budget Set";
        }
    }

    return nullptr;
}

string _Economics::Terms::BudgetShareEngelCurve(string text)
{
    string model = "llama3";
    string definition = "In microeconomics, an Engel curve describes how household expenditure on a particular good or service varies with household income. There are two varieties of Engel curves. Budget share Engel curves describe how the proportion of household income spent on a good varies with income. Alternatively, Engel curves can also describe how real expenditure varies with household income. They are named after the German statistician Ernst Engel (1821-1896), who was the first to investigate this relationship between goods expenditure and income systematically in 1857. The best-known single result from the article is Engel\'s law which states that as income grows, spending on food becomes a smaller share of income; therefore, the share of a household\'s or country\'s income spent on food is an indication of their affluence.";
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
            return "Budget Share Engel Curve";
        }
    }

    return nullptr;
}

string _Economics::Terms::BudgetSurplus(string text)
{
    string model = "llama3";
    string definition = "A balanced budget (particularly that of a government) is a budget in which revenues are equal to expenditures. Thus, neither a budget deficit nor a budget surplus exists (the accounts \"balance\"). More generally, it is a budget that has no budget deficit, but could possibly have a budget surplus. A cyclically balanced budget is a budget that is not necessarily balanced year-to-year but is balanced over the economic cycle, running a surplus in boom years and running a deficit in lean years, with these offsetting over time. Balanced budgets and the associated topic of budget deficits are a contentious point within academic economics and within politics. Some economists argue that moving from a budget deficit to a balanced budget decreases interest rates, increases investment, shrinks trade deficits and helps the economy grow faster in the longer term. Other economists, especially (but not limited to) those associated with Modern Monetary Theory (MMT), downplay the need for balanced budgets among countries that have the power to issue their own currency, and argue that government spending helps boost productivity, innovation and savings in the private sector.";
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
            return "Budget Surplus";
        }
    }

    return nullptr;
}

string _Economics::Terms::BufferStockScheme(string text)
{
    string model = "llama3";
    string definition = "A buffer stock scheme (commonly implemented as intervention storage, the \"ever-normal granary\") is a price stabilization scheme in which surplus commodities are bought and stored for later sale during shortages, usually for an individual commodity market or an entire economy.";
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
            return "Buffer Stock Scheme";
        }
    }

    return nullptr;
}

string _Economics::Terms::Bullionism(string text)
{
    string model = "llama3";
    string definition = "Bullionism is an economic theory that defines wealth by the amount of precious metals owned. Bullionism is an early and perhaps more primitive form of mercantilism. It was derived, during the 16th century, from the observation that the Kingdom of England, because of its large trade surplus, possessed large amounts of gold and silver-bullion-despite the fact that there was not any mining of precious metals in England.";
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
            return "Bullionism";
        }
    }

    return nullptr;
}

string _Economics::Terms::BusinessCycle(string text)
{
    string model = "llama3";
    string definition = "The downward and upward movement of gross domestic product (GDP) around its long-term growth trend. The length of a business cycle is the period of time containing a single boom and contraction in sequence. These fluctuations typically involve shifts over time between periods of relatively rapid economic growth (expansions or booms) and periods of relative stagnation or decline (contractions or recessions).";
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
            return "Business Cycle";
        }
    }

    return nullptr;
}

string _Economics::Terms::BusinessEconomics(string text)
{
    string model = "llama3";
    string definition = "Business economics is a field in applied economics which uses economic theory and quantitative methods to analyze business enterprises and the factors contributing to the diversity of organizational structures and the relationships of firms with labour, capital and product markets. A professional focus of the journal Business Economics has been expressed as providing \"practical information for people who apply economics in their jobs.\" Business economics is an integral part of traditional economics and is an extension of economic concepts to the real business situations. It is an applied science in the sense of a tool of managerial decision-making and forward planning by management. In other words, business economics is concerned with the application of economic theory to business management. Macroeconomic factors are at times applied in this analysis. Business economics is based on microeconomics in two categories: positive and negative. Business economics focuses on the economic issues and problems related to business organization, management, and strategy. Issues and problems include: an explanation of why corporate firms emerge and exist; why they expand: horizontally, vertically and spatially; the role of entrepreneurs and entrepreneurship; the significance of organizational structure; the relationship of firms with employees, providers of capital, customers, and government; and interactions between firms and the business environment.";
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
            return "Business Economics";
        }
    }

    return nullptr;
}

string _Economics::Terms::BusinessSector(string text)
{
    string model = "llama3";
    string definition = "In economics, the business sector or corporate sector - sometimes popularly called simply \"business\" - is \"the part of the economy made up by companies\". It is a subset of the domestic economy, excluding the economic activities of general government, private households, and non-profit organizations serving individuals. The business sector is part of the private sector, but it differs in that the private sector includes all non-government activity, including non-profit organizations, while the business sector only includes business that operate for profit. In the United States the business sector accounted for about 78 percent of the value of gross domestic product (GDP) as of 2000. Kuwait and Tuvalu each had business sectors accounting for less than 40% of GDP as of 2015. In systems of state capitalism, much of the business sector forms part of the public sector. In mixed economies, state-owned enterprises may straddle any divide between public and business sectors, allowing analysts to use the concept of a \"state-owned enterprise sector\". The Oxford English Dictionary records the phrase \"business sector\" in the general sense from 1934. Word usage suggests that the concept of a \"business sector\" came into wider use after 1940. Related terms in previous times included \"merchant class\" and \"merchant caste\".";
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
            return "Business Sector";
        }
    }

    return nullptr;
}

string _Economics::Terms::CambridgeCapitalControversy(string text)
{
    string model = "llama3";
    string definition = "The Cambridge capital controversy, sometimes called \"the capital controversy\" or \"the two Cambridges debate\", was a dispute between proponents of two differing theoretical and mathematical positions in economics that started in the 1950s and lasted well into the 1960s. The debate concerned the nature and role of capital goods and a critique of the neoclassical vision of aggregate production and distribution. The name arises from the location of the principals involved in the controversy: the debate was largely between economists such as Joan Robinson and Piero Sraffa at the University of Cambridge in England and economists such as Paul Samuelson and Robert Solow at the Massachusetts Institute of Technology, in Cambridge, Massachusetts, United States. The English side is most often labeled \"post-Keynesian\", while some call it \"neo-Ricardian\", and the Massachusetts side \"neoclassical\". Most of the debate is mathematical, while some major elements can be explained as part of the aggregation problem. The critique of neoclassical capital theory might be summed up as saying that the theory suffers from the fallacy of composition; specifically, that we cannot extend microeconomic concepts to production by society as a whole. The resolution of the debate, particularly how broad its implications are, has not been agreed upon by economists.";
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
            return "Cambridge Capital Controversy";
        }
    }

    return nullptr;
}

string _Economics::Terms::CambridgeEquation(string text)
{
    string model = "llama3";
    string definition = "The Cambridge equation formally represents the Cambridge cash-balance theory, an alternative approach to the classical quantity theory of money. Both quantity theories, Cambridge and classical, attempt to express a relationship among the amount of goods produced, the price level, amounts of money, and how money moves. The Cambridge equation focuses on money demand instead of money supply. The theories also differ in explaining the movement of money: In the classical version, associated with Irving Fisher, money moves at a fixed rate and serves only as a medium of exchange while in the Cambridge approach money acts as a store of value and its movement depends on the desirability of holding cash. ";
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
            return "Cambridge Equation";
        }
    }

    return nullptr;
}

string _Economics::Terms::Cameralism(string text)
{
    string model = "llama3";
    string definition = "Cameralism was a German science of public administration in the 18th and early 19th centuries that aimed at strong management of a centralized economy for the benefit mainly of the state. The discipline in its most narrow definition concerned the management of the state\'s finances. Throughout the 18th and the first half of the 19th century, cameralism was influential in Northern European states-for example, in Prussia and Sweden-and its academics and practitioners were pioneers in economic, environmental, and administrative knowledge and technology; for example, cameralist accounting, still used in public finance today. The growing power of centralized state control necessitated centralized systematic information on the nation. A major innovation was the collection, use and interpretation of numerical and statistical data, ranging from trade statistics, harvest reports, and death notices to population censuses. Starting in the 1760s, officials in France and Germany began increasingly to rely on quantitative data for systematic planning, especially regarding long-term economic growth. It combined the utilitarian agenda of \"enlightened absolutism\" with the new ideas being developed in economics. In Germany and France, the trend was especially strong in cameralism and physiocracy. According to David F. Lindenfeld, it was divided into three: public finance, Oeconomie and Polizei. Here Oeconomie did not exactly mean \'economics\', nor did Polizei mean \'public policy\' in the modern senses.";
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
            return "Cameralism";
        }
    }

    return nullptr;
}

string _Economics::Terms::CapAndTrade(string text)
{
    string model = "llama3";
    string definition = "Emissions trading is a market-oriented approach to controlling pollution by providing economic incentives for reducing the emissions of pollutants. The concept is also known as cap and trade (CAT) or emissions trading scheme (ETS). One prominent example is carbon emission trading for CO2 and other greenhouse gases which is a tool for climate change mitigation. Other schemes include sulfur dioxide and other pollutants. In an emissions trading scheme, a central authority or governmental body allocates or sells a limited number (a \"cap\") of permits that allow a discharge of a specific quantity of a specific pollutant over a set time period. Polluters are required to hold permits in amount equal to their emissions. Polluters that want to increase their emissions must buy permits from others willing to sell them. Emissions trading is a type of flexible environmental regulation that allows organizations and markets to decide how best to meet policy targets. This is in contrast to command-and-control environmental regulations such as best available technology (BAT) standards and government subsidies.";
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
            return "Cap And Trade";
        }
    }

    return nullptr;
}

string _Economics::Terms::Capital(string text)
{
    string model = "llama3";
    string definition = "In economics, capital goods or capital are \"those durable produced goods that are in turn used as productive inputs for further production\" of goods and services. A typical example is the machinery used in a factory. At the macroeconomic level, \"the nation\'s capital stock includes buildings, equipment, software, and inventories during a given year.\" Capital goods have also been called complex product systems (CoPS). The means of production is as a \"...series of heterogeneous commodities, each having specific technical characteristics ...\" in the form of a durable good that is used in the production of goods or services. Capital goods are a particular form of economic good and are tangible property. Capital goods are one of the three types of producer goods, the other two being land and labour.  The three are also known collectively as \"primary factors of production\". This classification originated during the classical economics period and has remained the dominant method for classification. Capital can be increased by the use of the factors of production, which however excludes certain durable goods like homes and personal automobiles that are not used in the production of saleable goods and services.";
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
            return "Capital";
        }
    }

    return nullptr;
}

string _Economics::Terms::FactorsOfProduction(string text)
{
    string model = "llama3";
    string definition = "In economics, factors of production, resources, or inputs are what is used in the production process to produce output-that is, goods and services. The utilized amounts of the various inputs determine the quantity of output according to the relationship called the production function. There are four basic resources or factors of production: land, labour, capital and entrepreneur (or enterprise). The factors are also frequently labeled \"producer goods or services\" to distinguish them from the goods or services purchased by consumers, which are frequently labeled \"consumer goods\". There are two types of factors: primary and secondary. The previously mentioned primary factors are land, labour and capital. Materials and energy are considered secondary factors in classical economics because they are obtained from land, labour, and capital. The primary factors facilitate production but neither become part of the product (as with raw materials) nor become significantly transformed by the production process (as with fuel used to power machinery). Land includes not only the site of production but also natural resources above or below the soil. Recent usage has distinguished human capital (the stock of knowledge in the labor force) from labour. Entrepreneurship is also sometimes considered a factor of production. Sometimes the overall state of technology is described as a factor of production. The number and definition of factors vary, depending on theoretical purpose, empirical emphasis, or school of economics.";
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
            return "Factors Of Production";
        }
    }

    return nullptr;
}

string _Economics::Terms::CapitalAccount(string text)
{
    string model = "llama3";
    string definition = "In macroeconomics and international finance, the capital account, also known as the capital and financial account, records the net flow of investment into an economy. It is one of the two primary components of the balance of payments, the other being the current account. Whereas the current account reflects a nation\'s net income, the capital account reflects net change in ownership of national assets. A surplus in the capital account means money is flowing into the country, but unlike a surplus in the current account, the inbound flows effectively represent borrowings or sales of assets rather than payment for work. A deficit in the capital account means money is flowing out of the country, and it suggests the nation is increasing its ownership of foreign assets. The term \"capital account\" is used with a narrower meaning by the International Monetary Fund (IMF) and affiliated sources. The IMF splits what the rest of the world calls the capital account into two top-level divisions: financial account and capital account, with by far the bulk of the transactions being recorded in its financial account.";
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
            return "Capital Account";
        }
    }

    return nullptr;
}

string _Economics::Terms::CapitalAccumulation(string text)
{
    string model = "llama3";
    string definition = "Capital accumulation is the dynamic that motivates the pursuit of profit, involving the investment of money or any financial asset with the goal of increasing the initial monetary value of said asset as a financial return whether in the form of profit, rent, interest, royalties or capital gains. The aim of capital accumulation is to create new fixed and working capitals, broaden and modernize the existing ones, grow the material basis of social-cultural activities, as well as constituting the necessary resource for reserve and insurance. The process of capital accumulation forms the basis of capitalism, and is one of the defining characteristics of a capitalist economic system.";
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
            return "Capital Accumulation";
        }
    }

    return nullptr;
}

string _Economics::Terms::CapitalCost(string text)
{
    string model = "llama3";
    string definition = "Capital costs are fixed, one-time expenses incurred on the purchase of land, buildings, construction, and equipment used in the production of goods or in the rendering of services. In other words, it is the total cost needed to bring a project to a commercially operable status. Whether a particular cost is capital or not depend on many factors such as accounting, tax laws, and materiality.";
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
            return "Capital Cost";
        }
    }

    return nullptr;
}

string _Economics::Terms::CapitalFlight(string text)
{
    string model = "llama3";
    string definition = "Capital flight, in economics, occurs when assets or money rapidly flow out of a country, due to an event of economic consequence or as the result of a political event such as regime change or economic globalization. Such events could be an increase in taxes on capital or capital holders or the government of the country defaulting on its debt that disturbs investors and causes them to lower their valuation of the assets in that country, or otherwise to lose confidence in its economic strength. This leads to a disappearance of wealth, and is usually accompanied by a sharp drop in the exchange rate of the affected country-depreciation in a variable exchange rate regime, or a forced devaluation in a fixed exchange rate regime. This fall is particularly damaging when the capital belongs to the people of the affected country because not only are the citizens now burdened by the loss in the economy and devaluation of their currency but their assets have lost much of their nominal value. This leads to dramatic decreases in the purchasing power of the country\'s assets and makes it increasingly expensive to import goods and acquire any form of foreign facilities, e.g. medical facilities.";
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
            return "Capital Flight";
        }
    }

    return nullptr;
}

string _Economics::Terms::CapitalFormation(string text)
{
    string model = "llama3";
    string definition = "Any method for increasing the amount of capital owned or under one\'s control, or any method in using or mobilizing capital resources for investment purposes. Capital formation also sometimes refers to a specific statistical concept, also known as net investment, which measures the net additions to the (physical) capital stock of a country (or an economic sector) in an accounting interval. Capital formation is also sometimes a modern general term for capital accumulation, referring to the total \"stock of capital\" that has been formed, or to the growth of this total capital stock.";
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
            return "Capital Formation";
        }
    }

    return nullptr;
}

string _Economics::Terms::CapitalGain(string text)
{
    string model = "llama3";
    string definition = "Capital gain is an economic concept defined as the profit earned on the sale of an asset which has increased in value over the holding period. An asset may include tangible property, a car, a business, or intangible property such as shares. A capital gain is only possible when the selling price of the asset is greater than the original purchase price. In the event that the purchase price exceeds the sale price, a capital loss occurs. Capital gains are often subject to taxation, of which rates and exemptions may differ between countries. The history of capital gain originates at the birth of the modern economic system and its evolution has been described as complex and multidimensional by a variety of economic thinkers. The concept of capital gain may be considered comparable with other key economic concepts such as profit and rate of return; however, its distinguishing feature is that individuals, not just businesses, can accrue capital gains through everyday acquisition and disposal of assets.";
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
            return "Capital Gain";
        }
    }

    return nullptr;
}

string _Economics::Terms::CapitalIntensity(string text)
{
    string model = "llama3";
    string definition = "Capital intensity is the amount of fixed or real capital present in relation to other factors of production, especially labor. At the level of either a production process or the aggregate economy, it may be estimated by the capital to labor ratio, such as from the points along a capital/labor isoquant. The inverse of capital intensity is labor intensity. Capital intensity is sometimes associated with industrialism, while labor intensity is sometimes associated with agrarianism.";
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
            return "Capital Intensity";
        }
    }

    return nullptr;
}

string _Economics::Terms::Capitalism(string text)
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

string _Economics::Terms::Cartel(string text)
{
    string model = "llama3";
    string definition = "A cartel is a group of independent market participants who collude with each other as well as agreeing not to compete with each other in order to improve their profits and dominate the market. A cartel is an organization formed by producers to limit competition and increase prices by creating artificial shortages through low production quotas, stockpiling, and marketing quotas. Cartels can be vertical or horizontal but are inherently unstable due to the temptation to defect and falling prices for all members. Additionally, advancements in technology or the emergence of substitutes may undermine cartel pricing power, leading to the breakdown of the cooperation needed to sustain the cartel. Cartels are usually associations in the same sphere of business, and thus an alliance of rivals. Most jurisdictions consider it anti-competitive behavior and have outlawed such practices. Cartel behavior includes price fixing, bid rigging, and reductions in output. The doctrine in economics that analyzes cartels is cartel theory. Cartels are distinguished from other forms of collusion or anti-competitive organization such as corporate mergers.";
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
            return "Cartel";
        }
    }

    return nullptr;
}

string _Economics::Terms::Cash(string text)
{
    string model = "llama3";
    string definition = "In economics, cash is money in the physical form of currency, such as banknotes and coins. In bookkeeping and financial accounting, cash is current assets comprising currency or currency equivalents that can be accessed immediately or near-immediately (as in the case of money market accounts). Cash is seen either as a reserve for payments, in case of a structural or incidental negative cash flow or as a way to avoid a downturn on financial markets.";
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
            return "Cash";
        }
    }

    return nullptr;
}

string _Economics::Terms::CentralBank(string text)
{
    string model = "llama3";
    string definition = "A central bank, reserve bank, national bank, or monetary authority is an institution that manages the currency and monetary policy of a country or monetary union. In contrast to a commercial bank, a central bank possesses a monopoly on increasing the monetary base. Many central banks also have supervisory or regulatory powers to ensure the stability of commercial banks in their jurisdiction, to prevent bank runs, and in some cases also to enforce policies on financial consumer protection and against bank fraud, money laundering, or terrorism financing. Central banks play a crucial role in macroeconomic forecasting, which is essential for guiding monetary policy decisions, especially during times of economic turbulence. Central banks in most developed nations are usually set up to be institutionally independent from political interference, even though governments typically have governance rights over them, legislative bodies exercise scrutiny, and central banks frequently do show responsiveness to politics. Issues like central bank independence, central bank policies and rhetoric in central bank governors discourse or the premises of macroeconomic policies (monetary and fiscal policy) of the state are a focus of contention and criticism by some policymakers, researchers and specialized business, economics and finance media.";
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
            return "Central Bank";
        }
    }

    return nullptr;
}

string _Economics::Terms::CertificateOfDeposit(string text)
{
    string model = "llama3";
    string definition = "A certificate of deposit (CD) is a time deposit sold by banks, thrift institutions, and credit unions in the United States. CDs typically differ from savings accounts because the CD has a specific, fixed term before money can be withdrawn without penalty and generally higher interest rates. CDs typically require a minimum deposit, and may offer higher rates for larger deposits. The bank expects the CDs to be held until maturity, at which time they can be withdrawn and interest paid. In the United States, CDs are insured by the Federal Deposit Insurance Corporation (FDIC) for banks and by the National Credit Union Administration (NCUA) for credit unions. The consumer who opens a CD may receive a paper certificate, but it is now common for a CD to consist simply of a book entry and an item shown in the consumer\'s periodic bank statements. Consumers who want a hard copy that verifies their CD purchase may request a paper statement from the bank, or print out their own from the financial institution\'s online banking service.";
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
            return "Certificate Of Deposit";
        }
    }

    return nullptr;
}

string _Economics::Terms::CeterisParibus(string text)
{
    string model = "llama3";
    string definition = "Ceteris paribus (also spelled caeteris paribus) (Classical Latin pronunciation: is a Latin phrase, meaning \"other things equal\"; some other English translations of the phrase are \"all other things being equal\", \"other things held constant\", \"all else unchanged\", and \"all else being equal\". A statement about a causal, empirical, or logical relation between two states of affairs is ceteris paribus if it is acknowledged that the statement, although usually accurate in expected conditions, can fail because of, or the relation can be abolished by, intervening factors.";
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
            return "Ceteris Paribus";
        }
    }

    return nullptr;
}

string _Economics::Terms::CharitableGiving(string text)
{
    string model = "llama3";
    string definition = "Charity is the voluntary provision of assistance to those in need. It serves as a humanitarian act, and is unmotivated by self-interest. Various philosophies about charity exist, with frequent associations with religion.";
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
            return "Charitable Giving";
        }
    }

    return nullptr;
}

string _Economics::Terms::Chartalism(string text)
{
    string model = "llama3";
    string definition = "A heterodox theory of money that argues that money originated historically with states\' attempts to direct economic activity rather than as a spontaneous solution to the problems with barter or as a means with which to tokenize debt, and that fiat currency has value in exchange because of sovereign power to levy taxes on economic activity payable in the currency they issue.";
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
            return "Chartalism";
        }
    }

    return nullptr;
}

string _Economics::Terms::Check(string text)
{
    string model = "llama3";
    string definition = "A cheque (or check in American English  is a document that orders a bank, building society (or credit union) to pay a specific amount of money from a person\'s account to the person in whose name the cheque has been issued. The person writing the cheque, known as the drawer, has a transaction banking account (often called a current, cheque, chequing, checking, or share draft account) where the money is held. The drawer writes various details including the monetary amount, date, and a payee on the cheque, and signs it, ordering their bank, known as the drawee, to pay the amount of money stated to the payee. Although forms of cheques have been in use since ancient times and at least since the 9th century, they became a highly popular non-cash method for making payments during the 20th century and usage of cheques peaked. By the second half of the 20th century, as cheque processing became automated, billions of cheques were issued annually; these volumes peaked in or around the early 1990s. Since then cheque usage has fallen, being replaced by electronic payment systems, such as debit cards and credit cards. In an increasing number of countries cheques have either become a marginal payment system or have been completely phased out.";
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
            return "Check";
        }
    }

    return nullptr;
}

string _Economics::Terms::ChicagoSchool(string text)
{
    string model = "llama3";
    string definition = "The Chicago school of economics is a neoclassical school of economic thought associated with the work of the faculty at the University of Chicago, some of whom have constructed and popularized its principles. Milton Friedman and George Stigler are considered the leading scholars of the Chicago school.";
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
            return "Chicago School";
        }
    }

    return nullptr;
}

string _Economics::Terms::Choice(string text)
{
    string model = "llama3";
    string definition = "A choice is the range of different things from which a being can choose. The arrival at a choice may incorporate motivators and models. Freedom of choice is generally cherished, whereas a severely limited or artificially restricted choice can lead to discomfort with choosing, and possibly an unsatisfactory outcome. In contrast, a choice with excessively numerous options may lead to confusion, reduced satisfaction, regret of the alternatives not taken, and indifference in an unstructured existence;: 63  and the illusion that choosing an object or a course, necessarily leads to the control of that object or course, can cause psychological problems.";
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
            return "Choice";
        }
    }

    return nullptr;
}

string _Economics::Terms::ChoiceModelling(string text)
{
    string model = "llama3";
    string definition = "Choice modelling attempts to model the decision process of an individual or segment via revealed preferences or stated preferences made in a particular context or contexts. Typically, it attempts to use discrete choices (A over B; B over A, B & C) in order to infer positions of the items (A, B and C) on some relevant latent scale (typically \"utility\" in economics and various related fields). Indeed many alternative models exist in econometrics, marketing, sociometrics and other fields, including utility maximization, optimization applied to consumer theory, and a plethora of other identification strategies which may be more or less accurate depending on the data, sample, hypothesis and the particular decision being modelled. In addition, choice modelling is regarded as the most suitable method for estimating consumers\' willingness to pay for quality improvements in multiple dimensions.";
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
            return "Choice Modelling";
        }
    }

    return nullptr;
}

string _Economics::Terms::CircularFlowOfIncome(string text)
{
    string model = "llama3";
    string definition = "The circular flow of income or circular flow is a model of the economy in which the major exchanges are represented as flows of money, goods and services, etc. between economic agents. The flows of money and goods exchanged in a closed circuit correspond in value, but run in the opposite direction. The circular flow analysis is the basis of national accounts and hence of macroeconomics.";
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
            return "Circular Flow Of Income";
        }
    }

    return nullptr;
}

string _Economics::Terms::Circulation(string text)
{
    string model = "llama3";
    string definition = "In monetary economics, the currency in circulation in a country is the value of currency or cash (banknotes and coins) that has ever been issued by the country\'s monetary authority less the amount that has been removed. More broadly, money in circulation is the total money supply of a country, which can be defined in various ways, but always includes currency and also some types of bank deposits, such as deposits at call. The published amount of currency in circulation tends to be overstated by an unknown amount. For example, money may have been destroyed, or stored as a form of security (the proverbial \"money under the mattress\"), or by coin collectors, or held in reserve within the banking system, including currency held by foreign central banks as a foreign exchange reserve asset.";
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
            return "Circulation";
        }
    }

    return nullptr;
}

string _Economics::Terms::ClassicalEconomics(string text)
{
    string model = "llama3";
    string definition = "Classical economics, also known as the classical school of economics, or classical political economy, is a school of thought in political economy that flourished, primarily in Britain, in the late 18th and early-to-mid 19th century. It includes both the Smithian and Ricardian schools. Its main thinkers are held to be Adam Smith, Jean-Baptiste Say, David Ricardo, Thomas Robert Malthus, and John Stuart Mill. These economists produced a theory of market economies as largely self-regulating systems, governed by natural laws of production and exchange (famously captured by Adam Smith\'s metaphor of the invisible hand). Adam Smith\'s The Wealth of Nations in 1776 is usually considered to mark the beginning of classical economics. The fundamental message in Smith\'s book was that the wealth of any nation was determined not by the gold in the monarch\'s coffers, but by its national income. This income was in turn based on the labor of its inhabitants, organized efficiently by the division of labour and the use of accumulated capital, which became one of classical economics\' central concepts. In terms of economic policy, the classical economists were pragmatic liberals, advocating the freedom of the market, though they saw a role for the state in providing for the common good. Smith acknowledged that there were areas where the market is not the best way to serve the common interest, and he took it as a given that the greater proportion of the costs supporting the common good should be borne by those best able to afford them. He warned repeatedly of the dangers of monopoly, and stressed the importance of competition. In terms of international trade, the classical economists were advocates of free trade, which distinguishes them from their mercantilist predecessors, who advocated protectionism. The designation of Smith, Ricardo and some earlier economists as \"classical\" is due to a canonization which stems from Karl Marx\'s critique of political economy, where he critiqued those that he at least perceived as worthy of dealing with, as opposed to their \"vulgar\" successors. There is some debate about what is covered by the term classical economics, particularly when dealing with the period from 1830 to 1875, and how classical economics relates to neoclassical economics.";
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
            return "Classical Economics";
        }
    }

    return nullptr;
}

string _Economics::Terms::ClassicalGeneralEquilibriumModel(string text)
{
    string model = "llama3";
    string definition = "The classical general equilibrium model aims to describe the economy by aggregating the behavior of individuals and firms. Note that the classical general equilibrium model is unrelated to classical economics, and was instead developed within neoclassical economics beginning in the late 19th century. In the model, the individual is assumed to be the basic unit of analysis and these individuals, both workers and employers, will make choices that reflect their unique tastes, objectives, and preferences. It is assumed that individuals\' wants typically exceed their ability to satisfy them (hence scarcity of goods and time). It is further assumed that individuals will eventually experience diminishing marginal utility. Finally, wages and prices are assumed to be elastic (they move up and down freely). The classical model assumes that traditional supply and demand analysis is the best approach to understanding the labor market. The functions that follow are aggregate functions that can be thought of as the summation of all the individual participants in the market.";
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
            return "Classical General Equilibrium Model";
        }
    }

    return nullptr;
}

string _Economics::Terms::ClubGood(string text)
{
    string model = "llama3";
    string definition = "Club goods (also artificially scarce goods, toll goods, collective goods or quasi-public goods) are a type of good in economics, sometimes classified as a subtype of public goods that are excludable but non-rivalrous, at least until reaching a point where congestion occurs. Often these goods exhibit high excludability, but at the same time low rivalry in consumption. Thus, club goods have essentially zero marginal costs and are generally provided by what is commonly known as natural monopolies. Furthermore, club goods have artificial scarcity. Club theory is the area of economics that studies these goods. One of the most famous provisions was published by Buchanan in 1965 \"An Economic Theory of Clubs,\" in which he addresses the question of how the size of the group influences the voluntary provision of a public good and more fundamentally provides a theoretical structure of communal or collective ownership-consumption arrangements.";
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
            return "Club Good";
        }
    }

    return nullptr;
}

string _Economics::Terms::CoaseConjecture(string text)
{
    string model = "llama3";
    string definition = "The Coase conjecture, developed first by Ronald Coase, is an argument in monopoly theory. The conjecture sets up a situation in which a monopolist sells a durable good to a market where resale is impossible and faces consumers who have different valuations. The conjecture proposes that a monopolist that does not know individuals\' valuations will have to sell its product at a low price if the monopolist tries to separate consumers by offering different prices in different periods. This is because the monopolist is, in effect, in price competition with itself over several periods and the consumer with the highest valuation, if he is patient enough, can simply wait for the lowest price. Thus the monopolist will have to offer a competitive price in the first period which will be low. The conjecture holds only when there is an infinite time horizon, as otherwise a possible action for the monopolist would be to announce a very high price until the second to last period, and then sell at the static monopoly price in the last period. The monopolist could avoid this problem by committing to a stable linear pricing strategy or adopting other business strategies.";
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
            return "Coase Conjecture";
        }
    }

    return nullptr;
}

string _Economics::Terms::CoaseTheorem(string text)
{
    string model = "llama3";
    string definition = "In law and economics, the Coase theorem describes the economic efficiency of an economic allocation or outcome in the presence of externalities. The theorem is significant because, if true, the conclusion is that it is possible for private individuals to make choices that can solve the problem of market externalities. The theorem states that if the provision of a good or service results in an externality and trade in that good or service is possible, then bargaining will lead to a Pareto efficient outcome regardless of the initial allocation of property. A key condition for this outcome is that there are sufficiently low transaction costs in the bargaining and exchange process. This \'theorem\' is commonly attributed to Nobel Prize laureate Ronald Coase (quotations noting that Coase\'s theorem is not a theorem in the strict mathematical sense). In practice, numerous complications, including imperfect information and poorly defined property rights, can prevent this optimal Coasean bargaining solution. In his 1960 paper, Coase specified the ideal conditions under which the theorem could hold and then also argued that real-world transaction costs are rarely low enough to allow for efficient bargaining. Hence, the theorem is almost always inapplicable to economic reality but is a useful tool in predicting possible economic outcomes. The Coase theorem is considered an important basis for most modern economic analyses of government regulation, especially in the case of externalities, and it has been used by jurists and legal scholars to analyze and resolve legal disputes. George Stigler summarized the resolution of the externality problem in the absence of transaction costs in a 1966 economics textbook in terms of private and social cost, and for the first time called it a \"theorem.\" Since the 1960s, a voluminous amount of literature on the Coase theorem and its various interpretations, proofs, and criticism has developed and continues to grow.";
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
            return "Coase Theorem";
        }
    }

    return nullptr;
}

string _Economics::Terms::CobwebModel(string text)
{
    string model = "llama3";
    string definition = "The cobweb model or cobweb theory is an economic model that explains why prices may be subjected to periodic fluctuations in certain types of markets. It describes cyclical supply and demand in a market where the amount produced must be chosen before prices are observed. Producers\' expectations about prices are assumed to be based on observations of previous prices. Nicholas Kaldor analyzed the model in 1934, coining the term \"cobweb theorem\" (see Kaldor, 1938 and Pashigian, 2008), citing previous analyses in German by Henry Schultz and Umberto Ricci.";
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
            return "Cobweb Model";
        }
    }

    return nullptr;
}

string _Economics::Terms::CollateralLoan(string text)
{
    string model = "llama3";
    string definition = "A secured loan is a loan in which the borrower pledges some asset (e.g. a car or property) as collateral for the loan, which then becomes a secured debt owed to the creditor who gives the loan. The debt is thus secured against the collateral, and if the borrower defaults, the creditor takes possession of the asset used as collateral and may sell it to regain some or all of the amount originally loaned to the borrower. An example is the foreclosure of a home. From the creditor\'s perspective, that is a category of debt in which a lender has been granted a portion of the bundle of rights to specified property. If the sale of the collateral does not raise enough money to pay off the debt, the creditor can often obtain a deficiency judgment against the borrower for the remaining amount. The opposite of secured debt/loan is unsecured debt, which is not connected to any specific piece of property. Instead, the creditor may satisfy the debt only against the borrower, rather than the borrower\'s collateral and the borrower. Generally speaking, secured debt may attract lower interest rates than unsecured debt because of the added security for the lender; however, credit risk (e.g. credit history, and ability to repay) and expected returns for the lender are also factors affecting rates. The term secured loan is used in the United Kingdom, but the United States more commonly uses secured debt.";
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
            return "Collateral Loan";
        }
    }

    return nullptr;
}

string _Economics::Terms::CollectiveAction(string text)
{
    string model = "llama3";
    string definition = "Collective action refers to action taken together by a group of people whose goal is to enhance their condition and achieve a common objective. It is a term that has formulations and theories in many areas of the social sciences including psychology, sociology, anthropology, political science and economics.";
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
            return "Collective Action";
        }
    }

    return nullptr;
}

string _Economics::Terms::CollectiveActionProblem(string text)
{
    string model = "llama3";
    string definition = "A collective action problem or social dilemma is a situation in which all individuals would be better off cooperating but fail to do so because of conflicting interests between individuals that discourage joint action. The collective action problem has been addressed in political philosophy for centuries, but was more famously interpreted in 1965 in Mancur Olson\'s The Logic of Collective Action. Problems arise when too many group members choose to pursue individual profit and immediate satisfaction rather than behave in the group\'s best long-term interests. Social dilemmas can take many forms and are studied across disciplines such as psychology, economics, and political science. Examples of phenomena that can be explained using social dilemmas include resource depletion and low voter turnout. The collective action problem can be understood through the analysis of game theory and the free-rider problem, which results from the provision of public goods. Additionally, the collective problem can be applied to numerous public policy concerns that countries across the world currently face.";
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
            return "Collective Action Problem";
        }
    }

    return nullptr;
}

