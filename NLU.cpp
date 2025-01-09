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
#include "Large Language Models.hpp"
#include "Parsers.hpp"
#include "NLP.hpp"
#include "NLU.hpp"
#include "Fallacy.hpp"
#include "Bias.hpp"
#include "Working-Memory.hpp"
#include "Short-Term Memory.hpp"
#include "Long-Term Memory.hpp"
#include "Reference.hpp"
#include "Variables.hpp"
#include "Settings.hpp"
#include "Utilities.hpp"

using namespace std;

// Oxford Logic Basic Logic Terms
// 1. Inclusive disjunction: Where both disjuncts can be true at the same time
// 2. Exclusive disjunction: Where both disjuncts cannot be true at the same time.
// 3. Order of Operations: The order of handling logical operators within a truth statement: Functional proposition; it is a step - by - step method of generating a complete truth table.
// 4. Contingent statements: Statements that are neither necessarily true nor necessarily false (they are sometimes true, sometimes false).
// 5. Non-contingent statements: Statements such that the truth values in the main operator column do not depend on he truth values of component parts.
// 6. Tautology: A statement that is necessarily true
// 7. Self-Contradiction: A statement that is necessarily false
// 8. Logically Equivalent: When two truth-functional statements appear different but have identical truth tables.
// 9. Contradictory Statements: Two statements that have opposite truth valueson every line of their respective truth tables
// 10. Consistent Statements: Two or more statements that have at least on line on their respective truth tables where the main operators are true.
// 11. Inconsitent Statements: Two or more statements that do not have even line on their respective truth tables where the main operators are true.
// 12. Argument form: An arrange,ent of logical operators and statement variables in which a consitent replacement of the statement valiables by statements results in an argument.
// 13. Modus Ponens: A un sound argument from (also referred to as affirming the antecedent).
// 14. Fallacy of affirming the consequent: An invalid argument forml it is a formal fallacy.
// 15. Modus tollens: A unsound argument form (also referred to as denying the consequent).
// 16. Fallacy of denying the antecedent: A unsound argument froml it is a formal fallacy.

// Order of operations: is a collection of rules that reflect conventions about which procedures to perform first in order to evaluate a given mathematical expression.
// The order of operations, which is used throughout mathematics, science, technology and many computer programming languages, is expressed here:
// 1. Exponentiation and root extraction
// 2. Multiplication and division
//    a. Communtative property of mutliplication
//    b. Associative property of multiplication
//    c. Zero property of multiplication
//    d. Cannot divide by zero
// 3. Addition and subtraction
//    a. Communtative property of addition
//    b. Associative property of division

// C and C++ Order of Opperations
// 1. Function call, scope, array/member access
// 2. (most) unary operators, sizeof, and type casts (right to left)
// 3. Multiplication, division, and modulus (modulo)
// 4. Addition and subtraction
// 5. Bitwise shift left and right
// 6. Comparisons: less-than and greater-than
// 7. Comparisons: equal and not equal
// 8. Bitwise AND
// 9. Bitwise exclusive OR (XOR)
// 10. Bitwise inclusive (normal) OR
// 11. Logical AND
// 12. Logical OR
// 13. Conditional expression (ternary)
// 14. Assignment operators (right to left)
// 15. Comma operator

// Matrix Algebra
// There are a numbre of basic operations that can be applied to modify matricies, called matrix addition, scalar multiplication, transposition, matrix multiplication, row operations, and submatrix
// 1. Matrix Addition: The sun A+B of two m-by-n matricies A and B is calculated entrywise
// 2. Scalar multiplication: The product cA of a number c (also called a scalar in the parlance of abstract algebra_ and matrix A is computed by multiplying every entry of A by c.
//    a. This operation is called scalar multiplication, but its result is not named "scalar product" to avoid confution since "scalar product" is sometimes used as a synonym for "inner product".
// 3. Transposition: The transpose of an m-by-n matrix A is the n-by-m matrix A^T (also denoted A^tr or ^tA) formed by turning rows into columns and vice versa

// Matrix Row Operations
// 1. Row addition, that is adding a row to another
// 2. Row multiplication, that is multiplying all entries of a row by a non-zero constant
// 3. Row switching, that is interchanging two rows of a matrix
// These operation are use din several ways, including solving linear equations and finding matrix inverses

// Matricies and linear equations **

// Matricies and linear transformations **
// 1. Horizontal Shear
// 2. Reflection through the vertical axis
// 3. Squeeze mapping
// 4. Scaling
// 5. Rotation

// Matricies and Probability and statistics

// Matricies: Symmetrues abd transformations in physics

// Submatrix
// A Submatrix of a matrix is obtained by deletnig any collection of rows and/or columns. For example, from the following 3-by-4 matrix, we can construct a 2-by-3 submatrix by removing row 3 and column 2

// Glossary of Legal Terms
// 1. 

 //Ambiguous, confusing, misleading, vague, unintelligible: the question is not clear and precise enough for the witness to properly answer.
 //Arguing the law: counsel is instructing the jury on the law.
 //Argumentative: the question makes an argument rather than asking a question.
 //Asked and answered: when the same attorney continues to ask the same questionand they have already received an answer.Usually seen after direct examination, but not always.
 //Asking a question unrelated to an intelligent exercise of a peremptory challenge or challenge for cause: if opposing counsel asks such a question during voir dire(i.e.the jury selection process).
 //Asks the jury to prejudge the evidence: the jury cannot promise to vote a certain way, even if certain facts are proved.
 //Assumes facts not in evidence: the question assumes something as true for which no evidence has been shown.
 //Badgering: counsel is antagonizing the witness to provoke a response, either by asking questions without giving the witness an opportunity to answer or by openly mocking the witness.
 //Best evidence rule: requires that the original source of evidence is required, if available; for example, rather than asking a witness about the contents of a document, the actual document should be entered into evidence.A full original document should be introduced into evidence instead of a copy, but judges often allow copies if there is no dispute about authenticity.Some documents are exempt from hearsay rules of evidence.[5]
 //Beyond the scope: A question asked during cross - examination must be within the scope of direct, and so on.
 //Calls for a conclusion: the question asks for an opinion rather than facts.
 //Calls for speculation: the question asks the witness to guess the answer rather than to rely on known facts.
 //Compound question: multiple questions asked together.
 //Counsel is testifying: this objection is sometimes used when counsel is "leading" or "argumentative" or "assumes facts not in evidence".
 //Foundation: the question relates to matters of which the witness's personal knowledge has not been established
 //Hearsay: An out of court statement used to prove the fact that the statement is being offered for.However, there are several exceptions to the rule against hearsay in most legal systems.[5]
 //Incompetent: the witness is not qualified to answer the question.
 //Inflammatory: the question is intended to cause prejudice.
 //Irrelevant or immaterial: the question is not about the issues in the trial.
 //Leading question(direct examination only): the question suggests the answer to the witness.Leading questions are permitted if the attorney conducting the examination has received permission to treat the witness as a hostile witness.Leading questions are also permitted on cross - examination, as witnesses called by the opposing party are presumed hostile.
 //Misstates evidence / misquotes witness / improper characterization of evidence: this objection is often overruled, but can be used to signal a problem to witness, judgeand jury.[6]
 //Narrative: the question asks the witness to relate a story rather than state specific facts.This objection is not always proper even when a question invites a narrative response, as narrative testimony may be required or preferred due to the circumstances of the case.
 //Privilege: the witness may be protected by law from answering the question.
 //Best evidence rule or hearsay evidence: requires that the original source of evidence is required, if available.However, some documents are self - authenticating under Rule 902, such as(1) domestic public documents under seal, (2) domestic public documents not under seal, but bearing a signature of a public officer, (3) foreign public documents, (4) certified copies of public records, (5) official publications, (6) newspapersand periodicals, (7) trade inscriptionsand the like, (8) acknowledged documents(i.e., by a notary public), (9) commercial paperand related documents, (10) presumptions under Acts of Congress, (11) certified domestic records of regularly conducted activity, (12) certified foreign records of regularly conducted activity.[5]
 //Fruit of the poisonous tree: the evidence was obtained illegally, or the investigative methods leading to its discovery were illegal.Can be circumvented; see inevitable discovery
 //Incomplete: opposing party only introducing part of the writing(conversation / act / declaration), taken out of context.Under the evidence rule providing for completeness, other parties can move to introduce additional parts.[8] If any documents are presented for review, the judgeand other party are entitled to a complete copy, not a partial copy, of the document.When a witness is presented with a surprise document, he should be able to take time to study it before he can answer any questions.
 //Lack of foundation: the evidence lacks testimony as to its authenticity or source.
 //More prejudicial than probative: Under Federal Rule of Evidence 403, a judge has the discretion to exclude evidence if "its probative value is substantially outweighed by the danger of unfair prejudice, confusion of the issues, or misleading the jury."
 //Narrative: the witness is relating a story in response to a question that does not call for one.Not all witnesses' answers are susceptible to this objection, as questions can and often do call for a narrative response, especially on direct examination.
 //Non - responsive: the witness's response constitutes an answer to a question other than the one that was asked, or no answer at all.
 //Nothing pending: the witness continues to speak on matters irrelevant to the question. For example, an attorney who asks, "Did your mother call?" and gets the answer, "Yes, she called at 3:00," can object to the latter part.Attorneys can use this objection selectively(to avoid annoying the court) when a witness adds out - of - order remarks to answers.

// Title I – Scope of the FRCP
// Rules 1 and 2.
// Title I is a sort of "mission statement" for the FRCP; Rule 1 states that the rules "shall be construed and administered to secure the just, speedy, and inexpensive determination of every action." Rule 2 unifies the procedure of law and equity in the federal courts by specifying that there shall be one form of action, the "civil action."
// Title II – Commencement of Suits
// Rules 3 to 6.
// Title II covers commencement of civil suits and includes filing, summons, and service of process.Rule 3 provides that a civil action is commenced by filing a complaint with the court.Rule 4 deals with procedure for issuance of a summons, when the complaint is filed, and for the service of the summonsand complaint on the defendants.Rule 5 requires that all papers in an action be served on all parties and be filed with the court.Rule 6 deals with technical issues, which concern the computation of time, and authorizes the courts to extend certain deadlines in appropriate circumstances.
// Title III – Pleadingsand Motions
// Rules 7 to 16.
// Title III covers pleadings, motions, defenses, and counterclaims.The plaintiff's original pleading is called a complaint. The defendant's original pleading is called an answer.
// Rule 8(a)sets out the plaintiff's requirements for a claim: a "short and plain statement" of jurisdiction, a "short and plain statement" of the claim, and a demand for judgment. It also allows relief in the alternative, so the plaintiff does not have to pre-guess the remedy most likely to be accepted by the court.
// Rule 8(b)states that the defendant's answer must admit or deny every element of the plaintiff's claim.
// Rule 8(c) requires that the defendant's answer must state any affirmative defenses.
// Rule 8(d)maintains that each allegation be "simple, concise, and direct" but allows "2 or more statements of a claim or defense alternatively or hypothetically." If a party makes alternative statements, the pleading is sufficient if any one of them is sufficient.A party may state inconsistent(even mutually exclusive) claims or defenses.
// In addition to notice pleading, a minority of states(e.g., California) use an intermediate system known as code pleading, which is a system older than notice pleadingand which is based upon legislative statute.It tends to straddle the gulf between obsolete common - law pleading and modern notice pleading.Code pleading places additional burdens on a party to plead the "ultimate facts" of its case, laying out the party's entire case and the facts or allegations underlying it. Notice pleading, by contrast, simply requires a "short and plain statement" showing only that the pleader is entitled to relief. (FRCP 8(a)(2)). One important exception to this rule is that, when a party alleges fraud, it must plead the facts of the alleged fraud with particularity. (FRCP 9(b)).
// Rule 10 describes what information should be in the caption(the front page) of a pleading, but does not explain how such information should actually be organized in the caption.The FRCP is notoriously vague on how papers should be formatted.Most of the details missing from the FRCP are to be found in local rules promulgated by each district courtand in general orders by each individual federal judge.For example, federal courts in most West Coast states require line numbers on the left margin on all filings(to match local practice in the courts of the states in which they sit), but most other federal courts do not.
// Rule 11 requires all papers to be signed by the attorney(if party is represented).It also provides for sanctions against the attorney or client for harassment, frivolous arguments, or a lack of factual investigation.The purpose of sanctions is deterrent, not punitive.Courts have broad discretion about the exact nature of the sanction, which can include consent to in personam jurisdiction, fines, dismissal of claims, or dismissal of the entire case.The current version of Rule 11 is much more lenient than its 1983 version.Supporters of tort reform in Congress regularly call for legislation to make Rule 11 stricter.
// Rule 12(b) describes pretrial motions that can be filed.
// 1. lack of subject matter jurisdiction
// 2. lack of personal jurisdiction
// 3. improper venue
// 4. insufficient process
// 5. insufficient service of process
// 6. failure to state a claim upon which relief can be granted;and
// 7. failure to join a party under Rule 19
// The Rule 12(b)(6) motion, which replaced the common law demurrer, is how lawsuits with insufficient legal theories underlying their cause of action are dismissed from court. For example, assault requires intent, so if the plaintiff has failed to plead intent, the defense can seek dismissal by filing a 12(b)(6) motion. "While a complaint attacked by a Rule 12(b)(6) motion to dismiss does not need detailed factual allegations, a plaintiff's obligation to provide the grounds of his entitlement to relief requires more than labels and conclusions, and a formulaic recitation of the elements of a cause of action will not do. Factual allegations must be enough to raise a right to relief above the speculative level, on the assumption that all the allegations in the complaint are true (even if doubtful in fact)." Bell Atlantic Corp. v. Twombly, 550 U.S. 544, 127 S.Ct. 1955 (No. 05-1126) (2007) (citations, internal quotation marks and footnote omitted). 12(b)(6) is the second of three procedural "hurdles" a cause of action must surmount before it gets to a trial (the first are the two jurisdictional dismissals, found in 12 (b)(1) and (2), and the third is summary judgment, found in Rule 56). A 12(b)(6) motion cannot include additional evidence such as affidavits. To dispose of claims with insufficient factual basis (where the movant must submit additional facts to demonstrate the factual weakness in the plaintiff's case), a Rule 56 motion for summary judgment is used.
// Rules 12(g) and 12(h) are also important because they state that if 12(b)(2)-12(b)(5) motions are not properly bundled together or included in an answer/allowable amendment to an answer, they are waived. Additionally, because 12(b)(1) motions are so fundamental, they may never be waived throughout the course of litigation, and 12(b)(6) and 12(b)(7) motions may be filed at any time until trial ends.
// Rule 13 describes when a defendant is allowed or required to assert claims against other parties to the suit (joinder). The law encourages people to resolve all their differences as efficiently as possible; consequently, in many jurisdictions, counterclaims (claims against an opposing party) that arise out of the same transaction or occurrence (compulsory counterclaims) must be brought during the original suit, or they will be barred from future litigation (preclusion). Any counterclaims may be brought, even if they are not compulsory (permissive counterclaims), however a crossclaim (claims against a coparty), while not compulsory, must arise out of the same transaction or occurrence of the original suit or a counterclaim, or it must relate to the property in the original suit.
// Rule 14 allows parties to bring in other third parties to a lawsuit.
// Rule 15 allows pleadings to be amended or supplemented. Plaintiffs may amend once before an answer is filed, a defendant can amend once within 21 days of serving an answer, and if there is no right to amend, seek leave of court ("leave shall be given when justice so requires.")
// Rules 17 to 25.
// Rule 17 states that all actions must be prosecuted in the name of the real party in interest, that is, the plaintiff must be person or entity whose rights are at issue in the case.
// Rule 18 – Joinder of Claims and Remedies – states that a plaintiff who may plead in a single civil action as many claims as the plaintiff has against a defendant, even if the claims are not related, and may request any remedy to which the law entitles the plaintiff.Of course, each claim must have its own basis for jurisdiction in the court in which it is brought or be subject to dismissal.
// Rule 19 – Compulsory Joinder of Parties – if a person who is not a party to the suit is "necessary" to just adjudication of the action, under the criteria set forth in subsection(a), then upon motion of any party that person shall be made a party, served with suit, and required to participate in the action.If the person cannot be made a party for any reason, such as lack of jurisdiction, inability to be located, etc., then the court uses the criteria in subsection(b) to determine if the absent party is "indispensable".If so, the action must be dismissed.
// Rule 20 Permissive Joinder of Parties.Joinder of parties at common law was controlled by the substantive rules of law, often as reflected in the forms of action, rather than by notions of judicial economyand trial convenience.Permissive joinder of plaintiffs allows the plaintiffs having an option to join their claims when they were not joint. (Ryder v.Jefferson Hotel Co.)
// Rule 22 governs the procedure for interpleader.It allows an interpleader to be brought by a plaintiff who is subject to multiple liability even though 1. the claims or title they are based on lack common origin, are independentand averse and 2. the plaintiff denies any of the claims in whole or part.A defendant exposed to similar liability may also seek interpleader.
// Rule 23 governs the procedure for class action litigation.In a class action, a single plaintiff or small group of plaintiffs seeks to proceed on behalf of an entire class who have been harmed by the same conduct by the same defendants.Court approval is required for this procedure to be used.Rule 23.1 governs derivative suits in which a plaintiff seeks to assert a right belonging to a corporation(or similar entity) in which the plaintiff is a shareholder, on behalf of the corporation that is not pursuing the claim itself.Rule 23.2 governs actions by or against unincorporated associations.
// Title V – Discovery
// Rules 26 to 37.
// Title V covers the rules of discovery.Modern civil litigation is based upon the idea that the parties should not be subject to surprises at trial.Discovery is the process whereby civil litigants seek to obtain information both from other parties and from non parties(or third parties).Parties have a series of tools with which they can obtain information :
// Document requests(Rule 34) : a party can seek documents and other real objects from parties and non parties
// Interrogatories(Rule 33) : a party can require other parties to answer 25 questions
// Requests for admissions(Rule 36) : A party can require other parties to admit or deny the truth of certain statements
// Depositions(Rule 30) : A party can require at most 10 individuals or representatives of organizations to make themselves available for questioning for a maximum of one day of 7 hours, without obtaining leave of court.
// FRCP Rule 37 oversees the possible sanctions that someone may seek if a failure to preserve data takes placeand outlines how courts may apply sanctions or remedial measures.[4][5] Updates to FRCP Rule 37 went into effect on December 1, 2015, and have led to a significant decline in spoliation rulings in subsequent years.[6][7
// Federal procedure also requires parties to divulge certain information without a formal discovery request, in contrast to many state courts where most discovery can only be had by request.Information covered by this initial disclosure is found in Rule 26(a)(1)(A), includes information about potential witnesses, information / copies about all documents that may be used in the party's claim (excluding impeachment material), computations of damages, and insurance information. Information about any expert witness testimony is also required.
// Notable exceptions to the discovery rules include impeachment evidence / witnesses, "work product" (materials an attorney uses to prepare for the trial especially documents containing mental impressions, legal conclusions, or opinions of counsel), and experts who are used exclusively for trial prepand will not testify.
// FRCP Rule 26 provides general guidelines to the discovery process, it requires the plaintiff to initiate a conference between the parties to plan the discovery process.[8] The parties must confer as soon as practicable after the complaint was served to the defendants—and in any event at least 21 days before a scheduling conference is to be held or a scheduling order is due under Rule 16(b).The parties should attempt to agree on the proposed discovery plan, and submit it to the court within 14 days after the conference.[8] The Discovery Plan must state the parties' proposals on subject of the discovery, limitations on discovery, case management schedule and timing deadlines for each stage of the discovery process, including:[8][9]
// End - date of the discovery.This should be at least 60 days before the trial.The trial target date is usually 6 months to 2 years after the conference.
// Amendments to the deadlines for filing pleadings under FRCP 7 & 15, if any.
// Deadline for amending pleadings.Normally it is at least 30 days before the discovery ends.
// Deadline for joining claims, remediesand parties(FRCP 18 & 19).Normally it is at least 30 days before the discovery ends.
// Deadline for initial expert disclosuresand rebuttal expert disclosures.Normally it is at least 30 days before the discovery ends.
// Deadline for dispositive motions.Usually it is at least 30 days after the discovery end - date.
// Deadline for Pre - trial order.If any dispositive motions are filed, the Joint Pretrial Order can be filed at least 30 days after the last decision on the merits.
// Unless all parties agree otherwise, the parties should submit to each other the initial disclosures under Rule 26(a)within 14 days after the conference.[8] Only after the initial disclosures have been sent, the main discovery process begins which includes : depositions, interrogatories, request for admissions(RFA) and request for production of documents(RFP).As stated above, there is a limitation on number of interrogatoriesand depositions, but there is no limitation on RFAsand RFPs.Some states, like California, have different limitations set in their Local Rules.FRCP requires that the party to whom the request for Interrogatories, RFA or RFP is directed must respond in writing within 30 days after being served, otherwise the requestor can file a motion to compel discoveryand for sanctions.
// Title VI – Trial
// Rules 38 to 53.
// Title VI deals generally with the trial of civil actions, although some other topics are also included.Rules 38 and 39 deal with the parties' right to a trial by jury and the procedure for requesting a jury trial instead of a bench trial and trials by an advisory jury. These rules must be construed in light of the Seventh Amendment to the United States Constitution, which preserves a right to jury trial in most actions at common law (as opposed to equity cases). Rule 40 deals in general terms with the order in which cases will be scheduled for trial and has little significance in practice.
// Rule 41 deals with dismissal of actions.An action may be voluntarily dismissed at any time by the plaintiff prior to the defendant's filing of an Answer or Motion for Summary Judgment.[10] In such an instance, the court retains jurisdiction only to award attorneys fees or costs (in rare circumstances). With certain exceptions (e.g. class actions), an action may also be dismissed at any time by agreement of the parties (e.g. when the parties reach a settlement). An action may also be involuntarily dismissed by the court if the plaintiff fails to comply with deadlines or court orders.
// Rule 42 deals with consolidation of related cases or the holding of separate trials.Rule 43 addresses the taking of testimony, which is to be taken in open court whenever possible.Rule 44 governs authentication of official records.
// Rule 45 deals with subpoenas.A subpoena commands a person to give testimony, to produce documents for inspectionand copying, or both.Although included in the Chapter headed "trials," subpoenas can also be used to obtain document production or depositions of non - parties to the litigation during the pre - trial discovery stage.
// Rule 46 provides that formal "exceptions" to court rulings are no longer necessary so long as a sufficient record is made of the objecting party's position.
// The next several rules govern jury trials.Rule 47 provides for the selection of jurorsand rule 48 governs the number of jurors in a civil case.A civil jury must consist of between sixand twelve jurors(six jurors are presently used in the vast majority of federal civil trials; juries of twelve are still required in federal criminal cases).Rule 49 provides for use of "special verdicts" in jury trials, under which the jury may be asked to respond to specific questions rather than just finding liability or non - liability and determining the amount of the damages, if any.Rule 50 addresses situations in which a case is so one - sided that the court may grant "judgment as a matter of law" taking the case from the jury.Rule 51 governs jury instructions.
// Rule 52 provides procedure for the judge to hand down findingsand conclusions following non - jury trials.Rule 53 governs masters, who are typically lawyers designated by the court to act as neutralsand assist the court in a case.
// Title VII – Judgment
// Rules 54 to 63.
// Rule 56 deals with summary judgment.It is considered the last gate - keeping function before trial, answering the question of whether the claim could even go to a jury.A successful summary judgment motion persuades the court there is no "genuine issue of material fact" and also that the moving party is "entitled to judgment as a matter of law."
// The moving party can show that the disputed factual issues are illusory, can show a lack of genuine issue by producing affidavits or can make a showing through discovery.The movant can point either to the other side's inadequacies or can affirmatively negate the claim.
// The moving party has the burden of production; it has to come up with some evidence that there's no genuine issue of material fact. Then the burden shifts to the non-moving party, which has to show that the claim is adequate to let it get to the jury. The non-movant can submit affidavits, depositions, and other material
// The burden shifts again to the moving party, which must say that there's still no genuine issue of material fact. A court grants summary judgment when there is no way the movant can lose at trial. When the moving party is the plaintiff, then it has to show that there's no way that a jury could find against it.
// (A partial summary judgment usually pertains only to certain claims, not the whole case.)
// Rule 50 also deals with judgments as a matter of law, however Rule 50 decisions take place after a jury has been empanelled.A motion under Rule 50(a)generally takes place immediately after the opposing party has finished presenting its caseand must take place before the case is submitted to the jury.Importantly, to keep open the option of moving for a "judgment notwithstanding the verdict," or "judgment non obstante verdicto" after the jury has returned a verdict, one must file a Rule 50(a)motion.Under the Federal Rules of Civil Procedure, the two are not separate motions, the JNOV motion is simply a renewed Rule 50(a)motion.A renewed 50(a)motion must be filed within 28 days of verdict entry.
// Rule 50 also covers motions for a new trial.These motions can be granted, denied, conditionally granted, or conditionally denied.Conditional grants or denials cover what will happen if the case is reversed on appeal.For instance, a case that ends with a successfully renewed Rule 50(a)motion to overturn the jury verdict may also include a conditional grant of a new trial.If the losing party wins their appeal, the trial will start over again.A motion for a new trial is a Rule 59(a)(1) motion and is generally filed simultaneously and as an alternative to a renewal of a Rule 50(a)motion.
// Title VIII – Provisional and Final Remedies
// Rules 64 to 71.
// This Title deals with remedies that may be granted by a federal court – both provisional remedies that may be ordered while the action is pending as well as final relief that may be granted to the winning party at the end of the case.
// Rule 64 is captioned "Seizure of Person or Property" and authorizes procedures such as Prejudgment attachment, replevin, and garnishment.In general, these remedies may be awarded when they would be authorized under the law of the state in which the federal court is located – a rare instance in which the Federal Rules of Civil Procedure, generally designed to promote uniformity of practice in the federal districts throughout the country, defer to state law.
// Rule 65 governs the procedure on applications for preliminary injunctionsand temporary restraining orders.
// Rule 65.1 addresses security and suretyship issues arising when the court orders a party to deposit security such as a bond.
// Rule 66 deals with receivership.
// Rule 67 deals with funds deposited in court, such as in interpleader actions.
// Rule 68 governs the offer of judgment procedure under which a party may make a confidential offer of settlement in an action for money damages.
// Rules 69 and 70 deal with execution of judgments and orders directing a party to take a specific act.Rule 71 deals with the effect of judgments on persons who are not parties to the action.
// Title IX – Special Proceedings
// Rules 71.1 to 76.
// Chapter IX currently deals with special types of litigation that may take place in the federal courts.A former version of Chapter IX, contained in the original Rules of Civil Procedure, dealt with appeals from a District Court to a United States Court of Appeals.These rules were abrogated in 1967 when they were superseded by the Federal Rules of Appellate Procedure, a separate set of rules specifically governing the Courts of Appeals.
// Rule 71.1 deals with procedure in condemnation actions.
// Rule 72 sets forth procedures for matters before United States magistrate judges, including both "dispositive" and "nondispositive" matters, and provides for review of the magistrate judge's decision by a District Judge.
// Rule 73 provides that Magistrate Judges may preside over certain trials consistent with statute and upon the consent of all parties.
// At present, there are no rules numbered 74 through 76.
// Title X.District Courtsand Clerks: Conducting Business; Issuing Orders
// Rules 77 to 80
// Title XI.General Provisions
// Rules 81 to 86
// Title XIII – Supplemental Rules for Admiralty or Maritime Claims and Asset Forfeiture Actions
// Rule A outlines the scope and application of the supplementary rules in respect to certain remedies under admiralty and maritime claims, forfeiture actions in rem, and the procedure in statutory condemnation proceedings analogous to maritime actions.
// Rule B deals with attachmentand garnishment in in personam actions.
// Rule C applies to actions in rem to enforce maritime liens or pursuant to federal statute which provides for a maritime actions in rem.
// Rule D deals with possessory, petitory, and partition actions in admiralty actions.
// Rule E applies to actions in personam with process of maritime attachmentand garnishment, actions in rem, and petitory, possessory, and partition actions.
// Rule F relates to limitation of liability actions in relation to vessel owners.
// Rule G deals with forfeiture actions in rem arising from federal statute.

// Function to get a summary of the given text
string _NLU::CreateSummary(string text)
{
    string model = "llama3";
    string prompt = "Create a summary based on the given text: " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    return response;
}

// The goal is to iterate through the entire OpenSource Dictionary checking if the definition matches the input text
string* _NLU::DictionaryDefinitionCheck(string text)
{
    MYSQL* conn = nullptr;
    MYSQL_ROW row;
    MYSQL_RES* result;
    string sql1;
    string model = "llama3";
    string word;
    string word_type;
    string definition;
    string prompt;
    string response;
    string* words_return = new string[100];

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_dictionary_database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        sql1 = "SELECT * FROM entries;";
        mysql_query(conn, sql1.c_str());
        result = mysql_store_result(conn);

        while (row = mysql_fetch_row(result))
        {
            definition = row[2];
            prompt = "Check if the following definition matches the text and limit the response to yes or no: " + definition + ". " + text;
            response = _LLM::OllamaAPI(model, prompt, "NULL");
            response = _Parsers::LLM::LLama3Parse(response);
            string* words = _Utilities::String2Words(response);
            words = _Utilities::RemovePunctuationArr(words);
            words = _Utilities::ArrayOfStringsToLowercase(words);

            for (int x = 0; x < sizeof(words); x++)
            {
                if (words[x] == "yes")
                {
                    // Find the first available position in memory
                    for (int y = 0; y < sizeof(words); y++)
                    {
                        if (words_return[y].empty())
                        {
                            words_return[y] = word;
                            break;
                        }
                    }
                }
            }
        }
        return words_return;
    }
}

double* _NLU::getDictionaryVector(string word)
{
    MYSQL* conn = nullptr;
    MYSQL_ROW row;
    MYSQL_RES* result;
    //string mysql_username = "root";
    //string mysql_password = "Anaheim92801%";
    string vector_string;
    string sql1;
    string word_type;
    string definition;
    string vector;

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_dictionary_database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        sql1 = "SELECT * FROM entries2;";
        mysql_query(conn, sql1.c_str());
        result = mysql_store_result(conn);

        while (row = mysql_fetch_row(result))
        {
            if (_Utilities::toLowerWord(word) == _Utilities::toLowerWord(row[0]))
            {
                vector = row[3];
                double* parsed_vector = _Utilities::ParseVector(vector);
                return parsed_vector;
            }
        }
    }
}

//__global__ double* _NLU::CUDA::getDictionaryVector(string word)
//{
//
//}

double* _NLU::getSentenceVectors(string* sentence)
{
    MYSQL* conn = nullptr;
    MYSQL_ROW row;
    MYSQL_RES* result;
    string mysql_database = "dictionary";
    //string mysql_username = "root";
    //string mysql_password = "Anaheim92801%";
    string sql1;
    size_t size = sizeof(sentence);
    double* sentence_vector = new double[size];

    if (conn)
    {
        for (int x = 0; x <= sizeof(sentence); x++)
        {
            sql1 = "SELECT * FROM entries2;";
            mysql_query(conn, sql1.c_str());
            result = mysql_store_result(conn);

            while (row = mysql_fetch_row(result))
            {
                if (_Utilities::toLowerWord(sentence[x]) == _Utilities::toLowerWord(row[0]))
                {
                    double* parsed_vector = _Utilities::ParseVector(row[3]);
                    sentence_vector = _NLU::VectorAddition(sentence_vector, parsed_vector);
                    return sentence_vector;
                }
            }
        }
    }

    return nullptr;
}

//__global__ double* _NLU::CUDA::getSentenceVectors(string* sentence)
//{
//
//}

double* _NLU::getSentenceVectorsAdditive(string* sentence)
{
    MYSQL* conn ;
    MYSQL_ROW row;
    MYSQL_RES* result;
    //string mysql_database = "dictionary";
    //string mysql_username = "root";
    //string mysql_password = "Anaheim92801%";
    string sql1;
    size_t size = sizeof(sentence);
    double* sentence_vector = new double[size];

    if (conn)
    {
        for (int x = 0; x <= sizeof(sentence); x++)
        {
            sql1 = "SELECT * FROM entries2;";
            mysql_query(conn, sql1.c_str());
            result = mysql_store_result(conn);

            while (row = mysql_fetch_row(result))
            {
                if (_Utilities::toLowerWord(sentence[x]) == _Utilities::toLowerWord(row[0]))
                {
                    double* parsed_vector = _Utilities::ParseVector(row[4]);
                    sentence_vector = _NLU::VectorAddition(sentence_vector, parsed_vector);
                    return sentence_vector;
                }
            }
        }
    }

    return nullptr;
}

//__global__ double* _NLU::CUDA::getSentenceVectorsAdditive(string* sentence)
//{
//
//}

double* _NLU::getAdditiveVector(string word)
{
    MYSQL* conn = nullptr;
    MYSQL_ROW row;
    MYSQL_RES* result;
    string mysql_database = "dictionary";
    //string mysql_username = "root";
    //string mysql_password = "Anaheim92801%";
    string vector_string;
    string sql1;
    string word_type;
    string definition;
    string vector;

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        sql1 = "SELECT * FROM entries2;";
        mysql_query(conn, sql1.c_str());
        result = mysql_store_result(conn);

        while (row = mysql_fetch_row(result))
        {
            if (_Utilities::toLowerWord(word) == _Utilities::toLowerWord(row[0]))
            {
                double* parsed_vector = _Utilities::ParseVector(row[4]);
                return parsed_vector;
            }
        }
    }
}

//__global__ double* _NLU::CUDA::getAdditiveVector(string word)
//{
//
//}

double* _NLU::getVectorAdditiveAverage(string word)
{
    MYSQL* conn = nullptr;
    MYSQL_ROW row;
    MYSQL_RES* result;
    string mysql_database = "dictionary";
    //string mysql_username = "root";
    //string mysql_password = "Anaheim92801%";
    string vector_string;
    string sql1;

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        sql1 = "SELECT * FROM entries2;";
        mysql_query(conn, sql1.c_str());
        result = mysql_store_result(conn);

        while (row = mysql_fetch_row(result))
        {
            if (_Utilities::toLowerWord(word) == _Utilities::toLowerWord(row[0]))
            {
                double* parsed_vector = _Utilities::ParseVector(row[5]);
                return parsed_vector;
            }
        }
    }
}

//__global__ double* _NLU::CUDA::getVectorAdditiveAverage(string word)
//{
//
//}

double* _NLU::getSentenceVectorsAdditiveAverage(string* sentence)
{
    MYSQL* conn = nullptr;
    MYSQL_ROW row;
    MYSQL_RES* result;
    string mysql_database = "dictionary";
    //string mysql_username = "root";
    //string mysql_password = "Anaheim92801%";

    string vector_string;
    string sql1;
    string word;
    string word_type;
    string definition;
    string vector;
    //string* words_sentence = _Utilities::String2Words(sentence);
    size_t size = sizeof(sentence);
    double* sentence_vector = new double[size];

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        for (int x = 0; x <= sizeof(sentence); x++)
        {
            sql1 = "SELECT * FROM entries2;";
            mysql_query(conn, sql1.c_str());
            result = mysql_store_result(conn);

            while (row = mysql_fetch_row(result))
            {
                if (_Utilities::toLowerWord(sentence[x]) == _Utilities::toLowerWord(row[0]))
                {
                    double* parsed_vector = _Utilities::ParseVector(row[3]);
                    sentence_vector = _NLU::VectorAddition(sentence_vector, parsed_vector);
                }
            }
        }

        return sentence_vector;
    }
}

double* _NLU::getAverageVectorSentence(string* sentence)
{
    MYSQL* conn = nullptr;
    MYSQL_ROW row;
    MYSQL_RES* result;
    string mysql_database = "dictionary";
    //string mysql_username = "root";
    //string mysql_password = "Anaheim92801%";

    string vector_string;
    string sql1;
    string word;
    string word_type;
    string definition;
    string vector;
    size_t size = sizeof(sentence);
    double* sentence_vector = new double[size];
    double* sentence_average_vector = new double[300];

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        for (int x = 0; x <= sizeof(sentence); x++)
        {
            sql1 = "SELECT * FROM entries2;";
            mysql_query(conn, sql1.c_str());
            result = mysql_store_result(conn);

            while (row = mysql_fetch_row(result))
            {
                if (_Utilities::toLowerWord(sentence[x]) == _Utilities::toLowerWord(row[0]))
                {
                    double* parsed_vector = _Utilities::ParseVector(row[3]);
                    sentence_vector = _NLU::VectorAddition(sentence_vector, parsed_vector);
                }
            }
        }

        for (int y = 0; y <= 300; y++)
        {
            sentence_average_vector[y] = sentence_vector[y] / size;
        }

        return sentence_average_vector;
    }
}

//__global__ double* _NLU::CUDA::getAverageVectorSentence(string* sentence)
//{
//
//}

double* _NLU::VectorAddition(double* vector1, double* vector2)
{
    double total[300];

    for (int x = 0; x <= 300; x++)
    {
        total[x] = vector1[x] + vector2[x];
    }

    return total;
}

// Purpose: Open a POSTagged Wiki article from the database
// words[10000][7]:
//  words[x][0] = word
//  words[x][1] = word_type
//  words[x][2] = phrase_type
//  words[x][3] = clause_type
//  words[x][4] = sentence_type
//  words[x][5] = direct_object
//  words[x][6] = indirect_object
//  words[x][7] = object_of_preposition
string** getPOSTaggedArticle(string mysql_table, string mysql_database)
{
    MYSQL* conn = nullptr;
    MYSQL_ROW row;
    MYSQL_RES* result;
    string mysql_hostname = _Settings::GetMySQLHostname();
    string mysql_username = _Settings::GetMySQLUsername();
    string mysql_password = _Settings::GetMySQLPassword();
    string sql1;
    string** words = new string*[100];

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        sql1 = "SELECT * FROM ";
        sql1 += mysql_table;
        sql1 += ";";
        mysql_query(conn, sql1.c_str());
        result = mysql_store_result(conn);

        while (row = mysql_fetch_row(result))
        {
            for (int x = 0; x <= 10000; x++)
            {
                if (words[x][0] == "")
                {
                    words[x][0] = row[0];
                    words[x][1] = row[1];
                    words[x][2] = row[2];
                    words[x][3] = row[3];
                    words[x][4] = row[4];
                    words[x][5] = row[5];
                    words[x][6] = row[6];
                    words[x][7] = row[7];
                }
            }
        }

        return words;
    }
}