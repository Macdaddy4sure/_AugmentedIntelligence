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

class _Geometry
{
public:

    class Terms
    {
    public:
        static string AATriangleSimilarity(string text);
        static string AASTriangleCongruence(string text);
        static string ASATriangleCongruence(string text);
        static string Abscissa(string text);
        static string AcuteAngle(string text);
        static string AcuteTriangle(string text);
        static string AdditivePropertyOfEquality(string text);
        static string AdjacentAngles(string text);
        static string AdjacentSides(string text);
        static string AlgebraicRepresentation(string text);
        static string Algorithm(string text);
        static string AlternateInteriorAngles(string text);
        static string AltitudeOfACone(string text);
        static string AltitudeOfACylinder(string text);
        static string AltitudeOfAPrism(string text);
        static string AltitudeOfAPyramid(string text);
        static string AltitudeOfATrapezoid(string text);
        static string AltitudeOfATriangle(string text);
        static string AnalyticalGeometry(string text);
        static string AnalyticalGeometricProof(string text);
        static string AnalyticalRepresentationOfATransformation(string text);
        static string Analyze(string text);
        static string Angle(string text);
        static string AngleBisector(string text);
        static string AngleMeasure(string text);
        static string Antecedent(string text);
        static string Apothem(string text);
        static string ArcLength(string text);
        static string ArcMeasure(string text);
        static string ArcOfACircle(string text);
        static string AreaOfAPolygon(string text);
        static string Argument(string text);
        static string Axiom(string text);
        static string AxisOfSymmetry(string text);
        static string Base(string text);
        static string Betweeness(string text);
        static string Biconditional(string text);
        static string CartesianCoordinates(string text);
        static string CartesianPlane(string text);
        static string CenterOfADilation(string text);
        static string CenterOfGravity(string text);
        static string CenterOfARegularPolygon(string text);
        static string CenterOfARotation(string text);
        static string CentralAngle(string text);
        static string CentralAngleOfARegularPolygon(string text);
        static string Centroid(string text);
        static string Chord(string text);
        static string Circle(string text);
        static string Circumcenter(string text);
        static string Circumcircle(string text);
        static string Circumference(string text);
        static string Clockwise(string text);
        static string Closure(string text);
        static string CollinearPoints(string text);
        static string CommonTangents(string text);
        static string ComplementaryAngles(string text);
        static string CompositionOfFunctions(string text);
        static string CompoundLocus(string text);
        static string CompoundStatement(string text);
        static string ConcavePolygon(string text);
        static string ConcentricCircles(string text);
        static string Conclusion(string text);
        static string Concurrence(string text);
        static string ConditionalStatement(string text);
        static string Cone(string text);
        static string Conjecture(string text);
        static string Congruent(string text);
        static string ConicSections(string text);
        static string Consistency(string text);
        static string ConstantOfProportionality(string text);
        static string Construct(string text);
        static string Constraints(string text);
        static string Contradiction(string text);
        static string ContrapositiveOfAStatement(string text);
        static string ConverseOfAStatement(string text);
        static string ConvexPolygon(string text);
        static string CoordinateGeometry(string text);
        static string CoordinatePlane(string text);
        static string Coplanar(string text);
        static string CorrespondingAngles(string text);
        static string CorrespondingParts(string text);
        static string Counterclockwise(string text);
        static string Crossection(string text);
        static string Cube(string text);
        static string Decagon(string text);
        static string DeductiveReasoning(string text);
        static string Diagonal(string text);
        static string Diameter(string text);
        static string DiameterOfASphere(string text);
        static string DihedralAngle(string text);
        static string Dilation(string text);
        static string DirectTransformation(string text);
        static string DistanceBetweenTwoPoints(string text);
        static string DistanceBetweenAPointAndALine(string text);
        static string DistanceBetweenTwoParallelLines(string text);
        static string Dodecahedron(string text);
        static string DynamicGeometrySoftware(string text);
        static string EdgeOfAPolyhedron(string text);
        static string Ellipse(string text);
        static string Endpoint(string text);
        static string Equiangular(string text);
        static string Equidistant(string text);
        static string EquilateralPolygon(string text);
        static string EquilateralTriangle(string text);
        static string EquivalenceRelation(string text);
        static string EuclideanGeometry(string text);
        static string EuclideanParallelPostulate(string text);
        static string EulerLine(string text);
        static string ExternalSegmentOfASecant(string text);
        static string ExteriorOfAGeometricFigure(string text);
        static string ExteriorAngleOfAPolygon(string text);
        static string FaceOfAPolyhedron(string text);
        static string FixedPoint(string text);
        static string FootOfAnAltitude(string text);
        static string Function(string text);
        static string GeometricInequality(string text);
        static string GeometricMean(string text);
        static string GeometricProbability(string text);
        static string GeometricRepresentationOfTheCircularFunctions(string text);
        static string GeometricSequence(string text);
        static string Geometry(string text);
        static string GlideReflection(string text);
        static string GoldenRatio(string text);
        static string GoldenRectangle(string text);
        static string GraphicalRepresentation(string text);
        static string GreatCircle(string text);
        static string HalfTurn(string text);
        static string Hemisphere(string text);
        static string HeronsFormula(string text);
        static string Hexagon(string text);
        static string Hyperbola(string text);
        static string Hypotenuse(string text);
        static string HypotenuseAndLegTriangleCongruence(string text);
        static string Hypothesis(string text);
        static string Icosahedron(string text);
        static string IdentityElements(string text);
        static string Image(string text);
        static string IncenterOfATriangle(string text);
        static string IncludedAngle(string text);
        static string IndirectProof(string text);
        static string InductiveReasoning(string text);
        static string InscribedAngle(string text);
        static string InscribedCircle(string text);
        static string InterceptedArc(string text);
        static string Interior(string text);
        static string IntersectingLines(string text);
        static string IntersectionOfSets(string text);
        static string Invariant(string text);
        static string InverseOfAStatement(string text);
        static string Isometry(string text);
        static string IsoscelesTrapezoid(string text);
        static string IsoscelesTriangle(string text);
        static string LateralAreaOfAPrism(string text);
        static string LateralEdge(string text);
        static string LateralFace(string text);
        static string LengthOfLineSegment(string text);
        static string LineSegment(string text);
        static string LineSymmetry(string text);
        static string LinearPairOfAngles(string text);
        static string LocusOfPoints(string text);
        static string LogicalEquivalence(string text);
        static string MajorArc(string text);
        static string MeanProportional(string text);
        static string MeasureOfAnArc(string text);
        static string MedianOfATrapezoid(string text);
        static string MedianOfATriangle(string text);
        static string Midpoint(string text);
        static string Midsegment(string text);
        static string MinorArc(string text);
        static string Negation(string text);
        static string Net(string text);
        static string NGon(string text);
        static string NonCollinearPoints(string text);
        static string NonCoplanarPoints(string text);
        static string NonEuclideanGeometry(string text);
        static string RiemannianGeometry(string text);
        static string HyperbolicGeometry(string text);
        static string ObliqueLineAndAPlane(string text);
        static string ObtuseAngle(string text);
        static string ObtuseTriangle(string text);
        static string Octagon(string text);
        static string Octahedron(string text);
        static string OneToOneFunction(string text);
        static string OppositeRays(string text);
        static string OppositeSideInARightTriangle(string text);
        static string OppositeTransformation(string text);
        static string OrderedPair(string text);
        static string OrderedTriple(string text);
        static string Ordinate(string text);
        static string Orientation(string text);
        static string Origin(string text);
        static string Orthocenter(string text);
        static string Parabola(string text);
        static string ParagraphProof(string text);
        static string ParallelPiped(string text);
        static string ParallelLines(string text);
        static string ParallelPlanes(string text);
        static string ParallelPostulate(string text);
        static string Parallelogram(string text);
        static string Parameter(string text);
        static string Pentagon(string text);
        static string Perimeter(string text);
        static string PerpendicularBisector(string text);
        static string PerpendicularLines(string text);
        static string PerpendicularPlanes(string text);
        static string Pi(string text);
        static string Plane(string text);
        static string PlatonicSolids(string text);
        static string Point(string text);
        static string PointOfConcurrency(string text);
        static string PointOfTangency(string text);
        static string PointSlopeEquationOfALine(string text);
        static string PointSymmetry(string text);
        static string Polygon(string text);
        static string Polyhedron(string text);
        static string PositionVector(string text);
        static string Postulate(string text);
        static string Preimage(string text);
        static string Premise(string text);
        static string Prism(string text);
        static string ProofByContradiction(string text);
        static string Proportional(string text);
        static string Pyramid(string text);
        static string PythagoreanTheorem(string text);
        static string Quadrant(string text);
        static string QuadraticEquation(string text);
        static string Quadrilateral(string text);
        static string Radical(string text);
        static string Radius(string text);
        static string Ray(string text);
        static string Reason(string text);
        static string Rectangle(string text);
        static string RectangularCoordinates(string text);
        static string Reflection(string text);
        static string ReflexivePropertyOfEquality(string text);
        static string RegularPolygon(string text);
        static string RegularPyramid(string text);
        static string RemoteInteriorAngles(string text);
        static string RestrictedDomain(string text);
        static string Rhombus(string text);
        static string RightAngle(string text);
        static string RightCircularCylinder(string text);
        static string RightCircularCone(string text);
        static string RightPyramid(string text);
        static string RightTriangle(string text);
        static string Rotation(string text);
        static string RotationalSymmetry(string text);
        static string SASTriangleCongruence(string text);
        static string SASSimilarityTheorem(string text);
        static string ScaleneTriangle(string text);
        static string SecantOfACircle(string text);
        static string SectorOfACircle(string text);
        static string SegmentOfACircle(string text);
        static string SemiCircle(string text);
        static string Set(string text);
        static string SimilarPolygons(string text);
        static string SkewLines(string text);
        static string SlantHeight(string text);
        static string SlantHeightOfACone(string text);
        static string Slope(string text);
        static string SlopeEquation(string text);
        static string Sphere(string text);
        static string Square(string text);
        static string SSSTriangleCongruence(string text);
        static string Straightedge(string text);
        static string SubstitutionProperty(string text);
        static string SubtractionPropertyOfEquality(string text);
        static string SupplementaryAngles(string text);
        static string SurfaceArea(string text);
        static string SymmetricPropertyOfEquality(string text);
        static string InternalTangentCircles(string text);
        static string ExternalTangentCircles(string text);
        static string TangentLineToACircle(string text);
        static string TangentSegment(string text);
        static string Tessellation(string text);
        static string Tetrahedron(string text);
        static string Theorem(string text);
        static string ThreeDimensionalSpace(string text);
        static string Transformation(string text);
        static string TransformationalGeometry(string text);
        static string TransformationalProof(string text);
        static string TransitivePropertyOfEquality(string text);
        static string Translation(string text);
        static string Transversal(string text);
        static string Trapezoid(string text);
        static string TriangleInequalityTheorem(string text);
        static string TrichotomyProperty(string text);
        static string TrigonometryOfTheRightTriangle(string text);
        static string TruthValue(string text);
        static string TwoColumnProof(string text);
        static string TwoDimensionalSpace(string text);
        static string UndefinedTerms(string text);
        static string UnionOfSets(string text);
        static string ValidArgument(string text);
        static string Vector(string text);
        static string VertexOfAnAngle(string text);
        static string VertexOfAPolygon(string text);
        static string VertexOfAConeOrPyramid(string text);
        static string VerticalAngles(string text);
        static string Volume(string text);
        static string XAxis(string text);
        static string XCoordinate(string text);
        static string XIntercept(string text);
        static string YAxis(string text);
        static string YCoordinate(string text);
        static string YIntercept(string text);
        static string ZAxis(string text);
        static string ZCoordinate(string text);
        static string ZeroProductProperty(string text);
    };
};