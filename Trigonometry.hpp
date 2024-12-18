#pragma once

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

using namespace std;

class _Trigonometry
{
public:
    
    class Terms
    {
    public:
        static string A_BiForm(string text);
        static string Abscissa(string text);
        static string AbsoluteValue(string text);
        static string AbsoluteValueEquation(string text);
        static string AbsoluteValueFunction(string text);
        static string AbsoluteValueInequality(string text);
        static string AdjacentAngles(string text);
        static string AdjacentSides(string text);
        static string AlgebraicEquation(string text);
        static string AlgebraicExpression(string text);
        static string AlgebraicRepresentation(string text);
        static string Algorithm(string text);
        static string AmbiguousCase(string text);
        static string Amplitude(string text);
        static string Analyze(string text);
        static string Angle(string text);
        static string AngleInStandardPosition(string text);
        static string AngleOfDepression(string text);
        static string AngleOfElevation(string text);
        static string Antilogarithm(string text);
        static string ApproximateValue(string text);
        static string ArcLength(string text);
        static string Arccosine(string text);
        static string Arcsine(string text);
        static string Arctangent(string text);
        static string Argument(string text);
        static string ArithmeticSequence(string text);
        static string ArithmeticSeries(string text);
        static string Asymptote(string text);
        static string BaseOfALogarithmicFunction(string text);
        static string BaseOfAnExponentialFunction(string text);
        static string BernouliExperiments(string text);
        static string BiasedSample(string text);
        static string Bimodal(string text);
        static string BinomialExpansion(string text);
        static string BinomialProbabilityFormula(string text);
        static string BinomialTheorem(string text);
        static string BivariateData(string text);
        static string CenterRadiusEquationOfACircle(string text);
        static string CentralAngle(string text);
        static string Circle(string text);
        static string CircularFunction(string text);
        static string Coefficient(string text);
        static string Cofunction(string text);
        static string Combination(string text);
        static string CommonDifference(string text);
        static string CommonFactor(string text);
        static string CommonLogarithm(string text);
        static string CommonRatio(string text);
        static string CompletingTheSquare(string text);
        static string ComplexFraction(string text);
        static string ComplexNumber(string text);
        static string CompositionOfFunctions(string text);
        static string CompoundEvent(string text);
        static string CompoundInterest(string text);
        static string Conjecture(string text);
        static string Conjugate(string text);
        static string ConstantFunction(string text);
        static string ControlledExperiment(string text);
        static string CorrelationCoefficient(string text);
        static string Cosecant(string text);
        static string Cosine(string text);
        static string Cotangent(string text);
        static string CoterminalAngles(string text);
        static string Counterexample(string text);
        static string DegreeMeasure(string text);
        static string DegreeOfAMonomial(string text);
        static string DegreeOfAPolynomial(string text);
        static string DifferenceOfTwoPerfectSquares(string text);
        static string DirectVariation(string text);
        static string Discriminant(string text);
        static string Domain(string text);
        static string DoubleAndHalfAngleFormulasForTrigonometricFunctions(string text);
        static string DoubleRoot(string text);
        static string E(string text);
        static string Equation(string text);
        static string EquivalentForms(string text);
        static string ExactAnswer(string text);
        static string ExactValue(string text);
        static string ExpandABinomial(string text);
        static string ExperimentalProbability(string text);
        static string ExplicitFormula(string text);
        static string ExponentialForm(string text);
        static string ExponentialFunction(string text);
        static string Factor(string text);
        static string FactorVerb(string text);
        static string FractionalExponent(string text);
        static string FrequencyTable(string text);
        static string Function(string text);
        static string GeometricRepresentationOfTheCircularFunctions(string text);
        static string GeometricSequence(string text);
        static string GeometricSeries(string text);
        static string Geometry(string text);
        static string GraphicalRepresentation(string text);
        static string GraphicalSolutionOfASystemOfEquations(string text);
        static string GreatestCommonFactor(string text);
        static string GrowthFactor(string text);
        static string HalfLife(string text);
        static string HorizontalLineTest(string text);
        static string I(string text);
        static string Identities(string text);
        static string Image(string text);
        static string ImaginaryNumber(string text);
        static string IndexOfARadical(string text);
        static string InductiveReasoning(string text);
        static string Interpolate(string text);
        static string InterquartileRange(string text);
        static string InverseFunction(string text);
        static string InverseOfAFunction(string text);
        static string InverseTrigonometricFunctions(string text);
        static string InverseVariation(string text);
        static string IrrationalNumber(string text);
        static string LawOfCosines(string text);
        static string LawOfSines(string text);
        static string LawsOfExponents(string text);
        static string LawsOfLogarithms(string text);
        static string LeastSquaresRegressionLine(string text);
        static string LinearEquation(string text);
        static string LinearRegression(string text);
        static string LinearSystem(string text);
        static string Logarithm(string text);
        static string LogarithmicForm(string text);
        static string Mean(string text);
        static string MeasureOfCentralAngle(string text);
        static string MeasureOfCentralTendency(string text);
        static string MeasuresOfDispersion(string text);
        static string Median(string text);
        static string Minute(string text);
        static string Mode(string text);
        static string MultipleRepresentations(string text);
        static string NatureOfTheRoots(string text);
        static string NegativeExponent(string text);
        static string NormalCurve(string text);
        static string NormalDistribution(string text);
        static string NthRoot(string text);
        static string NthTerm(string text);
        static string OneToOneFunction(string text);
        static string OntoFunction(string text);
        static string OppositeSideInARightTriangle(string text);
        static string Ordinate(string text);
        static string Outlier(string text);
        static string Parabola(string text);
        static string Parameter(string text);
        static string Percentile(string text);
        static string PeriodOfAFunction(string text);
        static string PeriodicFunction(string text);
        static string Permutation(string text);
        static string PhaseShift(string text);
        static string Pi(string text);
        static string PolynomialExpression(string text);
        static string PowersOfI(string text);
        static string PrincipalSquareRoot(string text);
        static string PythagoreanIdentities(string text);
        static string QuadrantalAngle(string text);
        static string QuadraticEquation(string text);
        static string QuadraticFormula(string text);
        static string QuadraticInequality(string text);
        static string Quartiles(string text);
        static string Radian(string text);
        static string RadianMeasure(string text);
        static string Radical(string text);
        static string RadicalEquation(string text);
        static string RadicalExpression(string text);
        static string RadicalForm(string text);
        static string Radicand(string text);
        static string RandomSample(string text);
        static string RangeOfAFunction(string text);
        static string RationalCoefficient(string text);
        static string RationalEquation(string text);
        static string RationalExpression(string text);
        static string RationalInequality(string text);
        static string RationalNumber(string text);
        static string RationalizeADenominator(string text);
        static string ReciprocalTrigonometricFunctions(string text);
        static string RectangularCoordinates(string text);
        static string RecursiveRule(string text);
        static string ReferenceAngle(string text);
        static string RegressionModel(string text);
        static string Relation(string text);
        static string ReplacementSet(string text);
        static string RestrictedDomain(string text);
        static string Resultant(string text);
        static string RootOfAnEquation(string text);
        static string SampleSpace(string text);
        static string ScatterPlot(string text);
        static string SecantOfAnAngle(string text);
        static string SectorOfACircle(string text);
        static string SigmaNotation(string text);
        static string Sine(string text);
        static string Slope(string text);
        static string SolutionSet(string text);
        static string StandardDeviationPopulation(string text);
        static string StandardDeviationSample(string text);
        static string StandardPositionOfAnAngle(string text);
        static string Subset(string text);
        static string SubstitutionProperty(string text);
        static string SubtractionPropertyOfEquality(string text);
        static string SumAndProductOfRootsOfAQuadraticEquation(string text);
        static string SumOfAFiniteGeometricSeries(string text);
        static string SumOfAFiniteArithmeticSeries(string text);
        static string SumOrDifferenceFormulasForTrigonometricFunctions(string text);
        static string Survey(string text);
        static string SystemOfEquations(string text);
        static string TangentOfAnAngle(string text);
        static string TerminalSideOfAnAngle(string text);
        static string TheoreticalProbability(string text);
        static string Transformation(string text);
        static string TransformationsOfFunctionsAndRelations(string text);
        static string TrigonometricEquation(string text);
        static string TrigonometricFunctions(string text);
        static string Undefined(string text);
        static string UnitCircle(string text);
        static string Univariate(string text);
        static string Variable(string text);
        static string VariancePopulation(string text);
        static string VarianceSample(string text);
        static string Vector(string text);
        static string VerticalLineTest(string text);
        static string ZeroOfAFunction(string text);
        static string ZeroProductProperty(string text);
    };
};