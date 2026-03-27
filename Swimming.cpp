/*
    Copyright(C) 2026 Tyler Crockett | Macdaddy4sure.ai

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
#include "Swimming.hpp"
#include "Kinesthetics.hpp"
#include "Settings.hpp"
#include "Thought.hpp"
#include "Working-Memory.hpp"
#include "Utilities.hpp"

using namespace std;

string current_stroke;

// Constants
const double PI = 3.141592653589793238463;
const double SMOOTHING_FACTOR = 10.0; // Smoothing factor (s)
const double THETA_OFFSET = PI / 4; // Offset angle (θ_offset) in radians
const double AMPLITUDE = PI / 2; // Amplitude of the sinusoidal movement (A) in radians
const double OMEGA = 2 * PI; // Angular frequency (ω) in radians per second
const double KNEE_AMPLITUDE = PI / 4; // Amplitude of the knee joint movement(φ) in radians

// Arm movement parameters
const double ARM_OFFSET = 0.5; // rad (30 degrees)
const double ARM_AMPLITUDE = 0.2; // rad (11.46 degrees)
const double ARM_OMEGA = 1.5; // rad/s

// Elbow joint angle parameters
const double ELBOW_AMPLITUDE = 0.3; // rad (17.19 degrees)

// Leg movement parameters
const double LEG_OFFSET = 0.8; // rad (45.83 degrees)
const double LEG_AMPLITUDE = 0.4; // rad (22.92 degrees)
const double LEG_OMEGA = 1.2; // rad/s

const double BACKSTROKE_ARM_AMPLITUDE = PI / 2; // Amplitude of the arm movement (A) in radians
const double BACKSTROKE_ARM_OMEGA = OMEGA; // Angular frequency (ω) in radians per second
const double BACKSTROKE_KNEE_AMPLITUDE = PI / 4; // Amplitude of the knee joint movement(φ) in radians
const double BACKSTROKE_LEG_AMPLITUDE = PI / 2; // Amplitude of the leg movement (A) in radians
const double BACKSTROKE_LEG_OMEGA = OMEGA; // Angular frequency (ω) in radians per second

// Knee joint angle parameters
//const double KNEE_AMPLITUDE = 0.6; // rad (34.38 degrees)

void _Swimming::Swimming()
{
    thread stroke();
}

void _Swimming::EggBeater()
{
    current_stroke = "egg beater";
    // Simulation options
    const int NUM_STEPS = 1000; // Number of time steps
    double dt = 0.01; // Time step size (s)

    // Initial conditions
    double theta_L = THETA_OFFSET;
    double theta_R = THETA_OFFSET - AMPLITUDE * std::cos(OMEGA * 0);
    double phi_L = KNEE_AMPLITUDE * std::sin(2 * OMEGA * 0);
    double phi_R = -KNEE_AMPLITUDE * std::cos(2 * OMEGA * 0);

    // Arrays to store the angles and times
    double* theta_L_array = new double[NUM_STEPS];
    double* theta_R_array = new double[NUM_STEPS];
    double* phi_L_array = new double[NUM_STEPS];
    double* phi_R_array = new double[NUM_STEPS];
    double* time_array = new double[NUM_STEPS];

    // Simulate the egg beater stroke
    for (int i = 0; i < NUM_STEPS; i++)
    {
        // Store the current angles and time in arrays
        theta_L_array[i] = theta_L;
        theta_R_array[i] = theta_R;
        phi_L_array[i] = phi_L;
        phi_R_array[i] = phi_R;
        time_array[i] = i * dt;

        // Calculate the derivatives using Euler's method
        double dtheta_L_dt, dtheta_R_dt, dphi_L_dt, dphi_R_dt;
        _Swimming::eggBeaterStroke(theta_L, theta_R, phi_L, phi_R, i * dt, dtheta_L_dt, dtheta_R_dt, dphi_L_dt, dphi_R_dt);

        // Update the angles
        theta_L += dtheta_L_dt * dt;
        theta_R += dtheta_R_dt * dt;
        phi_L += dphi_L_dt * dt;
        phi_R += dphi_R_dt * dt;
    }

    // Print the results
    std::cout << "Time (s)\tLeft Leg Angle (rad)\tRight Leg Angle(rad)\tLeft Knee Joint Angle(rad)\tRight Knee Joint Angle(rad)" << std::endl;
    
    for (int i = 0; i < NUM_STEPS; i++)
    {
        std::cout << time_array[i] << "\t" << theta_L_array[i] << "\t\t" << theta_R_array[i] << "\t\t" << phi_L_array[i] << "\t\t" << phi_R_array[i] << std::endl;
    }

    // Clean up memory
    delete[] theta_L_array;
    delete[] theta_R_array;
    delete[] phi_L_array;
    delete[] phi_R_array;
    delete[] time_array;
}

void _Swimming::Crawl()
{
    current_stroke = "crawl";

    const int NUM_STEPS = 100; // Number of time steps
    double dt = 0.01; // Time step size (in seconds)
    double t = 0.0; // Initial time

    double theta_L = THETA_OFFSET; // Initial left arm angle
    double theta_R = THETA_OFFSET - AMPLITUDE * std::sin(OMEGA * t); // Initial right arm angle

    // Arrays to store the angles and times
    double* theta_L_array = new double[NUM_STEPS];
    double* theta_R_array = new double[NUM_STEPS];
    double* time_array = new double[NUM_STEPS];

    for (int i = 0; i < NUM_STEPS; i++)
    {
        // Store the current angles and time in arrays
        theta_L_array[i] = theta_L;
        theta_R_array[i] = theta_R;
        time_array[i] = t;

        // Calculate the derivatives using Euler's method
        double dtheta_L_dt, dtheta_R_dt;
        _Swimming::crawlSwimStroke(theta_L, theta_R, t, dtheta_L_dt, dtheta_R_dt);
        theta_L += dtheta_L_dt * dt;
        theta_R += dtheta_R_dt * dt;

        // Update the time
        t += dt;
    }

    // Print the results
    std::cout << "Time (s)\tLeft Arm Angle (rad)\tRight Arm Angle (rad)" << std::endl;

    for (int i = 0; i < NUM_STEPS; i++)
    {
        std::cout << time_array[i] << "\t" << theta_L_array[i] << "\t\t" << theta_R_array[i] << std::endl;
    }

    // Clean up memory
    delete[] theta_L_array;
    delete[] theta_R_array;
    delete[] time_array;

    return;
}

void _Swimming::Butterfly()
{
    current_stroke = "butterfly";

    // Simulation options
    const int NUM_STEPS = 1000; // Number of time steps
    double dt = 0.01; // Time step size (s)

    // Initial conditions
    double theta_L = THETA_OFFSET;
    double theta_R = THETA_OFFSET - AMPLITUDE * std::cos(OMEGA * 0);
    double phi_L = KNEE_AMPLITUDE * std::sin(2 * OMEGA * 0);
    double phi_R = -KNEE_AMPLITUDE * std::cos(2 * OMEGA * 0);

    // Arrays to store the angles and times
    double* theta_L_array = new double[NUM_STEPS];
    double* theta_R_array = new double[NUM_STEPS];
    double* phi_L_array = new double[NUM_STEPS];
    double* phi_R_array = new double[NUM_STEPS];
    double* time_array = new double[NUM_STEPS];

    // Simulate the butterfly stroke
    for (int i = 0; i < NUM_STEPS; i++)
    {
        // Store the current angles and time in arrays
        theta_L_array[i] = theta_L;
        theta_R_array[i] = theta_R;
        phi_L_array[i] = phi_L;
        phi_R_array[i] = phi_R;
        time_array[i] = i * dt;

        // Calculate the derivatives using Euler's method
        double dtheta_L_dt, dtheta_R_dt, dphi_L_dt, dphi_R_dt;
        _Swimming::butterflyStroke(theta_L, theta_R, phi_L, phi_R, i * dt, dtheta_L_dt, dtheta_R_dt, dphi_L_dt, dphi_R_dt);

        // Update the angles
        theta_L += dtheta_L_dt * dt;
        theta_R += dtheta_R_dt * dt;
        phi_L += dphi_L_dt * dt;
        phi_R += dphi_R_dt * dt;
    }

    // Print the results
    std::cout << "Time (s)\tLeft Leg Angle (rad)\tRight Leg Angle (rad)\tLeft Knee Joint Angle (rad)\tRight Knee Joint Angle(rad)" << std::endl;
    for (int i = 0; i < NUM_STEPS; i++)
    {
        std::cout << time_array[i] << "\t" << theta_L_array[i] << "\t\t" << theta_R_array[i] << "\t\t" << phi_L_array[i] << "\t\t" << phi_R_array[i] << std::endl;
    }

    // Clean up memory
    delete[] theta_L_array;
    delete[] theta_R_array;
    delete[] phi_L_array;
    delete[] phi_R_array;
    delete[] time_array;
}

void _Swimming::CrawlFlipTurn()
{
    current_stroke = "crawl turn";
}

void _Swimming::BreastStroke()
{
    current_stroke = "breast stroke";
    // Simulation options
    const int NUM_STEPS = 1000; // Number of time steps
    double dt = 0.01; // Time step size (s)

    // Initial conditions for arms
    double theta_arm_L = ARM_OFFSET;
    double theta_arm_R = ARM_OFFSET - ARM_AMPLITUDE * std::cos(ARM_OMEGA * 0);
    double phi_arm_L = ELBOW_AMPLITUDE * std::sin(2 * ARM_OMEGA * 0);
    double phi_arm_R = -ELBOW_AMPLITUDE * std::cos(2 * ARM_OMEGA * 0);

    // Initial conditions for legs
    double theta_leg_L = LEG_OFFSET;
    double theta_leg_R = LEG_OFFSET - LEG_AMPLITUDE * std::cos(LEG_OMEGA * 0);
    double phi_leg_L = KNEE_AMPLITUDE * std::sin(2 * LEG_OMEGA * 0);
    double phi_leg_R = -KNEE_AMPLITUDE * std::cos(2 * LEG_OMEGA * 0);

    // Arrays to store the angles and times
    double* theta_arm_L_array = new double[NUM_STEPS];
    double* theta_arm_R_array = new double[NUM_STEPS];
    double* phi_arm_L_array = new double[NUM_STEPS];
    double* phi_arm_R_array = new double[NUM_STEPS];

    double* theta_leg_L_array = new double[NUM_STEPS];
    double* theta_leg_R_array = new double[NUM_STEPS];
    double* phi_leg_L_array = new double[NUM_STEPS];
    double* phi_leg_R_array = new double[NUM_STEPS];

    double* time_array = new double[NUM_STEPS];

    // Simulate the breaststroke
    for (int i = 0; i < NUM_STEPS; i++)
    {
        // Store the current angles and time in arrays
        theta_arm_L_array[i] = theta_arm_L;
        theta_arm_R_array[i] = theta_arm_R;
        phi_arm_L_array[i] = phi_arm_L;
        phi_arm_R_array[i] = phi_arm_R;

        theta_leg_L_array[i] = theta_leg_L;
        theta_leg_R_array[i] = theta_leg_R;
        phi_leg_L_array[i] = phi_leg_L;
        phi_leg_R_array[i] = phi_leg_R;

        time_array[i] = i * dt;

        // Calculate the derivatives using Euler's method
        double dtheta_arm_L_dt, dtheta_arm_R_dt, dphi_arm_L_dt, dphi_arm_R_dt;
        double dtheta_leg_L_dt, dtheta_leg_R_dt, dphi_leg_L_dt, dphi_leg_R_dt;
        _Swimming::breastSwimStroke(theta_arm_L, theta_arm_R, phi_arm_L, phi_arm_R,
            theta_leg_L, theta_leg_R, phi_leg_L, phi_leg_R,
            i * dt, dtheta_arm_L_dt, dtheta_arm_R_dt, dphi_arm_L_dt, dphi_arm_R_dt,
            dtheta_leg_L_dt, dtheta_leg_R_dt, dphi_leg_L_dt, dphi_leg_R_dt);

        // Update the angles
        theta_arm_L += dtheta_arm_L_dt * dt;
        theta_arm_R += dtheta_arm_R_dt * dt;
        phi_arm_L += dphi_arm_L_dt * dt;
        phi_arm_R += dphi_arm_R_dt * dt;

        theta_leg_L += dtheta_leg_L_dt * dt;
        theta_leg_R += dtheta_leg_R_dt * dt;
        phi_leg_L += dphi_leg_L_dt * dt;
        phi_leg_R += dphi_leg_R_dt * dt;
    }

    // Print the results
    std::cout << "Time (s)\tLeft Arm Angle (rad)\tRight Arm Angle (rad)\tLeft Elbow Joint Angle (rad)\tRight Elbow Joint Angle(rad)" << std::endl;
    for (int i = 0; i < NUM_STEPS; i++)
    {
        std::cout << time_array[i] << "\t" << theta_arm_L_array[i] << "\t\t" << theta_arm_R_array[i] << "\t\t" << phi_arm_L_array[i] << "\t\t" << phi_arm_R_array[i] << std::endl;
    }

    std::cout << "Time (s)\tLeft Leg Angle (rad)\tRight Leg Angle (rad)\tLeft Knee Joint Angle (rad)\tRight Knee Joint Angle(rad)" << std::endl;
    for (int i = 0; i < NUM_STEPS; i++)
    {
        std::cout << time_array[i] << "\t" << theta_leg_L_array[i] << "\t\t" << theta_leg_R_array[i] << "\t\t" << phi_leg_L_array[i] << "\t\t" << phi_leg_R_array[i] << std::endl;
    }

    // Clean up memory
    delete[] theta_arm_L_array;
    delete[] theta_arm_R_array;
    delete[] phi_arm_L_array;
    delete[] phi_arm_R_array;

    delete[] theta_leg_L_array;
    delete[] theta_leg_R_array;
    delete[] phi_leg_L_array;
    delete[] phi_leg_R_array;

    delete[] time_array;
}

void _Swimming::BreastStrokeTurn()
{
    current_stroke = "breast stroke";
}

void _Swimming::BackStroke()
{
    current_stroke = "back stroke";
    // Simulation options
    const int NUM_STEPS = 1000; // Number of time steps
    double dt = 0.01; // Time step size (s)

    // Initial conditions for arms
    double theta_arm_L = THETA_OFFSET;
    double theta_arm_R = THETA_OFFSET - BACKSTROKE_ARM_AMPLITUDE * std::cos(BACKSTROKE_ARM_OMEGA * 0);
    double phi_arm_L = ELBOW_AMPLITUDE * std::sin(2 * BACKSTROKE_ARM_OMEGA * 0);
    double phi_arm_R = -ELBOW_AMPLITUDE * std::cos(2 * BACKSTROKE_ARM_OMEGA * 0);

    // Initial conditions for legs
    double theta_leg_L = THETA_OFFSET;
    double theta_leg_R = THETA_OFFSET - BACKSTROKE_LEG_AMPLITUDE * std::cos(BACKSTROKE_LEG_OMEGA * 0);
    double phi_leg_L = BACKSTROKE_KNEE_AMPLITUDE * std::sin(2 * BACKSTROKE_LEG_OMEGA * 0);
    double phi_leg_R = -BACKSTROKE_KNEE_AMPLITUDE * std::cos(2 * BACKSTROKE_LEG_OMEGA * 0);

    // Arrays to store the angles and times
    double* theta_arm_L_array = new double[NUM_STEPS];
    double* theta_arm_R_array = new double[NUM_STEPS];
    double* phi_arm_L_array = new double[NUM_STEPS];
    double* phi_arm_R_array = new double[NUM_STEPS];

    double* theta_leg_L_array = new double[NUM_STEPS];
    double* theta_leg_R_array = new double[NUM_STEPS];
    double* phi_leg_L_array = new double[NUM_STEPS];
    double* phi_leg_R_array = new double[NUM_STEPS];

    double* time_array = new double[NUM_STEPS];

    // Simulate the backstroke
    for (int i = 0; i < NUM_STEPS; i++)
    {
        // Store the current angles and time in arrays
        theta_arm_L_array[i] = theta_arm_L;
        theta_arm_R_array[i] = theta_arm_R;
        phi_arm_L_array[i] = phi_arm_L;
        phi_arm_R_array[i] = phi_arm_R;

        theta_leg_L_array[i] = theta_leg_L;
        theta_leg_R_array[i] = theta_leg_R;
        phi_leg_L_array[i] = phi_leg_L;
        phi_leg_R_array[i] = phi_leg_R;

        time_array[i] = i * dt;

        // Calculate the derivatives using Euler's method
        double dtheta_arm_L_dt, dtheta_arm_R_dt, dphi_arm_L_dt, dphi_arm_R_dt;
        double dtheta_leg_L_dt, dtheta_leg_R_dt, dphi_leg_L_dt, dphi_leg_R_dt;
        _Swimming::backstrokeSwimStroke(theta_arm_L, theta_arm_R, phi_arm_L, phi_arm_R,
            theta_leg_L, theta_leg_R, phi_leg_L, phi_leg_R,
            i * dt, dtheta_arm_L_dt, dtheta_arm_R_dt, dphi_arm_L_dt, dphi_arm_R_dt,
            dtheta_leg_L_dt, dtheta_leg_R_dt, dphi_leg_L_dt, dphi_leg_R_dt);

        // Update the angles
        theta_arm_L += dtheta_arm_L_dt * dt;
        theta_arm_R += dtheta_arm_R_dt * dt;
        phi_arm_L += dphi_arm_L_dt * dt;
        phi_arm_R += dphi_arm_R_dt * dt;

        theta_leg_L += dtheta_leg_L_dt * dt;
        theta_leg_R += dtheta_leg_R_dt * dt;
        phi_leg_L += dphi_leg_L_dt * dt;
        phi_leg_R += dphi_leg_R_dt * dt;
    }

    // Print the results
    std::cout << "Time (s)\tLeft Arm Angle (rad)\tRight Arm Angle (rad)\tLeft Elbow Joint Angle (rad)\tRight Elbow Joint Angle(rad)" << std::endl;
    for (int i = 0; i < NUM_STEPS; i++)
    {
        std::cout << time_array[i] << "\t" << theta_arm_L_array[i] << "\t\t" << theta_arm_R_array[i] << "\t\t" << phi_arm_L_array[i] << "\t\t" << phi_arm_R_array[i] << std::endl;
    }

    std::cout << "Time (s)\tLeft Leg Angle (rad)\tRight Leg Angle (rad)\tLeft Knee Joint Angle (rad)\tRight Knee Joint Angle(rad)" << std::endl;
    for (int i = 0; i < NUM_STEPS; i++)
    {
        std::cout << time_array[i] << "\t" << theta_leg_L_array[i] << "\t\t" << theta_leg_R_array[i] << "\t\t" << phi_leg_L_array[i] << "\t\t" << phi_leg_R_array[i] << std::endl;
    }

    // Clean up memory
    delete[] theta_arm_L_array;
    delete[] theta_arm_R_array;
    delete[] phi_arm_L_array;
    delete[] phi_arm_R_array;

    delete[] theta_leg_L_array;
    delete[] theta_leg_R_array;
    delete[] phi_leg_L_array;
    delete[] phi_leg_R_array;

    delete[] time_array;
}

void _Swimming::BackStrokeTurn()
{
    current_stroke = "backstroke turn";

}

void _Swimming::ElementaryBackstroke()
{
    current_stroke = "elementary backstroke";
}

void _Swimming::SideStroke()
{
	current_stroke = "side stroke";
}

// Function to calculate the derivative of each leg's angle
void _Swimming::eggBeaterStroke(double theta_L, double theta_R, double phi_L, double phi_R, double time, double& dtheta_L_dt, double& dtheta_R_dt, double& dphi_L_dt, double& dphi_R_dt)
{
    // Calculate the derivatives
    dtheta_L_dt = SMOOTHING_FACTOR * (_Swimming::calculateLegTargetAngle(time, true) - theta_L);
    dtheta_R_dt = SMOOTHING_FACTOR * (_Swimming::calculateLegTargetAngle(time, false) - theta_R);
    dphi_L_dt = 2 * SMOOTHING_FACTOR * (_Swimming::calculateKneeTargetAngle(time, true) - phi_L);
    dphi_R_dt = 2 * SMOOTHING_FACTOR * (_Swimming::calculateKneeTargetAngle(time, false) - phi_R);
}

// Function to calculate the derivative of each arm's angle
// Function to calculate the derivative of each arm's angle
void _Swimming::crawlSwimStroke(double theta_L, double theta_R, double time, double& dtheta_L_dt, double& dtheta_R_dt)
{
    // Calculate the derivatives
    dtheta_L_dt = SMOOTHING_FACTOR * (_Swimming::calculateTargetAngle(time, true) - theta_L);
    dtheta_R_dt = SMOOTHING_FACTOR * (_Swimming::calculateTargetAngle(time, false) - theta_R);
}

// Function to// Function to calculate the derivatives for the butterfly stroke
void _Swimming::butterflyStroke(double theta_L, double theta_R, double phi_L, double phi_R, double t, double& dtheta_L_dt, double& dtheta_R_dt, double& dphi_L_dt, double& dphi_R_dt)
{
    // Calculate the derivatives based on the butterfly stroke model
    // Note: This is a simplified example and actual implementation may vary depending on the specific model used
    dtheta_L_dt = -0.5 * std::sin(2 * OMEGA * t);
    dtheta_R_dt = 0.5 * std::sin(2 * OMEGA * t);
    dphi_L_dt = KNEE_AMPLITUDE * 2 * OMEGA * std::cos(2 * OMEGA * t);
    dphi_R_dt = -KNEE_AMPLITUDE * 2 * OMEGA * std::sin(2 * OMEGA * t);
}

// Function to calculate the derivatives for the breaststroke
void _Swimming::breastSwimStroke(double theta_arm_L, double theta_arm_R, double phi_arm_L, double phi_arm_R, double theta_leg_L, double theta_leg_R, double phi_leg_L, double phi_leg_R, double t, double& dtheta_arm_L_dt, double& dtheta_arm_R_dt, double& dphi_arm_L_dt, double& dphi_arm_R_dt, double& dtheta_leg_L_dt, double& dtheta_leg_R_dt, double& dphi_leg_L_dt, double& dphi_leg_R_dt)
{
    // Calculate the derivatives based on the breaststroke model
    // Note: This is a simplified example and actual implementation may vary depending on the specific model used

    // Arm movement
    dtheta_arm_L_dt = -0.5 * std::sin(ARM_OMEGA * t);
    dtheta_arm_R_dt = 0.5 * std::sin(ARM_OMEGA * t + M_PI); // Phase difference between arms
    dphi_arm_L_dt = ELBOW_AMPLITUDE * ARM_OMEGA * std::cos(2 * ARM_OMEGA * t);
    dphi_arm_R_dt = -ELBOW_AMPLITUDE * ARM_OMEGA * std::sin(2 * ARM_OMEGA * t + M_PI); // Phase difference between elbow joints

    // Leg movement
    dtheta_leg_L_dt = -0.5 * std::sin(LEG_OMEGA * t);
    dtheta_leg_R_dt = 0.5 * std::sin(LEG_OMEGA * t + M_PI); // Phase difference between legs
    dphi_leg_L_dt = KNEE_AMPLITUDE * LEG_OMEGA * std::cos(2 * LEG_OMEGA * t);
    dphi_leg_R_dt = -KNEE_AMPLITUDE * LEG_OMEGA * std::sin(2 * LEG_OMEGA * t + M_PI); // Phase difference between knee joints
}

void _Swimming::backstrokeSwimStroke(double theta_arm_L, double theta_arm_R, double phi_arm_L, double phi_arm_R,
    double theta_leg_L, double theta_leg_R, double phi_leg_L, double phi_leg_R, double t, double& dtheta_arm_L_dt, double&
    dtheta_arm_R_dt, double& dphi_arm_L_dt, double& dphi_arm_R_dt, double& dtheta_leg_L_dt, double& dtheta_leg_R_dt,
    double& dphi_leg_L_dt, double& dphi_leg_R_dt)
{
    // Calculate the derivatives based on the backstroke model
    // Note: This is a simplified example and actual implementation may vary depending on the specific model used

    // Arm movement (scissor-like motion with alternate arms entering and leaving the water)
    dtheta_arm_L_dt = BACKSTROKE_ARM_AMPLITUDE * std::cos(BACKSTROKE_ARM_OMEGA * t);
    dtheta_arm_R_dt = -BACKSTROKE_ARM_AMPLITUDE * std::sin(BACKSTROKE_ARM_OMEGA * t + M_PI / 2); // Phase difference between arms
    dphi_arm_L_dt = ELBOW_AMPLITUDE * BACKSTROKE_ARM_OMEGA * std::cos(2 * BACKSTROKE_ARM_OMEGA * t);
    dphi_arm_R_dt = -ELBOW_AMPLITUDE * BACKSTROKE_ARM_OMEGA * std::sin(2 * BACKSTROKE_ARM_OMEGA * t + M_PI); // Phase difference between elbow joints

    // Leg movement (frog-like motion with alternate legs entering and leaving the water)
    dtheta_leg_L_dt = -BACKSTROKE_LEG_AMPLITUDE * std::cos(BACKSTROKE_LEG_OMEGA * t);
    dtheta_leg_R_dt = BACKSTROKE_LEG_AMPLITUDE * std::sin(BACKSTROKE_LEG_OMEGA * t + M_PI / 2); // Phase difference between legs
    dphi_leg_L_dt = BACKSTROKE_KNEE_AMPLITUDE * BACKSTROKE_LEG_OMEGA * std::cos(2 * BACKSTROKE_LEG_OMEGA * t);
    dphi_leg_R_dt = -BACKSTROKE_KNEE_AMPLITUDE * BACKSTROKE_LEG_OMEGA * std::sin(2 * BACKSTROKE_LEG_OMEGA * t + M_PI);
    // Phase difference between knee joints
}

void _Swimming::ButterflyTurn()
{

}

void _Swimming::Dive()
{

}

// Function to calculate the target angle for each arm
double _Swimming::calculateTargetAngle(double time, bool isLeftArm)
{
    if (isLeftArm)
    {
        return THETA_OFFSET + AMPLITUDE * std::sin(OMEGA * time);
    }
    else
    {
        return THETA_OFFSET - AMPLITUDE * std::sin(OMEGA * time);
    }
}

// Function to calculate the target angle for each leg
double _Swimming::calculateLegTargetAngle(double time, bool isLeftLeg)
{
    if (isLeftLeg)
    {
        return THETA_OFFSET + AMPLITUDE * std::sin(OMEGA * time);
    }
    else
    {
        return THETA_OFFSET - AMPLITUDE * std::cos(OMEGA * time);
    }
}

// Function to calculate the target angle for each knee joint
double _Swimming::calculateKneeTargetAngle(double time, bool isLeftLeg)
{
    if (isLeftLeg)
    {
        return KNEE_AMPLITUDE * std::sin(2 * OMEGA * time);
    }
    else
    {
        return -KNEE_AMPLITUDE * std::cos(2 * OMEGA * time);
    }
}