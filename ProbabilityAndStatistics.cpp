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
#include "ProbabilityAndStatistics.hpp"
#include "Large Language Models.hpp"
#include "Parsers.hpp"
#include "Utilities.hpp"

using namespace std;

string _ProbabilityAndStatistics::Terms::AdmissibleDecisionRule(string text)
{
    string model = "llama3";
    string definition = "In statistical decision theory, an admissible decision rule is a rule for making a decision such that there is no other rule that is always \"better\" than it (or at least sometimes better and never worse), in the precise sense of \"better\" defined below. This concept is analogous to Pareto efficiency.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Admissible Decision Rule";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::AlgebraOfRandomVariables(string text)
{
    string model = "llama3";
    string definition = "The algebra of random variables in statistics, provides rules for the symbolic manipulation of random variables, while avoiding delving too deeply into the mathematically sophisticated ideas of probability theory. Its symbolism allows the treatment of sums, products, ratios and general functions of random variables, as well as dealing with operations such as finding the probability distributions and the expectations (or expected values), variances and covariances of such combinations. In principle, the elementary algebra of random variables is equivalent to that of conventional non-random (or deterministic) variables. However, the changes occurring on the probability distribution of a random variable obtained after performing algebraic operations are not straightforward. Therefore, the behavior of the different operators of the probability distribution, such as expected values, variances, covariances, and moments, may be different from that observed for the random variable using symbolic algebra. It is possible to identify some key rules for each of those operators, resulting in different types of algebra for random variables, apart from the elementary symbolic algebra: Expectation algebra, Variance algebra, Covariance algebra, Moment algebra, etc.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Algebra Of Random Variables";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::AlternativeHypothesis(string text)
{
    string model = "llama3";
    string definition = "In statistical hypothesis testing, the alternative hypothesis is one of the proposed proposition in the hypothesis test. In general the goal of hypothesis test is to demonstrate that in the given condition, there is sufficient evidence supporting the credibility of alternative hypothesis instead of the exclusive proposition in the test (null hypothesis). It is usually consistent with the research hypothesis because it is constructed from literature review, previous studies, etc. However, the research hypothesis is sometimes consistent with the null hypothesis. In statistics, alternative hypothesis is often denoted as Ha or H1. Hypotheses are formulated to compare in a statistical hypothesis test. In the domain of inferential statistics, two rival hypotheses can be compared by explanatory power and predictive power.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Alternative Hypothesis";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::AnalysisOfVariance(string text)
{
    string model = "llama3";
    string definition = "Analysis of variance (ANOVA) is a collection of statistical models and their associated estimation procedures (such as the \"variation\" among and between groups) used to analyze the differences among means. ANOVA was developed by the statistician Ronald Fisher. ANOVA is based on the law of total variance, where the observed variance in a particular variable is partitioned into components attributable to different sources of variation. In its simplest form, ANOVA provides a statistical test of whether two or more population means are equal, and therefore generalizes the t-test beyond two means. In other words, the ANOVA is used to test the difference between two or more means.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Analysis Of Variance";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::AtomicEvent(string text)
{
    string model = "llama3";
    string definition = "In probability theory, an elementary event, also called an atomic event or sample point, is an event which contains only a single outcome in the sample space. Using set theory terminology, an elementary event is a singleton. Elementary events and their corresponding outcomes are often written interchangeably for simplicity, as such an event corresponding to precisely one outcome. ";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Atomic Event";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::BarChart(string text)
{
    string model = "llama3";
    string definition = "A bar chart or bar graph is a chart or graph that presents categorical data with rectangular bars with heights or lengths proportional to the values that they represent. The bars can be plotted vertically or horizontally. A vertical bar chart is sometimes called a column chart and has been identified as the prototype of charts. A bar graph shows comparisons among discrete categories. One axis of the chart shows the specific categories being compared, and the other axis represents a measured value. Some bar graphs present bars clustered in groups of more than one, showing the values of more than one measured variable.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Bar Chart";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::BayesTheorem(string text)
{
    string model = "llama3";
    string definition = "Bayes\' theorem (alternatively Bayes\' law or Bayes\' rule, after Thomas Bayes) gives a mathematical rule for inverting conditional probabilities, allowing us to find the probability of a cause given its effect. For example, if the risk of developing health problems is known to increase with age, Bayes\' theorem allows the risk to an individual of a known age to be assessed more accurately by conditioning it relative to their age, rather than assuming that the individual is typical of the population as a whole. Based on Bayes law both the prevalence of a disease in a given population and the error rate of an infectious disease test have to be taken into account to evaluate the meaning of a positive test result correctly and avoid the base-rate fallacy. One of the many applications of Bayes\' theorem is Bayesian inference, a particular approach to statistical inference, where it is used to invert the probability of observations given a model configuration (i.e., the likelihood function) to obtain the probability of the model configuration given the observations (i.e., the posterior probability).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Bayes Theorem";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::BayesEstimator(string text)
{
    string model = "llama3";
    string definition = "In estimation theory and decision theory, a Bayes estimator or a Bayes action is an estimator or decision rule that minimizes the posterior expected value of a loss function (i.e., the posterior expected loss). Equivalently, it maximizes the posterior expectation of a utility function. An alternative way of formulating an estimator within Bayesian statistics is maximum a posteriori estimation.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Bayes Estimator";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::BayesFactor(string text)
{
    string model = "llama3";
    string definition = "The Bayes factor is a ratio of two competing statistical models represented by their evidence, and is used to quantify the support for one model over the other. The models in question can have a common set of parameters, such as a null hypothesis and an alternative, but this is not necessary; for instance, it could also be a non-linear model compared to its linear approximation. The Bayes factor can be thought of as a Bayesian analog to the likelihood-ratio test, although it uses the integrated (i.e., marginal) likelihood rather than the maximized likelihood. As such, both quantities only coincide under simple hypotheses (e.g., two specific parameter values). Also, in contrast with null hypothesis significance testing, Bayes factors support evaluation of evidence in favor of a null hypothesis, rather than only allowing the null to be rejected or not rejected. Although conceptually simple, the computation of the Bayes factor can be challenging depending on the complexity of the model and the hypotheses. Since closed-form expressions of the marginal likelihood are generally not available, numerical approximations based on MCMC samples have been suggested. For certain special cases, simplified algebraic expressions can be derived; for instance, the Savage-Dickey density ratio in the case of a precise (equality constrained) hypothesis against an unrestricted alternative. Another approximation, derived by applying Laplace\'s approximation to the integrated likelihoods, is known as the Bayesian information criterion (BIC); in large data sets the Bayes factor will approach the BIC as the influence of the priors wanes. In small data sets, priors generally matter and must not be improper since the Bayes factor will be undefined if either of the two integrals in its ratio is not finite.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Bayes Factor";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::BayesianInference(string text)
{
    string model = "llama3";
    string definition = "Bayesian inference is a method of statistical inference in which Bayes\' theorem is used to calculate a probability of a hypothesis, given prior evidence, and update it as more information becomes available. Fundamentally, Bayesian inference uses a prior distribution to estimate posterior probabilities. Bayesian inference is an important technique in statistics, and especially in mathematical statistics. Bayesian updating is particularly important in the dynamic analysis of a sequence of data. Bayesian inference has found application in a wide range of activities, including science, engineering, philosophy, medicine, sport, and law. In the philosophy of decision theory, Bayesian inference is closely related to subjective probability, often called \"Bayesian probability\".";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Bayesian Inference";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::Bias(string text)
{
    string model = "llama3";
    string definition = "Statistical bias, in the mathematical field of statistics, is a systematic tendency in which the methods used to gather data and generate statistics present an inaccurate, skewed or biased depiction of reality. Statistical bias exists in numerous stages of the data collection and analysis process, including: the source of the data, the methods used to collect the data, the estimator chosen, and the methods used to analyze the data. Data analysts can take various measures at each stage of the process to reduce the impact of statistical bias in their work. Understanding the source of statistical bias can help to assess whether the observed results are close to actuality. Issues of statistical bias has been argued to be closely linked to issues of statistical validity. Statistical bias can have significant real world implications as data is used to inform decision making across a wide variety of processes in society. Data is used to inform lawmaking, industry regulation, corporate marketing and distribution tactics, and institutional policies in organizations and workplaces. Therefore, there can be significant implications if statistical bias is not accounted for and controlled. For example, if a pharmaceutical company wishes to explore the effect of a medication on the common cold but the data sample only includes men, any conclusions made from that data will be biased towards how the medication affects men rather than people in general. That means the information would be incomplete and not useful for deciding if the medication is ready for release in the general public. In this scenario, the bias can be addressed by broadening the sample. This sampling error is only one of the ways in which data can be biased. Bias can be differentiated from other statistical mistakes such as accuracy (instrument failure/inadequacy), lack of data, or mistakes in transcription (typos). Bias implies that the data selection may have been skewed by the collection criteria. Other forms of human-based bias emerge in data collection as well such as response bias, in which participants give inaccurate responses to a question. Bias does not preclude the existence of any other mistakes. One may have a poorly designed sample, an inaccurate measurement device, and typos in recording data simultaneously. Ideally, all factors are controlled and accounted for. Also it is useful to recognize that the term \"error\" specifically refers to the outcome rather than the process (errors of rejection or acceptance of the hypothesis being tested), or from the phenomenon of random errors. The terms flaw or mistake are recommended to differentiate procedural errors from these specifically defined outcome-based terms.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Bias";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::BinaryData(string text)
{
    string model = "llama3";
    string definition = "Binary data is data whose unit can take on only two possible states. These are often labelled as 0 and 1 in accordance with the binary numeral system and Boolean algebra. Binary data occurs in many different technical and scientific fields, where it can be called by different names including bit (binary digit) in computer science, truth value in mathematical logic and related domains and binary variable in statistics.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Binary Data";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::BinomialDistribution(string text)
{
    string model = "llama3";
    string definition = "In probability theory and statistics, the binomial distribution with parameters n and p is the discrete probability distribution of the number of successes in a sequence of n independent experiments, each asking a yes-no question, and each with its own Boolean-valued outcome: success (with probability p) or failure (with probability q = 1 - p). A single success/failure experiment is also called a Bernoulli trial or Bernoulli experiment, and a sequence of outcomes is called a Bernoulli process; for a single trial, i.e., n = 1, the binomial distribution is a Bernoulli distribution. The binomial distribution is the basis for the binomial test of statistical significance. The binomial distribution is frequently used to model the number of successes in a sample of size n drawn with replacement from a population of size N. If the sampling is carried out without replacement, the draws are not independent and so the resulting distribution is a hypergeometric distribution, not a binomial one. However, for N much larger than n, the binomial distribution remains a good approximation, and is widely used.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Binomial Distribution";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::BivariateAnalysis(string text)
{
    string model = "llama3";
    string definition = "Bivariate analysis is one of the simplest forms of quantitative (statistical) analysis. It involves the analysis of two variables (often denoted as X, Y), for the purpose of determining the empirical relationship between them. Bivariate analysis can be helpful in testing simple hypotheses of association. Bivariate analysis can help determine to what extent it becomes easier to know and predict a value for one variable (possibly a dependent variable) if we know the value of the other variable (possibly the independent variable) (see also correlation and simple linear regression). Bivariate analysis can be contrasted with univariate analysis in which only one variable is analysed. Like univariate analysis, bivariate analysis can be descriptive or inferential. It is the analysis of the relationship between the two variables. Bivariate analysis is a simple (two variable) special case of multivariate analysis (where multiple relations between multiple variables are examined simultaneously).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Bivariate Analysis";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::Blocking(string text)
{
    string model = "llama3";
    string definition = "In the statistical theory of the design of experiments, blocking is the arranging of experimental units that are similar to one another in groups (blocks) based on one or more variables. These variables are chosen carefully to minimize the impact of their variability on the observed outcomes. There are different ways that blocking can be implemented, resulting in different confounding effects. However, the different methods share the same purpose: to control variability introduced by specific factors that could influence the outcome of an experiment. The roots of blocking originated from the statistician, Ronald Fisher, following his development of ANOVA.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Blocking";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::BoxJenkinsMethod(string text)
{
    string model = "llama3";
    string definition = "In time series analysis, the Box-Jenkins method, named after the statisticians George Box and Gwilym Jenkins, applies autoregressive moving average (ARMA) or autoregressive integrated moving average (ARIMA) models to find the best fit of a time-series model to past values of a time series.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Box Jenkins Method";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::BoxPlot(string text)
{
    string model = "llama3";
    string definition = "In descriptive statistics, a box plot or boxplot is a method for demonstrating graphically the locality, spread and skewness groups of numerical data through their quartiles. In addition to the box on a box plot, there can be lines (which are called whiskers) extending from the box indicating variability outside the upper and lower quartiles, thus, the plot is also called the box-and-whisker plot and the box-and-whisker diagram. Outliers that differ significantly from the rest of the dataset may be plotted as individual points beyond the whiskers on the box-plot. Box plots are non-parametric: they display variation in samples of a statistical population without making any assumptions of the underlying statistical distribution (though Tukey\'s boxplot assumes symmetry for the whiskers and normality for their length). The spacings in each subsection of the box-plot indicate the degree of dispersion (spread) and skewness of the data, which are usually described using the five-number summary. In addition, the box-plot allows one to visually estimate various L-estimators, notably the interquartile range, midhinge, range, mid-range, and trimean. Box plots can be drawn either horizontally or vertically.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Box Plot";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::CausalStudy(string text)
{
    string model = "llama3";
    string definition = "Statistics and economics usually employ pre-existing data or experimental data to infer causality by regression methods. The body of statistical techniques involves substantial use of regression analysis.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Causal Study";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::CentralLimitTheorem(string text)
{
    string model = "llama3";
    string definition = "In probability theory, the central limit theorem (CLT) states that, under appropriate conditions, the distribution of a normalized version of the sample mean converges to a standard normal distribution. This holds even if the original variables themselves are not normally distributed. There are several versions of the CLT, each applying in the context of different conditions. The theorem is a key concept in probability theory because it implies that probabilistic and statistical methods that work for normal distributions can be applicable to many problems involving other types of distributions. This theorem has seen many changes during the formal development of probability theory. Previous versions of the theorem date back to 1811, but in its modern form it was only precisely stated as late as 1920.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Central Limit Theorem";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::CentralMoment(string text)
{
    string model = "llama3";
    string definition = "In probability theory and statistics, a central moment is a moment of a probability distribution of a random variable about the random variable\'s mean; that is, it is the expected value of a specified integer power of the deviation of the random variable from the mean. The various moments form one set of values by which the properties of a probability distribution can be usefully characterized. Central moments are used in preference to ordinary moments, computed in terms of deviations from the mean instead of from zero, because the higher-order central moments relate only to the spread and shape of the distribution, rather than also to its location. Sets of central moments can be defined for both univariate and multivariate distributions.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Central Moment";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::CharacteristicFunction(string text)
{
    string model = "llama3";
    string definition = "In probability theory and statistics, the characteristic function of any real-valued random variable completely defines its probability distribution. If a random variable admits a probability density function, then the characteristic function is the Fourier transform (with sign reversal) of the probability density function. Thus it provides an alternative route to analytical results compared with working directly with probability density functions or cumulative distribution functions. There are particularly simple results for the characteristic functions of distributions defined by the weighted sums of random variables. In addition to univariate distributions, characteristic functions can be defined for vector- or matrix-valued random variables, and can also be extended to more generic cases. The characteristic function always exists when treated as a function of a real-valued argument, unlike the moment-generating function. There are relations between the behavior of the characteristic function of a distribution and properties of the distribution, such as the existence of moments and the existence of a density function.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Characteristic Function";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::ChiSquaredDistribution(string text)
{
    string model = "llama3";
    string definition = "In probability theory and statistics, the chi-squared distribution (also chi-square or x^2-distribution) with k degrees of freedom is the distribution of a sum of the squares of k independent standard normal random variables.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Chi Squared Distribution";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::ChiSquaredTest(string text)
{
    string model = "llama3";
    string definition = "A chi-squared test (also chi-square or x^2 test) is a statistical hypothesis test used in the analysis of contingency tables when the sample sizes are large. In simpler terms, this test is primarily used to examine whether two categorical variables (two dimensions of the contingency table) are independent in influencing the test statistic (values within the table). The test is valid when the test statistic is chi-squared distributed under the null hypothesis, specifically Pearson\'s chi-squared test and variants thereof. Pearson\'s chi-squared test is used to determine whether there is a statistically significant difference between the expected frequencies and the observed frequencies in one or more categories of a contingency table. For contingency tables with smaller sample sizes, a Fisher\'s exact test is used instead.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Chi Squared Test";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::ClusterAnalysis(string text)
{
    string model = "llama3";
    string definition = "Cluster analysis or clustering is the task of grouping a set of objects in such a way that objects in the same group (called a cluster) are more similar (in some specific sense defined by the analyst) to each other than to those in other groups (clusters). It is a main task of exploratory data analysis, and a common technique for statistical data analysis, used in many fields, including pattern recognition, image analysis, information retrieval, bioinformatics, data compression, computer graphics and machine learning. Cluster analysis refers to a family of algorithms and tasks rather than one specific algorithm. It can be achieved by various algorithms that differ significantly in their understanding of what constitutes a cluster and how to efficiently find them. Popular notions of clusters include groups with small distances between cluster members, dense areas of the data space, intervals or particular statistical distributions. Clustering can therefore be formulated as a multi-objective optimization problem. The appropriate clustering algorithm and parameter settings (including parameters such as the distance function to use, a density threshold or the number of expected clusters) depend on the individual data set and intended use of the results. Cluster analysis as such is not an automatic task, but an iterative process of knowledge discovery or interactive multi-objective optimization that involves trial and failure. It is often necessary to modify data preprocessing and model parameters until the result achieves the desired properties. Besides the term clustering, there is a number of terms with similar meanings, including automatic classification, numerical taxonomy, botryology, typological analysis, and community detection. The subtle differences are often in the use of the results: while in data mining, the resulting groups are the matter of interest, in automatic classification the resulting discriminative power is of interest. Cluster analysis originated in anthropology by Driver and Kroeber in 1932 and introduced to psychology by Joseph Zubin in 1938 and Robert Tryon in 1939 and famously used by Cattell beginning in 1943 for trait theory classification in personality psychology. ";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Cluster Analysis";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::ClusterSampling(string text)
{
    string model = "llama3";
    string definition = "In statistics, cluster sampling is a sampling plan used when mutually homogeneous yet internally heterogeneous groupings are evident in a statistical population. It is often used in marketing research. In this sampling plan, the total population is divided into these groups (known as clusters) and a simple random sample of the groups is selected. The elements in each cluster are then sampled. If all elements in each sampled cluster are sampled, then this is referred to as a \"one-stage\" cluster sampling plan. If a simple random subsample of elements is selected within each of these groups, this is referred to as a \"two-stage\" cluster sampling plan. A common motivation for cluster sampling is to reduce the total number of interviews and costs given the desired accuracy. For a fixed sample size, the expected random error is smaller when most of the variation in the population is present internally within the groups, and not between the groups.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Cluster Sampling";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::ComplementaryEvent(string text)
{
    string model = "llama3";
    string definition = "In probability theory, the complement of any event A is the event , i.e. the event that A does not occur. The event A and its complement  are mutually exclusive and exhaustive. Generally, there is only one event B such that A and B are both mutually exclusive and exhaustive; that event is the complement of A. The complement of an event A is usually denoted as A\'. Given an event, the event and its complementary event define a Bernoulli trial: did the event occur or not?";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Complementary Event";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::CompletelyRandomizedDesign(string text)
{
    string model = "llama3";
    string definition = "In the design of experiments, completely randomized designs are for studying the effects of one primary factor without the need to take other nuisance variables into account. This article describes completely randomized designs that have one primary factor. The experiment compares the values of a response variable based on the different levels of that primary factor. For completely randomized designs, the levels of the primary factor are randomly assigned to the experimental units.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Completely Randomized Design";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::ComputationalStatistics(string text)
{
    string model = "llama3";
    string definition = "Computational statistics, or statistical computing, is the study which is the intersection of statistics and computer science, and refers to the statistical methods that are enabled by using computational methods. It is the area of computational science (or scientific computing) specific to the mathematical science of statistics. This area is fast developing. The view that the broader concept of computing must be taught as part of general statistical education is gaining momentum. As in traditional statistics the goal is to transform raw data into knowledge, but the focus lies on computer intensive statistical methods, such as cases with very large sample size and non-homogeneous data sets. The terms \'computational statistics\' and \'statistical computing\' are often used interchangeably, although Carlo Lauro (a former president of the International Association for Statistical Computing) proposed making a distinction, defining \'statistical computing\' as \"the application of computer science to statistics\", and \'computational statistics\' as \"aiming at the design of algorithm for implementing statistical methods on computers, including the ones unthinkable before the computer age (e.g. bootstrap, simulation), as well as to cope with analytically intractable problems\" . The term \'Computational statistics\' may also be used to refer to computationally intensive statistical methods including resampling methods, Markov chain Monte Carlo methods, local regression, kernel density estimation, artificial neural networks and generalized additive models.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Computational Statistics";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::Concomitants(string text)
{
    string model = "llama3";
    string definition = "In a statistical study, any variables whose values are unaffected by experimental treatments, such as a unit\'s age, gender, and cholesterol level before starting an experimental diet.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Concomitants";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::ConditionalDistribution(string text)
{
    string model = "llama3";
    string definition = "In probability theory and statistics, the conditional probability distribution is a probability distribution that describes the probability of an outcome given the occurrence of a particular event. Given two jointly distributed random variables X and Y, the conditional probability distribution of Y given X is the probability distribution of Y then X is known to be a particular value; in some cases the conditional probabilities may be expressed as functions containing the unspecified value x of X as a parameter. When both X and Y are categorical variables, a conditional probability table is typically used to represent the conditional probability. The conditional distribution contrasts with the marginal distribution of a random variable, which is its distribution without reference to the value of the other variable. If the conditional distribution of Y given X is a continuous distribution, then its probability density function is known as the conditional density function. The properties of a conditional distribution, such as the moments, are often referred to by corresponding names such as the conditional mean and conditional variance. More generally, one can refer to the conditional distribution of a subset of a set of more than two variables; this conditional distribution is contingent on the values of all the remaining variables, and if more than one variable is included in the subset then this conditional distribution is the conditional joint distribution of the included variables.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Conditional Distribution";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::ConditionalProbability(string text)
{
    string model = "llama3";
    string definition = "In probability theory, conditional probability is a measure of the probability of an event occurring, given that another event (by assumption, presumption, assertion or evidence) is already known to have occurred. This particular method relies on event A occurring with some sort of relationship with another event B. In this situation, the event A can be analyzed by a conditional probability with respect to B. If the event of interest is A and the event B is known or assumed to have occurred, \"the conditional probability of A given B\", or \"the probability of A under the condition B\", is usually written as P(A|B) or occasionally PB(A). This can also be understood as the fraction of probability B that intersects with A, or the ratio of the probabilities of both events happening to the \"given\" one happening (how many times A occurs rather than not assuming B has occurred):";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Conditional Probability";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::ConfidenceInterval(string text)
{
    string model = "llama3";
    string definition = "In inferential statistics, a range of plausible values for some unknown parameter, such as a population mean, defined as an interval with a lower bound and an upper bound. The precise values of these bounds are calculated from a pre-determined confidence level, chosen by the researcher. The confidence level represents the frequency of intervals that, over the long run, capture the true value of the unknown parameter; i.e. 95% of confidence intervals computed at the 95% confidence level contain the true value, and likewise for other confidence levels. For example, based on a study of sleep habits among a random sample of 100 people, a researcher may estimate at the 95% confidence level that the overall population sleeps somewhere between 5 and 9 hours per night. There is a 95% chance that the true population mean falls within this interval, because 95% of random samples taken from this same population will yield 95% confidence intervals that contain the true mean.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Confidence Interval";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::ConfidenceLevel(string text)
{
    string model = "llama3";
    string definition = "A number indicating the probability that the confidence interval (range) captures the true population mean. For example, a confidence interval with a 95% confidence level has a 95% chance of capturing the population mean. Technically, this means that, if the experiment were repeated many times, 95% of the CIs computed at this level would contain the true population mean.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Confidence Level";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::Confounding(string text)
{
    string model = "llama3";
    string definition = "In causal inference, a confounder is a variable that influences both the dependent variable and independent variable, causing a spurious association. Confounding is a causal concept, and as such, cannot be described in terms of correlations or associations. The existence of confounders is an important quantitative explanation why correlation does not imply causation. Some notations are explicitly designed to identify the existence, possible existence, or non-existence of confounders in causal relationships between elements of a system.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Confounding";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::ConjugatePrior(string text)
{
    string model = "llama3";
    string definition = "In Bayesian probability theory, if, given a likelihood function p(x | theta), the posterior distribution p(theta | x) is in the same probability distribution family as the prior probability distribution p(theta), the prior and posterior are then called conjugate distributions with respect to that likelihood function and the prior is called a conjugate prior for the likelihood function p(x | theta). A conjugate prior is an algebraic convenience, giving a closed-form expression for the posterior; otherwise, numerical integration may be necessary. Further, conjugate priors may give intuition by more transparently showing how a likelihood function updates a prior distribution. The concept, as well as the term \"conjugate prior\", were introduced by Howard Raiffa and Robert Schlaifer in their work on Bayesian decision theory. A similar concept had been discovered independently by George Alfred Barnard.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Conjugate Prior";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::ContinuousVariable(string text)
{
    string model = "llama3";
    string definition = "A continuous variable is a variable such that there are possible values between any two values. For example, a variable over a non-empty range of the real numbers is continuous, if it can take on any value in that range. For example, a variable over a non-empty range of the real numbers is continuous, if it can take on any value in that range. Methods of calculus are often used in problems in which the variables are continuous, for example in continuous optimization problems. In statistical theory, the probability distributions of continuous variables can be expressed in terms of probability density functions. In continuous-time dynamics, the variable time is treated as continuous, and the equation describing the evolution of some variable over time is a differential equation. The instantaneous rate of change is a well-defined concept that takes the ratio of the change in the dependent variable to the independent variable at a specific instant.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Continuous Variable";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::ConvenienceSampling(string text)
{
    string model = "llama3";
    string definition = "Convenience sampling (also known as grab sampling, accidental sampling, or opportunity sampling) is a type of non-probability sampling that involves the sample being drawn from that part of the population that is close to hand. Convenience sampling is not often recommended by official statistical agencies for research due to the possibility of sampling error and lack of representation of the population. It can be useful in some situations, for example, where convenience sampling is the only possible option. A trade off exists between this method of quick sampling and accuracy. Collected samples may not represent the population of interest and can be a source of bias, with larger sample sizes reducing the chance of sampling error occurring.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Convenience Sampling";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::Correlation(string text)
{
    string model = "llama3";
    string definition = "A numeric measure of the strength of a linear relationship between two random variables (one can use it to quantify, for example, how shoe size and height are correlated in the population). An example is the Pearson product-moment correlation coefficient, which is found by dividing the covariance of the two variables by the product of their standard deviations. Independent variables, by definition, have a correlation of 0. A population correlation is often represented by the symbol p, and a sample correlation by r.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Correlation";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::CountData(string text)
{
    string model = "llama3";
    string definition = "In statistics, count data is a statistical data type describing countable quantities, data which can take only the counting numbers, non-negative integer values {0, 1, 2, 3, ...}, and where these integers arise from counting rather than ranking. The statistical treatment of count data is distinct from that of binary data, in which the observations can take only two values, usually represented by 0 and 1, and from ordinal data, which may also consist of integers but where the individual values fall on an arbitrary scale and only the relative ranking is important.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Count Data";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::Covariance(string text)
{
    string model = "llama3";
    string definition = "Covariance in probability theory and statistics is a measure of the joint variability of two random variables. The sign of the covariance, therefore, shows the tendency in the linear relationship between the variables. If greater values of one variable mainly correspond with greater values of the other variable, and the same holds for lesser values (that is, the variables tend to show similar behavior), the covariance is positive. In the opposite case, when greater values of one variable mainly correspond to lesser values of the other (that is, the variables tend to show opposite behavior), the covariance is negative. The magnitude of the covariance is the geometric mean of the variances that are in common for the two random variables. The correlation coefficient normalizes the covariance by dividing by the geometric mean of the total variances for the two random variables. A distinction must be made between (1) the covariance of two random variables, which is a population parameter that can be seen as a property of the joint probability distribution, and (2) the sample covariance, which in addition to serving as a descriptor of the sample, also serves as an estimated value of the population parameter.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Covariance";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::Data(string text)
{
    string model = "llama3";
    string definition = "Data  is a collection of discrete or continuous values that convey information, describing the quantity, quality, fact, statistics, other basic units of meaning, or simply sequences of symbols that may be further interpreted formally. A datum is an individual value in a collection of data. Data are usually organized into structures such as tables that provide additional context and meaning, and may themselves be used as data in larger structures. Data may be used as variables in a computational process. Data may represent abstract ideas or concrete measurements. Data are commonly used in scientific research, economics, and virtually every other form of human organizational activity. Examples of data sets include price indices (such as the consumer price index), unemployment rates, literacy rates, and census data. In this context, data represent the raw facts and figures from which useful information can be extracted. Data are collected using techniques such as measurement, observation, query, or analysis, and are typically represented as numbers or characters that may be further processed. Field data are data that are collected in an uncontrolled, in-situ environment. Experimental data are data that are generated in the course of a controlled scientific experiment. Data are analyzed using techniques such as calculation, reasoning, discussion, presentation, visualization, or other forms of post-analysis. Prior to analysis, raw data (or unprocessed data) is typically cleaned: Outliers are removed, and obvious instrument or data entry errors are corrected. Data can be seen as the smallest units of factual information that can be used as a basis for calculation, reasoning, or discussion. Data can range from abstract ideas to concrete measurements, including, but not limited to, statistics. Thematically connected data presented in some relevant context can be viewed as information. Contextually connected pieces of information can then be described as data insights or intelligence. The stock of insights and intelligence that accumulate over time resulting from the synthesis of data into information, can then be described as knowledge. Data has been described as \"the new oil of the digital economy\". Data, as a general concept, refers to the fact that some existing information or knowledge is represented or coded in some form suitable for better usage or processing. Advances in computing technologies have led to the advent of big data, which usually refers to very large quantities of data, usually at the petabyte scale. Using traditional data analysis methods and computing, working with such large (and growing) datasets is difficult, even impossible. (Theoretically speaking, infinite data would yield infinite information, which would render extracting insights or intelligence impossible.) In response, the relatively new field of data science uses machine learning (and other artificial intelligence (AI)) methods that allow for efficient applications of analytic methods to big data.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Data";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::DataAnalysis(string text)
{
    string model = "llama3";
    string definition = "Data analysis is the process of inspecting, cleansing, transforming, and modeling data with the goal of discovering useful information, informing conclusions, and supporting decision-making. Data analysis has multiple facets and approaches, encompassing diverse techniques under a variety of names, and is used in different business, science, and social science domains. In today\'s business world, data analysis plays a role in making decisions more scientific and helping businesses operate more effectively. Data mining is a particular data analysis technique that focuses on statistical modeling and knowledge discovery for predictive rather than purely descriptive purposes, while business intelligence covers data analysis that relies heavily on aggregation, focusing mainly on business information. In statistical applications, data analysis can be divided into descriptive statistics, exploratory data analysis (EDA), and confirmatory data analysis (CDA). EDA focuses on discovering new features in the data while CDA focuses on confirming or falsifying existing hypotheses. Predictive analytics focuses on the application of statistical models for predictive forecasting or classification, while text analytics applies statistical, linguistic, and structural techniques to extract and classify information from textual sources, a species of unstructured data. All of the above are varieties of data analysis. Data integration is a precursor to data analysis, and data analysis is closely linked to data visualization and data dissemination.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Data Analysis";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::DataSet(string text)
{
    string model = "llama3";
    string definition = "A data set (or dataset) is a collection of data. In the case of tabular data, a data set corresponds to one or more database tables, where every column of a table represents a particular variable, and each row corresponds to a given record of the data set in question. The data set lists values for each of the variables, such as for example height and weight of an object, for each member of the data set. Data sets can also consist of a collection of documents or files. In the open data discipline, data set is the unit to measure the information released in a public open data repository. The European data.europa.eu portal aggregates more than a million data sets.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Data Set";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::DataPoint(string text)
{
    string model = "llama3";
    string definition = "A data point or observation is a set of one or more measurements on a single member of the unit of observation. For example, in a study of the determinants of money demand with the unit of observation being the individual, a data point might be the values of income, wealth, age of individual, and number of dependents. Statistical inference about the population would be conducted using a statistical sample consisting of various such data points. In addition, in statistical graphics, a \"data point\" may be an individual item with a statistical display; such points may relate to either a single member of a population or to a summary statistic calculated for a given subpopulation.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Data Point";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::DecisionRule(string text)
{
    string model = "llama3";
    string definition = "In decision theory, a decision rule is a function which maps an observation to an appropriate action. Decision rules play an important role in the theory of statistics and economics, and are closely related to the concept of a strategy in game theory. In order to evaluate the usefulness of a decision rule, it is necessary to have a loss function detailing the outcome of each action under different states.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Decision Rule";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::DecisionTheory(string text)
{
    string model = "llama3";
    string definition = "Decision theory or the theory of rational choice is a branch of probability, economics, and analytic philosophy that uses the tools of expected utility and probability to model how individuals would behave rationally under uncertainty. It differs from the cognitive and behavioral sciences in that it is mainly prescriptive and concerned with identifying optimal decisions for a rational agent, rather than describing how people actually make decisions. Despite this, the field is important to the study of real human behavior by social scientists, as it lays the foundations for the rational agent models used to mathematically model and analyze individuals in fields such as sociology, economics, criminology, cognitive science, and political science.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Decision Theory";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::DegreesOfFreedom(string text)
{
    string model = "llama3";
    string definition = "In statistics, the number of degrees of freedom is the number of values in the final calculation of a statistic that are free to vary. Estimates of statistical parameters can be based upon different amounts of information or data. The number of independent pieces of information that go into the estimate of a parameter is called the degrees of freedom. In general, the degrees of freedom of an estimate of a parameter are equal to the number of independent scores that go into the estimate minus the number of parameters used as intermediate steps in the estimation of the parameter itself. For example, if the variance is to be estimated from a random sample of N independent scores, then the degrees of freedom is equal to the number of independent scores (N) minus the number of parameters estimated as intermediate steps (one, namely, the sample mean) and is therefore equal to N - 1. Mathematically, degrees of freedom is the number of dimensions of the domain of a random vector, or essentially the number of \"free\" components (how many components need to be known before the vector is fully determined). The term is most often used in the context of linear models (linear regression, analysis of variance), where certain random vectors are constrained to lie in linear subspaces, and the number of degrees of freedom is the dimension of the subspace. The degrees of freedom are also commonly associated with the squared lengths (or \"sum of squares\" of the coordinates) of such vectors, and the parameters of chi-squared and other distributions that arise in associated statistical testing problems. While introductory textbooks may introduce degrees of freedom as distribution parameters or through hypothesis testing, it is the underlying geometry that defines degrees of freedom, and is critical to a proper understanding of the concept.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Degrees Of Freedom";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::DensityEstimation(string text)
{
    string model = "llama3";
    string definition = "In statistics, probability density estimation or simply density estimation is the construction of an estimate, based on observed data, of an unobservable underlying probability density function. The unobservable density function is thought of as the density according to which a large population is distributed; the data are usually thought of as a random sample from that population. A variety of approaches to density estimation are used, including Parzen windows and a range of data clustering techniques, including vector quantization. The most basic form of density estimation is a rescaled histogram.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Density Estimation";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::Dependence(string text)
{
    string model = "llama3";
    string definition = "In statistics, correlation or dependence is any statistical relationship, whether causal or not, between two random variables or bivariate data. Although in the broadest sense, \"correlation\" may indicate any type of association, in statistics it usually refers to the degree to which a pair of variables are linearly related. Familiar examples of dependent phenomena include the correlation between the height of parents and their offspring, and the correlation between the price of a good and the quantity the consumers are willing to purchase, as it is depicted in the so-called demand curve. Correlations are useful because they can indicate a predictive relationship that can be exploited in practice. For example, an electrical utility may produce less power on a mild day based on the correlation between electricity demand and weather. In this example, there is a causal relationship, because extreme weather causes people to use more electricity for heating or cooling. However, in general, the presence of a correlation is not sufficient to infer the presence of a causal relationship (i.e., correlation does not imply causation). Formally, random variables are dependent if they do not satisfy a mathematical property of probabilistic independence. In informal parlance, correlation is synonymous with dependence. However, when used in a technical sense, correlation refers to any of several specific types of mathematical relationship between the conditional expectation of one variable given the other is not constant as the conditioning variable changes; broadly correlation in this specific sense is used when E(Y|X = x) is related to x in some manner (such as linearly, monotonically, or perhaps according to some particular functional form such as logarithmic). Essentially, correlation is the measure of how two or more variables are related to one another. There are several correlation coefficients, often denoted p or r, measuring the degree of correlation. The most common of these is the Pearson correlation coefficient, which is sensitive only to a linear relationship between two variables (which may be present even when one variable is a nonlinear function of the other). Other correlation coefficients - such as Spearman\'s rank correlation - have been developed to be more robust than Pearson\'s, that is, more sensitive to nonlinear relationships. Mutual information can also be applied to measure dependence between two variables.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Dependence";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::DependentVariable(string text)
{
    string model = "llama3";
    string definition = "A variable is considered dependent if it depends on an independent variable. Dependent variables are studied under the supposition or demand that they depend, by some law or rule (e.g., by a mathematical function), on the values of other variables. Independent variables, in turn, are not seen as depending on any other variable in the scope of the experiment in question. In this sense, some common independent variables are time, space, density, mass, fluid flow rate, and previous values of some observed value of interest (e.g. human population size) to predict future values (the dependent variable). Of the two, it is always the dependent variable whose variation is being studied, by altering inputs, also known as regressors in a statistical context. In an experiment, any variable that can be attributed a value without attributing a value to any other variable is called an independent variable. Models and experiments test the effects that the independent variables have on the dependent variables. Sometimes, even if their influence is not of direct interest, independent variables may be included for other reasons, such as to account for their potential confounding effect.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Dependent Variable";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::DescriptiveStatistics(string text)
{
    string model = "llama3";
    string definition = "A descriptive statistic (in the count noun sense) is a summary statistic that quantitatively describes or summarizes features from a collection of information, while descriptive statistics (in the mass noun sense) is the process of using and analysing those statistics. Descriptive statistics is distinguished from inferential statistics (or inductive statistics) by its aim to summarize a sample, rather than use the data to learn about the population that the sample of data is thought to represent. This generally means that descriptive statistics, unlike inferential statistics, is not developed on the basis of probability theory, and are frequently nonparametric statistics. Even when a data analysis draws its main conclusions using inferential statistics, descriptive statistics are generally also presented. For example, in papers reporting on human subjects, typically a table is included giving the overall sample size, sample sizes in important subgroups (e.g., for each treatment or exposure group), and demographic or clinical characteristics such as the average age, the proportion of subjects of each sex, the proportion of subjects with related co-morbidities, etc. Some measures that are commonly used to describe a data set are measures of central tendency and measures of variability or dispersion. Measures of central tendency include the mean, median and mode, while measures of variability include the standard deviation (or variance), the minimum and maximum values of the variables, kurtosis and skewness.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Descriptive Statistics";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::DesignOfExperiments(string text)
{
    string model = "llama3";
    string definition = "The design of experiments, also known as experiment design or experimental design, is the design of any task that aims to describe and explain the variation of information under conditions that are hypothesized to reflect the variation. The term is generally associated with experiments in which the design introduces conditions that directly affect the variation, but may also refer to the design of quasi-experiments, in which natural conditions that influence the variation are selected for observation. In its simplest form, an experiment aims at predicting the outcome by introducing a change of the preconditions, which is represented by one or more independent variables, also referred to as \"input variables\" or \"predictor variables.\" The change in one or more independent variables is generally hypothesized to result in a change in one or more dependent variables, also referred to as \"output variables\" or \"response variables.\" The experimental design may also identify control variables that must be held constant to prevent external factors from affecting the results. Experimental design involves not only the selection of suitable independent, dependent, and control variables, but planning the delivery of the experiment under statistically optimal conditions given the constraints of available resources. There are multiple approaches for determining the set of design points (unique combinations of the settings of the independent variables) to be used in the experiment. Main concerns in experimental design include the establishment of validity, reliability, and replicability. For example, these concerns can be partially addressed by carefully choosing the independent variable, reducing the risk of measurement error, and ensuring that the documentation of the method is sufficiently detailed. Related concerns include achieving appropriate levels of statistical power and sensitivity. Correctly designed experiments advance knowledge in the natural and social sciences and engineering, with design of experiments methodology recognised as a key tool in the successful implementation of a Quality by Design (QbD) framework. Other applications include marketing and policy making. The study of the design of experiments is an important topic in metascience.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Design Of Experiments";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::Deviation(string text)
{
    string model = "llama3";
    string definition = "In mathematics and statistics, deviation serves as a measure to quantify the disparity between an observed value of a variable and another designated value, frequently the mean of that variable. Deviations with respect to the sample mean and the population mean (or \"true value\") are called errors and residuals, respectively. The sign of the deviation reports the direction of that difference: the deviation is positive when the observed value exceeds the reference value. The absolute value of the deviation indicates the size or magnitude of the difference. In a given sample, there are as many deviations as sample points. Summary statistics can be derived from a set of deviations, such as the standard deviation and the mean absolute deviation, measures of dispersion, and the mean signed deviation, a measure of bias. The deviation of each data point is calculated by subtracting the mean of the data set from the individual data point. Mathematically, the deviation d of a data point x in a data set with respect to the mean m is given by the difference: d = x - m. This calculation represents the \"distance\" of a data point from the mean and provides information about how much individual values vary from the average. Positive deviations indicate values above the mean, while negative deviations indicate values below the mean. The sum of squared deviations is a key component in the calculation of variance, another measure of the spread or dispersion of a data set. Variance is calculated by averaging the squared deviations. Deviation is a fundamental concept in understanding the distribution and variability of data points in statistical analysis.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Deviation";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::DiscreteVariable(string text)
{
    string model = "llama3";
    string definition = "In contrast, a variable is a discrete variable if and only if there exists a one-to-one correspondence between this variable and a subset of N, the set of natural numbers. In other words, a discrete variable over a particular interval of real values is one for which, for any value in the range that the variable is permitted to take on, there is a positive minimum distance to the nearest other permissible value. The value of a discrete variable can be obtained by counting, and the number of permitted values is either finite or countably infinite. Common examples are variables that must be integers, non-negative integers, positive integers, or only the integers 0 and 1. Methods of calculus do not readily lend themselves to problems involving discrete variables. Especially in multivariable calculus, many models rely on the assumption of continuity. Examples of problems involving discrete variables include integer programming. In statistics, the probability distributions of discrete variables can be expressed in terms of probability mass functions. In discrete time dynamics, the variable time is treated as discrete, and the equation of evolution of some variable over time is called a difference equation. For certain discrete-time dynamical systems, the system response can be modelled by solving the difference equation for an analytical solution. In econometrics and more generally in regression analysis, sometimes some of the variables being empirically related to each other are 0-1 variables, being permitted to take on only those two values. The purpose of the discrete values of 0 and 1 is to use the dummy variable as a `switch\' that can `turn on\' and `turn off\' by assigning the two values to different parameters in an equation. A variable of this type is called a dummy variable. If the dependent variable is a dummy variable, then logistic regression or probit regression is commonly employed. In the case of regression analysis, a dummy variable can be used to represent subgroups of the sample in a study (e.g. the value 0 corresponding to a constituent of the control group).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Discrete Variable";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::DotPlot(string text)
{
    string model = "llama3";
    string definition = "A dot chart or dot plot is a statistical chart consisting of data points plotted on a fairly simple scale, typically using filled in circles. There are two common, yet very different, versions of the dot chart. The first has been used in hand-drawn (pre-computer era) graphs to depict distributions going back to 1884. The other version is described by William S. Cleveland as an alternative to the bar chart, in which dots are used to depict the quantitative values (e.g. counts) associated with categorical variables.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Dot Plot";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::DoubleCounting(string text)
{
    string model = "llama3";
    string definition = "Double counting is a fallacy in reasoning. An example of double counting is shown starting with the question: What is the probability of seeing at least one 5 when throwing a pair of dice? An erroneous argument goes as follows: The first die shows a 5 with probability 1/6, and the second die shows a 5 with probability 1/6; therefore, the probability of seeing a 5 on at least one of the dice is 1/6 + 1/6 = 1/3 = 12/36. However, the correct answer is 11/36, because the erroneous argument has double-counted the event where both dice show 5s. Double counting can be generalized as the fallacy in which, when counting events or occurrences in probability or in other areas, a solution counts events two or more times, resulting in an erroneous number of events or occurrences which is higher than the true result. This results in the calculated sum of probabilities for all possible outcomes to be higher than 100%, which is impossible. In mathematical terms, the previous example calculated the probability of P(A or B) as P(A)+P(B). However, by the inclusion-exclusion principle, P(A or B) = P(A) + P(B) - P(A and B), one compensates for double counting by subtracting those objects which were double counted.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Double Counting";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::ElementaryEvent(string text)
{
    string model = "llama3";
    string definition = "An event which contains only a single outcome in the sample space; in a set of possibilities, a possibility that can occur in precisely one way. For example, when pulling a card from a standard deck of playing cards, \'pulling the jack of spades\' is an elementary event (because there is only one jack of spades in the entire deck), while \'pulling a king or an ace\' is not (because there are a combined four kings and four aces in the deck).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Elementary Event";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::EstimationTheory(string text)
{
    string model = "llama3";
    string definition = "Estimation theory is a branch of statistics that deals with estimating the values of parameters based on measured empirical data that has a random component. The parameters describe an underlying physical setting in such a way that their value affects the distribution of the measured data. An estimator attempts to approximate the unknown parameters using the measurements. In estimation theory, two approaches are generally considered:";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Estimation Theory";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::Estimator(string text)
{
    string model = "llama3";
    string definition = "A function of the known data that is used to estimate an unknown parameter; an estimate is the result of the actual application of the function to a particular set of data. For example, the mean can be used as an estimator.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Estimator";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::ExpectedValue(string text)
{
    string model = "llama3";
    string definition = "The sum of the probabilities of each possible outcome of an experiment multiplied by their corresponding payoff or \"value\". Thus, it represents the average amount one \"expects\" to win per bet if bets with identical odds are repeated many times. For example, the expected value of rolling a fair six-sided die is 3.5. The concept is, intuitively, a generalization of the weighted average of all possible outcomes of a particular procedure or experiment, and can be viewed as the arithmetic mean of a large number of independent realizations of the experiment. The expected value of random variable X is typically written as E(X) for the expectation operator, and mu for the perameter.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Expected Value";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::Experiment(string text)
{
    string model = "llama3";
    string definition = "In probability theory, an experiment or trial (see below) is any procedure that can be infinitely repeated and has a well-defined set of possible outcomes, known as the sample space. An experiment is said to be random if it has more than one possible outcome, and deterministic if it has only one. A random experiment that has exactly two (mutually exclusive) possible outcomes is known as a Bernoulli trial. When an experiment is conducted, one (and only one) outcome results- although this outcome may be included in any number of events, all of which would be said to have occurred on that trial. After conducting many trials of the same experiment and pooling the results, an experimenter can begin to assess the empirical probabilities of the various outcomes and events that can occur in the experiment and apply the methods of statistical analysis.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Experiment";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::ExponentialFamily(string text)
{
    string model = "llama3";
    string definition = "In probability and statistics, an exponential family is a parametric set of probability distributions of a certain form, specified below. This special form is chosen for mathematical convenience, including the enabling of the user to calculate expectations, covariances using differentiation based on some useful algebraic properties, as well as for generality, as exponential families are in a sense very natural sets of distributions to consider. The term exponential class is sometimes used in place of \"exponential family\", or the older term Koopman-Darmois family. Sometimes loosely referred to as \"the\" exponential family, this class of distributions is distinct because they all possess a variety of desirable properties, most importantly the existence of a sufficient statistic. The concept of exponential families is credited to E. J. G. Pitman, G. Darmois, and B. O. Koopman in 1935-1936. Exponential families of distributions provide a general framework for selecting a possible alternative parameterisation of a parametric family of distributions, in terms of natural parameters, and for defining useful sample statistics, called the natural sufficient statistics of the family.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Exponential Family";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::Event(string text)
{
    string model = "llama3";
    string definition = "In probability theory, an event is a set of outcomes of an experiment (a subset of the sample space) to which a probability is assigned. A single outcome may be an element of many different events, and different events in an experiment are usually not equally likely, since they may include very different groups of outcomes. An event consisting of only a single outcome is called an elementary event or an atomic event; that is, it is a singleton set. An event that has more than one possible outcome is called a compound event. An event S is said to occur if S contains the outcome x of the experiment (or trial) (that is, if x E S). The probability (with respect to some probability measure) that an event S occurs is the probability that S contains the outcome x of an experiment (that is, it is the probability that x E S). An event defines a complementary event, namely the complementary set (the event not occurring), and together these define a Bernoulli trial: did the event occur or not? Typically, when the sample space is finite, any subset of the sample space is an event (that is, all elements of the power set of the sample space are defined as events). However, this approach does not work well in cases where the sample space is uncountably infinite. So, when defining a probability space it is possible, and often necessary, to exclude certain subsets of the sample space from being events (see  Events in probability spaces, below).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Event";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::FactorAnalysis(string text)
{
    string model = "llama3";
    string definition = "Factor analysis is a statistical method used to describe variability among observed, correlated variables in terms of a potentially lower number of unobserved variables called factors. For example, it is possible that variations in six observed variables mainly reflect the variations in two unobserved (underlying) variables. Factor analysis searches for such joint variations in response to unobserved latent variables. The observed variables are modelled as linear combinations of the potential factors plus \"error\" terms, hence factor analysis can be thought of as a special case of errors-in-variables models. Simply put, the factor loading of a variable quantifies the extent to which the variable is related to a given factor. A common rationale behind factor analytic methods is that the information gained about the interdependencies between observed variables can be used later to reduce the set of variables in a dataset. Factor analysis is commonly used in psychometrics, personality psychology, biology, marketing, product management, operations research, finance, and machine learning. It may help to deal with data sets where there are large numbers of observed variables that are thought to reflect a smaller number of underlying/latent variables. It is one of the most commonly used inter-dependency techniques and is used when the relevant set of variables shows a systematic inter-dependence and the objective is to find out the latent factors that create a commonality.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Factor Analysis";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::FactorialExperiment(string text)
{
    string model = "llama3";
    string definition = "In statistics, a full factorial experiment is an experiment whose design consists of two or more factors, each with discrete possible values or \"levels\", and whose experimental units take on all possible combinations of these levels across all such factors. A full factorial design may also be called a fully crossed design. Such an experiment allows the investigator to study the effect of each factor on the response variable, as well as the effects of interactions between factors on the response variable. For the vast majority of factorial experiments, each factor has only two levels. For example, with two factors each taking two levels, a factorial experiment would have four treatment combinations in total, and is usually called a 2x2 factorial design. In such a design, the interaction between the variables is often the most important. This applies even to scenarios where a main effect and an interaction are present. If the number of combinations in a full factorial design is too high to be logistically feasible, a fractional factorial design may be done, in which some of the possible combinations (usually at least half) are omitted. Other terms for \"treatment combinations\" are often used, such as runs (of an experiment), points (viewing the combinations as vertices of a graph, and cells (arising as intersections of rows and columns).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Factorial Experiment";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::Frequency(string text)
{
    string model = "llama3";
    string definition = "In statistics, the frequency or absolute frequency of an event i is the number ni of times the observation has occurred/been recorded in an experiment or study. These frequencies are often depicted graphically or tabular form.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Frequency";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::FrequencyDomain(string text)
{
    string model = "llama3";
    string definition = "In mathematics, physics, electronics, control systems engineering, and statistics, the frequency domain refers to the analysis of mathematical functions or signals with respect to frequency (and possibly phase), rather than time, as in time series. Put simply, a time-domain graph shows how a signal changes over time, whereas a frequency-domain graph shows how the signal is distributed within different frequency bands over a range of frequencies. A complex valued frequency-domain representation consists of both the magnitude and the phase of a set of sinusoids (or other basis waveforms) at the frequency components of the signal. Although it is common to refer to the magnitude portion (the real valued frequency-domain) as the frequency response of a signal, the phase portion is required to uniquely define the signal. A given function or signal can be converted between the time and frequency domains with a pair of mathematical operators called transforms. An example is the Fourier transform, which converts a time function into a complex valued sum or integral of sine waves of different frequencies, with amplitudes and phases, each of which represents a frequency component. The \"spectrum\" of frequency components is the frequency-domain representation of the signal. The inverse Fourier transform converts the frequency-domain function back to the time-domain function. A spectrum analyzer is a tool commonly used to visualize electronic signals in the frequency domain. A given function or signal can be converted between the time and frequency domains with a pair of mathematical operators called transforms. An example is the Fourier transform, which converts a time function into a complex valued sum or integral of sine waves of different frequencies, with amplitudes and phases, each of which represents a frequency component. The \"spectrum\" of frequency components is the frequency-domain representation of the signal. The inverse Fourier transform converts the frequency-domain function back to the time-domain function. A spectrum analyzer is a tool commonly used to visualize electronic signals in the frequency domain. A frequency-domain representation may describe either a static function or a particular time period of a dynamic function (signal or system). The frequency transform of a dynamic function is performed over a finite time period of that function and assumes the function repeats infinitely outside of that time period. Some specialized signal processing techniques for dynamic functions use transforms that result in a joint time-frequency domain, with the instantaneous frequency response being a key link between the time domain and the frequency domain.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Frequency Domain";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::FrequentistInference(string text)
{
    string model = "llama3";
    string definition = "Frequentist inference is a type of statistical inference based in frequentist probability, which treats \"probability\" in equivalent terms to \"frequency\" and draws conclusions from sample-data by means of emphasizing the frequency or proportion of findings in the data. Frequentist inference underlies frequentist statistics, in which the well-established methodologies of statistical hypothesis testing and confidence intervals are founded.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Frequentist Inference";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::GeneralLinearModel(string text)
{
    string model = "llama3";
    string definition = "The general linear model or general multivariate regression model is a compact way of simultaneously writing several multiple linear regression models. In that sense it is not a separate statistical linear model. The various multiple linear regression models may be compactly written as: Y = XB + U, where Y is a matrix with series of multivariate measurements (each column being a set of measurements on one of the dependent variables), X is a matrix of observations on independent variables that might be a design matrix (each column being a set of observations on one of the independent variables), B is a matrix containing parameters that are usually to be estimated and U is a matrix containing errors (noise). The errors are usually assumed to be uncorrelated across measurements, and follow a multivariate normal distribution. If the errors do not follow a multivariate normal distribution, generalized linear models may be used to relax assumptions about Y and U. The general linear model incorporates a number of different statistical models: ANOVA, ANCOVA, MANOVA, MANCOVA, ordinary linear regression, t-test and F-test. The general linear model is a generalization of multiple linear regression to the case of more than one dependent variable. If Y, B, and U were column vectors, the matrix equation above would represent multiple linear regression. Hypothesis tests with the general linear model can be made in two ways: multivariate or as several independent univariate tests. In multivariate tests the columns of Y are tested together, whereas in univariate tests the columns of Y are tested independently, i.e., as multiple univariate tests with the same design matrix.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "General Linear Model";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::GeneralizedLinearModel(string text)
{
    string model = "llama3";
    string definition = "In statistics, a generalized linear model (GLM) is a flexible generalization of ordinary linear regression. The GLM generalizes linear regression by allowing the linear model to be related to the response variable via a link function and by allowing the magnitude of the variance of each measurement to be a function of its predicted value. Generalized linear models were formulated by John Nelder and Robert Wedderburn as a way of unifying various other statistical models, including linear regression, logistic regression and Poisson regression. They proposed an iteratively reweighted least squares method for maximum likelihood estimation (MLE) of the model parameters. MLE remains popular and is the default method on many statistical computing packages. Other approaches, including Bayesian regression and least squares fitting to variance stabilized responses, have been developed.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Generalized Linear Model";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::GroupedData(string text)
{
    string model = "llama3";
    string definition = "Grouped data are data formed by aggregating individual observations of a variable into groups, so that a frequency distribution of these groups serves as a convenient means of summarizing or analyzing the data. There are two major types of grouping: data binning of a single-dimensional variable, replacing individual numbers by counts in bins; and grouping multi-dimensional variables by some of the dimensions (especially by independent variables), obtaining the distribution of ungrouped dimensions (especially the dependent variables).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Grouped Data";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::Histogram(string text)
{
    string model = "llama3";
    string definition = "A histogram is a visual representation of the distribution of quantitative data. To construct a histogram, the first step is to \"bin\" (or \"bucket\") the range of values- divide the entire range of values into a series of intervals-and then count how many values fall into each interval. The bins are usually specified as consecutive, non-overlapping intervals of a variable. The bins (intervals) are adjacent and are typically (but not required to be) of equal size. Histograms give a rough sense of the density of the underlying distribution of the data, and often for density estimation: estimating the probability density function of the underlying variable. The total area of a histogram used for probability density is always normalized to 1. If the length of the intervals on the x-axis are all 1, then a histogram is identical to a relative frequency plot. Histograms are sometimes confused with bar charts. In a histogram, each bin is for a different range of values, so altogether the histogram illustrates the distribution of values. But in a bar chart, each bar is for a different category of observations (e.g., each bar might be for a different population), so altogether the bar chart can be used to compare different categories. Some authors recommend that bar charts always have gaps between the bars to clarify that they are not histograms.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Histogram";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::Independence(string text)
{
    string model = "llama3";
    string definition = "Independence is a fundamental notion in probability theory, as in statistics and the theory of stochastic processes. Two events are independent, statistically independent, or stochastically independent if, informally speaking, the occurrence of one does not affect the probability of occurrence of the other or, equivalently, does not affect the odds. Similarly, two random variables are independent if the realization of one does not affect the probability distribution of the other. When dealing with collections of more than two events, two notions of independence need to be distinguished. The events are called pairwise independent if any two events in the collection are independent of each other, while mutual independence (or collective independence) of events means, informally speaking, that each event is independent of any combination of other events in the collection. A similar notion exists for collections of random variables. Mutual independence implies pairwise independence, but not the other way around. In the standard literature of probability theory, statistics, and stochastic processes, independence without further qualification usually refers to mutual independence.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Independence";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::IndependentVariable(string text)
{
    string model = "llama3";
    string definition = "In an experiment, any variable that can be attributed a value without attributing a value to any other variable is called an independent variable. Models and experiments test the effects that the independent variables have on the dependent variables. Sometimes, even if their influence is not of direct interest, independent variables may be included for other reasons, such as to account for their potential confounding effect.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Independent Variable";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::InterquartileRange(string text)
{
    string model = "llama3";
    string definition = "In descriptive statistics, the interquartile range (IQR) is a measure of statistical dispersion, which is the spread of the data. The IQR may also be called the midspread, middle 50%, fourth spread, or H-spread. It is defined as the difference between the 75th and 25th percentiles of the data. To calculate the IQR, the data set is divided into quartiles, or four rank-ordered even parts via linear interpolation. These quartiles are denoted by Q1 (also called the lower quartile), Q2 (the median), and Q3 (also called the upper quartile). The lower quartile corresponds with the 25th percentile and the upper quartile corresponds with the 75th percentile, so IQR = Q3 -  Q1. The IQR is an example of a trimmed estimator, defined as the 25% trimmed range, which enhances the accuracy of dataset statistics by dropping lower contribution, outlying points. It is also used as a robust measure of scale It can be clearly visualized by the box on a box plot.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Interquartile Range";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::JointDistribution(string text)
{
    string model = "llama3";
    string definition = "Given two random variables that are defined on the same probability space, the joint probability distribution is the corresponding probability distribution on all possible pairs of outputs. The joint distribution can just as well be considered for any given number of random variables. The joint distribution encodes the marginal distributions, i.e. the distributions of each of the individual random variables and the conditional probability distributions, which deal with how the outputs of one random variable are distributed when given information on the outputs of the other random variable(s). In the formal mathematical setup of measure theory, the joint distribution is given by the pushforward measure, by the map obtained by pairing together the given random variables, of the sample space\'s probability measure. In the case of real-valued random variables, the joint distribution, as a particular multivariate distribution, may be expressed by a multivariate cumulative distribution function, or by a multivariate probability density function together with a multivariate probability mass function. In the special case of continuous random variables, it is sufficient to consider probability density functions, and in the case of discrete random variables, it is sufficient to consider probability mass functions.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Joint Distribution";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::KalmanFilter(string text)
{
    string model = "llama3";
    string definition = "In statistics and control theory, Kalman filtering (also known as linear quadratic estimation) is an algorithm that uses a series of measurements observed over time, including statistical noise and other inaccuracies, to produce estimates of unknown variables that tend to be more accurate than those based on a single measurement, by estimating a joint probability distribution over the variables for each time-step. The filter is constructed as a mean squared error minimiser, but an alternative derivation of the filter is also provided showing how the filter relates to maximum likelihood statistics. The filter is named after Rudolf E. Kálmán. Kalman filtering has numerous technological applications. A common application is for guidance, navigation, and control of vehicles, particularly aircraft, spacecraft and ships positioned dynamically. Furthermore, Kalman filtering is much applied in time series analysis tasks such as signal processing and econometrics. Kalman filtering is also important for robotic motion planning and control, and can be used for trajectory optimization. Kalman filtering also works for modeling the central nervous system\'s control of movement. Due to the time delay between issuing motor commands and receiving sensory feedback, the use of Kalman filters provides a realistic model for making estimates of the current state of a motor system and issuing updated commands. The algorithm works via a two-phase process: a prediction phase and an update phase. In the prediction phase, the Kalman filter produces estimates of the current state variables, including their uncertainties. Once the outcome of the next measurement (necessarily corrupted with some error, including random noise) is observed, these estimates are updated using a weighted average, with more weight given to estimates with greater certainty. The algorithm is recursive. It can operate in real time, using only the present input measurements and the state calculated previously and its uncertainty matrix; no additional past information is required. Optimality of Kalman filtering assumes that errors have a normal (Gaussian) distribution. In the words of Rudolf E. Kálmán: \"The following assumptions are made about random processes: Physical random phenomena may be thought of as due to primary random sources exciting dynamic systems. The primary sources are assumed to be independent gaussian random processes with zero mean; the dynamic systems will be linear.\" Regardless of Gaussianity, however, if the process and measurement covariances are known, then the Kalman filter is the best possible linear estimator in the minimum mean-square-error sense, although there may be better nonlinear estimators. It is a common misconception (perpetuated in the literature) that the Kalman filter cannot be rigorously applied unless all noise processes are assumed to be Gaussian. Extensions and generalizations of the method have also been developed, such as the extended Kalman filter and the unscented Kalman filter which work on nonlinear systems. The basis is a hidden Markov model such that the state space of the latent variables is continuous and all latent and observed variables have Gaussian distributions. Kalman filtering has been used successfully in multi-sensor fusion, and distributed sensor networks to develop distributed or consensus Kalman filtering.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Kalman Filter";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::Kernel(string text)
{
    string model = "llama3";
    string definition = "The term kernel is used in statistical analysis to refer to a window function. The term \"kernel\" has several distinct meanings in different branches of statistics.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Kernel";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::KernelDensityEstimation(string text)
{
    string model = "llama3";
    string definition = "In statistics, kernel density estimation (KDE) is the application of kernel smoothing for probability density estimation, i.e., a non-parametric method to estimate the probability density function of a random variable based on kernels as weights. KDE answers a fundamental data smoothing problem where inferences about the population are made based on a finite data sample. In some fields such as signal processing and econometrics it is also termed the Parzen-Rosenblatt window method, after Emanuel Parzen and Murray Rosenblatt, who are usually credited with independently creating it in its current form. One of the famous applications of kernel density estimation is in estimating the class-conditional marginal densities of data when using a naive Bayes classifier, which can improve its prediction accuracy.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Kernel Density Estimation";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::Kurtosis(string text)
{
    string model = "llama3";
    string definition = "In probability theory and statistics, kurtosis refers to the degree of \"tailedness\" in the probability distribution of a real-valued random variable. Similar to skewness, kurtosis provides insight into specific characteristics of a distribution. Various methods exist for quantifying kurtosis in theoretical distributions, and corresponding techniques allow estimation based on sample data from a population. It\'s important to note that different measures of kurtosis can yield varying interpretations. The standard measure of a distribution\'s kurtosis, originating with Karl Pearson, is a scaled version of the fourth moment of the distribution. This number is related to the tails of the distribution, not its peak; hence, the sometimes-seen characterization of kurtosis as \"peakedness\" is incorrect. For this measure, higher kurtosis corresponds to greater extremity of deviations (or outliers), and not the configuration of data near the mean. Excess kurtosis, typically compared to a value of 0, characterizes the \"tailedness\" of a distribution. A univariate normal distribution has an excess kurtosis of 0. Negative excess kurtosis indicates a platykurtic distribution, which doesn\'t necessarily have a flat top but produces fewer or less extreme outliers than the normal distribution. For instance, the uniform distribution is platykurtic. On the other hand, positive excess kurtosis signifies a leptokurtic distribution. The Laplace distribution, for example, has tails that decay more slowly than a Gaussian, resulting in more outliers. To simplify comparison with the normal distribution, excess kurtosis is calculated as Pearson\'s kurtosis minus 3. Some authors and software packages use \"kurtosis\" to refer specifically to excess kurtosis, but this article distinguishes between the two for clarity. Alternative measures of kurtosis are: the L-kurtosis, which is a scaled version of the fourth L-moment; measures based on four population or sample quantiles. These are analogous to the alternative measures of skewness that are not based on ordinary moments.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Kurtosis";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::LMoment(string text)
{
    string model = "llama3";
    string definition = "In statistics, L-moments are a sequence of statistics used to summarize the shape of a probability distribution. They are linear combinations of order statistics (L-statistics) analogous to conventional moments, and can be used to calculate quantities analogous to standard deviation, skewness and kurtosis, termed the L-scale, L-skewness and L-kurtosis respectively (the L-mean is identical to the conventional mean). Standardised L-moments are called L-moment ratios and are analogous to standardized moments. Just as for conventional moments, a theoretical distribution has a set of population L-moments. Sample L-moments can be defined for a sample from the population, and can be used as estimators of the population L-moments.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "L Moment";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::LawOfLargeNumbers(string text)
{
    string model = "llama3";
    string definition = "In probability theory, the law of large numbers (LLN) is a mathematical law that states that the average of the results obtained from a large number of independent random samples converges to the true value, if it exists. More formally, the LLN states that given a sample of independent and identically distributed values, the sample mean converges to the true mean. The LLN is important because it guarantees stable long-term results for the averages of some random events. For example, while a casino may lose money in a single spin of the roulette wheel, its earnings will tend towards a predictable percentage over a large number of spins. Any winning streak by a player will eventually be overcome by the parameters of the game. Importantly, the law applies (as the name indicates) only when a large number of observations are considered. There is no principle that a small number of observations will coincide with the expected value or that a streak of one value will immediately be \"balanced\" by the others (see the gambler\'s fallacy). The LLN only applies to the average of the results obtained from repeated trials and claims that this average converges to the expected value; it does not claim that the sum of n results gets close to the expected value times n as n increases. Throughout its history, many mathematicians have refined this law. Today, the LLN is used in many fields including statistics, probability theory, economics, and insurance.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Law Of Large Numbers";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::LikelihoodFunction(string text)
{
    string model = "llama3";
    string definition = "A likelihood function (often simply called the likelihood) measures how well a statistical model explains observed data by calculating the probability of seeing that data under different parameter values of the model. It is constructed from the joint probability distribution of the random variable that (presumably) generated the observations. When evaluated on the actual data points, it becomes a function solely of the model parameters. In maximum likelihood estimation, the argument that maximizes the likelihood function serves as a point estimate for the unknown parameter, while the Fisher information (often approximated by the likelihood\'s Hessian matrix at the maximum) gives an indication of the estimate\'s precision. In contrast, in Bayesian statistics, the estimate of interest is the converse of the likelihood, the so-called posterior probability of the parameter given the observed data, which is calculated via Bayes\' rule.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Likelihood Function";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::LossFunction(string text)
{
    string model = "llama3";
    string definition = "In mathematical optimization and decision theory, a loss function or cost function (sometimes also called an error function) is a function that maps an event or values of one or more variables onto a real number intuitively representing some \"cost\" associated with the event. An optimization problem seeks to minimize a loss function. An objective function is either a loss function or its opposite (in specific domains, variously called a reward function, a profit function, a utility function, a fitness function, etc.), in which case it is to be maximized. The loss function could include terms from several levels of the hierarchy. In statistics, typically a loss function is used for parameter estimation, and the event in question is some function of the difference between estimated and true values for an instance of data. The concept, as old as Laplace, was reintroduced in statistics by Abraham Wald in the middle of the 20th century. In the context of economics, for example, this is usually economic cost or regret. In classification, it is the penalty for an incorrect classification of an example. In actuarial science, it is used in an insurance context to model benefits paid over premiums, particularly since the works of Harald Cramér in the 1920s. In optimal control, the loss is the penalty for failing to achieve a desired value. In financial risk management, the function is mapped to a monetary loss.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Loss Function";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::LikelihoodRatioTest(string text)
{
    string model = "llama3";
    string definition = "In statistics, the likelihood-ratio test is a hypothesis test that involves comparing the goodness of fit of two competing statistical models, typically one found by maximization over the entire parameter space and another found after imposing some constraint, based on the ratio of their likelihoods. If the more constrained model (i.e., the null hypothesis) is supported by the observed data, the two likelihoods should not differ by more than sampling error. Thus the likelihood-ratio test tests whether this ratio is significantly different from one, or equivalently whether its natural logarithm is significantly different from zero. The likelihood-ratio test, also known as Wilks test, is the oldest of the three classical approaches to hypothesis testing, together with the Lagrange multiplier test and the Wald test. In fact, the latter two can be conceptualized as approximations to the likelihood-ratio test, and are asymptotically equivalent. In the case of comparing two models each of which has no unknown parameters, use of the likelihood-ratio test can be justified by the Neyman-Pearson lemma. The lemma demonstrates that the test has the highest power among all competitors.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Likelihood Ratio Test";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::MEstimator(string text)
{
    string model = "llama3";
    string definition = "In statistics, M-estimators are a broad class of extremum estimators for which the objective function is a sample average. Both non-linear least squares and maximum likelihood estimation are special cases of M-estimators. The definition of M-estimators was motivated by robust statistics, which contributed new types of M-estimators. However, M-estimators are not inherently robust, as is clear from the fact that they include maximum likelihood estimators, which are in general not robust. The statistical procedure of evaluating an M-estimator on a data set is called M-estimation. The \"M\" initial stands for \"maximum likelihood-type\".";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "M Estimator";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::MarginalDistribution(string text)
{
    string model = "llama3";
    string definition = "In probability theory and statistics, the marginal distribution of a subset of a collection of random variables is the probability distribution of the variables contained in the subset. It gives the probabilities of various values of the variables in the subset without reference to the values of the other variables. This contrasts with a conditional distribution, which gives the probabilities contingent upon the values of the other variables. Marginal variables are those variables in the subset of variables being retained. These concepts are \"marginal\" because they can be found by summing values in a table along rows or columns, and writing the sum in the margins of the table. The distribution of the marginal variables (the marginal distribution) is obtained by marginalizing (that is, focusing on the sums in the margin) over the distribution of the variables being discarded, and the discarded variables are said to have been marginalized out. The context here is that the theoretical studies being undertaken, or the data analysis being done, involves a wider set of random variables but that attention is being limited to a reduced number of those variables. In many applications, an analysis may start with a given collection of random variables, then first extend the set by defining new ones (such as the sum of the original random variables) and finally reduce the number by placing interest in the marginal distribution of a subset (such as the sum). Several different analyses may be done, each treating a different subset of variables as the marginal distribution.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Marginal Distribution";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::MarginalLikelihood(string text)
{
    string model = "llama3";
    string definition = "A marginal likelihood is a likelihood function that has been integrated over the parameter space. In Bayesian statistics, it represents the probability of generating the observed sample for all possible values of the parameters; it can be understood as the probability of the model itself and is therefore often referred to as model evidence or simply evidence. Due to the integration over the parameter space, the marginal likelihood does not directly depend upon the parameters. If the focus is not on model comparison, the marginal likelihood is simply the normalizing constant that ensures that the posterior is a proper probability. It is related to the partition function in statistical mechanics.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Marginal Likelihood";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::MarginalProbability(string text)
{
    string model = "llama3";
    string definition = "In probability theory and statistics, the marginal distribution of a subset of a collection of random variables is the probability distribution of the variables contained in the subset. It gives the probabilities of various values of the variables in the subset without reference to the values of the other variables. This contrasts with a conditional distribution, which gives the probabilities contingent upon the values of the other variables. Marginal variables are those variables in the subset of variables being retained. These concepts are \"marginal\" because they can be found by summing values in a table along rows or columns, and writing the sum in the margins of the table. The distribution of the marginal variables (the marginal distribution) is obtained by marginalizing (that is, focusing on the sums in the margin) over the distribution of the variables being discarded, and the discarded variables are said to have been marginalized out. The context here is that the theoretical studies being undertaken, or the data analysis being done, involves a wider set of random variables but that attention is being limited to a reduced number of those variables. In many applications, an analysis may start with a given collection of random variables, then first extend the set by defining new ones (such as the sum of the original random variables) and finally reduce the number by placing interest in the marginal distribution of a subset (such as the sum). Several different analyses may be done, each treating a different subset of variables as the marginal distribution.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Marginal Probability";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::MarkovChainMonteCarlo(string text)
{
    string model = "llama3";
    string definition = "In statistics, Markov chain Monte Carlo (MCMC) is a class of algorithms used to draw samples from a probability distribution. Given a probability distribution, one can construct a Markov chain whose elements\' distribution approximates it - that is, the Markov chain\'s equilibrium distribution matches the target distribution. The more steps that are included, the more closely the distribution of the sample matches the actual desired distribution. Markov chain Monte Carlo methods are used to study probability distributions that are too complex or too highly dimensional to study with analytic techniques alone. Various algorithms exist for constructing such Markov chains, including the Metropolis-Hastings algorithm..";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Markov Chain Monte Carlo";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::MathematicalStatistics(string text)
{
    string model = "llama3";
    string definition = "Mathematical statistics is the application of probability theory, a branch of mathematics, to statistics, as opposed to techniques for collecting statistical data. Specific mathematical techniques which are used for this include mathematical analysis, linear algebra, stochastic analysis, differential equations, and measure theory.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Mathematical Statistics";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::MaximumLikelihoodEstimation(string text)
{
    string model = "llama3";
    string definition = "In statistics, maximum likelihood estimation (MLE) is a method of estimating the parameters of an assumed probability distribution, given some observed data. This is achieved by maximizing a likelihood function so that, under the assumed statistical model, the observed data is most probable. The point in the parameter space that maximizes the likelihood function is called the maximum likelihood estimate. The logic of maximum likelihood is both intuitive and flexible, and as such the method has become a dominant means of statistical inference. If the likelihood function is differentiable, the derivative test for finding maxima can be applied. In some cases, the first-order conditions of the likelihood function can be solved analytically; for instance, the ordinary least squares estimator for a linear regression model maximizes the likelihood when the random errors are assumed to have normal distributions with the same variance. From the perspective of Bayesian inference, MLE is generally equivalent to maximum a posteriori (MAP) estimation with a prior distribution that is uniform in the region of interest. In frequentist inference, MLE is a special case of an extremum estimator, with the objective function being the likelihood.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Maximum Likelihood Estimation";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::Mean(string text)
{
    string model = "llama3";
    string definition = "A mean is a quantity representing the \"center\" of a collection of numbers and is intermediate to the extreme values of the set of numbers. There are several kinds of means (or \"measures of central tendency\") in mathematics, especially in statistics. Each attempts to summarize or typify a given group of data, illustrating the magnitude and sign of the data set. Which of these measures is most illuminating depends on what is being measured, and on context and purpose.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Mean";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::Median(string text)
{
    string model = "llama3";
    string definition = "The median of a set of numbers is the value separating the higher half from the lower half of a data sample, a population, or a probability distribution. For a data set, it may be thought of as the \"middle\" value. The basic feature of the median in describing data compared to the mean (often simply described as the \"average\") is that it is not skewed by a small proportion of extremely large or small values, and therefore provides a better representation of the center. Median income, for example, may be a better way to describe the center of the income distribution because increases in the largest incomes alone have no effect on the median. For this reason, the median is of central importance in robust statistics.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Median";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::MedianAbsoluteDeviation(string text)
{
    string model = "llama3";
    string definition = "In statistics, the median absolute deviation (MAD) is a robust measure of the variability of a univariate sample of quantitative data. It can also refer to the population parameter that is estimated by the MAD calculated from a sample. ";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Median Absolute Deviation";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::Mode(string text)
{
    string model = "llama3";
    string definition = "In statistics, the mode is the value that appears most often in a set of data values. If X is a discrete random variable, the mode is the value x at which the probability mass function takes its maximum value (i.e., x=argmaxxi P(X = xi)). In other words, it is the value that is most likely to be sampled. Like the statistical mean and median, the mode is a way of expressing, in a (usually) single number, important information about a random variable or a population. The numerical value of the mode is the same as that of the mean and median in a normal distribution, and it may be very different in highly skewed distributions. The mode is not necessarily unique in a given discrete distribution since the probability mass function may take the same maximum value at several points x1, x2, etc. The most extreme case occurs in uniform distributions, where all values occur equally frequently. A mode of a continuous probability distribution is often considered to be any value x at which its probability density function has a locally maximum value. When the probability density function of a continuous distribution has multiple local maxima it is common to refer to all of the local maxima as modes of the distribution, so any peak is a mode. Such a continuous distribution is called multimodal (as opposed to unimodal). In symmetric unimodal distributions, such as the normal distribution, the mean (if defined), median and mode all coincide. For samples, if it is known that they are drawn from a symmetric unimodal distribution, the sample mean can be used as an estimate of the population mode.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Mode";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::MovingAverage(string text)
{
    string model = "llama3";
    string definition = "In statistics, a moving average (rolling average or running average or moving mean or rolling mean) is a calculation to analyze data points by creating a series of averages of different selections of the full data set. Variations include: simple, cumulative, or weighted forms. Mathematically, a moving average is a type of convolution. Thus in signal processing it is viewed as a low-pass finite impulse response filter. Because the boxcar function outlines its filter coefficients, it is called a boxcar filter. It is sometimes followed by downsampling. Given a series of numbers and a fixed subset size, the first element of the moving average is obtained by taking the average of the initial fixed subset of the number series. Then the subset is modified by \"shifting forward\"; that is, excluding the first number of the series and including the next value in the subset. A moving average is commonly used with time series data to smooth out short-term fluctuations and highlight longer-term trends or cycles. The threshold between short-term and long-term depends on the application, and the parameters of the moving average will be set accordingly. It is also used in economics to examine gross domestic product, employment or other macroeconomic time series. When used with non-time series data, a moving average filters higher frequency components without any specific connection to time, although typically some kind of ordering is implied. Viewed simplistically it can be regarded as smoothing the data.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Moving Average";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::MultimodalDistribution(string text)
{
    string model = "llama3";
    string definition = "In statistics, a multimodal distribution is a probability distribution with more than one mode (i.e., more than one local peak of the distribution). These appear as distinct peaks (local maxima) in the probability density function, as shown in Figures 1 and 2. Categorical, continuous, and discrete data can all form multimodal distributions. Among univariate analyses, multimodal distributions are commonly bimodal.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Multimodal Distribution";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::MultivariateAnalysis(string text)
{
    string model = "llama3";
    string definition = "Multivariate analysis (MVA) is based on the principles of multivariate statistics. Typically, MVA is used to address situations where multiple measurements are made on each experimental unit and the relations among these measurements and their structures are important. A modern, overlapping categorization of MVA includes: Normal and general multivariate models and distribution theory, The study and measurement of relationships, Probability computations of multidimensional regions, The exploration of data structures and patterns.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Multivariate Analysis";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::MultivariateKernelDensityEstimation(string text)
{
    string model = "llama3";
    string definition = "Kernel density estimation is a nonparametric technique for density estimation i.e., estimation of probability density functions, which is one of the fundamental questions in statistics. It can be viewed as a generalisation of histogram density estimation with improved statistical properties. Apart from histograms, other types of density estimators include parametric, spline, wavelet and Fourier series. Kernel density estimators were first introduced in the scientific literature for univariate data in the 1950s and 1960s and subsequently have been widely adopted. It was soon recognised that analogous estimators for multivariate data would be an important addition to multivariate statistics. Based on research carried out in the 1990s and 2000s, multivariate kernel density estimation has reached a level of maturity comparable to its univariate counterparts.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Multivariate Kernel Density Estimation";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::MultivariateRandomVariable(string text)
{
    string model = "llama3";
    string definition = "In probability, and statistics, a multivariate random variable or random vector is a list or vector of mathematical variables each of whose value is unknown, either because the value has not yet occurred or because there is imperfect knowledge of its value. The individual variables in a random vector are grouped together because they are all part of a single mathematical system - often they represent different properties of an individual statistical unit. For example, while a given person has a specific age, height and weight, the representation of these features of an unspecified person from within a group would be a random vector. Normally each element of a random vector is a real number. Random vectors are often used as the underlying implementation of various types of aggregate random variables, e.g. a random matrix, random tree, random sequence, stochastic process, etc.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Multivariate Random Variable";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::MutualExclusivity(string text)
{
    string model = "llama3";
    string definition = "In logic and probability theory, two events (or propositions) are mutually exclusive or disjoint if they cannot both occur at the same time. A clear example is the set of outcomes of a single coin toss, which can result in either heads or tails, but not both. In the coin-tossing example, both outcomes are, in theory, collectively exhaustive, which means that at least one of the outcomes must happen, so these two possibilities together exhaust all the possibilities. However, not all mutually exclusive events are collectively exhaustive. For example, the outcomes 1 and 4 of a single roll of a six-sided die are mutually exclusive (both cannot happen at the same time) but not collectively exhaustive (there are other possible outcomes; 2,3,5,6).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Mutual Exclusivity";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::MutualIndependence(string text)
{
    string model = "llama3";
    string definition = "Independence is a fundamental notion in probability theory, as in statistics and the theory of stochastic processes. Two events are independent, statistically independent, or stochastically independent if, informally speaking, the occurrence of one does not affect the probability of occurrence of the other or, equivalently, does not affect the odds. Similarly, two random variables are independent if the realization of one does not affect the probability distribution of the other. When dealing with collections of more than two events, two notions of independence need to be distinguished. The events are called pairwise independent if any two events in the collection are independent of each other, while mutual independence (or collective independence) of events means, informally speaking, that each event is independent of any combination of other events in the collection. A similar notion exists for collections of random variables. Mutual independence implies pairwise independence, but not the other way around. In the standard literature of probability theory, statistics, and stochastic processes, independence without further qualification usually refers to mutual independence.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Mutual Independence";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::NonparametricRegression(string text)
{
    string model = "llama3";
    string definition = "Nonparametric regression is a category of regression analysis in which the predictor does not take a predetermined form but is constructed according to information derived from the data. That is, no parametric equation is assumed for the relationship between predictors and dependent variable. Nonparametric regression requires larger sample sizes than regression based on parametric models because the data must supply the model structure as well as the parameter estimates.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Nonparametric Regression";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::NonparametricStatistics(string text)
{
    string model = "llama3";
    string definition = "Nonparametric statistics is a type of statistical analysis that makes minimal assumptions about the underlying distribution of the data being studied. Often these models are infinite-dimensional, rather than finite dimensional, as is parametric statistics. Nonparametric statistics can be used for descriptive statistics or statistical inference. Nonparametric tests are often used when the assumptions of parametric tests are evidently violated.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Nonparametric Statistics";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::NonSamplingError(string text)
{
    string model = "llama3";
    string definition = "In statistics, non-sampling error is a catch-all term for the deviations of estimates from their true values that are not a function of the sample chosen, including various systematic errors and random errors that are not due to sampling. Non-sampling errors are much harder to quantify than sampling errors. Non-sampling errors in survey estimates can arise from: Coverage errors, such as failure to accurately represent all population units in the sample, or the inability to obtain information about all sample cases; Response errors by respondents due for example to definitional differences, misunderstandings, or deliberate misreporting; Mistakes in recording the data or coding it to standard classifications; Pseudo-opinions given by respondents when they have no opinion, but do not wish to say so; Other errors of collection, nonresponse, processing, or imputation of values for missing or inconsistent data.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Non Sampling Error";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::NormalDistribution(string text)
{
    string model = "llama3";
    string definition = "In probability theory and statistics, a normal distribution or Gaussian distribution is a type of continuous probability distribution for a real-valued random variable. The general form of its probability density function is f(x) = (1 /sqrt(2*pi*o^2))e^-(((x - u)^2)/(2o^2))). ";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Normal Distribution";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::NormalProbabilityPlot(string text)
{
    string model = "llama3";
    string definition = "The normal probability plot is a graphical technique to identify substantive departures from normality. This includes identifying outliers, skewness, kurtosis, a need for transformations, and mixtures. Normal probability plots are made of raw data, residuals from model fits, and estimated parameters. In a normal probability plot (also called a \"normal plot\"), the sorted data are plotted vs. values selected to make the resulting image look close to a straight line if the data are approximately normally distributed. Deviations from a straight line suggest departures from normality. The plotting can be manually performed by using a special graph paper, called normal probability paper. With modern computers normal plots are commonly made with software. The normal probability plot is a special case of the Q-Q probability plot for a normal distribution. The theoretical quantiles are generally chosen to approximate either the mean or the median of the corresponding order statistics.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Normal Probability Plot";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::NullHypothesis(string text)
{
    string model = "llama3";
    string definition = "The statement being tested in a test of statistical significance; usually a statement of \'no effect\' or \'no difference\'. For example, in a test of whether light has an effect on sleep, the null hypothesis would be that light has no effect on sleep (i.e. sleep patterns are the same regardless of the lighting conditions). The null hypothesis is an expression of the expectation that the dependent variable will not change significantly as the independent variable is modified; statistical significance is measured and reported according to the degree to which this expectation is met. Contrast alternative hypothesis.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Null Hypothesis";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::OpinionPoll(string text)
{
    string model = "llama3";
    string definition = "An opinion poll, often simply referred to as a survey or a poll (although strictly a poll is an actual election), is a human research survey of public opinion from a particular sample. Opinion polls are usually designed to represent the opinions of a population by conducting a series of questions and then extrapolating generalities in ratio or within confidence intervals. A person who conducts polls is referred to as a pollster.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Opinion Poll";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::OptimalDecision(string text)
{
    string model = "llama3";
    string definition = "An optimal decision is a decision that leads to at least as good a known or expected outcome as all other available decision options. It is an important concept in decision theory. In order to compare the different decision outcomes, one commonly assigns a utility value to each of them. If there is uncertainty as to what the outcome will be but one has knowledge about the distribution of the uncertainty, then under the von Neumann-Morgenstern axioms the optimal decision maximizes the expected utility (a probability-weighted average of utility over all possible outcomes of a decision). Sometimes, the equivalent problem of minimizing the expected value of loss is considered, where loss is (-1) times utility. Another equivalent problem is minimizing expected regret. \"Utility\" is only an arbitrary term for quantifying the desirability of a particular decision outcome and not necessarily related to \"usefulness.\" For example, it may well be the optimal decision for someone to buy a sports car rather than a station wagon, if the outcome in terms of another criterion (e.g., effect on personal image) is more desirable, even given the higher cost and lack of versatility of the sports car. The problem of finding the optimal decision is a mathematical optimization problem. In practice, few people verify that their decisions are optimal, but instead use heuristics and rules of thumb to make decisions that are \"good enough\"-that is, they engage in satisficing. A more formal approach may be used when the decision is important enough to motivate the time it takes to analyze it, or when it is too complex to solve with more simple intuitive approaches, such as many available decision options and a complex decision-outcome relationship.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Optimal Decision";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::OptimalDesign(string text)
{
    string model = "llama3";
    string definition = "In the design of experiments, optimal experimental designs (or optimum designs) are a class of experimental designs that are optimal with respect to some statistical criterion. The creation of this field of statistics has been credited to Danish statistician Kirstine Smith. In the design of experiments for estimating statistical models, optimal designs allow parameters to be estimated without bias and with minimum variance. A non-optimal design requires a greater number of experimental runs to estimate the parameters with the same precision as an optimal design. In practical terms, optimal experiments can reduce the costs of experimentation. The optimality of a design depends on the statistical model and is assessed with respect to a statistical criterion, which is related to the variance-matrix of the estimator. Specifying an appropriate model and specifying a suitable criterion function both require understanding of statistical theory and practical knowledge with designing experiments.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Optimal Design";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::Outlier(string text)
{
    string model = "llama3";
    string definition = "In statistics, an outlier is a data point that differs significantly from other observations. An outlier may be due to a variability in the measurement, an indication of novel data, or it may be the result of experimental error; the latter are sometimes excluded from the data set. An outlier can be an indication of exciting possibility, but can also cause serious problems in statistical analyses. Outliers can occur by chance in any distribution, but they can indicate novel behaviour or structures in the data-set, measurement error, or that the population has a heavy-tailed distribution. In the case of measurement error, one wishes to discard them or use statistics that are robust to outliers, while in the case of heavy-tailed distributions, they indicate that the distribution has high skewness and that one should be very cautious in using tools or intuitions that assume a normal distribution. A frequent cause of outliers is a mixture of two distributions, which may be two distinct sub-populations, or may indicate \'correct trial\' versus \'measurement error\'; this is modeled by a mixture model. In most larger samplings of data, some data points will be further away from the sample mean than what is deemed reasonable. This can be due to incidental systematic error or flaws in the theory that generated an assumed family of probability distributions, or it may be that some observations are far from the center of the data. Outlier points can therefore indicate faulty data, erroneous procedures, or areas where a certain theory might not be valid. However, in large samples, a small number of outliers is to be expected (and not due to any anomalous condition). Outliers, being the most extreme observations, may include the sample maximum or sample minimum, or both, depending on whether they are extremely high or low. However, the sample maximum and minimum are not always outliers because they may not be unusually far from other observations. Naive interpretation of statistics derived from data sets that include outliers may be misleading. For example, if one is calculating the average temperature of 10 objects in a room, and nine of them are between 20 and 25 degrees Celsius, but an oven is at 175C, the median of the data will be between 20 and 25C but the mean temperature will be between 35.5 and 40C. In this case, the median better reflects the temperature of a randomly sampled object (but not the temperature in the room) than the mean; naively interpreting the mean as \"a typical sample\", equivalent to the median, is incorrect. As illustrated in this case, outliers may indicate data points that belong to a different population than the rest of the sample set. Estimators capable of coping with outliers are said to be robust: the median is a robust statistic of central tendency, while the mean is not.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Outlier";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::PValue(string text)
{
    string model = "llama3";
    string definition = "In null-hypothesis significance testing, the p-value is the probability of obtaining test results at least as extreme as the result actually observed, under the assumption that the null hypothesis is correct. A very small p-value means that such an extreme observed outcome would be very unlikely under the null hypothesis. Even though reporting p-values of statistical tests is common practice in academic publications of many quantitative fields, misinterpretation and misuse of p-values is widespread and has been a major topic in mathematics and metascience. ";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "P Value";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::PairwiseIndependence(string text)
{
    string model = "llama3";
    string definition = "In probability theory, a pairwise independent collection of random variables is a set of random variables any two of which are independent. Any collection of mutually independent random variables is pairwise independent, but some pairwise independent collections are not mutually independent. Pairwise independent random variables with finite variance are uncorrelated.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Pairwise Independence";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::Parameter(string text)
{
    string model = "llama3";
    string definition = "In statistics, as opposed to its general use in mathematics, a parameter is any quantity of a statistical population that summarizes or describes an aspect of the population, such as a mean or a standard deviation. If a population exactly follows a known and defined distribution, for example the normal distribution, then a small set of parameters can be measured which provide a comprehensive description of the population, and can be considered to define a probability distribution for the purposes of extracting samples from this population. A \"parameter\" is to a population as a \"statistic\" is to a sample; that is to say, a parameter describes the true value calculated from the full population (such as the population mean), whereas a statistic is an estimated measurement of the parameter based on a sample (such as the sample mean). Thus a \"statistical parameter\" can be more specifically referred to as a population parameter.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Parameter";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::ParticleFilter(string text)
{
    string model = "llama3";
    string definition = "Particle filters, or sequential Monte Carlo methods, are a set of Monte Carlo algorithms used to find approximate solutions for filtering problems for nonlinear state-space systems, such as signal processing and Bayesian statistical inference. The filtering problem consists of estimating the internal states in dynamical systems when partial observations are made and random perturbations are present in the sensors as well as in the dynamical system. The objective is to compute the posterior distributions of the states of a Markov process, given the noisy and partial observations. The term \"particle filters\" was first coined in 1996 by Pierre Del Moral about mean-field interacting particle methods used in fluid mechanics since the beginning of the 1960s. The term \"Sequential Monte Carlo\" was coined by Jun S. Liu and Rong Chen in 1998. Particle filtering uses a set of particles (also called samples) to represent the posterior distribution of a stochastic process given the noisy and/or partial observations. The state-space model can be nonlinear and the initial state and noise distributions can take any form required. Particle filter techniques provide a well-established methodology for generating samples from the required distribution without requiring assumptions about the state-space model or the state distributions. However, these methods do not perform well when applied to very high-dimensional systems. Particle filters update their prediction in an approximate (statistical) manner. The samples from the distribution are represented by a set of particles; each particle has a likelihood weight assigned to it that represents the probability of that particle being sampled from the probability density function. Weight disparity leading to weight collapse is a common issue encountered in these filtering algorithms. However, it can be mitigated by including a resampling step before the weights become uneven. Several adaptive resampling criteria can be used including the variance of the weights and the relative entropy concerning the uniform distribution. In the resampling step, the particles with negligible weights are replaced by new particles in the proximity of the particles with higher weights. From the statistical and probabilistic point of view, particle filters may be interpreted as mean-field particle interpretations of Feynman-Kac probability measures. These particle integration techniques were developed in molecular chemistry and computational physics by Theodore E. Harris and Herman Kahn in 1951, Marshall N. Rosenbluth and Arianna W. Rosenbluth in 1955, and more recently by Jack H. Hetherington in 1984. In computational physics, these Feynman-Kac type path particle integration methods are also used in Quantum Monte Carlo, and more specifically Diffusion Monte Carlo methods. Feynman-Kac interacting particle methods are also strongly related to mutation-selection genetic algorithms currently used in evolutionary computation to solve complex optimization problems. The particle filter methodology is used to solve Hidden Markov Model (HMM) and nonlinear filtering problems. With the notable exception of linear-Gaussian signal-observation models (Kalman filter) or wider classes of models (Benes filter), Mireille Chaleyat-Maurel and Dominique Michel proved in 1984 that the sequence of posterior distributions of the random states of a signal, given the observations (a.k.a. optimal filter), has no finite recursion. Various other numerical methods based on fixed grid approximations, Markov Chain Monte Carlo techniques, conventional linearization, extended Kalman filters, or determining the best linear system (in the expected cost-error sense) are unable to cope with large-scale systems, unstable processes, or insufficiently smooth nonlinearities. Particle filters and Feynman-Kac particle methodologies find application in signal and image processing, Bayesian inference, machine learning, risk analysis and rare event sampling, engineering and robotics, artificial intelligence, bioinformatics, phylogenetics, computational science, economics and mathematical finance, molecular chemistry, computational physics, pharmacokinetics, quantitative risk and insurance and other fields.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Particle Filter";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::Percentile(string text)
{
    string model = "llama3";
    string definition = "In statistics, a k-th percentile, also known as percentile score or centile, is a score below which a given percentage k of scores in its frequency distribution falls (\"exclusive\" definition) or a score at or below which a given percentage falls (\"inclusive\" definition). Percentiles are expressed in the same unit of measurement as the input scores, not in percent; for example, if the scores refer to human weight, the corresponding percentiles will be expressed in kilograms or pounds. In the limit of an infinite sample size, the percentile approximates the percentile function, the inverse of the cumulative distribution function. Percentiles are a type of quantiles, obtained adopting a subdivision into 100 groups. The 25th percentile is also known as the first quartile (Q1), the 50th percentile as the median or second quartile (Q2), and the 75th percentile as the third quartile (Q3). For example, the 50th percentile (median) is the score below (or at or below, depending on the definition) which 50% of the scores in the distribution are found. A related quantity is the percentile rank of a score, expressed in percent, which represents the fraction of scores in its distribution that are less than it, an exclusive definition. Percentile scores and percentile ranks are often used in the reporting of test scores from norm-referenced tests, but, as just noted, they are not the same. For percentile ranks, a score is given and a percentage is computed. Percentile ranks are exclusive: if the percentile rank for a specified score is 90%, then 90% of the scores were lower. In contrast, for percentiles a percentage is given and a corresponding score is determined, which can be either exclusive or inclusive. The score for a specified percentage (e.g., 90th) indicates a score below which (exclusive definition) or at or below which (inclusive definition) other scores in the distribution fall.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Percentile";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::PieChart(string text)
{
    string model = "llama3";
    string definition = "A pie chart (or a circle chart) is a circular statistical graphic which is divided into slices to illustrate numerical proportion. In a pie chart, the arc length of each slice (and consequently its central angle and area) is proportional to the quantity it represents. While it is named for its resemblance to a pie which has been sliced, there are variations on the way it can be presented. The earliest known pie chart is generally credited to William Playfair\'s Statistical Breviary of 1801. Pie charts are very widely used in the business world and the mass media. However, they have been criticized, and many experts recommend avoiding them, as research has shown it is difficult to compare different sections of a given pie chart, or to compare data across different pie charts. Pie charts can be replaced in most cases by other plots such as the bar chart, box plot, dot plot, etc.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Pie Chart";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::PointEstimation(string text)
{
    string model = "llama3";
    string definition = "In statistics, point estimation involves the use of sample data to calculate a single value (known as a point estimate since it identifies a point in some parameter space) which is to serve as a \"best guess\" or \"best estimate\" of an unknown population parameter (for example, the population mean). More formally, it is the application of a point estimator to the data to obtain a point estimate. Point estimation can be contrasted with interval estimation: such interval estimates are typically either confidence intervals, in the case of frequentist inference, or credible intervals, in the case of Bayesian inference. More generally, a point estimator can be contrasted with a set estimator. Examples are given by confidence sets or credible sets. A point estimator can also be contrasted with a distribution estimator. Examples are given by confidence distributions, randomized estimators, and Bayesian posteriors.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Point Estimation";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::Power(string text)
{
    string model = "llama3";
    string definition = "In frequentist statistics, power is a measure of the ability of an experimental design and hypothesis testing setup to detect a particular effect if it is truly present. In typical use, it is a function of the test used (including the desired level of statistical significance), the assumed distribution of the test (for example, the degree of variability, and sample size), and the effect size of interest. High statistical power is related to low variability, large sample sizes, large effects being looked for, and less stringent requirements for statistical significance. More formally, in the case of a simple hypothesis test with two hypotheses, the power of the test is the probability that the test correctly rejects the null hypothesis (H0) when the alternative hypothesis (H1) is true. It is commonly denoted by 1 - B, where B is the probability of making a type II error (a false negative) conditional on there being a true effect or association.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Power";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::PriorProbability(string text)
{
    string model = "llama3";
    string definition = "A prior probability distribution of an uncertain quantity, often simply called the prior, is its assumed probability distribution before some evidence is taken into account. For example, the prior could be the probability distribution representing the relative proportions of voters who will vote for a particular politician in a future election. The unknown quantity may be a parameter of the model or a latent variable rather than an observable variable. In Bayesian statistics, Bayes\' rule prescribes how to update the prior with new information to obtain the posterior probability distribution, which is the conditional distribution of the uncertain quantity given new data. Historically, the choice of priors was often constrained to a conjugate family of a given likelihood function, so that it would result in a tractable posterior of the same family. The widespread availability of Markov chain Monte Carlo methods, however, has made this less of a concern. There are many ways to construct a prior distribution. In some cases, a prior may be determined from past information, such as previous experiments. A prior can also be elicited from the purely subjective assessment of an experienced expert. When no information is available, an uninformative prior may be adopted as justified by the principle of indifference. In modern applications, priors are also often chosen for their mechanical properties, such as regularization and feature selection. The prior distributions of model parameters will often depend on parameters of their own. Uncertainty about these hyperparameters can, in turn, be expressed as hyperprior probability distributions. For example, if one uses a beta distribution to model the distribution of the parameter p of a Bernoulli distribution, then: p is a parameter of the underlying system (Bernoulli distribution), and a and B are parameters of the prior distribution (beta distribution); hence hyperparameters. In principle, priors can be decomposed into many conditional levels of distributions, so-called hierarchical priors.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Prior Probability";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::PopulationParameter(string text)
{
    string model = "llama3";
    string definition = "In statistics, as opposed to its general use in mathematics, a parameter is any quantity of a statistical population that summarizes or describes an aspect of the population, such as a mean or a standard deviation. If a population exactly follows a known and defined distribution, for example the normal distribution, then a small set of parameters can be measured which provide a comprehensive description of the population, and can be considered to define a probability distribution for the purposes of extracting samples from this population. A \"parameter\" is to a population as a \"statistic\" is to a sample; that is to say, a parameter describes the true value calculated from the full population (such as the population mean), whereas a statistic is an estimated measurement of the parameter based on a sample (such as the sample mean). Thus a \"statistical parameter\" can be more specifically referred to as a population parameter.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Population Parameter";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::PosteriorProbability(string text)
{
    string model = "llama3";
    string definition = "The posterior probability is a type of conditional probability that results from updating the prior probability with information summarized by the likelihood via an application of Bayes\' rule. From an epistemological perspective, the posterior probability contains everything there is to know about an uncertain proposition (such as a scientific hypothesis, or parameter values), given prior knowledge and a mathematical model describing the observations available at a particular time. After the arrival of new information, the current posterior probability may serve as the prior in another round of Bayesian updating. In the context of Bayesian statistics, the posterior probability distribution usually describes the epistemic uncertainty about statistical parameters conditional on a collection of observed data. From a given posterior distribution, various point and interval estimates can be derived, such as the maximum a posteriori (MAP) or the highest posterior density interval (HPDI). But while conceptually simple, the posterior distribution is generally not tractable and therefore needs to be either analytically or numerically approximated.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Posterior Probability";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::PrincipalComponentAnalysis(string text)
{
    string model = "llama3";
    string definition = "Principal component analysis (PCA) is a linear dimensionality reduction technique with applications in exploratory data analysis, visualization and data preprocessing. The data is linearly transformed onto a new coordinate system such that the directions (principal components) capturing the largest variation in the data can be easily identified. The principal components of a collection of points in a real coordinate space are a sequence of p unit vectors, where the i-th vector is the direction of a line that best fits the data while being orthogonal to the first i - 1 vectors. Here, a best-fitting line is defined as one that minimizes the average squared perpendicular distance from the points to the line. These directions (i.e., principal components) constitute an orthonormal basis in which different individual dimensions of the data are linearly uncorrelated. Many studies use the first two principal components in order to plot the data in two dimensions and to visually identify clusters of closely related data points. Principal component analysis has applications in many fields such as population genetics, microbiome studies, and atmospheric science.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Principal Component Analysis";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::Probability(string text)
{
    string model = "llama3";
    string definition = "robability is the branch of mathematics and statistics concerning events and numerical descriptions of how likely they are to occur. The probability of an event is a number between 0 and 1; the larger the probability, the more likely an event is to occur. A simple example is the tossing of a fair (unbiased) coin. Since the coin is fair, the two outcomes (\"heads\" and \"tails\") are both equally probable; the probability of \"heads\" equals the probability of \"tails\"; and since no other outcomes are possible, the probability of either \"heads\" or \"tails\" is 1/2 (which could also be written as 0.5 or 50%). These concepts have been given an axiomatic mathematical formalization in probability theory, which is used widely in areas of study such as statistics, mathematics, science, finance, gambling, artificial intelligence, machine learning, computer science, game theory, and philosophy to, for example, draw inferences about the expected frequency of events. Probability theory is also used to describe the underlying mechanics and regularities of complex systems.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Probability";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::ProbabilityDensity(string text)
{
    string model = "llama3";
    string definition = "In probability theory, a probability density function (PDF), density function, or density of an absolutely continuous random variable, is a function whose value at any given sample (or point) in the sample space (the set of possible values taken by the random variable) can be interpreted as providing a relative likelihood that the value of the random variable would be equal to that sample. Probability density is the probability per unit length, in other words, while the absolute likelihood for a continuous random variable to take on any particular value is 0 (since there is an infinite set of possible values to begin with), the value of the PDF at two different samples can be used to infer, in any particular draw of the random variable, how much more likely it is that the random variable would be close to one sample compared to the other sample. More precisely, the PDF is used to specify the probability of the random variable falling within a particular range of values, as opposed to taking on any one value. This probability is given by the integral of this variable\'s PDF over that range-that is, it is given by the area under the density function but above the horizontal axis and between the lowest and greatest values of the range. The probability density function is nonnegative everywhere, and the area under the entire curve is equal to 1. The terms probability distribution function and probability function have also sometimes been used to denote the probability density function. However, this use is not standard among probabilists and statisticians. In other sources, \"probability distribution function\" may be used when the probability distribution is defined as a function over general sets of values or it may refer to the cumulative distribution function, or it may be a probability mass function (PMF) rather than the density. \"Density function\" itself is also used for the probability mass function, leading to further confusion. In general though, the PMF is used in the context of discrete random variables (random variables that take values on a countable set), while the PDF is used in the context of continuous random variables.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Probability Density";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::ProbabilityDistribution(string text)
{
    string model = "llama3";
    string definition = "In probability theory and statistics, a probability distribution is the mathematical function that gives the probabilities of occurrence of possible outcomes for an experiment. It is a mathematical description of a random phenomenon in terms of its sample space and the probabilities of events (subsets of the sample space). For instance, if X is used to denote the outcome of a coin toss (\"the experiment\"), then the probability distribution of X would take the value 0.5 (1 in 2 or 1/2) for X = heads, and 0.5 for X = tails (assuming that the coin is fair). More commonly, probability distributions are used to compare the relative occurrence of many different random values. Probability distributions can be defined in different ways and for discrete or for continuous variables. Distributions with special properties or for especially important applications are given specific names.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Probability Distribution";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::ProbabilityMeasure(string text)
{
    string model = "llama3";
    string definition = "In mathematics, a probability measure is a real-valued function defined on a set of events in a σ-algebra that satisfies measure properties such as countable additivity. The difference between a probability measure and the more general notion of measure (which includes concepts like area or volume) is that a probability measure must assign value 1 to the entire space.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Probability Measure";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::ProbabilityPlot(string text)
{
    string model = "llama3";
    string definition = "Probability plot, a graphical technique for comparing two data sets, may refer to: P-P plot, \"Probability-Probability\" or \"Percent-Percent\" plot, Q-Q plot, \"Quantile-Quantile\" plot, Normal probability plot, a Q-Q plot against the standard normal distribution.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Probability Plot";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::ProbabilitySpace(string text)
{
    string model = "llama3";
    string definition = "In probability theory, a probability space or a probability triple (P), is a mathematical construct that provides a formal model of a random process or \"experiment\". For example, one can define a probability space which models the throwing of a die. A probability space consists of three elements: 1. A sample space, which is the set of all possible outcomes. 2. An event space, which is a set of events, F, an event being a set of outcomes in the sample space. 3. A probability function, P, which assigns, to each event in the event space, a probability, which is a number between 0 and 1 (inclusive). In order to provide a model of probability, these elements must satisfy probability axioms.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Probability Space";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::Quantile(string text)
{
    string model = "llama3";
    string definition = "A particular point or value at which the range of a probability distribution is divided into continuous intervals with equal probabilities, or at which the observations in a sample are divided in the same way. The number of groups into which the range is divided is always one greater than the number of quantiles dividing them. Commonly used quantiles include quartiles (which divide a range into four groups), deciles (ten groups), and percentiles (one hundred groups). The groups themselves are termed halves, thirds, quarters, etc., though the terms for the quantiles are sometimes used to refer to the groups, rather than to the cut points.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Quantile";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::Quartile(string text)
{
    string model = "llama3";
    string definition = "In statistics, quartiles are a type of quantiles which divide the number of data points into four parts, or quarters, of more-or-less equal size. The data must be ordered from smallest to largest to compute quartiles; as such, quartiles are a form of order statistic. The three quartiles, resulting in four data divisions, are as follows: The first quartile (Q1) is defined as the 25th percentile where lowest 25% data is below this point. It is also known as the lower quartile. The second quartile (Q2) is the median of a data set; thus 50% of the data lies below this point. The third quartile (Q3) is the 75th percentile where lowest 75% data is below this point. It is known as the upper quartile, as 75% of the data lies below this point. Along with the minimum and maximum of the data (which are also quartiles), the three quartiles described above provide a five-number summary of the data. This summary is important in statistics because it provides information about both the center and the spread of the data. Knowing the lower and upper quartile provides information on how big the spread is and if the dataset is skewed toward one side. Since quartiles divide the number of data points evenly, the range is generally not the same between adjacent quartiles (i.e. usually (Q3 - Q2) ? (Q2 - Q1)). Interquartile range (IQR) is defined as the difference between the 75th and 25th percentiles or Q3 - Q1. While the maximum and minimum also show the spread of the data, the upper and lower quartiles can provide more detailed information on the location of specific data points, the presence of outliers in the data, and the difference in spread between the middle 50% of the data and the outer data points.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Quartile";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::QuotaSampling(string text)
{
    string model = "llama3";
    string definition = "Quota sampling is a method for selecting survey participants that is a non-probabilistic version of stratified sampling.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Quota Sampling";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::RandomVariable(string text)
{
    string model = "llama3";
    string definition = "A random variable (also called random quantity, aleatory variable, or stochastic variable) is a mathematical formalization of a quantity or object which depends on random events. The term \'random variable\' in its mathematical definition refers to neither randomness nor variability but instead is a mathematical function in which the domain is the set of possible outcomes in a sample space (e.g. the set {H, T} which are the possible upper sides of a flipped coin heads H or tails T as the result from tossing a coin); and the range is a measurable space (e.g. corresponding to the domain above, the range might be the set {-2,2} if say heads H mapped to -1 and T mapped to 1). Typically, the range of a random variable is a subset of the real numbers. Informally, randomness typically represents some fundamental element of chance, such as in the roll of a die; it may also represent uncertainty, such as measurement error. However, the interpretation of probability is philosophically complicated, and even in specific cases is not always straightforward. The purely mathematical analysis of random variables is independent of such interpretational difficulties, and can be based upon a rigorous axiomatic setup. In the formal mathematical language of measure theory, a random variable is defined as a measurable function from a probability measure space (called the sample space) to a measurable space. This allows consideration of the pushforward measure, which is called the distribution of the random variable; the distribution is thus a probability measure on the set of all possible values of the random variable. It is possible for two random variables to have identical distributions but to differ in significant ways; for instance, they may be independent. It is common to consider the special cases of discrete random variables and absolutely continuous random variables, corresponding to whether a random variable is valued in a countable subset or in an interval of real numbers. There are other important possibilities, especially in the theory of stochastic processes, wherein it is natural to consider random sequences or random functions. Sometimes a random variable is taken to be automatically valued in the real numbers, with more general random quantities instead being called random elements. According to George Mackey, Pafnuty Chebyshev was the first person \"to think systematically in terms of random variables\".";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Random Variable";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::RandomizedBlockDesign(string text)
{
    string model = "llama3";
    string definition = "In the statistical theory of the design of experiments, blocking is the arranging of experimental units that are similar to one another in groups (blocks) based on one or more variables. These variables are chosen carefully to minimize the impact of their variability on the observed outcomes. There are different ways that blocking can be implemented, resulting in different confounding effects. However, the different methods share the same purpose: to control variability introduced by specific factors that could influence the outcome of an experiment. The roots of blocking originated from the statistician, Ronald Fisher, following his development of ANOVA.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Randomized Block Design";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::Range(string text)
{
    string model = "llama3";
    string definition = "In descriptive statistics, the range of a set of data is size of the narrowest interval which contains all the data. It is calculated as the difference between the largest and smallest values (also known as the sample maximum and minimum). It is expressed in the same units as the data. The range provides an indication of statistical dispersion. Since it only depends on two of the observations, it is most useful in representing the dispersion of small data sets.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Range";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::RecursiveBayesianEstimation(string text)
{
    string model = "llama3";
    string definition = "In probability theory, statistics, and machine learning, recursive Bayesian estimation, also known as a Bayes filter, is a general probabilistic approach for estimating an unknown probability density function (PDF) recursively over time using incoming measurements and a mathematical process model. The process relies heavily upon mathematical concepts and models that are theorized within a study of prior and posterior probabilities known as Bayesian statistics.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Recursive Bayesian Estimation";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::RegressionAnalysis(string text)
{
    string model = "llama3";
    string definition = "In statistical modeling, regression analysis is a set of statistical processes for estimating the relationships between a dependent variable (often called the outcome or response variable, or a label in machine learning parlance) and one or more error-free independent variables (often called regressors, predictors, covariates, explanatory variables or features). The most common form of regression analysis is linear regression, in which one finds the line (or a more complex linear combination) that most closely fits the data according to a specific mathematical criterion. For example, the method of ordinary least squares computes the unique line (or hyperplane) that minimizes the sum of squared differences between the true data and that line (or hyperplane). For specific mathematical reasons (see linear regression), this allows the researcher to estimate the conditional expectation (or population average value) of the dependent variable when the independent variables take on a given set of values. Less common forms of regression use slightly different procedures to estimate alternative location parameters (e.g., quantile regression or Necessary Condition Analysis) or estimate the conditional expectation across a broader collection of non-linear models (e.g., nonparametric regression). Regression analysis is primarily used for two conceptually distinct purposes. First, regression analysis is widely used for prediction and forecasting, where its use has substantial overlap with the field of machine learning. Second, in some situations regression analysis can be used to infer causal relationships between the independent and dependent variables. Importantly, regressions by themselves only reveal relationships between a dependent variable and a collection of independent variables in a fixed dataset. To use regressions for prediction or to infer causal relationships, respectively, a researcher must carefully justify why existing relationships have predictive power for a new context or why a relationship between two variables has a causal interpretation. The latter is especially important when researchers hope to estimate causal relationships using observational data.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Regression Analysis";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::RepeatedMeasuresDesign(string text)
{
    string model = "llama3";
    string definition = "Repeated measures design is a research design that involves multiple measures of the same variable taken on the same or matched subjects either under different conditions or over two or more time periods. For instance, repeated measurements are collected in a longitudinal study in which change over time is assessed.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Repeated Measures Design";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::ResponseVariable(string text)
{
    string model = "llama3";
    string definition = "Any variable whose value is or is expected to be affected by an experimental treatment, or by changes in one or more other variables; e.g. cholesterol levels after following a particular diet for six months. Response variables are those that change or respond to some phenomenon under study. The term is often used interchangeably with dependent variable.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Response Variable";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::RestrictedRandomization(string text)
{
    string model = "llama3";
    string definition = "In statistics, restricted randomization occurs in the design of experiments and in particular in the context of randomized experiments and randomized controlled trials. Restricted randomization allows intuitively poor allocations of treatments to experimental units to be avoided, while retaining the theoretical benefits of randomization. For example, in a clinical trial of a new proposed treatment of obesity compared to a control, an experimenter would want to avoid outcomes of the randomization in which the new treatment was allocated only to the heaviest patients.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Restricted Randomization";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::RobustStatistics(string text)
{
    string model = "llama3";
    string definition = "Robust statistics are statistics that maintain their properties even if the underlying distributional assumptions are incorrect. Robust statistical methods have been developed for many common problems, such as estimating location, scale, and regression parameters. One motivation is to produce statistical methods that are not unduly affected by outliers. Another motivation is to provide methods with good performance when there are small departures from a parametric distribution. For example, robust methods work well for mixtures of two normal distributions with different standard deviations; under this model, non-robust methods like a t-test work poorly.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Robust Statistics";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::RoundOffError(string text)
{
    string model = "llama3";
    string definition = "In computing, a roundoff error, also called rounding error, is the difference between the result produced by a given algorithm using exact arithmetic and the result produced by the same algorithm using finite-precision, rounded arithmetic. Rounding errors are due to inexactness in the representation of real numbers and the arithmetic operations done with them. This is a form of quantization error. When using approximation equations or algorithms, especially when using finitely many digits to represent real numbers (which in theory have infinitely many digits), one of the goals of numerical analysis is to estimate computation errors. Computation errors, also called numerical errors, include both truncation errors and roundoff errors. When a sequence of calculations with an input involving any roundoff error are made, errors may accumulate, sometimes dominating the calculation. In ill-conditioned problems, significant error may accumulate. In short, there are two major facets of roundoff errors involved in numerical calculations: 1. The ability of computers to represent both magnitude and precision of numbers is inherently limited. 2. Certain numerical manipulations are highly sensitive to roundoff errors. This can result from both mathematical considerations as well as from the way in which computers perform arithmetic operations.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Round Off Error";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::Sample(string text)
{
    string model = "llama3";
    string definition = "In statistics, quality assurance, and survey methodology, sampling is the selection of a subset or a statistical sample (termed sample for short) of individuals from within a statistical population to estimate characteristics of the whole population. The subset is meant to reflect the whole population and statisticians attempt to collect samples that are representative of the population. Sampling has lower costs and faster data collection compared to recording data from the entire population, and thus, it can provide insights in cases where it is infeasible to measure an entire population. Each observation measures one or more properties (such as weight, location, colour or mass) of independent objects or individuals. In survey sampling, weights can be applied to the data to adjust for the sample design, particularly in stratified sampling. Results from probability theory and statistical theory are employed to guide the practice. In business and medical research, sampling is widely used for gathering information about a population. Acceptance sampling is used to determine if a production lot of material meets the governing specifications.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Sample";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::SampleCovariance(string text)
{
    string model = "llama3";
    string definition = "The sample mean (sample average) or empirical mean (empirical average), and the sample covariance or empirical covariance are statistics computed from a sample of data on one or more random variables. The sample mean is the average value (or mean value) of a sample of numbers taken from a larger population of numbers, where \"population\" indicates not number of people but the entirety of relevant data, whether collected or not. A sample of 40 companies\' sales from the Fortune 500 might be used for convenience instead of looking at the population, all 500 companies\' sales. The sample mean is used as an estimator for the population mean, the average value in the entire population, where the estimate is more likely to be close to the population mean if the sample is large and representative. The reliability of the sample mean is estimated using the standard error, which in turn is calculated using the variance of the sample. If the sample is random, the standard error falls with the size of the sample and the sample mean\'s distribution approaches the normal distribution as the sample size increases. The term \"sample mean\" can also be used to refer to a vector of average values when the statistician is looking at the values of several variables in the sample, e.g. the sales, profits, and employees of a sample of Fortune 500 companies. In this case, there is not just a sample variance for each variable but a sample variance-covariance matrix (or simply covariance matrix) showing also the relationship between each pair of variables. This would be a 3x3 matrix when 3 variables are being considered. The sample covariance is useful in judging the reliability of the sample means as estimators and is also useful as an estimate of the population covariance matrix. Due to their ease of calculation and other desirable characteristics, the sample mean and sample covariance are widely used in statistics to represent the location and dispersion of the distribution of values in the sample, and to estimate the values for the population.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Sample Covariance";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::SampleMean(string text)
{
    string model = "llama3";
    string definition = "The sample mean (sample average) or empirical mean (empirical average), and the sample covariance or empirical covariance are statistics computed from a sample of data on one or more random variables. The sample mean is the average value (or mean value) of a sample of numbers taken from a larger population of numbers, where \"population\" indicates not number of people but the entirety of relevant data, whether collected or not. A sample of 40 companies\' sales from the Fortune 500 might be used for convenience instead of looking at the population, all 500 companies\' sales. The sample mean is used as an estimator for the population mean, the average value in the entire population, where the estimate is more likely to be close to the population mean if the sample is large and representative. The reliability of the sample mean is estimated using the standard error, which in turn is calculated using the variance of the sample. If the sample is random, the standard error falls with the size of the sample and the sample mean\'s distribution approaches the normal distribution as the sample size increases. The term \"sample mean\" can also be used to refer to a vector of average values when the statistician is looking at the values of several variables in the sample, e.g. the sales, profits, and employees of a sample of Fortune 500 companies. In this case, there is not just a sample variance for each variable but a sample variance-covariance matrix (or simply covariance matrix) showing also the relationship between each pair of variables. This would be a 3x3 matrix when 3 variables are being considered. The sample covariance is useful in judging the reliability of the sample means as estimators and is also useful as an estimate of the population covariance matrix. Due to their ease of calculation and other desirable characteristics, the sample mean and sample covariance are widely used in statistics to represent the location and dispersion of the distribution of values in the sample, and to estimate the values for the population.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Sample Mean";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::SampleSpace(string text)
{
    string model = "llama3";
    string definition = "In probability theory, the sample space (also called sample description space, possibility space, or outcome space) of an experiment or random trial is the set of all possible outcomes or results of that experiment. A sample space is usually denoted using set notation, and the possible ordered outcomes, or sample points, are listed as elements in the set.  The elements of a sample space may be numbers, words, letters, or symbols. They can also be finite, countably infinite, or uncountably infinite. A subset of the sample space is an event, denoted by E. If the outcome of an experiment is included in E, then event E has occured.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Sample Space";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::SamplingBias(string text)
{
    string model = "llama3";
    string definition = "In statistics, sampling bias is a bias in which a sample is collected in such a way that some members of the intended population have a lower or higher sampling probability than others. It results in a biased sample of a population (or non-human factors) in which all individuals, or instances, were not equally likely to have been selected. If this is not accounted for, results can be erroneously attributed to the phenomenon under study rather than to the method of sampling. Medical sources sometimes refer to sampling bias as ascertainment bias. Ascertainment bias has basically the same definition, but is still sometimes classified as a separate type of bias.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Sampling Bias";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::SamplingDistribution(string text)
{
    string model = "llama3";
    string definition = "In statistics, a sampling distribution or finite-sample distribution is the probability distribution of a given random-sample-based statistic. If an arbitrarily large number of samples, each involving multiple observations (data points), were separately used in order to compute one value of a statistic (such as, for example, the sample mean or sample variance) for each sample, then the sampling distribution is the probability distribution of the values that the statistic takes on. In many contexts, only one sample is observed, but the sampling distribution can be found theoretically. Sampling distributions are important in statistics because they provide a major simplification en route to statistical inference. More specifically, they allow analytical considerations to be based on the probability distribution of a statistic, rather than on the joint probability distribution of all the individual sample values.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Sampling Distribution";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::SamplingError(string text)
{
    string model = "llama3";
    string definition = "In statistics, sampling errors are incurred when the statistical characteristics of a population are estimated from a subset, or sample, of that population. Since the sample does not include all members of the population, statistics of the sample (often known as estimators), such as means and quartiles, generally differ from the statistics of the entire population (known as parameters). The difference between the sample statistic and population parameter is considered the sampling error. For example, if one measures the height of a thousand individuals from a population of one million, the average height of the thousand is typically not the same as the average height of all one million people in the country. Since sampling is almost always done to estimate population parameters that are unknown, by definition exact measurement of the sampling errors will not be possible; however they can often be estimated, either by general methods such as bootstrapping, or by specific methods incorporating some assumptions (or guesses) regarding the true population distribution and parameters thereof.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Sampling Error";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::ScatterPlot(string text)
{
    string model = "llama3";
    string definition = "A scatter plot, also called a scatterplot, scatter graph, scatter chart, scattergram, or scatter diagram, is a type of plot or mathematical diagram using Cartesian coordinates to display values for typically two variables for a set of data. If the points are coded (color/shape/size), one additional variable can be displayed. The data are displayed as a collection of points, each having the value of one variable determining the position on the horizontal axis and the value of the other variable determining the position on the vertical axis.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Scatter Plot";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::ScaleParameter(string text)
{
    string model = "llama3";
    string definition = "In probability theory and statistics, a scale parameter is a special kind of numerical parameter of a parametric family of probability distributions. The larger the scale parameter, the more spread out the distribution.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Scale Parameter";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::SimpleRandomSample(string text)
{
    string model = "llama3";
    string definition = "In statistics, a simple random sample (or SRS) is a subset of individuals (a sample) chosen from a larger set (a population) in which a subset of individuals are chosen randomly, all with the same probability. It is a process of selecting a sample in a random way. In SRS, each subset of k individuals has the same probability of being chosen for the sample as any other subset of k individuals. Simple random sampling is a basic type of sampling and can be a component of other more complex sampling methods.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Simple Random Sample";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::SimpsonsParadox(string text)
{
    string model = "llama3";
    string definition = "Simpson\'s paradox is a phenomenon in probability and statistics in which a trend appears in several groups of data but disappears or reverses when the groups are combined. This result is often encountered in social-science and medical-science statistics, and is particularly problematic when frequency data are unduly given causal interpretations. The paradox can be resolved when confounding variables and causal relations are appropriately addressed in the statistical modeling (e.g., through cluster analysis). Simpson\'s paradox has been used to illustrate the kind of misleading results that the misuse of statistics can generate.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Simpson's Paradox";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::Skewness(string text)
{
    string model = "llama3";
    string definition = "In probability theory and statistics, skewness is a measure of the asymmetry of the probability distribution of a real-valued random variable about its mean. The skewness value can be positive, zero, negative, or undefined. For a unimodal distribution (a distribution with a single peak), negative skew commonly indicates that the tail is on the left side of the distribution, and positive skew indicates that the tail is on the right. In cases where one tail is long but the other tail is fat, skewness does not obey a simple rule. For example, a zero value in skewness means that the tails on both sides of the mean balance out overall; this is the case for a symmetric distribution but can also be true for an asymmetric distribution where one tail is long and thin, and the other is short but fat. Thus, the judgement on the symmetry of a given distribution by using only its skewness is risky; the distribution shape must be taken into account.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Skewness";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::SpaghettiPlot(string text)
{
    string model = "llama3";
    string definition = "A spaghetti plot (also known as a spaghetti chart, spaghetti diagram, or spaghetti model) is a method of viewing data to visualize possible flows through systems. Flows depicted in this manner appear like noodles, hence the coining of this term. This method of statistics was first used to track routing through factories. Visualizing flow in this manner can reduce inefficiency within the flow of a system. In regards to animal populations and weather buoys drifting through the ocean, they are drawn to study distribution and migration patterns. Within meteorology, these diagrams can help determine confidence in a specific weather forecast, as well as positions and intensities of high and low pressure systems. They are composed of deterministic forecasts from atmospheric models or their various ensemble members. Within medicine, they can illustrate the effects of drugs on patients during drug trials.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Spaghetti Plot";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::SpectrumBias(string text)
{
    string model = "llama3";
    string definition = "In biostatistics, spectrum bias refers to the phenomenon that the performance of a diagnostic test may vary in different clinical settings because each setting has a different mix of patients. Because the performance may be dependent on the mix of patients, performance at one clinic may not be predictive of performance at another clinic. These differences are interpreted as a kind of bias. Mathematically, the spectrum bias is a sampling bias and not a traditional statistical bias; this has led some authors to refer to the phenomenon as spectrum effects, whilst others maintain it is a bias if the true performance of the test differs from that which is \'expected\'. Usually the performance of a diagnostic test is measured in terms of its sensitivity and specificity and it is changes in these that are considered when referring to spectrum bias. However, other performance measures such as the likelihood ratios may also be affected by spectrum bias. Generally spectrum bias is considered to have three causes. The first is due to a change in the case-mix of those patients with the target disorder (disease) and this affects the sensitivity. The second is due to a change in the case-mix of those without the target disorder (disease-free) and this affects the specificity. The third is due to a change in the prevalence, and this affects both the sensitivity and specificity. This final cause is not widely appreciated, but there is mounting empirical evidence as well as theoretical arguments which suggest that it does indeed affect a test\'s performance. Examples where the sensitivity and specificity change between different sub-groups of patients may be found with the carcinoembryonic antigen test and urinary dipstick tests. Diagnostic test performances reported by some studies may be artificially overestimated if it is a case-control design where a healthy population (\'fittest of the fit\') is compared with a population with advanced disease (\'sickest of the sick\'); that is two extreme populations are compared, rather than typical healthy and diseased populations. If properly analyzed, recognition of heterogeneity of subgroups can lead to insights about the test\'s performance in varying populations.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Spectrum Bias";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::StandardDeviation(string text)
{
    string model = "llama3";
    string definition = "In statistics, the standard deviation is a measure of the amount of variation of the values of a variable about its mean. A low standard deviation indicates that the values tend to be close to the mean (also called the expected value) of the set, while a high standard deviation indicates that the values are spread out over a wider range. The standard deviation is commonly used in the determination of what constitutes an outlier and what does not. Standard deviation may be abbreviated SD or Std Dev, and is most commonly represented in mathematical texts and equations by the lowercase Greek letter σ (sigma), for the population standard deviation, or the Latin letter s, for the sample standard deviation. The standard deviation of a random variable, sample, statistical population, data set, or probability distribution is the square root of its variance. (For a finite population, variance is the average of the squared deviations from the mean.) A useful property of the standard deviation is that, unlike the variance, it is expressed in the same unit as the data. Standard deviation can also be used to calculate standard error for a finite sample, and to determine statistical significance. When only a sample of data from a population is available, the term standard deviation of the sample or sample standard deviation can refer to either the above-mentioned quantity as applied to those data, or to a modified quantity that is an unbiased estimate of the population standard deviation (the standard deviation of the entire population).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Standard Deviation";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::StandardError(string text)
{
    string model = "llama3";
    string definition = "The standard error (SE) of a statistic (usually an estimate of a parameter) is the standard deviation of its sampling distribution or an estimate of that standard deviation. If the statistic is the sample mean, it is called the standard error of the mean (SEM). The standard error is a key ingredient in producing confidence intervals. The sampling distribution of a mean is generated by repeated sampling from the same population and recording of the sample means obtained. This forms a distribution of different means, and this distribution has its own mean and variance. Mathematically, the variance of the sampling mean distribution obtained is equal to the variance of the population divided by the sample size. This is because as the sample size increases, sample means cluster more closely around the population mean. Therefore, the relationship between the standard error of the mean and the standard deviation is such that, for a given sample size, the standard error of the mean equals the standard deviation divided by the square root of the sample size. In other words, the standard error of the mean is a measure of the dispersion of sample means around the population mean. In regression analysis, the term \"standard error\" refers either to the square root of the reduced chi-squared statistic or the standard error for a particular regression coefficient (as used in, say, confidence intervals).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Standard Error";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::StandardScore(string text)
{
    string model = "llama3";
    string definition = "In statistics, the standard score is the number of standard deviations by which the value of a raw score (i.e., an observed value or data point) is above or below the mean value of what is being observed or measured. Raw scores above the mean have positive standard scores, while those below the mean have negative standard scores. It is calculated by subtracting the population mean from an individual raw score and then dividing the difference by the population standard deviation. This process of converting a raw score into a standard score is called standardizing or normalizing (however, \"normalizing\" can refer to many types of ratios; see Normalization for more). Standard scores are most commonly called z-scores; the two terms may be used interchangeably, as they are in this article. Other equivalent terms in use include z-value, z-statistic, normal score, standardized variable and pull in high energy physics. Computing a z-score requires knowledge of the mean and standard deviation of the complete population to which a data point belongs; if one only has a sample of observations from the population, then the analogous computation using the sample mean and sample standard deviation yields the t-statistic.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Standard Score";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::Statistic(string text)
{
    string model = "llama3";
    string definition = "A statistic (singular) or sample statistic is any quantity computed from values in a sample which is considered for a statistical purpose. Statistical purposes include estimating a population parameter, describing a sample, or evaluating a hypothesis. The average (or mean) of sample values is a statistic. The term statistic is used both for the function and for the value of the function on a given sample. When a statistic is being used for a specific purpose, it may be referred to by a name indicating its purpose. When a statistic is used for estimating a population parameter, the statistic is called an estimator. A population parameter is any characteristic of a population under study, but when it is not feasible to directly measure the value of a population parameter, statistical methods are used to infer the likely value of the parameter on the basis of a statistic computed from a sample taken from the population. For example, the sample mean is an unbiased estimator of the population mean. This means that the expected value of the sample mean equals the true population mean. A descriptive statistic is used to summarize the sample data. A test statistic is used in statistical hypothesis testing. A single statistic can be used for multiple purposes - for example, the sample mean can be used to estimate the population mean, to describe a sample data set, or to test a hypothesis.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Statistic";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::StatisticalDispersion(string text)
{
    string model = "llama3";
    string definition = "In statistics, dispersion (also called variability, scatter, or spread) is the extent to which a distribution is stretched or squeezed. Common examples of measures of statistical dispersion are the variance, standard deviation, and interquartile range. For instance, when the variance of data in a set is large, the data is widely scattered. On the other hand, when the variance is small, the data in the set is clustered. Dispersion is contrasted with location or central tendency, and together they are the most used properties of distributions.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Statistical Dispersion";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::StatisticalGraphics(string text)
{
    string model = "llama3";
    string definition = "Statistical graphics, also known as statistical graphical techniques, are graphics used in the field of statistics for data visualization.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Statistical Graphics";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::StatisticalHypothesisTest(string text)
{
    string model = "llama3";
    string definition = "A statistical hypothesis test is a method of statistical inference used to decide whether the data sufficiently supports a particular hypothesis. A statistical hypothesis test typically involves a calculation of a test statistic. Then a decision is made, either by comparing the test statistic to a critical value or equivalently by evaluating a p-value computed from the test statistic. Roughly 100 specialized statistical tests have been defined.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Statistical Hypothesis Test";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::StatisticalIndependence(string text)
{
    string model = "llama3";
    string definition = "Independence is a fundamental notion in probability theory, as in statistics and the theory of stochastic processes. Two events are independent, statistically independent, or stochastically independent if, informally speaking, the occurrence of one does not affect the probability of occurrence of the other or, equivalently, does not affect the odds. Similarly, two random variables are independent if the realization of one does not affect the probability distribution of the other. When dealing with collections of more than two events, two notions of independence need to be distinguished. The events are called pairwise independent if any two events in the collection are independent of each other, while mutual independence (or collective independence) of events means, informally speaking, that each event is independent of any combination of other events in the collection. A similar notion exists for collections of random variables. Mutual independence implies pairwise independence, but not the other way around. In the standard literature of probability theory, statistics, and stochastic processes, independence without further qualification usually refers to mutual independence.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Statistical Independence";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::StatisticalInference(string text)
{
    string model = "llama3";
    string definition = "Statistical inference is the process of using data analysis to infer properties of an underlying probability distribution. Inferential statistical analysis infers properties of a population, for example by testing hypotheses and deriving estimates. It is assumed that the observed data set is sampled from a larger population. Inferential statistics can be contrasted with descriptive statistics. Descriptive statistics is solely concerned with properties of the observed data, and it does not rest on the assumption that the data come from a larger population. In machine learning, the term inference is sometimes used instead to mean \"make a prediction, by evaluating an already trained model\"; in this context inferring properties of the model is referred to as training or learning (rather than inference), and using a model for prediction is referred to as inference (instead of prediction); see also predictive inference.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Statistical Inference";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::StatisticalModel(string text)
{
    string model = "llama3";
    string definition = "A statistical model is a mathematical model that embodies a set of statistical assumptions concerning the generation of sample data (and similar data from a larger population). A statistical model represents, often in considerably idealized form, the data-generating process. When referring specifically to probabilities, the corresponding term is probabilistic model. All statistical hypothesis tests and all statistical estimators are derived via statistical models. More generally, statistical models are part of the foundation of statistical inference. A statistical model is usually specified as a mathematical relationship between one or more random variables and other non-random variables. As such, a statistical model is \"a formal representation of a theory\" (Herman Adèr quoting Kenneth Bollen).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Statistical Model";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::StatisticalPopulation(string text)
{
    string model = "llama3";
    string definition = "In statistics, a population is a set of similar items or events which is of interest for some question or experiment. A statistical population can be a group of existing objects (e.g. the set of all stars within the Milky Way galaxy) or a hypothetical and potentially infinite group of objects conceived as a generalization from experience (e.g. the set of all possible hands in a game of poker). A common aim of statistical analysis is to produce information about some chosen population. In statistical inference, a subset of the population (a statistical sample) is chosen to represent the population in a statistical analysis. Moreover, the statistical sample must be unbiased and accurately model the population (every unit of the population has an equal chance of selection). The ratio of the size of this statistical sample to the size of the population is called a sampling fraction. It is then possible to estimate the population parameters using the appropriate sample statistics.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Statistical Population";
        }
    }

    return nullptr;
}

//string _ProbabilityAndStatistics::Terms::StatisticalDispersion(string text)
//{
//    string model = "llama3";
//    string definition = "In statistics, dispersion (also called variability, scatter, or spread) is the extent to which a distribution is stretched or squeezed. Common examples of measures of statistical dispersion are the variance, standard deviation, and interquartile range. For instance, when the variance of data in a set is large, the data is widely scattered. On the other hand, when the variance is small, the data in the set is clustered. Dispersion is contrasted with location or central tendency, and together they are the most used properties of distributions.";
//    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
//    string response = _LLM::OllamaAPI(model, prompt, "NULL");
//    response = _Parsers::LLM::LLama3Parse(response);
//    string* words = _Utilities::String2Words(response);
//    words = _Utilities::RemovePunctuationArr(words);
//    words = _Utilities::ArrayOfStringsToLowercase(words);
//
//    for (int x = 0; x < sizeof(words); x++)
//    {
//        if (words[x] == "yes")
//        {
//            return "Statistical Dispersion";
//        }
//    }
//
//    return nullptr;
//}

string _ProbabilityAndStatistics::Terms::StatisticalSignificance(string text)
{
    string model = "llama3";
    string definition = "In statistical hypothesis testing, a result has statistical significance when a result at least as \"extreme\" would be very infrequent if the null hypothesis were true. More precisely, a study\'s defined significance level, denoted by a, is the probability of the study rejecting the null hypothesis, given that the null hypothesis is true; and the p-value of a result, is the probability of obtaining a result at least as extreme, given that the null hypothesis is true. The result is statistically significant, by the standards of the study, when p <= a. The significance level for a study is chosen before data collection, and is typically set to 5% or much lower-depending on the field of study. In any experiment or observation that involves drawing a sample from a population, there is always the possibility that an observed effect would have occurred due to sampling error alone. But if the p-value of an observed effect is less than (or equal to) the significance level, an investigator may conclude that the effect reflects the characteristics of the whole population, thereby rejecting the null hypothesis. This technique for testing the statistical significance of results was developed in the early 20th century. The term significance does not imply importance here, and the term statistical significance is not the same as research significance, theoretical significance, or practical significance. For example, the term clinical significance refers to the practical importance of a treatment effect.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Statistical Significance";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::Statistics(string text)
{
    string model = "llama3";
    string definition = "Statistics is the discipline that concerns the collection, organization, analysis, interpretation, and presentation of data. In applying statistics to a scientific, industrial, or social problem, it is conventional to begin with a statistical population or a statistical model to be studied. Populations can be diverse groups of people or objects such as \"all people living in a country\" or \"every atom composing a crystal\". Statistics deals with every aspect of data, including the planning of data collection in terms of the design of surveys and experiments. When census data cannot be collected, statisticians collect data by developing specific experiment designs and survey samples. Representative sampling assures that inferences and conclusions can reasonably extend from the sample to the population as a whole. An experimental study involves taking measurements of the system under study, manipulating the system, and then taking additional measurements using the same procedure to determine if the manipulation has modified the values of the measurements. In contrast, an observational study does not involve experimental manipulation. Two main statistical methods are used in data analysis: descriptive statistics, which summarize data from a sample using indexes such as the mean or standard deviation, and inferential statistics, which draw conclusions from data that are subject to random variation (e.g., observational errors, sampling variation). Descriptive statistics are most often concerned with two sets of properties of a distribution (sample or population): central tendency (or location) seeks to characterize the distribution\'s central or typical value, while dispersion (or variability) characterizes the extent to which members of the distribution depart from its center and each other. Inferences made using mathematical statistics employ the framework of probability theory, which deals with the analysis of random phenomena. A standard statistical procedure involves the collection of data leading to a test of the relationship between two statistical data sets, or a data set and synthetic data drawn from an idealized model. A hypothesis is proposed for the statistical relationship between the two data sets, an alternative to an idealized null hypothesis of no relationship between two data sets. Rejecting or disproving the null hypothesis is done using statistical tests that quantify the sense in which the null can be proven false, given the data that are used in the test. Working from a null hypothesis, two basic forms of error are recognized: Type I errors (null hypothesis is rejected when it is in fact true, giving a \"false positive\") and Type II errors (null hypothesis fails to be rejected when it is in fact false, giving a \"false negative\"). Multiple problems have come to be associated with this framework, ranging from obtaining a sufficient sample size to specifying an adequate null hypothesis. Statistical measurement processes are also prone to error in regards to the data that they generate. Many of these errors are classified as random (noise) or systematic (bias), but other types of errors (e.g., blunder, such as when an analyst reports incorrect units) can also occur. The presence of missing data or censoring may result in biased estimates and specific techniques have been developed to address these problems.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Statistics";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::StudentTTest(string text)
{
    string model = "llama3";
    string definition = "Student\'s t-test is a statistical test used to test whether the difference between the response of two groups is statistically significant or not. It is any statistical hypothesis test in which the test statistic follows a Student\'s t-distribution under the null hypothesis. It is most commonly applied when the test statistic would follow a normal distribution if the value of a scaling term in the test statistic were known (typically, the scaling term is unknown and is therefore a nuisance parameter). When the scaling term is estimated based on the data, the test statistic-under certain conditions-follows a Student\'s t distribution. The t-test\'s most common application is to test whether the means of two populations are significantly different. In many cases, a Z-test will yield very similar results to a t-test because the latter converges to the former as the size of the dataset increases.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Student T Test";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::StemAndLeafDisplay(string text)
{
    string model = "llama3";
    string definition = "A stem-and-leaf display or stem-and-leaf plot is a device for presenting quantitative data in a graphical format, similar to a histogram, to assist in visualizing the shape of a distribution. They evolved from Arthur Bowley\'s work in the early 1900s, and are useful tools in exploratory data analysis. Stemplots became more commonly used in the 1980s after the publication of John Tukey\'s book on exploratory data analysis in 1977. The popularity during those years is attributable to their use of monospaced (typewriter) typestyles that allowed computer technology of the time to easily produce the graphics. Modern computers\' superior graphic capabilities have meant these techniques are less often used.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Stem And Leaf Display";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::StratifiedSampling(string text)
{
    string model = "llama3";
    string definition = "In statistics, stratified sampling is a method of sampling from a population which can be partitioned into subpopulations. In statistical surveys, when subpopulations within an overall population vary, it could be advantageous to sample each subpopulation (stratum) independently. Stratification is the process of dividing members of the population into homogeneous subgroups before sampling. The strata should define a partition of the population. That is, it should be collectively exhaustive and mutually exclusive: every element in the population must be assigned to one and only one stratum. Then sampling is done in each stratum, for example: by simple random sampling. The objective is to improve the precision of the sample by reducing sampling error. It can produce a weighted mean that has less variability than the arithmetic mean of a simple random sample of the population. In computational statistics, stratified sampling is a method of variance reduction when Monte Carlo methods are used to estimate population statistics from a known population.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Stratified Sampling";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::SurveyMethodology(string text)
{
    string model = "llama3";
    string definition = "Survey methodology is \"the study of survey methods\". As a field of applied statistics concentrating on human-research surveys, survey methodology studies the sampling of individual units from a population and associated techniques of survey data collection, such as questionnaire construction and methods for improving the number and accuracy of responses to surveys. Survey methodology targets instruments or procedures that ask one or more questions that may or may not be answered. Researchers carry out statistical surveys with a view towards making statistical inferences about the population being studied; such inferences depend strongly on the survey questions used. Polls about public opinion, public-health surveys, market-research surveys, government surveys and censuses all exemplify quantitative research that uses survey methodology to answer questions about a population. Although censuses do not include a \"sample\", they do include other aspects of survey methodology, like questionnaires, interviewers, and non-response follow-up techniques. Surveys provide important information for all kinds of public-information and research fields, such as marketing research, psychology, health-care provision and sociology.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Survey Methodology";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::SurvivalFunction(string text)
{
    string model = "llama3";
    string definition = "The survival function is a function that gives the probability that a patient, device, or other object of interest will survive past a certain time. The survival function is also known as the survivor function or reliability function. The term reliability function is common in engineering while the term survival function is used in a broader range of applications, including human mortality. The survival function is the complementary cumulative distribution function of the lifetime. Sometimes complementary cumulative distribution functions are called survival functions in general.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Survival Function";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::SurvivorshipBias(string text)
{
    string model = "llama3";
    string definition = "Survivorship bias or survival bias is the logical error of concentrating on entities that passed a selection process while overlooking those that did not. This can lead to incorrect conclusions because of incomplete data. Survivorship bias is a form of selection bias that can lead to overly optimistic beliefs because multiple failures are overlooked, such as when companies that no longer exist are excluded from analyses of financial performance. It can also lead to the false belief that the successes in a group have some special property, rather than just coincidence as in correlation \"proves\" causality.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Survivorship Bias";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::SymmetricProbabilityDistribution(string text)
{
    string model = "llama3";
    string definition = "In statistics, a symmetric probability distribution is a probability distribution-an assignment of probabilities to possible occurrences-which is unchanged when its probability density function (for continuous probability distribution) or probability mass function (for discrete random variables) is reflected around a vertical line at some value of the random variable represented by the distribution. This vertical line is the line of symmetry of the distribution. Thus the probability of being any given distance on one side of the value about which symmetry occurs is the same as the probability of being the same distance on the other side of that value.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Symmetric Probability Distribution";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::SystematicSampling(string text)
{
    string model = "llama3";
    string definition = "In survey methodology, one-dimensional systematic sampling is a statistical method involving the selection of elements from an ordered sampling frame. The most common form of systematic sampling is an equiprobability method. This applies in particular when the sampled units are individuals, households or corporations. When a geographic area is sampled for a spatial analysis, bi-dimensional systematic sampling on an area sampling frame can be applied. In one-dimensional systematic sampling, progression through the list is treated circularly, with a return to the top once the list ends. The sampling starts by selecting an element from the list at random and then every kth element in the frame is selected, where k, is the sampling interval (sometimes known as the skip): this is calculated as: k = N/n. where n is the sample size, and N is the population size. Using this procedure each element in the population has a known and equal probability of selection (also known as epsem). This makes systematic sampling functionally similar to simple random sampling (SRS). However, it is not the same as SRS because not every possible sample of a certain size has an equal chance of being chosen (e.g. samples with at least two elements adjacent to each other will never be chosen by systematic sampling). It is, however, much more efficient (if the variance within a systematic sample is more than the variance of the population). Systematic sampling is to be applied only if the given population is logically homogeneous, because systematic sample units are uniformly distributed over the population. The researcher must ensure that the chosen sampling interval does not hide a pattern. Any pattern would threaten randomness. Example: Suppose a supermarket wants to study buying habits of their customers, then using systematic sampling they can choose every 10th or 15th customer entering the supermarket and conduct the study on this sample.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Systematic Sampling";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::TestStatistic(string text)
{
    string model = "llama3";
    string definition = "Test statistic is a quantity derived from the sample for statistical hypothesis testing. A hypothesis test is typically specified in terms of a test statistic, considered as a numerical summary of a data-set that reduces the data to one value that can be used to perform the hypothesis test. In general, a test statistic is selected or defined in such a way as to quantify, within observed data, behaviours that would distinguish the null from the alternative hypothesis, where such an alternative is prescribed, or that would characterize the null hypothesis if there is no explicitly stated alternative hypothesis. An important property of a test statistic is that its sampling distribution under the null hypothesis must be calculable, either exactly or approximately, which allows p-values to be calculated. A test statistic shares some of the same qualities of a descriptive statistic, and many statistics can be used as both test statistics and descriptive statistics. However, a test statistic is specifically intended for use in statistical testing, whereas the main quality of a descriptive statistic is that it is easily interpretable. Some informative descriptive statistics, such as the sample range, do not make good test statistics since it is difficult to determine their sampling distribution. Two widely used test statistics are the t-statistic and the F-statistic.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Test Statistic";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::TidyData(string text)
{
    string model = "llama3";
    string definition = "Standard for structuring data such that \"each variable is a column, each observation is a row, and each type of observational unit is a table\". It is equivalent to Codd\'s third normal form.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Tidy Data";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::TimeDomain(string text)
{
    string model = "llama3";
    string definition = "Time domain refers to the analysis of mathematical functions, physical signals or time series of economic or environmental data, with respect to time. In the time domain, the signal or function\'s value is known for all real numbers, for the case of continuous time, or at various separate instants in the case of discrete time. An oscilloscope is a tool commonly used to visualize real-world signals in the time domain. A time-domain graph shows how a signal changes with time, whereas a frequency-domain graph shows how much of the signal lies within each given frequency band over a range of frequencies. Though most precisely referring to time in physics, the term time domain may occasionally informally refer to position in space when dealing with spatial frequencies, as a substitute for the more precise term spatial domain.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Time Domain";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::TimeSeries(string text)
{
    string model = "llama3";
    string definition = "In mathematics, a time series is a series of data points indexed (or listed or graphed) in time order. Most commonly, a time series is a sequence taken at successive equally spaced points in time. Thus it is a sequence of discrete-time data. Examples of time series are heights of ocean tides, counts of sunspots, and the daily closing value of the Dow Jones Industrial Average. A time series is very frequently plotted via a run chart (which is a temporal line chart). Time series are used in statistics, signal processing, pattern recognition, econometrics, mathematical finance, weather forecasting, earthquake prediction, electroencephalography, control engineering, astronomy, communications engineering, and largely in any domain of applied science and engineering which involves temporal measurements. Time series analysis comprises methods for analyzing time series data in order to extract meaningful statistics and other characteristics of the data. Time series forecasting is the use of a model to predict future values based on previously observed values. Generally, time series data is modelled as a stochastic process. While regression analysis is often employed in such a way as to test relationships between one or more different time series, this type of analysis is not usually called \"time series analysis\", which refers in particular to relationships between different points in time within a single series. Time series data have a natural temporal ordering. This makes time series analysis distinct from cross-sectional studies, in which there is no natural ordering of the observations (e.g. explaining people\'s wages by reference to their respective education levels, where the individuals\' data could be entered in any order). Time series analysis is also distinct from spatial data analysis where the observations typically relate to geographical locations (e.g. accounting for house prices by the location as well as the intrinsic characteristics of the houses). A stochastic model for a time series will generally reflect the fact that observations close together in time will be more closely related than observations further apart. In addition, time series models will often make use of the natural one-way ordering of time so that values for a given period will be expressed as deriving in some way from past values, rather than from future values (see time reversibility). Time series analysis can be applied to real-valued, continuous data, discrete numeric data, or discrete symbolic data (i.e. sequences of characters, such as letters and words in the English language).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Time Series";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::Treatments(string text)
{
    string model = "llama3";
    string definition = "Variables in a statistical study that are conceptually manipulable. For example, in a health study, following a certain diet is a treatment whereas age is not.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Treatments";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::Trial(string text)
{
    string model = "llama3";
    string definition = "In probability theory, an experiment or trial (see below) is any procedure that can be infinitely repeated and has a well-defined set of possible outcomes, known as the sample space. An experiment is said to be random if it has more than one possible outcome, and deterministic if it has only one. A random experiment that has exactly two (mutually exclusive) possible outcomes is known as a Bernoulli trial. When an experiment is conducted, one (and only one) outcome results- although this outcome may be included in any number of events, all of which would be said to have occurred on that trial. After conducting many trials of the same experiment and pooling the results, an experimenter can begin to assess the empirical probabilities of the various outcomes and events that can occur in the experiment and apply the methods of statistical analysis.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Trial";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::TrimmedEstimator(string text)
{
    string model = "llama3";
    string definition = "In statistics, a trimmed estimator is an estimator derived from another estimator by excluding some of the extreme values, a process called truncation. This is generally done to obtain a more robust statistic, and the extreme values are considered outliers. Trimmed estimators also often have higher efficiency for mixture distributions, and heavy-tailed distributions than the corresponding untrimmed estimator, at the cost of lower efficiency for other distributions, such as the normal distribution. Given an estimator, the x% trimmed version is obtained by discarding the x% lowest or highest observations or on both end: it is a statistic on the middle of the data. For instance, the 5% trimmed mean is obtained by taking the mean of the 5% to 95% range. In some cases a trimmed estimator discards a fixed number of points (such as maximum and minimum) instead of a percentage.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Trimmed Estimator";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::TypeIAndTypeIIErrors(string text)
{
    string model = "llama3";
    string definition = "In statistical hypothesis testing, a type I error, or a false positive, is the rejection of the null hypothesis when it is actually true. A type II error, or a false negative, is the failure to reject a null hypothesis that is actually false. Type I error: an innocent person may be convicted. Type II error: a guilty person may be not convicted. Much of statistical theory revolves around the minimization of one or both of these errors, though the complete elimination of either is an impossibility if the outcome is not determined by a known, observable causal process. The knowledge of type I errors and type II errors is widely used in medical science, biometrics and computer science. Type I errors can be thought of as errors of commission (i.e., wrongly including a \'false case\'). For instance, consider testing patients for a virus infection. If when the patient is not infected with the virus, but the test shows that they do, this is considered a type I error. By contrast, type II errors are errors of omission (i.e, wrongly leaving out a \'true case\'). In the example above, if the patient is infected by the virus, but the test shows that they are not, that would be a type II error.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Type I And Type I I Errors";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::UnimodalProbabilityDistribution(string text)
{
    string model = "llama3";
    string definition = "In statistics, a unimodal probability distribution or unimodal distribution is a probability distribution which has a single peak. The term \"mode\" in this context refers to any peak of the distribution, not just to the strict definition of mode which is usual in statistics. If there is a single mode, the distribution function is called \"unimodal\". If it has more modes it is \"bimodal\" (2), \"trimodal\" (3), etc., or in general, \"multimodal\". Figure 1 illustrates normal distributions, which are unimodal. Other examples of unimodal distributions include Cauchy distribution, Student\'s t-distribution, chi-squared distribution and exponential distribution. Among discrete distributions, the binomial distribution and Poisson distribution can be seen as unimodal, though for some parameters they can have two adjacent values with the same probability. ";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Unimodal Probability Distribution";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::Units(string text)
{
    string model = "llama3";
    string definition = "In a statistical study, the objects to which treatments are assigned. For example, in a study examining the effects of smoking cigarettes, the units would be people.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Units";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::Variance(string text)
{
    string model = "llama3";
    string definition = "In probability theory and statistics, variance is the expected value of the squared deviation from the mean of a random variable. The standard deviation (SD) is obtained as the square root of the variance. Variance is a measure of dispersion, meaning it is a measure of how far a set of numbers is spread out from their average value. It is the second central moment of a distribution, and the covariance of the random variable with itself, and it is often represented by o^2, s^2, Var(X), V(X), or V(X). An advantage of variance as a measure of dispersion is that it is more amenable to algebraic manipulation than other measures of dispersion such as the expected absolute deviation; for example, the variance of a sum of uncorrelated random variables is equal to the sum of their variances. A disadvantage of the variance for practical applications is that, unlike the standard deviation, its units differ from the random variable, which is why the standard deviation is more commonly reported as a measure of dispersion once the calculation is finished. Another disadvantage is that the variance is not finite for many distributions. There are two distinct concepts that are both called \"variance\". One, as discussed above, is part of a theoretical probability distribution and is defined by an equation. The other variance is a characteristic of a set of observations. When variance is calculated from observations, those observations are typically measured from a real-world system. If all possible observations of the system are present, then the calculated variance is called the population variance. Normally, however, only a subset is available, and the variance calculated from this is called the sample variance. The variance calculated from a sample is considered an estimate of the full population variance. There are multiple ways to calculate an estimate of the population variance, as discussed in the section below. The two kinds of variance are closely related. To see how, consider that a theoretical probability distribution can be used as a generator of hypothetical observations. If an infinite number of observations are generated using a distribution, then the sample variance calculated from that infinite set will match the value calculated using the distribution\'s equation for variance. Variance has a central role in statistics, where some ideas that use it include descriptive statistics, statistical inference, hypothesis testing, goodness of fit, and Monte Carlo sampling.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Variance";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::WeightedArithmeticMean(string text)
{
    string model = "llama3";
    string definition = "The weighted arithmetic mean is similar to an ordinary arithmetic mean (the most common type of average), except that instead of each of the data points contributing equally to the final average, some data points contribute more than others. The notion of weighted mean plays a role in descriptive statistics and also occurs in a more general form in several other areas of mathematics. If all the weights are equal, then the weighted mean is the same as the arithmetic mean. While weighted means generally behave in a similar fashion to arithmetic means, they do have a few counterintuitive properties, as captured for instance in Simpson\'s paradox.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Weighted Arithmetic Mean";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::WeightedMedian(string text)
{
    string model = "llama3";
    string definition = "In statistics, a weighted median of a sample is the 50% weighted percentile. It was first proposed by F. Y. Edgeworth in 1888. Like the median, it is useful as an estimator of central tendency, robust against outliers. It allows for non-uniform statistical weights related to, e.g., varying precision measurements in the sample.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Weighted Median";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::ExclusiveOr(string text)
{
    string model = "llama3";
    string definition = "Exclusive or, exclusive disjunction, exclusive alternation, logical non-equivalence, or logical inequality is a logical operator whose negation is the logical biconditional. With two inputs, XOR is true if and only if the inputs differ (one is true, one is false). With multiple inputs, XOR is true if and only if the number of true inputs is odd. It gains the name \"exclusive or\" because the meaning of \"or\" is ambiguous when both operands are true. XOR excludes that case. Some informal ways of describing XOR are \"one or the other but not both\", \"either one or the other\", and \"A or B, but not A and B\". ";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Exclusive Or";
        }
    }

    return nullptr;
}

string _ProbabilityAndStatistics::Terms::ZTest(string text)
{
    string model = "llama3";
    string definition = "A Z-test is any statistical test for which the distribution of the test statistic under the null hypothesis can be approximated by a normal distribution. Z-test tests the mean of a distribution. For each significance level in the confidence interval, the Z-test has a single critical value (for example, 1.96 for 5% two tailed) which makes it more convenient than the Student\'s t-test whose critical values are defined by the sample size (through the corresponding degrees of freedom). Both the Z-test and Student\'s t-test have similarities in that they both help determine the significance of a set of data. However, the z-test is rarely used in practice because the population deviation is difficult to determine.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Z Test";
        }
    }

    return nullptr;
}
