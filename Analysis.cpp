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
#include "Analysis.hpp"
#include "Large Language Models.hpp"
#include "Parsers.hpp"
#include "Working-Memory.hpp"
#include "Short-Term Memory.hpp"
#include "Long-Term Memory.hpp"
#include "Reference.hpp"
#include "NLP.hpp"
#include "NLU.hpp"
#include "Variables.hpp"
#include "Settings.hpp"
#include "Utilities.hpp"

using namespace std;

// Types of Analysis
// Descriptive Analysis: This type of analysis aims to summarize and describe the features of a dataset.It includes calculating mean, median, mode, and standard deviation, and creating visualizations like graphs and charts to understand the distribution and trends in the data.
// Diagnostic Analysis: Diagnostic analysis delves deeper into the data to understand the causes of trends and patterns identified in descriptive analysis.It involves exploring relationships between variables and identifying factors that contribute to the outcomes observed.
// Predictive Analysis: Predictive analysis uses statistical models and machine learning techniques to forecast future outcomes based on historical data.It involves identifying trends, correlations, and patterns to make educated guesses about future events.
// Prescriptive Analysis: This type of analysis goes a step further by suggesting actions that can be taken to achieve desired outcomes.It involves the use of optimization and simulation algorithms to advise on possible outcomes and strategies.
// Exploratory Data Analysis(EDA): EDA is an approach to analyzing data sets to summarize their main characteristics, often with visual methods.It is used for seeing what the data can tell us beyond the formal modeling or hypothesis testing task.
// Inferential Analysis: Inferential analysis makes inferences about populations based on samples.It uses statistical techniques to deduce properties about a population, which can be used for hypothesis testing.
// Causal Analysis: Causal analysis seeks to find cause - and -effect relationships between variables.It's used to determine what happens to one variable when you change another.
// Mechanistic Analysis: In mechanistic analysis, the focus is on understanding the exact changes in variables that lead to changes in other variables for individual objects.It’s common in the natural sciences but rare in data analysis.

// Data Analysis Rules
// Clear Objective Definition: Begin with a clear understanding of the questions you want the data to answer.This guides the entire analysis process.
// Data Quality Assessment: Ensure the data is accurate, complete, and relevant.Assess and address issues like missing values, outliers, or inconsistencies.
// Understand Your Data: Familiarize yourself with the data, its sources, structure, and any limitations it may have.This includes understanding the context in which the data was collected.
// Appropriate Method Selection: Choose statistical methods and tools that are suitable for the type of data you have and the questions you're trying to answer.
// Data Cleaning and Preparation: Cleanse the data by handling missing values, correcting errors, and formatting it as required for analysis
// Exploratory Data Analysis(EDA): Before diving into complex analyses, perform EDA to uncover patterns, spot anomalies, and form hypotheses.
// Statistical Assumptions Checking: Many statistical techniques have underlying assumptions(like normality, independence, etc.).Ensure these assumptions are met before applying the techniques.
// Rigorous Analysis: Apply the chosen statistical methods rigorously.This includes using appropriate models and validating them.
// Interpretation of Results: Interpret the results in context, understanding what they mean in relation to the original objectives and the real - world context.
// Report Findings Accurately: Report results honestly and clearly, including both positive and negative findings, and avoiding over - interpretation.
// Consider Ethical Implications: Be mindful of the ethical aspects, especially when dealing with sensitive or personal data.
// Validation and Reproducibility: Ensure that your analysis can be replicated and validated, which is a hallmark of robust scientific work.
// Continuous Learning: Stay updated with the latest methods, tools, and best practices in data analysis.
// Documentation: Document your analysis process thoroughly, including the methods used, decisions made, and challenges encountered.This is crucial for transparency and for others who may review or build upon your work.
// Feedback Integration: Be open to feedback and ready to revise your analysis in light of new information or perspectives.

string _AnalysisError::Terms::AnalysisChecking(string text)
{
    if (_AnalysisError::Terms::SamplingError(text))
    {
        return "Sampling Error";
    }
    if (_AnalysisError::Terms::MeasurmentError(text))
    {
        return "Measurment Error";
    }
    //if (_AnalysisError::Terms::ProcessingError(text))
    //{

    //}
    //if (_AnalysisError::Terms::AnalysisError(text))
    //{

    //}
    //if (_AnalysisError::Terms::ConfirmationBias(text))
    //{

    //}
    if (_AnalysisError::Terms::OutliersAndNoise(text))
    {
        return "Outliers and Noise";
    }
    if (_AnalysisError::Terms::OverFitting(text))
    {
        return "Over Fitting";
    }
    if (_AnalysisError::Terms::UnderFitting(text))
    {
        return "Under Fitting";
    }
    if (_AnalysisError::Terms::DataIntegrity(text))
    {
        return "Data Integrity";
    }
    if (_AnalysisError::Terms::ConfoundingVariables(text))
    {
        return "Confounding Variables";
    }
    else
    {
        return nullptr;
    }
}

bool _AnalysisError::Terms::SamplingError(string text)
{
    string model = "image";
    string analysis_definition = "The sampling error is the error caused by observing a sample instead of the whole population. The sampling error is the difference between a sample statistic used to estimate a population parameter and the actual but unknown value of the parameter.";
    string prompt = "Check if the following text matches the following analysis rules and limit the response to yes or no: " + analysis_definition + " " + text;
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

bool _AnalysisError::Terms::MeasurmentError(string text)
{
    string model = "image";
    string analysis_definition = "The difference between a measured value of a quantity and its unknown true value.";
    string prompt = "Check if the following text matches the following analysis rules and limit the response to yes or no: " + analysis_definition + " " + text;
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

bool _AnalysisError::Terms::ProcessingError(string text)
{
    //string model = "image";
    //string analysis_definition = "The difference between a measured value of a quantity and its unknown true value.";
    //string prompt = "Check if the following text matches the following analysis rules and limit the response to yes or no: " + analysis_definition + " " + text;
    //string response = _LLM::OllamaAPI(model, prompt, "NULL");
    //response = _Parsers::LLM::LLama3Parse(response);
    //string* words = _Utilities::String2Words(response);
    //words = _Utilities::RemovePunctuationArr(words);
    //words = _Utilities::ArrayOfStringsToLowercase(words);
 
    //for (int x = 0; x < sizeof(words); x++)
    //{
    //    if (words[x] == "yes")
    //    {
    //        return true;
    //    }
    //    else
    //    {
    //        return false;
    //    }
    //}
    //return false;
    return false;
}

bool _AnalysisError::Terms::AnalysisError(string text)
{
    //string model = "image";
    //string analysis_definition = "The difference between a measured value of a quantity and its unknown true value.";
    //string prompt = "Check if the following text matches the following analysis rules and limit the response to yes or no: " + analysis_definition + " " + text;
    //string response = _LLM::OllamaAPI(model, prompt, "NULL");
    //response = _Parsers::LLM::LLama3Parse(response);
    //string* words = _Utilities::String2Words(response);
    //words = _Utilities::RemovePunctuationArr(words);
    //words = _Utilities::ArrayOfStringsToLowercase(words);
    return false;
}

bool _AnalysisError::Terms::ConfirmationBias(string text)
{
    //string model = "image";
    //string analysis_definition = "The difference between a measured value of a quantity and its unknown true value.";
    //string prompt = "Check if the following text matches the following analysis rules and limit the response to yes or no: " + analysis_definition + " " + text;
    //string response = _LLM::OllamaAPI(model, prompt, "NULL");
    //response = _Parsers::LLM::LLama3Parse(response);
    //string* words = _Utilities::String2Words(response);
    //words = _Utilities::RemovePunctuationArr(words);
    //words = _Utilities::ArrayOfStringsToLowercase(words);
    return false;
}

bool _AnalysisError::Terms::OutliersAndNoise(string text)
{
    //string model = "image";
    //string analysis_definition = "The difference between a measured value of a quantity and its unknown true value.";
    //string prompt = "Check if the following text matches the following analysis rules and limit the response to yes or no: " + analysis_definition + " " + text;
    //string response = _LLM::OllamaAPI(model, prompt, "NULL");
    //response = _Parsers::LLM::LLama3Parse(response);
    //string* words = _Utilities::String2Words(response);
    //words = _Utilities::RemovePunctuationArr(words);
    //words = _Utilities::ArrayOfStringsToLowercase(words);

    return false;
}

bool _AnalysisError::Terms::OverFitting(string text)
{
    string model = "image";
    string analysis_definition = "the production of an analysis that corresponds too closely or exactly to a particular set of data, and may therefore fail to fit to additional data or predict future observations reliably.";
    string prompt = "Check if the following text matches the following analysis rules and limit the response to yes or no: " + analysis_definition + " " + text;
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

bool _AnalysisError::Terms::UnderFitting(string text)
{
    string model = "image";
    string analysis_definition = "occurs when a mathematical model cannot adequately capture the underlying structure of the data. An under-fitted model is a model where some parameters or terms that would appear in a correctly specified model are missing.";
    string prompt = "Check if the following text matches the following analysis rules and limit the response to yes or no: " + analysis_definition + " " + text;
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

bool _AnalysisError::Terms::DataIntegrity(string text)
{
    string model = "image";
    string analysis_definition = "the maintenance of, and the assurance of, data accuracy and consistency over its entire life-cycle.";
    string prompt = "Check if the following text matches the following analysis rules and limit the response to yes or no: " + analysis_definition + " " + text;
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

bool _AnalysisError::Terms::ConfoundingVariables(string text)
{
    string model = "image";
    string analysis_definition = "is a variable that influences both the dependent variable and independent variable, causing a spurious association. Confounding is a causal concept, and as such, cannot be described in terms of correlations or associations. The existence of confounders is an important quantitative explanation why correlation does not imply causation. Some notations are explicitly designed to identify the existence, possible existence, or non-existence of confounders in causal relationships between elements of a system.";
    string prompt = "Check if the following text matches the following analysis rules and limit the response to yes or no: " + analysis_definition + " " + text;
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

bool _AnalysisError::Terms::SamplingErrorVision(string image_location)
{
    string model = "image";
    string analysis_definition = "The sampling error is the error caused by observing a sample instead of the whole population. The sampling error is the difference between a sample statistic used to estimate a population parameter and the actual but unknown value of the parameter.";
    string prompt = "Check if the following definition matches the image and limit the response to yes or no: " + analysis_definition;
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

bool _AnalysisError::Terms::MeasurmentErrorVision(string image_location)
{
    string model = "image";
    string analysis_definition = "The difference between a measured value of a quantity and its unknown true value.";
    string prompt = "Check if the following definition matches the image and limit the response to yes or no: " + analysis_definition;
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

bool _AnalysisError::Terms::ProcessingErrorVision(string image_location)
{
    //string model = "image";
    //string analysis_definition = "The difference between a measured value of a quantity and its unknown true value.";
    //string prompt = "Check if the following definition matches the image and limit the response to yes or no: " + analysis_definition;
    //string response = _LLM::OllamaAPI(model, prompt, "NULL");
    //response = _Parsers::LLM::LLama3Parse(response);
    //string* words = _Utilities::String2Words(response);
    //words = _Utilities::RemovePunctuationArr(words);
    //words = _Utilities::ArrayOfStringsToLowercase(words);

    //for (int x = 0; x < sizeof(words); x++)
    //{
    //    if (words[x] == "yes")
    //    {
    //        return true;
    //    }
    //    else
    //    {
    //        return false;
    //    }
    //}
    //return false;
    return false;
}

bool _AnalysisError::Terms::AnalysisErrorVision(string image_location)
{
    //string model = "image";
    //string analysis_definition = "The difference between a measured value of a quantity and its unknown true value.";
    //string prompt = "Check if the following definition matches the image and limit the response to yes or no: " + analysis_definition;
    //string response = _LLM::OllamaAPI(model, prompt, "NULL");
    //response = _Parsers::LLM::LLama3Parse(response);
    //string* words = _Utilities::String2Words(response);
    //words = _Utilities::RemovePunctuationArr(words);
    //words = _Utilities::ArrayOfStringsToLowercase(words);
    return false;
}

bool _AnalysisError::Terms::ConfirmationBiasVision(string image_location)
{
    //string model = "image";
    //string analysis_definition = "The difference between a measured value of a quantity and its unknown true value.";
    //string prompt = "Check if the following definition matches the image and limit the response to yes or no: " + analysis_definition;
    //string response = _LLM::OllamaAPI(model, prompt, "NULL");
    //response = _Parsers::LLM::LLama3Parse(response);
    //string* words = _Utilities::String2Words(response);
    //words = _Utilities::RemovePunctuationArr(words);
    //words = _Utilities::ArrayOfStringsToLowercase(words);
    return false;
}

bool _AnalysisError::Terms::OutliersAndNoiseVision(string image_location)
{
    //string model = "image";
    //string analysis_definition = "The difference between a measured value of a quantity and its unknown true value.";
    //string prompt = "Check if the following definition matches the image and limit the response to yes or no: " + analysis_definition;
    //string response = _LLM::OllamaAPI(model, prompt, "NULL");
    //response = _Parsers::LLM::LLama3Parse(response);
    //string* words = _Utilities::String2Words(response);
    //words = _Utilities::RemovePunctuationArr(words);
    //words = _Utilities::ArrayOfStringsToLowercase(words);

    return false;
}

bool _AnalysisError::Terms::OverFittingVision(string image_location)
{
    string model = "image";
    string analysis_definition = "the production of an analysis that corresponds too closely or exactly to a particular set of data, and may therefore fail to fit to additional data or predict future observations reliably.";
    string prompt = "Check if the following definition matches the image and limit the response to yes or no: " + analysis_definition;
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

bool _AnalysisError::Terms::UnderFittingVision(string image_location)
{
    string model = "image";
    string analysis_definition = "occurs when a mathematical model cannot adequately capture the underlying structure of the data. An under-fitted model is a model where some parameters or terms that would appear in a correctly specified model are missing.";
    string prompt = "Check if the following definition matches the image and limit the response to yes or no: " + analysis_definition;
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

bool _AnalysisError::Terms::DataIntegrityVision(string image_location)
{
    string model = "image";
    string analysis_definition = "the maintenance of, and the assurance of, data accuracy and consistency over its entire life-cycle.";
    string prompt = "Check if the following definition matches the image and limit the response to yes or no: " + analysis_definition;
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

bool _AnalysisError::Terms::ConfoundingVariablesVision(string image_location)
{
    string model = "image";
    string analysis_definition = "a variable that influences both the dependent variable and independent variable, causing a spurious association. Confounding is a causal concept, and as such, cannot be described in terms of correlations or associations. The existence of confounders is an important quantitative explanation why correlation does not imply causation. Some notations are explicitly designed to identify the existence, possible existence, or non-existence of confounders in causal relationships between elements of a system.";
    string prompt = "Check if the following definition matches the image and limit the response to yes or no: " + analysis_definition;
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