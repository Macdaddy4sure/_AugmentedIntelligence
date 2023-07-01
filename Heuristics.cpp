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
#include "Heuristics.h"
#include "Gaming.h"
#include "Working-Memory.h"
#include "Short-Term Memory.h"
#include "Long-Term Memory.h"
#include "Reference.h"
#include "Variables.h"
#include "Settings.h"
#include "Utilities.h"

using namespace std;

// The Problem Solving Process - Psychology For Dummies - Page 104
// 1. Recognize that a problem exists
// 2. Constructing a representation ofthe situation that includes the initial state of the problem and the eventual goal (a solution)
// 2a. Would would the solution look like?
// 3. Generating and evaluating possible solutions
// 4. Selecting a solution to attempt (hopefully there is wisdom available to narrow the list of solutions to test)
// 5. Executing the solution and determining if it actually works (verification)

// Problem solving Techniques - Psychology For Dummies - Page 104
// Means-end Analysis: This strategy involves breaking the problem down into smaller sub-problems to solve to get to the end result
// Working Backwards: This way to solve a problem is like taking something apart and putting it back together again in order to figure out how the object (or problem) is built.
// Analogies and Metaphors: These strategies involve using a parallel or similar problem that has already beem solved to solve a previously unrelated problem. The Cuban Missile Crisis was like a nuclear powered game of chicken, and whoever flinched, blinked, or chickened out first was the was the loser. I Guess President Kennedy was pretty good at playing chicken.

// Heuristic Trade-Offs and Evaluations
// The trade-off criteria for deciding whether to use a heuristic for solving a given problem include the following:
// Optimality: When several solutions exist for a given problem, does the heuristic guarantee that the best solution will be found? Is it actually necessary to find the best solution?
// Completeness: When several solutions exist for a given problem, can the heuristic find them all? Do we actually need all solutions? Many heuristics are only meant to find one solution.
// Accuracy and precision: Can the heuristic provide a confidence interval for the purported solution? Is the error bar on the solution unreasonably large?
// Execution time: Is this the best known heuristic for solving this type of problem? Some heuristics converge faster than others. Some heuristics are only marginally quicker than classic methods, in which case the 'overhead' on calculating the heuristic might have negative impact.
// In some cases, it may be difficult to decide whether the solution found by the heuristic is good enough, because the theory underlying heuristics is not very elaborate.

// Problem Solving Strategies
// Abstraction: solving the problem in a model of the system before applying it to the real system
// Analogy: using a solution that solves an analogous problem
// Brainstorming: (especially among groups of people) suggesting a large number of solutions or ideas and combining and developing them until an optimum solution is found
// Critical thinking
// Divide and conquer: breaking down a large, complex problem into smaller, solvable problems
// Hypothesis testing: assuming a possible explanation to the problem and trying to prove (or, in some contexts, disprove) the assumption
// Lateral thinking: approaching solutions indirectly and creatively
// Means-ends analysis: choosing an action at each step to move closer to the goal
// Method of focal objects: synthesizing seemingly non-matching characteristics of different objects into something new
// Morphological analysis: assessing the output and interactions of an entire system
// Proof: try to prove that the problem cannot be solved. The point where the proof fails will be the starting point for solving it
// Reduction: transforming the problem into another problem for which solutions exist
// Research: employing existing ideas or adapting existing solutions to similar problems
// Root cause analysis: identifying the cause of a problem
// Trial-and-error: testing possible solutions until the right one is found

// Psychology Heuristics: Informal models of Heuristics
// Affect heuristic — Mental shortcut which uses emotion to influence the decision. Emotion is the effect that plays the lead role that makes the decision or solves the problem quickly or efficiently. It is used while judging the risks and benefits of something, depending on the positive or negative feelings that people associate with a stimulus. It can also be considered the gut decision since if the gut feeling is right, then the benefits are high and the risks are low.
// Anchoring and adjustment — Describes the common human tendency to rely more heavily on the first piece of information offered (the "anchor") when making decisions. For example, in a study done with children, the children were told to estimate the number of jellybeans in a jar. Groups of children were given either a high or low "base" number (anchor). Children estimated the number of jellybeans to be closer to the anchor number that they were given.
// Availability heuristic — A mental shortcut that occurs when people make judgements about the probability of events by the ease with which examples come to mind. For example, in a 1973 Tversky & Kahneman experiment, the majority of participants reported that there were more words in the English language that start with the letter K than for which K was the third letter. There are actually twice as many words in the English Language that have K as the third letter as those that start with K, but words that start with K are much easier to recall and bring to mind.
// Balance Heuristic — Applies to when an individual balances the negative and positive effects from a decision which makes the choice obvious.
// Base Rate Heuristic — When a decision involves probability this is a mental shortcut that uses relevant data to determine the probability of an outcome occurring. When using this Heuristic there is a common issue where individuals misjudge the likelihood of a situation. For example, if there is a test for a disease which has an accuracy of 90%, people may think it's a 90% they have the disease even though the disease only affects 1 in 500 people.
// Common Sense Heuristic - Used frequently by individuals when the potential outcomes of a decision appear obvious. For example, when your television remote stops working, you would probably change the batteries.
// Contagion heuristic — follows the Law of Contagion or Similarity. This leads people to avoid others that are viewed as "contaminated" to the observer. This happens due to the fact of the observer viewing something that is seen as bad or to seek objects that have been associated with what seems good. Some things one can view as harmful can tend not to really be. This sometimes leads to irrational thinking on behalf of the observer.
// Default Heuristic — In real world models, it is common for consumers to apply this heuristic when selecting the default option regardless of whether the option was their preference.
// Educated Guess Heuristic — When an individual responds to a decision using relevant information they have stored relating to the problem.
// Effort heuristic — the worth of an object is determined by the amount of effort put into the production of the object. Objects that took longer to produce are more valuable while the objects that took less time are deemed not as valuable. Also applies to how much effort is put into achieving the product. This can be seen as the difference of working and earning the object versus finding the object on the side of the street. It can be the same object but the one found will not be deemed as valuable as the one that we earned.
// Escalation of commitment — Describes the phenomenon where people justify increased investment in a decision, based on the cumulative prior investment, despite new evidence suggesting that the cost, starting today, of continuing the decision outweighs the expected benefit. This is related to the sunk cost fallacy.
// Fairness Heuristic — Applies to the reaction of an individual to a decision from an authoritative figure. If the decision is enacted in a fair manner the likelihood of the individual to comply voluntarily is higher than if it is unfair.
// Familiarity heuristic — A mental shortcut applied to various situations in which individuals assume that the circumstances underlying the past behavior still hold true for the present situation and that the past behavior thus can be correctly applied to the new situation. Especially prevalent when the individual experiences a high cognitive load.
// Naïve diversification — When asked to make several choices at once, people tend to diversify more than when making the same type of decision sequentially.
// Peak–end rule — a person's subjective perceptions during the most intense and final moments of an event are averaged together into a single judgment. For example, a person might judge the difficulty of a workout by taking into consideration only the most demanding part of the workout (e.g., Tabata sprints) and what happens at the very end (e.g., a cool-down). In this way, a difficult workout such as the one described here could be perceived as "easier" than a more relaxed workout that did not vary in intensity (e.g., 45 minutes of cycling in aerobic zone 3, without cool-down).
// Representativeness heuristic — A mental shortcut used when making judgements about the probability of an event under uncertainty. Or, judging a situation based on how similar the prospects are to the prototypes the person holds in his or her mind. For example, in a 1982 Tversky and Kahneman experiment,[8] participants were given a description of a woman named Linda. Based on the description, it was likely that Linda was a feminist. Eighty to ninety percent of participants, choosing from two options, chose that it was more likely for Linda to be a feminist and a bank teller than only a bank teller. The likelihood of two events cannot be greater than that of either of the two events individually. For this reason, the representativeness heuristic is exemplary of the conjunction fallacy.
// Scarcity heuristic — As in economics, the scarcer an object or event is, the more value is attributed to the object or event. The lack of abundance is an indicator of value and provides a mental shortcut that influences the subjective valuation based on how easily the thing might be replaced or lost to competitors. The scarcity heuristic is a cognitive rule that the more difficult it is to acquire an item, the more value that item must have. In many situations we use an item's availability, its perceived abundance, to quickly estimate quality and/or utility. This can lead to systematic judgement errors or cognitive bias.
// Simulation heuristic — simplified mental strategy in which people determine the likelihood of an event happening based on how easy it is to mentally picture the event happening. People regret the events that are easier to imagine over the ones that would be harder to. It is also thought that people will use this heuristic to predict the likelihood of another's behavior happening. This shows that people are constantly simulating everything around them in order to be able to predict the likelihood of events around them. It is believed that people do this by mentally undoing events that they have experienced and then running mental simulations of the events with the corresponding input values of the altered model.
// Social proof — also known as the informational social influence which was named by Robert Cialdini in his 1984 book Influence. It is where people copy the actions of others. It is more prominent when people are uncertain how to behave, especially in ambiguous social situations.[34]
// Working Backward Heuristic — When an individual assumes they have already solved a problem they work backwards in order to find how to achieve the solution they originally figured out.

// Psychology Heuristics: Formal Models of Heuristics
// Elimination by Aspects heuristic
// fast-and-frugal tree: is a simple graphical structure that categorizes objects by asking one question at a time.
// Fluency heuristic
// Gaze heuristic
// Recognition heuristic
// Satisficing
// Similarity heuristic
// Take-the-best heuristic

// This function will be used to retrieve relevant data from short and long term memory and apply a heuristic for planning actions
//  Invokation: Activated by voice, camera (suggestion), or bump command with neural device
//  0. Identify what the user would like to plan by gathering relevant information
//      a. Use 
//  1. Gather information about the problem
//      0z. Test if the indiviudal wants to perform action
//          i. Possibility of feedback infinite loop with no relevent answer. The solution is to do nothing.
//      z. Check scene and mark analysis points that are not allowed to be analyzed
//          i. Other people...
//              1. Check with local, county, state, and federal laws
//              2. If the analysis and gathering do not result in undermining another is accordance with law
//              3. Check if the user would like to cancel checking for troubleshooting
//      a. Invoke Tesseract to gather text data about the problem
//      b. Use pocketsphinx to gather dialogue information about the problem
//      c. Use OpenCV with a trained neural network to identify the problem
//      d. Use analysis from all senses to make a decision
//      e. Check for wisdom database
//      f. Check other databases
//  2. With the gathered information, search the database for common problems
//      a. If the problem is found: use proposed solutions in the database
//      b. If the problem is not found: collect information from other sources
//          i. Link the problem with known similar concepts in database to form a question
//          ii. Possibility for internet connectivity in the future...
//  3. Trial and error test iterative solutions
void _Heuristics::HeuristicPlanning()
{
    // 1. Establish values or weights and measures for things that do not change
    // 2. Account for concepts that change
}

// General Hueristic?
// This function is meant to be a general heuristic for solving arbitrary problems in accordance with law
// Rules: This function is not to be used to detriment or cause harm to another by analyzing people if they are not open to
// This function is a heuristic for trouble-shooting arbitrary problems
//  Invokation: This function is invoked with a voice command
//  0. Use a neural network thread to detect stereotypical problems
//  1. Gather information about the problem
//      a. Visual neural network
//      b. Sound neural network
//      c. Reading comprehension neural network
//      d. Use analysis from all senses to make a decision
//      e. Check for wisdom database
//      f. Check other databases
//  2. With the gathered information, search the database for common problems
//      a. If the problem is found: use proposed solutions in the database
//      b. If the problem is not found: collect information from other sources
//          i. Link the problem with known similar concepts in database to form a question
//              x. Search the internet for solution with problem keywords (search database for safe websites)
//              xx. Parse the HTML file and extract text
//  3. Trial and error test iterative solutions
//  4. Search the internet
//  5. Reinstall Operating system
//  6. Document and store results
void _Heuristics::TroubleShooting()
{
    //  1. This could be specific to computers and network diagnostic and resolution
    //  2. Adapting this heuristic for repairing anything man made
}

// CompTIA Computer Troubleshooting Heuristic
// Given a scenario, explain the troubleshooting theory
// Note: Always consider corprate policies, procedures and impacts before implamenting changes
// 1. Identify the problem
//      a. Question the user and indentify user changes to computer and perform backups before making changes
// 2. Esablish a theory of probable cause
//      a. If necessary, conduct external or internal research based on symptoms
// 3. Test the theoryh to determine the cause
//      a. Once theory is confirmed determine the next steps to resolve the problem
//      b. If theory is not confirmed re-establish new theoryh or escalate
// 4. Establish a plan of action to resolve the problem and implament the solution
// 5. Verify full system functionality and if applicable implament preventative measures
// 6. Note findings and outcomes
void _Heuristics::ComputerTroubleshooting2()
{

}

// The following heuristic will aid in playing video-games on the computer
//  Invokation: Voice command, visual queue of motion tracked computer vision of a computer monitor
//  0. The function is invoked
//  1. Detect which game is being played by executing a neural network with a pretrained model of video games
//      a. If the video game is not found in the database, train a new model for the game
//          i. Game mechanics are saved to a ne profile and the neural network is retrained
//  2. With OpenCV, track the screen and save the orientation of the screen
//  3. With OpenCV, get the features on the screen from the pretrained network
//  4. Unknown game mechanics are saved to the database
void _Heuristics::GamingHeuristicPC()
{

}

// The following heuristic will aid in playing console TV video-games
//  Invokation: Voice command, visual queue of motion tracked television screen with detected game
//  0. The function is invoked
//  1. Detect which game is being played by executing a neural network with a pretrained model of video games
//      a. If the video game is not found in the database, train a new model for the game
//          i. Game mechanics are saved to a ne profile and the neural network is retrained
//  2. With OpenCV, track the screen and save the orientation of the screen
//  3. With OpenCV, get the features on the screen from the pretrained network
//  4. Unknown game mechanics are saved to the database
void _Heuristics::ConsoleVideoGameHeuristic()
{

}

// The following heuristic will create focus on the batter, the sound of the bat, the suggested action to the user, and judgements based on where the ball is going
//  Invokation: Voice command to engage fielding heuristic, visual queue to recognize when the user is in position
//  0. Check if we are actually playing baseball
//  1. Check for the position of the player
//      a. Load baseball glossary and vocabulary
//  2. Get top to bottom image for dimensions of the field, measurments for each keyword / landmark.
//  3. Create three dimensional layout of the field x, y, z
//      a. Create zoned player positions in two dimensions
//      b. Gather training sounds of the ball bouncing on grass, and dirt
//      c. Gather training sounds of the ball bouncing off the bat
//      d. Gather statistical training data for most common angles from the bat
//  4. Get the coordinates of the user's position in two dimensions x, z
//      a. Invoke a thread tracking the position of the player in 2 dimentions at all times
void _Heuristics::BaseballFieldingHeuristic()
{

}

// This function is a heuristic for self management
//  Invokation:
void _Heuristics::ManagementHeuristic()
{
    // 1. Collect data from the senses
    // 2. Store data in short term memory
}

// Induction or Deduction
void _Heuristics::GeneralInferenceHeuristic()
{

}

// Function to carry out instructions and orders from a superior officr
//  1. IS the person a superior?
//      a. Officer in uniform? Officer with a badge? Officer with ID card?
//      b. Officer telling you they are an officer
//  2. Is the person giving you a lawful order?
//  3. Check if the action would bring about a crime?
//  4. Check for other reasons the order should not be performed by checking databases, or calculus
void _Heuristics::OrdersHeuristic()
{
    // Check if the action is against rules, procedure or law
}

// This function is to execute plans
//  Invokation: This function will be invoked with several different triggers:
//      a. Check if the execution would be against the law or planned to be against the law
//  0. Check if action is accepted? In the entire execution loop
//  
void _Heuristics::HeuristicExecution(string* algorithm)
{
    // 1. If required, execute orders from another
}

// Purpose: Create a function that integrates new knowledge to existing knowledge
void _Heuristics::IntegrationIntelligence()
{

}

// This function is to calculate and suggest actions
void _Heuristics::Suggestion()
{

}

// Engineering Heuristic
void _Heuristics::EngineeringHeuristic()
{

}

void _Heuristics::ActingHeuristic()
{

}

void _Heuristics::MusicHeuristic()
{

}

void _Heuristics::DrawingHeuristic()
{

}