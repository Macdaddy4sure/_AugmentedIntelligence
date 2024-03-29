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

#include "AugmentedIntelligence.h"
#include "Analysis.h"
#include "Working-Memory.h"
#include "Short-Term Memory.h"
#include "Long-Term Memory.h"
#include "Reference.h"
#include "NLP.h"
#include "NLU.h"
#include "Variables.h"
#include "Settings.h"
#include "Utilities.h"

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

bool _AnalysisError::SamplingError(string text)
{

}

bool _AnalysisError::MeasurmentError(string text)
{

}

bool _AnalysisError::ProcessingError(string text)
{

}

bool _AnalysisError::AnalysisError(string text)
{

}

bool _AnalysisError::ConfirmationBias(string text)
{

}

bool _AnalysisError::OutliersAndNoise(string text)
{

}

bool _AnalysisError::OverFitting(string text)
{

}

bool _AnalysisError::UnderFitting(string text)
{

}

bool _AnalysisError::DataIntegrity(string text)
{

}

bool _AnalysisError::ConfoundingVariables(string text)
{

}