/*
    Copyright(C) 2025 Tyler Crockett | Macdaddy4sure.ai

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
#include "Kinesthetics.hpp"
#include "Settings.hpp"
#include "Thought.hpp"
#include "Utilities.hpp"

using namespace std;

// Record movements
// Playback movements

void _Kinesthetics::Head::LeftEye::LeftEyeTracking(float &left_eye)
{
    // This is a placeholder function.  In a real implementation,
  // this would involve accessing data from a head tracking system
  // (e.g., VR headset, webcam-based eye tracking) to determine the
  // current gaze direction of the left eye.

  // For now, we'll just simulate some movement. This simulation
  // assumes left_eye is an angle in degrees, where 0 is straight ahead.

    //static float angle = 0.0f;

    //angle += 0.1f;

    //if (angle > 360.0f) {
    //    angle -= 360.0f;
    //}

    //left_eye = sin(angle * 0.0174533f) * 20.0f; // Simulate smooth oscillation

    //Alternatively, for a simple random walk:
    //left_eye += (rand() % 20 - 10) * 0.01f;  // small random change.  Needs srand() initialization elsewhere.
    //if (left_eye > 30.0f) left_eye = 30.0f;
    //if (left_eye < -30.0f) left_eye = -30.0f;

    // In a real system:
    // 1.  Get eye tracking data from the SDK or driver.
    // 2.  Convert the raw data (often in units of degrees or normalized coordinates)
    //     into the desired format (e.g., float angle in degrees).
    // 3.  Apply any filtering or smoothing to reduce noise.
    // 4.  Assign the processed value to the 'left_eye' parameter.
}

void _Kinesthetics::Head::LeftEye::getLeftSuperiorRectusTension(float &LeftSuperiorRectusTension)
{
    // This function should calculate the tension in the left superior rectus muscle
    // based on the eye's position and potentially other factors (e.g., gaze direction,
    // head pose).  It's a simplified model, as actual muscle tension is complex.

    // Assumptions:
    // - We have access to the current left eye gaze angle (horizontal and vertical).
    // - We assume a simplified biomechanical model where muscle tension is proportional
    //   to the displacement from a "resting" position.
    // - The resting position is defined as looking straight ahead (0 degrees).

    // For now, we'll use the left_eye_angle from LeftEyeTracking as the primary input.
    // In a more complex system, you might use separate horizontal and vertical angles.
    static float left_eye_angle = 0.0f; // static to preserve value from LeftEyeTracking

    //Get angle from tracking. If it doesn't exist, assume 0.
    _Kinesthetics::Head::LeftEye::LeftEyeTracking(left_eye_angle); //Call tracking function to get data.  Necessary if not available elsewhere.

    // Define parameters (adjust these for realistic behavior)
    const float resting_angle = 0.0f;
    const float max_angle = 30.0f;  // Maximum angle considered (degrees)
    const float max_tension = 100.0f; // Maximum muscle tension (arbitrary units)
    const float tension_scale = max_tension / max_angle; // Scale factor for tension

    // Calculate tension based on the angle deviation from the resting position
    float angle_deviation = left_eye_angle - resting_angle;

    // Clamp the angle deviation to avoid extreme tensions
    if (angle_deviation > max_angle)
    {
        angle_deviation = max_angle;
    }
    else if (angle_deviation < -max_angle)
    {
        angle_deviation = -max_angle;
    }

    // Calculate the tension.  Positive tension means muscle is contracting.
    LeftSuperiorRectusTension = angle_deviation * tension_scale;

    // Ensure tension is not negative (muscle can't "push") - an idealization
    if (LeftSuperiorRectusTension < 0.0f) {
        LeftSuperiorRectusTension = 0.0f;
    }
}

//void _Kinesthetics::Head::LeftEye::getLeftLateralRectusTension(float &LeftLateralRectusTension)
//{
//
//}
//
//void _Kinesthetics::Head::LeftEye::getLeftInferiorObliqueTension(float &LeftInferiorObliqueTension)
//{
//
//}
//
//void _Kinesthetics::Head::LeftEye::getLeftInferiorRectusTension(float &LeftInteriorRectusTension)
//{
//
//}
//
//void _Kinesthetics::Head::LeftEye::getLeftMedialRectusTension(float &LeftMedialRectusTension)
//{
//
//}

//void _Kinesthetics::Head::LeftEye::setLeftEyeMuscleTension(float LeftSuperiorRectus, float LeftLeteralRectus, float LeftInferiorOblique, float LeftInferiorRectus, float leftMedialRectus)
//{
//
//}

//void _Kinesthetics::Head::LeftEye::LeftEyeTracking(float &right_eye)
//{
//
//}

//void _Kinesthetics::Head::LeftEye::getLeftSuperiorRectusTension(float &LeftSuperiorRectusTension)
//{
//
//}

//void _Kinesthetics::Head::LeftEye::getLeftLateralRectusTension(float &LeftLateralRectusTension)
//{
//
//}

//void _Kinesthetics::Head::LeftEye::getLeftInferiorObliqueTension(float &LeftInferiorObliqueTension)
//{
//
//}

//void _Kinesthetics::Head::LeftEye::getLeftInferiorRectusTension(float &LeftInferiorRectusTension)
//{
//
//}

//void _Kinesthetics::Head::LeftEye::getLeftMedialRectusTension(float &LeftMedialRectusTension)
//{
//
//}

// Function to smoothly change the left eye angle over time.
void _Kinesthetics::Head::LeftEye::setLeftEyeAngleSmoothly(Point2D& LeftEyeAngle, const Point2D& targetLeftEyeAngle, float smoothingFactor, float deltaTime)
{
    // Define parameters (adjust as needed)
    const float minX = -45.0f;  // Fully left
    const float maxX = 45.0f;   // Fully right
    const float minY = -60.0f;  // Fully down
    const float maxY = 30.0f;   // Fully up

	Point2D currentLeftEyeAngle = LeftEyeAngle; // Start with the current angle

    // Clamp the target angles to the valid range
    Point2D clampedTargetLeftEyeAngle;
    clampedTargetLeftEyeAngle.x = std::clamp(targetLeftEyeAngle.x, minX, maxX);
    clampedTargetLeftEyeAngle.y = std::clamp(targetLeftEyeAngle.y, minY, maxY);

    // Linearly interpolate between the current angle and the target angle.
    currentLeftEyeAngle.x = (1.0f - deltaTime * smoothingFactor) * currentLeftEyeAngle.x + deltaTime * smoothingFactor *
        clampedTargetLeftEyeAngle.x;
    currentLeftEyeAngle.y = (1.0f - deltaTime * smoothingFactor) * currentLeftEyeAngle.y + deltaTime * smoothingFactor *
        clampedTargetLeftEyeAngle.y;

    // Clamp the current angles to prevent overshoot
    currentLeftEyeAngle.x = std::clamp(currentLeftEyeAngle.x, minX, maxX);
    currentLeftEyeAngle.y = std::clamp(currentLeftEyeAngle.y, minY, maxY);

    // Update the output angle
    LeftEyeAngle = currentLeftEyeAngle;
}

// Function to smoothly change the right eye angle over time.
void _Kinesthetics::Head::RightEye::setRightEyeAngleSmoothly(Point2D& RightEyeAngle, const Point2D& targetRightEyeAngle, float smoothingFactor, float deltaTime)
{
    // Define parameters (adjust as needed)
    const float minX = -45.0f;  // Fully left
    const float maxX = 45.0f;   // Fully right
    const float minY = -60.0f;  // Fully down
    const float maxY = 30.0f;   // Fully up

    Point2D currentRightEyeAngle = RightEyeAngle; // Start with the current angle

    // Clamp the target angles to the valid range
    Point2D clampedTargetRightEyeAngle;
    clampedTargetRightEyeAngle.x = std::clamp(targetRightEyeAngle.x, minX, maxX);
    clampedTargetRightEyeAngle.y = std::clamp(targetRightEyeAngle.y, minY, maxY);

    // Linearly interpolate between the current angle and the target angle.
    currentRightEyeAngle.x = (1.0f - deltaTime * smoothingFactor) * currentRightEyeAngle.x + deltaTime * smoothingFactor *
        clampedTargetRightEyeAngle.x;
    currentRightEyeAngle.y = (1.0f - deltaTime * smoothingFactor) * currentRightEyeAngle.y + deltaTime * smoothingFactor *
        clampedTargetRightEyeAngle.y;

    // Clamp the current angles to prevent overshoot
    currentRightEyeAngle.x = std::clamp(currentRightEyeAngle.x, minX, maxX);
    currentRightEyeAngle.y = std::clamp(currentRightEyeAngle.y, minY, maxY);

    // Update the output angle
    RightEyeAngle = currentRightEyeAngle;
}

void _Kinesthetics::Head::LeftEye::setLeftEyeMuscleTension(float LeftSuperiorRectus, float LeftLeteralRectus, float LeftInferiorOblique, float LeftInferiorRectus, float LeftMedialRectus)
{

}

void _Kinesthetics::Head::Neck::setHeadNeckJointAnglesSmoothly(float& neck_swivel_x, float& neck_swivel_y, float& neck_swivel_z, float target_neck_swivel_x, float target_neck_swivel_y, float target_neck_swivel_z)
{

}

//void _Kinesthetics::LeftArm::setLeftShoulderAngle(float& leftShoulderAngle_x, float& leftShoulderAngle_y, float& leftShoulderAngle_z, float& delta);
//{
//    // This function sets the angle of the left shoulder.
//    // It should also update any related internal state, such as
//    // the position of the elbow and wrist, to maintain a natural
//    // arm pose.
//
//    // Assumptions:
//    // - leftShoulderAngle is in degrees.
//    // - We have internal variables to track the current shoulder, elbow, and wrist angles.
//    // - We want to maintain a reasonable range of motion.
//
//    // Static variables to store the current shoulder, elbow, and wrist angles.
//    static float currentShoulderAngle = 0.0f;
//    static float currentElbowAngle = 90.0f; // Initial elbow angle (degrees)
//    static float currentWristAngle = 0.0f;
//
//    // Define limits for the shoulder angle (adjust as needed)
//    const float minShoulderAngle = -180.0f;
//    const float maxShoulderAngle = 180.0f;
//
//    // Clamp the input angle to the valid range
//    leftShoulderAngle = std::clamp(leftShoulderAngle, minShoulderAngle, maxShoulderAngle);
//
//    // Update the current shoulder angle
//    currentShoulderAngle = leftShoulderAngle;
//
//    // In a complete system, you would use these angles to update the
//    // 3D position of the arm bones or joints in a rendering engine or
//    // simulation.  For demonstration purposes, we'll just print the angles.
//    // std::cout << "Left Shoulder Angle: " << currentShoulderAngle << std::endl;
//
//    // Note: These angles would be used to update the arm's pose in a
//    // 3D scene or to drive other rendering/simulation logic.
//}

void _Kinesthetics::LeftLeg::setLeftHipJointAnglesSmoothly(
    float& left_hip_flexion_extension_angle,
    float& left_hip_abduction_adduction_angle,
    float& left_hip_internal_external_rotation_angle,
    float target_left_hip_flexion_extension_angle,
    float target_left_hip_abduction_adduction_angle,
    float target_left_hip_internal_external_rotation_angle,
    float smoothing_factor,
    float deltaTime)
{
    static float current_left_hip_flexion_extension_angle = 0.0f;
    static float current_left_hip_abduction_adduction_angle = 0.0f;
    static float current_left_hip_internal_external_rotation_angle = 0.0f;

    // Flexion/Extension limits
    const float min_flexion_extension_angle = -10.0f; // hyperextension
    const float max_flexion_extension_angle = 120.0f; // flexion

    // Abduction/Adduction limits
    const float min_abduction_adduction_angle = -30.0f; // adduction
    const float max_abduction_adduction_angle = 45.0f; // abduction

    // Internal/External Rotation limits
    const float min_internal_external_rotation_angle = -45.0f; // internal rotation
    const float max_internal_external_rotation_angle = 45.0f; // external rotation

    target_left_hip_flexion_extension_angle =
        std::clamp(target_left_hip_flexion_extension_angle, min_flexion_extension_angle, max_flexion_extension_angle);
    target_left_hip_abduction_adduction_angle =
        std::clamp(target_left_hip_abduction_adduction_angle, min_abduction_adduction_angle, max_abduction_adduction_angle);
    target_left_hip_internal_external_rotation_angle =
        std::clamp(target_left_hip_internal_external_rotation_angle, min_internal_external_rotation_angle,
            max_internal_external_rotation_angle);

    current_left_hip_flexion_extension_angle = (1.0f - deltaTime * smoothing_factor) *
        current_left_hip_flexion_extension_angle + deltaTime * smoothing_factor *
        target_left_hip_flexion_extension_angle;
    current_left_hip_abduction_adduction_angle = (1.0f - deltaTime * smoothing_factor) *
        current_left_hip_abduction_adduction_angle + deltaTime * smoothing_factor *
        target_left_hip_abduction_adduction_angle;
    current_left_hip_internal_external_rotation_angle = (1.0f - deltaTime * smoothing_factor) *
        current_left_hip_internal_external_rotation_angle + deltaTime * smoothing_factor *
        target_left_hip_internal_external_rotation_angle;

    current_left_hip_flexion_extension_angle =
        std::clamp(current_left_hip_flexion_extension_angle, min_flexion_extension_angle, max_flexion_extension_angle);
    current_left_hip_abduction_adduction_angle =
        std::clamp(current_left_hip_abduction_adduction_angle, min_abduction_adduction_angle, max_abduction_adduction_angle);
    current_left_hip_internal_external_rotation_angle =
        std::clamp(current_left_hip_internal_external_rotation_angle, min_internal_external_rotation_angle,
            max_internal_external_rotation_angle);

    left_hip_flexion_extension_angle = current_left_hip_flexion_extension_angle;
    left_hip_abduction_adduction_angle = current_left_hip_abduction_adduction_angle;
    left_hip_internal_external_rotation_angle = current_left_hip_internal_external_rotation_angle;

    //// std::cout << "Left Hip Flexion/Extension Angle: " << current_left_hip_flexion_extension_angle << std::endl;
    //// std::cout << "Left Hip Abduction/Adduction Angle: " << current_left_hip_abduction_adduction_angle << std::endl;
    //// std::cout << "Left Hip Internal/External Rotation Angle: " << current_left_hip_internal_external_rotation_angle <<
    //    std::endl;
}

//void _Kinesthetics::LeftLeg::setLeftHipJointAnglesSmoothly(
//    float& Left_hip_flexion_extension_angle,
//    float& Left_hip_abduction_adduction_angle,
//    float& Left_hip_internal_external_rotation_angle,
//    float target_Left_hip_flexion_extension_angle,
//    float target_Left_hip_abduction_adduction_angle,
//    float target_Left_hip_internal_external_rotation_angle,
//    float smoothing_factor,
//    float deltaTime)
//{
//    static float current_Left_hip_flexion_extension_angle = 0.0f;
//    static float current_Left_hip_abduction_adduction_angle = 0.0f;
//    static float current_Left_hip_internal_external_rotation_angle = 0.0f;
//
//    // Flexion/Extension limits
//    const float min_flexion_extension_angle = -10.0f; // hyperextension
//    const float max_flexion_extension_angle = 120.0f; // flexion
//
//    // Abduction/Adduction limits
//    const float min_abduction_adduction_angle = -30.0f; // adduction
//    const float max_abduction_adduction_angle = 45.0f; // abduction
//
//    // Internal/External Rotation limits
//    const float min_internal_external_rotation_angle = -45.0f; // internal rotation
//    const float max_internal_external_rotation_angle = 45.0f; // external rotation
//
//    target_Left_hip_flexion_extension_angle =
//        std::clamp(target_Left_hip_flexion_extension_angle, min_flexion_extension_angle, max_flexion_extension_angle);
//    target_Left_hip_abduction_adduction_angle =
//        std::clamp(target_Left_hip_abduction_adduction_angle, min_abduction_adduction_angle, max_abduction_adduction_angle);
//    target_Left_hip_internal_external_rotation_angle =
//        std::clamp(target_Left_hip_internal_external_rotation_angle, min_internal_external_rotation_angle,
//            max_internal_external_rotation_angle);
//
//    current_Left_hip_flexion_extension_angle = (1.0f - deltaTime * smoothing_factor) *
//        current_Left_hip_flexion_extension_angle + deltaTime * smoothing_factor *
//        target_Left_hip_flexion_extension_angle;
//    current_Left_hip_abduction_adduction_angle = (1.0f - deltaTime * smoothing_factor) *
//        current_Left_hip_abduction_adduction_angle + deltaTime * smoothing_factor *
//        target_Left_hip_abduction_adduction_angle;
//    current_Left_hip_internal_external_rotation_angle = (1.0f - deltaTime * smoothing_factor) *
//        current_Left_hip_internal_external_rotation_angle + deltaTime * smoothing_factor *
//        target_Left_hip_internal_external_rotation_angle;
//
//    current_Left_hip_flexion_extension_angle =
//        std::clamp(current_Left_hip_flexion_extension_angle, min_flexion_extension_angle, max_flexion_extension_angle);
//    current_Left_hip_abduction_adduction_angle =
//        std::clamp(current_Left_hip_abduction_adduction_angle, min_abduction_adduction_angle, max_abduction_adduction_angle);
//    current_Left_hip_internal_external_rotation_angle =
//        std::clamp(current_Left_hip_internal_external_rotation_angle, min_internal_external_rotation_angle,
//            max_internal_external_rotation_angle);
//
//    Left_hip_flexion_extension_angle = current_Left_hip_flexion_extension_angle;
//    Left_hip_abduction_adduction_angle = current_Left_hip_abduction_adduction_angle;
//    Left_hip_internal_external_rotation_angle = current_Left_hip_internal_external_rotation_angle;
//
//    // std::cout << "Left Hip Flexion/Extension Angle: " << current_Left_hip_flexion_extension_angle << std::endl;
//    // std::cout << "Left Hip Abduction/Adduction Angle: " << current_Left_hip_abduction_adduction_angle << std::endl;
//    // std::cout << "Left Hip Internal/External Rotation Angle: " << current_Left_hip_internal_external_rotation_angle <<
//        std::endl;
//}

//void _Kinesthetics::LeftArm::setLeftShoulderJointAnglesSmoothly(float& left_shoulder_flexion_extension_angle, float& left_shoulder_abduction_adduction_angle, float& left_shoulder_internal_external_rotation_angle, float target_left_shoulder_flexion_extension_angle, float target_left_shoulder_abduction_adduction_angle, float target_left_shoulder_internal_external_rotation_angle, float smoothing_factor, float deltaTime)
//{
//    // This function smoothly changes the right shoulder angle over time.
//    // It uses linear interpolation (lerp) to achieve a smooth transition.
//
//    // Assumptions:
//    // - targetShoulderAngle is the desired shoulder angle in degrees.
//    // - deltaTime is the time elapsed since the last frame (in seconds).
//    // - We have internal variables to track the current shoulder angle.
//    // - A smoothing factor controls the speed of the transition.
//
//    // Static variables to store the current shoulder angles.
//    static float currentShoulderAngle_x = 0.0f;
//    static float currentShoulderAngle_y = 0.0f;
//    static float currentShoulderAngle_z = 0.0f;
//
//    // Define parameters (adjust as needed)
//    const float minShoulderAngle = -180.0f;
//    const float maxShoulderAngle = 180.0f;
//
//    // Clamp the target angles to the valid range
//    left_shoulder_flexion_extension_angle = std::clamp(target_left_shoulder_flexion_extension_angle, minShoulderAngle, maxShoulderAngle);
//    left_shoulder_abduction_adduction_angle = std::clamp(target_left_shoulder_abduction_adduction_angle, minShoulderAngle, maxShoulderAngle);
//    left_shoulder_internal_external_rotation_angle = std::clamp(target_left_shoulder_internal_external_rotation_angle, minShoulderAngle, maxShoulderAngle);
//
//    // Linearly interpolate between the current angles and the target angles.
//    currentShoulderAngle_x = (1.0f - deltaTime * smoothing_factor) * currentShoulderAngle_x + deltaTime * smoothing_factor * target_left_shoulder_flexion_extension_angle;
//    currentShoulderAngle_y = (1.0f - deltaTime * smoothing_factor) * currentShoulderAngle_y + deltaTime * smoothing_factor * target_left_shoulder_abduction_adduction_angle;
//    currentShoulderAngle_z = (1.0f - deltaTime * smoothing_factor) * currentShoulderAngle_z + deltaTime * smoothing_factor * target_left_shoulder_internal_external_rotation_angle;
//
//    // Clamp the current angles to prevent overshoot
//    currentShoulderAngle_x = std::clamp(currentShoulderAngle_x, minShoulderAngle, maxShoulderAngle);
//    currentShoulderAngle_y = std::clamp(currentShoulderAngle_y, minShoulderAngle, maxShoulderAngle);
//    currentShoulderAngle_z = std::clamp(currentShoulderAngle_z, minShoulderAngle, maxShoulderAngle);
//
//    // Update the output angles
//    left_shoulder_flexion_extension_angle = currentShoulderAngle_x;
//    left_shoulder_abduction_adduction_angle = currentShoulderAngle_y;
//    left_shoulder_internal_external_rotation_angle = currentShoulderAngle_z;
//
//    // In a complete system, you would use these angles to update the
//    // 3D position of the arm bones or joints in a rendering engine or
//    // simulation.  For demonstration purposes, we'll just print the angles.
//    //// std::cout << "Left Shoulder Angle X: " << currentShoulderAngle_x << std::endl;
//    //// std::cout << "Left Shoulder Angle Y: " << currentShoulderAngle_y << std::endl;
//    //// std::cout << "Left Shoulder Angle Z: " << currentShoulderAngle_z << std::endl;
//}

//void _Kinesthetics::LeftArm::setLeftElbowAngleSmoothly(float& LeftElbowAngle, float targetLeftElbowAngle, float smoothing_factor, float deltaTime)
//{
//    // This function smoothly changes the right elbow angle over time.
//    // It uses linear interpolation (lerp) to achieve a smooth transition.
//    // Assumptions:
//    // - targetLeftElbowAngle is the desired elbow angle in degrees.
//    // - deltaTime is the time elapsed since the last frame (in seconds).
//    // - We have an internal variable to track the current elbow angle.
//    // - A smoothing factor controls the speed of the transition.
//    // Static variable to store the current elbow angle.
//    static float currentElbowAngle = 90.0f; // Initial elbow angle (degrees)
//
//    // Define parameters (adjust as needed)
//    const float minElbowAngle = 0.0f;   // Fully extended
//    const float maxElbowAngle = 150.0f; // Fully flexed
//
//    // Clamp the target angle to the valid range
//    targetLeftElbowAngle = std::clamp(targetLeftElbowAngle, minElbowAngle, maxElbowAngle);
//
//    // Linearly interpolate between the current angle and the target angle.
//    currentElbowAngle = (1.0f - deltaTime * smoothing_factor) * currentElbowAngle + deltaTime * smoothing_factor * targetLeftElbowAngle;
//
//    // Clamp the current angle to prevent overshoot
//    currentElbowAngle = std::clamp(currentElbowAngle, minElbowAngle, maxElbowAngle);
//
//    // Update the output angle
//    LeftElbowAngle = currentElbowAngle;
//    // In a complete system, you would use this angle to update the
//    // 3D position of the arm bones or joints in a rendering engine or
//    // simulation.  For demonstration purposes, we'll just print the angle.
//
//    // std::cout << "Left Elbow Angle: " << currentElbowAngle << std::endl;
//}

//void _Kinesthetics::LeftArm::setLeftWristAnglesSmoothly(float& leftWristAngleX, float& leftWristAngleY, float targetLeftWristAngleX, float targetLeftWristAngleY, float smoothingFactor, float deltaTime)
//{
//    // This function smoothly changes the right wrist angle over time.
//    // It uses linear interpolation (lerp) to achieve a smooth transition.
//    // Assumptions:
//    // - targetLeftWristAngle is the desired wrist angle in degrees.
//    // - deltaTime is the time elapsed since the last frame (in seconds).
//    // - We have an internal variable to track the current wrist angle.
//    // - A smoothing factor controls the speed of the transition.
//    // Static variable to store the current wrist angle.
//    static float currentWristAngle = 0.0f; // Initial wrist angle (degrees)
//
//    // Define parameters (adjust as needed)
//    const float minWristAngle = -90.0f;  // Example range, adjust as needed
//    const float maxWristAngle = 90.0f;   // Example range, adjust as needed
//
//    // Clamp the target angle to the valid range
//    targetLeftWristAngleX = std::clamp(targetLeftWristAngleX, minWristAngle, maxWristAngle);
//
//    // Linearly interpolate between the current angle and the target angle.
//    currentWristAngle = (1.0f - deltaTime * smoothingFactor) * currentWristAngle + deltaTime * smoothingFactor * targetLeftWristAngleX;
//
//    // Clamp the current angle to prevent overshoot
//    currentWristAngle = std::clamp(currentWristAngle, minWristAngle, maxWristAngle);
//
//    // Update the output angle
//    leftWristAngleX = currentWristAngle;
//
//    // In a complete system, you would use this angle to update the
//    // 3D position of the arm bones or joints in a rendering engine or
//    // simulation.  For demonstration purposes, we'll just print the angle.
//    // std::cout << "Left Wrist Angle: " << currentWristAngle << std::endl;
//}

void _Kinesthetics::LeftArm::setLeftShoulderJointAnglesSmoothly(
    float& left_shoulder_flexion_extension_angle,
    float& left_shoulder_abduction_adduction_angle,
    float& left_shoulder_internal_external_rotation_angle,
    float target_left_shoulder_flexion_extension_angle,
    float target_left_shoulder_abduction_adduction_angle,
    float target_left_shoulder_internal_external_rotation_angle,
    float smoothing_factor,
    float deltaTime)
{
    static float current_left_shoulder_flexion_extension_angle = 0.0f;
    static float current_left_shoulder_abduction_adduction_angle = 0.0f;
    static float current_left_shoulder_internal_external_rotation_angle = 0.0f;

    // Flexion/Extension limits
    const float min_flexion_extension_angle = -45.0f; // hyperextension
    const float max_flexion_extension_angle = 180.0f; // flexion

    // Abduction/Adduction limits
    const float min_abduction_adduction_angle = -30.0f; // adduction
    const float max_abduction_adduction_angle = 180.0f; // abduction

    // Internal/External Rotation limits
    const float min_internal_external_rotation_angle = -90.0f; // internal rotation
    const float max_internal_external_rotation_angle = 90.0f; // external rotation

    target_left_shoulder_flexion_extension_angle =
        std::clamp(target_left_shoulder_flexion_extension_angle, min_flexion_extension_angle, max_flexion_extension_angle);
    target_left_shoulder_abduction_adduction_angle =
        std::clamp(target_left_shoulder_abduction_adduction_angle, min_abduction_adduction_angle,
            max_abduction_adduction_angle);
    target_left_shoulder_internal_external_rotation_angle =
        std::clamp(target_left_shoulder_internal_external_rotation_angle, min_internal_external_rotation_angle,
            max_internal_external_rotation_angle);

    current_left_shoulder_flexion_extension_angle = (1.0f - deltaTime * smoothing_factor) *
        current_left_shoulder_flexion_extension_angle + deltaTime * smoothing_factor *
        target_left_shoulder_flexion_extension_angle;
    current_left_shoulder_abduction_adduction_angle = (1.0f - deltaTime * smoothing_factor) *
        current_left_shoulder_abduction_adduction_angle + deltaTime * smoothing_factor *
        target_left_shoulder_abduction_adduction_angle;
    current_left_shoulder_internal_external_rotation_angle = (1.0f - deltaTime * smoothing_factor) *
        current_left_shoulder_internal_external_rotation_angle + deltaTime * smoothing_factor *
        target_left_shoulder_internal_external_rotation_angle;

    current_left_shoulder_flexion_extension_angle =
        std::clamp(current_left_shoulder_flexion_extension_angle, min_flexion_extension_angle, max_flexion_extension_angle);
    current_left_shoulder_abduction_adduction_angle =
        std::clamp(current_left_shoulder_abduction_adduction_angle, min_abduction_adduction_angle,
            max_abduction_adduction_angle);
    current_left_shoulder_internal_external_rotation_angle =
        std::clamp(current_left_shoulder_internal_external_rotation_angle, min_internal_external_rotation_angle,
            max_internal_external_rotation_angle);

    left_shoulder_flexion_extension_angle = current_left_shoulder_flexion_extension_angle;
    left_shoulder_abduction_adduction_angle = current_left_shoulder_abduction_adduction_angle;
    left_shoulder_internal_external_rotation_angle = current_left_shoulder_internal_external_rotation_angle;

    /*// std::cout << "Left Shoulder Flexion/Extension Angle: " << current_left_shoulder_flexion_extension_angle << std::endl;
    // std::cout << "Left Shoulder Abduction/Adduction Angle: " << current_left_shoulder_abduction_adduction_angle << std::endl;
    // std::cout << "Left Shoulder Internal/External Rotation Angle: " << current_left_shoulder_internal_external_rotation_angle << std::endl;*/
}

void _Kinesthetics::LeftArm::LeftHand::LeftIndexFinger::setLeftIndexFingerFirstJointAngles(
    float& left_index_finger_first_joint_angle_x,
    float& left_index_finger_first_joint_angle_y,
    float& left_index_finger_first_joint_angle_z,
    float target_left_index_finger_first_joint_angle_x,
    float target_left_index_finger_first_joint_angle_y,
    float target_left_index_finger_first_joint_angle_z,
    float smoothing_factor,
    float deltaTime)
{
    // This function smoothly changes the angles of the first joint of the left index finger over time.
    // It uses linear interpolation (lerp) to achieve a smooth transition.

    // Assumptions:
    // - target_left_index_finger_first_joint_angle_x, target_left_index_finger_first_joint_angle_y,
    // target_left_index_finger_first_joint_angle_z are the desired angles in degrees.
        // - deltaTime is the time elapsed since the last frame (in seconds).
        // - We have internal variables to track the current angles.
        // - A smoothing factor controls the speed of the transition.

    // Static variables to store the current angles.
    static float current_left_index_finger_first_joint_angle_x = 0.0f;
    static float current_left_index_finger_first_joint_angle_y = 0.0f;
    static float current_left_index_finger_first_joint_angle_z = 0.0f;

    // Define parameters (adjust as needed)
    const float minAngleX = -90.0f;  // Example range, adjust as needed
    const float maxAngleX = 90.0f;   // Example range, adjust as needed
    const float minAngleY = -90.0f;  // Example range, adjust as needed
    const float maxAngleY = 90.0f;   // Example range, adjust as needed
    const float minAngleZ = -90.0f;  // Example range, adjust as needed
    const float maxAngleZ = 90.0f;   // Example range, adjust as needed

    // Clamp the target angles to the valid ranges
    target_left_index_finger_first_joint_angle_x = std::clamp(target_left_index_finger_first_joint_angle_x, minAngleX,
        maxAngleX);
    target_left_index_finger_first_joint_angle_y = std::clamp(target_left_index_finger_first_joint_angle_y, minAngleY,
        maxAngleY);
    target_left_index_finger_first_joint_angle_z = std::clamp(target_left_index_finger_first_joint_angle_z, minAngleZ,
        maxAngleZ);

    // Linearly interpolate between the current angles and the target angles.
    current_left_index_finger_first_joint_angle_x = (1.0f - deltaTime * smoothing_factor) *
        current_left_index_finger_first_joint_angle_x + deltaTime * smoothing_factor * target_left_index_finger_first_joint_angle_x;
    current_left_index_finger_first_joint_angle_y = (1.0f - deltaTime * smoothing_factor) *
        current_left_index_finger_first_joint_angle_y + deltaTime * smoothing_factor * target_left_index_finger_first_joint_angle_y;
    current_left_index_finger_first_joint_angle_z = (1.0f - deltaTime * smoothing_factor) *
        current_left_index_finger_first_joint_angle_z + deltaTime * smoothing_factor * target_left_index_finger_first_joint_angle_z;

    // Clamp the current angles to prevent overshoot
    current_left_index_finger_first_joint_angle_x = std::clamp(current_left_index_finger_first_joint_angle_x, minAngleX,
        maxAngleX);
    current_left_index_finger_first_joint_angle_y = std::clamp(current_left_index_finger_first_joint_angle_y, minAngleY,
        maxAngleY);
    current_left_index_finger_first_joint_angle_z = std::clamp(current_left_index_finger_first_joint_angle_z, minAngleZ,
        maxAngleZ);

    // Update the output angles
    left_index_finger_first_joint_angle_x = current_left_index_finger_first_joint_angle_x;
    left_index_finger_first_joint_angle_y = current_left_index_finger_first_joint_angle_y;
    left_index_finger_first_joint_angle_z = current_left_index_finger_first_joint_angle_z;

    // In a complete system, you would use these angles to update the
    // 3D position of the finger joint in a rendering engine or simulation.
    // For demonstration purposes, we'll just print the angles.
    /*// std::cout << "Left Index Finger First Joint Angle X: " << current_left_index_finger_first_joint_angle_x << std::endl;
    // std::cout << "Left Index Finger First Joint Angle Y: " << current_left_index_finger_first_joint_angle_y << std::endl;
    // std::cout << "Left Index Finger First Joint Angle Z: " << current_left_index_finger_first_joint_angle_z << std::endl;*/
}

void _Kinesthetics::LeftArm::setLeftElbowAngleSmoothly(float& LeftElbowAngle, float targetLeftElbowAngle, float smoothing_factor, float deltaTime)
{	
    // This function smoothly changes the left elbow angle over time.
    // It uses linear interpolation (lerp) to achieve a smooth transition.
    // Assumptions:
    // - targetLeftElbowAngle is the desired elbow angle in degrees.
    // - deltaTime is the time elapsed since the last frame (in seconds).
    // - We have an internal variable to track the current elbow angle.
    // - A smoothing factor controls the speed of the transition.
    // Static variable to store the current elbow angle.
    static float currentElbowAngle = 90.0f; // Initial elbow angle (degrees)

    // Define parameters (adjust as needed)
    const float minElbowAngle = 0.0f;   // Fully extended
    const float maxElbowAngle = 150.0f; // Fully flexed

    // Clamp the target angle to the valid range
    targetLeftElbowAngle = std::clamp(targetLeftElbowAngle, minElbowAngle, maxElbowAngle);

    // Linearly interpolate between the current angle and the target angle.
    currentElbowAngle = (1.0f - deltaTime * smoothing_factor) * currentElbowAngle + deltaTime * smoothing_factor *
        targetLeftElbowAngle;

    // Clamp the current angle to prevent overshoot
    currentElbowAngle = std::clamp(currentElbowAngle, minElbowAngle, maxElbowAngle);

    // Update the output angle
    LeftElbowAngle = currentElbowAngle;

    // In a complete system, you would use this angle to update the
    // 3D position of the arm bones or joints in a rendering engine or
    // simulation.  For demonstration purposes, we'll just print the angle.
	//// std::cout << "Left Elbow Angle: " << currentElbowAngle << std::endl;
}

void _Kinesthetics::LeftArm::setLeftWristAnglesSmoothly(
    float& leftWristAngleX,
    float& leftWristAngleY,
    float targetLeftWristAngleX,
    float targetLeftWristAngleY,
    float smoothingFactor,
    float deltaTime)
{
    // Static variables to store the current wrist angles.
    static float currentLeftWristAngleX = 0.0f;
    static float currentLeftWristAngleY = 0.0f;

    // Define parameters (adjust as needed)
    const float minAngleX = -90.0f;  // Example range, adjust as needed
    const float maxAngleX = 90.0f;   // Example range, adjust as needed
    const float minAngleY = -90.0f;  // Example range, adjust as needed
    const float maxAngleY = 90.0f;   // Example range, adjust as needed

    // Clamp the target angles to the valid ranges
    targetLeftWristAngleX = std::clamp(targetLeftWristAngleX, minAngleX, maxAngleX);
    targetLeftWristAngleY = std::clamp(targetLeftWristAngleY, minAngleY, maxAngleY);

    // Linearly interpolate between the current angles and the target angles.
    currentLeftWristAngleX = (1.0f - deltaTime * smoothingFactor) * currentLeftWristAngleX + deltaTime * smoothingFactor *
        targetLeftWristAngleX;
    currentLeftWristAngleY = (1.0f - deltaTime * smoothingFactor) * currentLeftWristAngleY + deltaTime * smoothingFactor *
        targetLeftWristAngleY;

    // Clamp the current angles to prevent overshoot
    currentLeftWristAngleX = std::clamp(currentLeftWristAngleX, minAngleX, maxAngleX);
    currentLeftWristAngleY = std::clamp(currentLeftWristAngleY, minAngleY, maxAngleY);

    // Update the output angles
    leftWristAngleX = currentLeftWristAngleX;
    leftWristAngleY = currentLeftWristAngleY;

    // In a complete system, you would use these angles to update the
    // 3D position of the arm bones or joints in a rendering engine or
    // simulation.  For demonstration purposes, we'll just print the angles.
    /*// std::cout << "Left Wrist Angle X: " << currentLeftWristAngleX << std::endl;
    // std::cout << "Left Wrist Angle Y: " << currentLeftWristAngleY << std::endl;*/
}


void _Kinesthetics::LeftArm::LeftHand::LeftThumbFinger::setLeftThumbFingerFirstJointAngle(float& left_thumb_finger_first_joint_angle, float target_ring_finger_second_joint_angle_x, float smoothing_factor, float deltaTime)
{
    // This function smoothly changes the x-axis angle of the first joint of the right index finger over time.
    // It uses linear interpolation (lerp) to achieve a smooth transition.

    // Assumptions:
    // - target_right_index_finger_first_joint_angle_x is the desired angle in degrees.
    // - deltaTime is the time elapsed since the last frame (in seconds).
    // - We have an internal variable to track the current angle.
    // - A smoothing factor controls the speed of the transition.

    // Static variable to store the current angle.
    static float current_right_index_finger_first_joint_angle_x = 0.0f;

    // Define parameters (adjust as needed)
    const float minAngle = -90.0f;  // Example range, adjust as needed
    const float maxAngle = 90.0f;   // Example range, adjust as needed

    // Clamp the target angle to the valid range
    target_ring_finger_second_joint_angle_x = std::clamp(target_ring_finger_second_joint_angle_x, minAngle, maxAngle);

    // Linearly interpolate between the current angle and the target angle.
    current_right_index_finger_first_joint_angle_x = (1.0f - deltaTime * smoothing_factor) * current_right_index_finger_first_joint_angle_x + deltaTime * smoothing_factor * target_ring_finger_second_joint_angle_x;

    // Clamp the current angle to prevent overshoot
    current_right_index_finger_first_joint_angle_x = std::clamp(current_right_index_finger_first_joint_angle_x, minAngle, maxAngle);

    // Update the output angle
    left_thumb_finger_first_joint_angle = current_right_index_finger_first_joint_angle_x;

    // In a complete system, you would use this angle to update the
    // 3D position of the finger joint in a rendering engine or simulation.
    // For demonstration purposes, we'll just print the angle.
    // std::cout << "Left Index Finger First Joint Angle X: " << current_right_index_finger_first_joint_angle_x << std::endl;
}

//void _Kinesthetics::LeftArm::LeftHand::LeftIndexFinger::setLeftIndexFingerFirstJointAngles(
//    float& left_index_finger_first_joint_angle_x,
//    float& left_index_finger_first_joint_angle_y,
//    float& left_index_finger_first_joint_angle_z,
//    float target_left_index_finger_first_joint_angle_x,
//    float target_left_index_finger_first_joint_angle_y,
//    float target_left_index_finger_first_joint_angle_z,
//    float smoothing_factor,
//    float deltaTime)
//{
//    // This function smoothly changes the angles of the first joint of the left index finger over time.
//    // It uses linear interpolation (lerp) to achieve a smooth transition.
//
//    // Assumptions:
//    // - target_left_index_finger_first_joint_angle_x, target_left_index_finger_first_joint_angle_y,
//    // target_left_index_finger_first_joint_angle_z are the desired angles in degrees.
//        // - deltaTime is the time elapsed since the last frame (in seconds).
//        // - We have internal variables to track the current angles.
//        // - A smoothing factor controls the speed of the transition.
//
//        // Static variables to store the current angles.
//    static float current_left_index_finger_first_joint_angle_x = 0.0f;
//    static float current_left_index_finger_first_joint_angle_y = 0.0f;
//    static float current_left_index_finger_first_joint_angle_z = 0.0f;
//
//    // Define parameters (adjust as needed)
//    const float minAngleX = -90.0f;  // Example range, adjust as needed
//    const float maxAngleX = 90.0f;   // Example range, adjust as needed
//    const float minAngleY = -90.0f;  // Example range, adjust as needed
//    const float maxAngleY = 90.0f;   // Example range, adjust as needed
//    const float minAngleZ = -90.0f;  // Example range, adjust as needed
//    const float maxAngleZ = 90.0f;   // Example range, adjust as needed
//
//    // Clamp the target angles to the valid ranges
//    target_left_index_finger_first_joint_angle_x = std::clamp(target_left_index_finger_first_joint_angle_x, minAngleX,
//        maxAngleX);
//    target_left_index_finger_first_joint_angle_y = std::clamp(target_left_index_finger_first_joint_angle_y, minAngleY,
//        maxAngleY);
//    target_left_index_finger_first_joint_angle_z = std::clamp(target_left_index_finger_first_joint_angle_z, minAngleZ,
//        maxAngleZ);
//
//    // Linearly interpolate between the current angles and the target angles.
//    current_left_index_finger_first_joint_angle_x = (1.0f - deltaTime * smoothing_factor) *
//        current_left_index_finger_first_joint_angle_x + deltaTime * smoothing_factor * target_left_index_finger_first_joint_angle_x;
//    current_left_index_finger_first_joint_angle_y = (1.0f - deltaTime * smoothing_factor) *
//        current_left_index_finger_first_joint_angle_y + deltaTime * smoothing_factor * target_left_index_finger_first_joint_angle_y;
//    current_left_index_finger_first_joint_angle_z = (1.0f - deltaTime * smoothing_factor) *
//        current_left_index_finger_first_joint_angle_z + deltaTime * smoothing_factor * target_left_index_finger_first_joint_angle_z;
//
//    // Clamp the current angles to prevent overshoot
//    current_left_index_finger_first_joint_angle_x = std::clamp(current_left_index_finger_first_joint_angle_x, minAngleX,
//        maxAngleX);
//    current_left_index_finger_first_joint_angle_y = std::clamp(current_left_index_finger_first_joint_angle_y, minAngleY,
//        maxAngleY);
//    current_left_index_finger_first_joint_angle_z = std::clamp(current_left_index_finger_first_joint_angle_z, minAngleZ,
//        maxAngleZ);
//
//    // Update the output angles
//    left_index_finger_first_joint_angle_x = current_left_index_finger_first_joint_angle_x;
//    left_index_finger_first_joint_angle_y = current_left_index_finger_first_joint_angle_y;
//    left_index_finger_first_joint_angle_z = current_left_index_finger_first_joint_angle_z;
//
//    // In a complete system, you would use these angles to update the
//    // 3D position of the finger joint in a rendering engine or simulation.
//    // For demonstration purposes, we'll just print the angles.
//    // std::cout << "Left Index Finger First Joint Angle X: " << current_left_index_finger_first_joint_angle_x << std::endl;
//    // std::cout << "Left Index Finger First Joint Angle Y: " << current_left_index_finger_first_joint_angle_y << std::endl;
//    // std::cout << "Left Index Finger First Joint Angle Z: " << current_left_index_finger_first_joint_angle_z << std::endl;
//}

//void _Kinesthetics::LeftArm::LeftHand::LeftIndexFinger::setLeftIndexFingerSecondJointAngle(float& left_index_finger_second_joint_angle_x, float target_left_index_finger_second_joint_angle_x, float smoothing_factor, float deltaTime)
//{
//    // This function smoothly changes the angles of the second joint of the left index finger over time.
//    // It uses linear interpolation (lerp) to achieve a smooth transition.
//
//    // Assumptions:
//    // - target_left_index_finger_second_joint_angle_x, target_left_index_finger_second_joint_angle_y,
//    // target_left_index_finger_second_joint_angle_z are the desired angles in degrees.
//    // - deltaTime is the time elapsed since the last frame (in seconds).
//    // - We have internal variables to track the current angles.
//    // - A smoothing factor controls the speed of the transition.
//
//    // Static variables to store the current angles.
//    static float current_left_index_finger_second_joint_angle_x = 0.0f;
//
//    // Define parameters (adjust as needed)
//    const float minAngleX = -90.0f;  // Example range, adjust as needed
//    const float maxAngleX = 90.0f;   // Example range, adjust as needed
//
//    // Clamp the target angles to the valid ranges
//    target_left_index_finger_second_joint_angle_x = std::clamp(target_left_index_finger_second_joint_angle_x, minAngleX,
//        maxAngleX);
//
//    // Linearly interpolate between the current angles and the target angles.
//    current_left_index_finger_second_joint_angle_x = (1.0f - deltaTime * smoothing_factor) *
//        current_left_index_finger_second_joint_angle_x + deltaTime * smoothing_factor *
//        target_left_index_finger_second_joint_angle_x;
//
//    // Clamp the current angles to prevent overshoot
//    current_left_index_finger_second_joint_angle_x = std::clamp(current_left_index_finger_second_joint_angle_x, minAngleX,
//        maxAngleX);
//
//    // Update the output angles
//    left_index_finger_second_joint_angle_x = current_left_index_finger_second_joint_angle_x;
//
//    // In a complete system, you would use these angles to update the
//    // 3D position of the finger joint in a rendering engine or simulation.
//    // For demonstration purposes, we'll just print the angles.
//    // std::cout << "Left Index Finger Second Joint Angle X: " << current_left_index_finger_second_joint_angle_x << std::endl;
//}

void _Kinesthetics::LeftArm::LeftHand::LeftIndexFinger::setLeftIndexFingerSecondJointAngle(float& left_index_finger_second_joint_angle_x, float target_left_index_finger_second_joint_angle_x, float smoothing_factor, float deltaTime)
{
    // This function smoothly changes the angle of the second joint of the right index finger over time.
    // It uses linear interpolation (lerp) to achieve a smooth transition.

    // Assumptions:
    // - target_right_index_finger_second_joint_angle is the desired angle in degrees.
    // - deltaTime is the time elapsed since the last frame (in seconds).
    // - We have an internal variable to track the current angle.
    // - A smoothing factor controls the speed of the transition.

    // Static variable to store the current angle.
    static float current_right_index_finger_second_joint_angle = 0.0f;

    // Define parameters (adjust as needed)
    const float minAngle = -45.0f;  // Example range, adjust as needed
    const float maxAngle = 45.0f;   // Example range, adjust as needed

    // Clamp the target angle to the valid range
    target_left_index_finger_second_joint_angle_x = std::clamp(target_left_index_finger_second_joint_angle_x, minAngle, maxAngle);

    // Linearly interpolate between the current angle and the target angle.
    left_index_finger_second_joint_angle_x = (1.0f - deltaTime * smoothing_factor) * left_index_finger_second_joint_angle_x + deltaTime * smoothing_factor * target_left_index_finger_second_joint_angle_x;

    // Clamp the current angle to prevent overshoot
    current_right_index_finger_second_joint_angle = std::clamp(current_right_index_finger_second_joint_angle, minAngle, maxAngle);

    // Update the output angle
    left_index_finger_second_joint_angle_x = current_right_index_finger_second_joint_angle;

    // In a complete system, you would use this angle to update the
    // 3D position of the finger joint in a rendering engine or simulation.
    // For demonstration purposes, we'll just print the angle.
    // std::cout << "Left Index Finger Second Joint Angle: " << current_right_index_finger_second_joint_angle << std::endl;
}

void _Kinesthetics::LeftArm::LeftHand::LeftIndexFinger::setLeftIndexFingerThirdJointAngle(
    float& left_index_finger_third_joint_angle,
    float target_left_index_finger_third_joint_angle,
    float smoothing_factor,
    float deltaTime)
{
    // This function smoothly changes the angle of the third joint (tip) of the left index finger over time.
    // It uses linear interpolation (lerp) to achieve a smooth transition.

    // Assumptions:
    // - target_left_index_finger_third_joint_angle is the desired angle in degrees.
    // - deltaTime is the time elapsed since the last frame (in seconds).
    // - We have an internal variable to track the current angle.
    // - A smoothing factor controls the speed of the transition.

    // Static variable to store the current angle.
    static float current_left_index_finger_third_joint_angle = 0.0f;

    // Define parameters (adjust as needed)
    const float minAngle = -30.0f;  // Example range, adjust as needed
    const float maxAngle = 30.0f;   // Example range, adjust as needed

    // Clamp the target angle to the valid range
    target_left_index_finger_third_joint_angle = std::clamp(target_left_index_finger_third_joint_angle, minAngle, maxAngle);

    // Linearly interpolate between the current angle and the target angle.
    current_left_index_finger_third_joint_angle = (1.0f - deltaTime * smoothing_factor) *
        current_left_index_finger_third_joint_angle + deltaTime * smoothing_factor * target_left_index_finger_third_joint_angle;

    // Clamp the current angle to prevent overshoot
    current_left_index_finger_third_joint_angle = std::clamp(current_left_index_finger_third_joint_angle, minAngle, maxAngle);

    // Update the output angle
    left_index_finger_third_joint_angle = current_left_index_finger_third_joint_angle;

    // In a complete system, you would use this angle to update the
    // 3D position of the finger joint in a rendering engine or simulation.
    // For demonstration purposes, we'll just print the angle.
    // std::cout << "Left Index Finger Third Joint Angle: " << current_left_index_finger_third_joint_angle << std::endl;
}

void _Kinesthetics::LeftArm::LeftHand::LeftMiddleFinger::setLeftMiddleFingerFirstJointAngle(float& left_middle_finger_first_joint_angle, float target_left_middle_finger_first_joint_angle, float smoothing_factor, float deltaTime)
{
    // This function smoothly changes the angle of the first joint of the right middle finger over time.
    // It uses linear interpolation (lerp) to achieve a smooth transition.

    // Assumptions:
    // - target_right_middle_finger_first_joint_angle is the desired angle in degrees.
    // - deltaTime is the time elapsed since the last frame (in seconds).
    // - We have an internal variable to track the current angle.
    // - A smoothing factor controls the speed of the transition.

    // Static variable to store the current angle.
    static float current_left_middle_finger_first_joint_angle = 0.0f;

    // Define parameters (adjust as needed)
    const float minAngle = -90.0f;  // Example range, adjust as needed
    const float maxAngle = 90.0f;   // Example range, adjust as needed

    // Clamp the target angle to the valid range
    target_left_middle_finger_first_joint_angle = std::clamp(target_left_middle_finger_first_joint_angle, minAngle, maxAngle);

    // Linearly interpolate between the current angle and the target angle.
    current_left_middle_finger_first_joint_angle = (1.0f - deltaTime * smoothing_factor) * current_left_middle_finger_first_joint_angle + deltaTime * smoothing_factor * target_left_middle_finger_first_joint_angle;

    // Clamp the current angle to prevent overshoot
    current_left_middle_finger_first_joint_angle = std::clamp(current_left_middle_finger_first_joint_angle, minAngle, maxAngle);

    // Update the output angle
    left_middle_finger_first_joint_angle = current_left_middle_finger_first_joint_angle;

    // In a complete system, you would use this angle to update the
    // 3D position of the finger joint in a rendering engine or simulation.
    // For demonstration purposes, we'll just print the angle.
    // std::cout << "Left Middle Finger First Joint Angle: " << current_left_middle_finger_first_joint_angle << std::endl;
}

//void _Kinesthetics::LeftArm::LeftHand::LeftMiddleFinger::setLeftMiddleFingerFirstJointAngle(
//    float& right_middle_finger_first_joint_angle,
//    float target_right_middle_finger_first_joint_angle,
//    float smoothing_factor,
//    float deltaTime)
//{
//    // This function smoothly changes the angle of the first joint of the right middle finger over time.
//    // It uses linear interpolation (lerp) to achieve a smooth transition.
//
//    // Assumptions:
//    // - target_right_middle_finger_first_joint_angle is the desired angle in degrees.
//    // - deltaTime is the time elapsed since the last frame (in seconds).
//    // - We have an internal variable to track the current angle.
//    // - A smoothing factor controls the speed of the transition.
//
//    // Static variable to store the current angle.
//    static float current_right_middle_finger_first_joint_angle = 0.0f;
//
//    // Define parameters (adjust as needed)
//    const float minAngle = -90.0f;  // Example range, adjust as needed
//    const float maxAngle = 90.0f;   // Example range, adjust as needed
//
//    // Clamp the target angle to the valid range
//    target_right_middle_finger_first_joint_angle = std::clamp(target_right_middle_finger_first_joint_angle, minAngle, maxAngle);
//
//    // Linearly interpolate between the current angle and the target angle.
//    current_right_middle_finger_first_joint_angle = (1.0f - deltaTime * smoothing_factor) * current_right_middle_finger_first_joint_angle + deltaTime * smoothing_factor * target_right_middle_finger_first_joint_angle;
//
//    // Clamp the current angle to prevent overshoot
//    current_right_middle_finger_first_joint_angle = std::clamp(current_right_middle_finger_first_joint_angle, minAngle, maxAngle);
//
//    // Update the output angle
//    right_middle_finger_first_joint_angle = current_right_middle_finger_first_joint_angle;
//
//    // In a complete system, you would use this angle to update the
//    // 3D position of the finger joint in a rendering engine or simulation.
//    // For demonstration purposes, we'll just print the angle.
//    // std::cout << "Left Middle Finger First Joint Angle: " << current_right_middle_finger_first_joint_angle << std::endl;
//}

void _Kinesthetics::LeftArm::LeftHand::LeftMiddleFinger::setLeftMiddleFingerSecondJointAngle(float& left_middle_finger_second_joint_angle, float target_left_middle_finger_second_joint_angle, float smoothing_factor, float deltaTime)
{
    // This function smoothly changes the angle of the second joint of the left middle finger over time.
    // It uses linear interpolation (lerp) to achieve a smooth transition.

    // Assumptions:
    // - target_left_middle_finger_second_joint_angle is the desired angle in degrees.
    // - deltaTime is the time elapsed since the last frame (in seconds).
    // - We have an internal variable to track the current angle.
    // - A smoothing factor controls the speed of the transition.

    // Static variable to store the current angle.
    static float current_left_middle_finger_second_joint_angle = 0.0f;

    // Define parameters (adjust as needed)
    const float minAngle = -60.0f;  // Example range, adjust as needed
    const float maxAngle = 30.0f;   // Example range, adjust as needed

    // Clamp the target angle to the valid range
    target_left_middle_finger_second_joint_angle = std::clamp(target_left_middle_finger_second_joint_angle, minAngle, maxAngle);

    // Linearly interpolate between the current angle and the target angle.
    current_left_middle_finger_second_joint_angle = (1.0f - deltaTime * smoothing_factor) * current_left_middle_finger_second_joint_angle + deltaTime * smoothing_factor * target_left_middle_finger_second_joint_angle;

    // Clamp the current angle to prevent overshoot
    current_left_middle_finger_second_joint_angle = std::clamp(current_left_middle_finger_second_joint_angle, minAngle, maxAngle);

    // Update the output angle
    left_middle_finger_second_joint_angle = current_left_middle_finger_second_joint_angle;

    // In a complete system, you would use this angle to update the
    // 3D position of the finger joint in a rendering engine or simulation.
    // For demonstration purposes, we'll just print the angle.
    // std::cout << "Left Middle Finger Second Joint Angle: " << current_left_middle_finger_second_joint_angle << std::endl;
}

//void _Kinesthetics::LeftArm::LeftHand::LeftMiddleFinger::setLeftMiddleFingerSecondJointAngle(
//    float& right_middle_finger_second_joint_angle,
//    float target_right_middle_finger_second_joint_angle,
//    float smoothing_factor,
//    float deltaTime)
//{
//    // This function smoothly changes the angle of the second joint of the right middle finger over time.
//    // It uses linear interpolation (lerp) to achieve a smooth transition.
//
//    // Assumptions:
//    // - target_right_middle_finger_second_joint_angle is the desired angle in degrees.
//    // - deltaTime is the time elapsed since the last frame (in seconds).
//    // - We have an internal variable to track the current angle.
//    // - A smoothing factor controls the speed of the transition.
//
//    // Static variable to store the current angle.
//    static float current_right_middle_finger_second_joint_angle = 0.0f;
//
//    // Define parameters (adjust as needed)
//    const float minAngle = -60.0f;  // Example range, adjust as needed
//    const float maxAngle = 30.0f;   // Example range, adjust as needed
//
//    // Clamp the target angle to the valid range
//    target_right_middle_finger_second_joint_angle = std::clamp(target_right_middle_finger_second_joint_angle, minAngle, maxAngle);
//
//    // Linearly interpolate between the current angle and the target angle.
//    current_right_middle_finger_second_joint_angle = (1.0f - deltaTime * smoothing_factor) * current_right_middle_finger_second_joint_angle + deltaTime * smoothing_factor * target_right_middle_finger_second_joint_angle;
//
//    // Clamp the current angle to prevent overshoot
//    current_right_middle_finger_second_joint_angle = std::clamp(current_right_middle_finger_second_joint_angle, minAngle, maxAngle);
//
//    // Update the output angle
//    right_middle_finger_second_joint_angle = current_right_middle_finger_second_joint_angle;
//
//    // In a complete system, you would use this angle to update the
//    // 3D position of the finger joint in a rendering engine or simulation.
//    // For demonstration purposes, we'll just print the angle.
//    // std::cout << "Left Middle Finger Second Joint Angle: " << current_right_middle_finger_second_joint_angle << std::endl;
//}

void _Kinesthetics::LeftArm::LeftHand::LeftMiddleFinger::setLeftMiddleFingerThirdJointAngle(
    float& left_middle_finger_third_joint_angle,
    float target_left_middle_finger_third_joint_angle,
    float smoothing_factor,
    float deltaTime)
{
    // This function smoothly changes the angle of the third joint (tip) of the left middle finger over time.
    // It uses linear interpolation (lerp) to achieve a smooth transition.

    // Assumptions:
    // - target_left_middle_finger_third_joint_angle is the desired angle in degrees.
    // - deltaTime is the time elapsed since the last frame (in seconds).
    // - We have an internal variable to track the current angle.
    // - A smoothing factor controls the speed of the transition.

    // Static variable to store the current angle.
    static float current_left_middle_finger_third_joint_angle = 0.0f;

    // Define parameters (adjust as needed)
    const float minAngle = -45.0f;  // Example range, adjust as needed
    const float maxAngle = 45.0f;   // Example range, adjust as needed

    // Clamp the target angle to the valid range
    target_left_middle_finger_third_joint_angle = std::clamp(target_left_middle_finger_third_joint_angle, minAngle, maxAngle);

    // Linearly interpolate between the current angle and the target angle.
    current_left_middle_finger_third_joint_angle = (1.0f - deltaTime * smoothing_factor) * current_left_middle_finger_third_joint_angle + deltaTime * smoothing_factor * target_left_middle_finger_third_joint_angle;

    // Clamp the current angle to prevent overshoot
    current_left_middle_finger_third_joint_angle = std::clamp(current_left_middle_finger_third_joint_angle, minAngle, maxAngle);

    // Update the output angle
    left_middle_finger_third_joint_angle = current_left_middle_finger_third_joint_angle;

    // In a complete system, you would use this angle to update the
    // 3D position of the finger joint in a rendering engine or simulation.
    // For demonstration purposes, we'll just print the angle.
    // std::cout << "left Middle Finger Third Joint Angle: " << current_left_middle_finger_third_joint_angle << std::endl;
}

//void _Kinesthetics::LeftArm::LeftHand::LeftMiddleFinger::setLeftMiddleFingerThirdJointAngle(
//    float& right_middle_finger_third_joint_angle,
//    float target_right_middle_finger_third_joint_angle,
//    float smoothing_factor,
//    float deltaTime)
//{
//    // This function smoothly changes the angle of the third joint (tip) of the right middle finger over time.
//    // It uses linear interpolation (lerp) to achieve a smooth transition.
//
//    // Assumptions:
//    // - target_right_middle_finger_third_joint_angle is the desired angle in degrees.
//    // - deltaTime is the time elapsed since the last frame (in seconds).
//    // - We have an internal variable to track the current angle.
//    // - A smoothing factor controls the speed of the transition.
//
//    // Static variable to store the current angle.
//    static float current_right_middle_finger_third_joint_angle = 0.0f;
//
//    // Define parameters (adjust as needed)
//    const float minAngle = -45.0f;  // Example range, adjust as needed
//    const float maxAngle = 45.0f;   // Example range, adjust as needed
//
//    // Clamp the target angle to the valid range
//    target_right_middle_finger_third_joint_angle = std::clamp(target_right_middle_finger_third_joint_angle, minAngle, maxAngle);
//
//    // Linearly interpolate between the current angle and the target angle.
//    current_right_middle_finger_third_joint_angle = (1.0f - deltaTime * smoothing_factor) * current_right_middle_finger_third_joint_angle + deltaTime * smoothing_factor * target_right_middle_finger_third_joint_angle;
//
//    // Clamp the current angle to prevent overshoot
//    current_right_middle_finger_third_joint_angle = std::clamp(current_right_middle_finger_third_joint_angle, minAngle, maxAngle);
//
//    // Update the output angle
//    right_middle_finger_third_joint_angle = current_right_middle_finger_third_joint_angle;
//
//    // In a complete system, you would use this angle to update the
//    // 3D position of the finger joint in a rendering engine or simulation.
//    // For demonstration purposes, we'll just print the angle.
//    // std::cout << "Left Middle Finger Third Joint Angle: " << current_right_middle_finger_third_joint_angle << std::endl;
//}

void _Kinesthetics::LeftArm::LeftHand::LeftRingFinger::setLeftRingFingerFirstJointAngle(
    float& left_ring_finger_first_joint_angle,
    float target_left_ring_finger_first_joint_angle,
    float smoothing_factor,
    float deltaTime)
{
    // This function smoothly changes the angle of the first joint of the left ring finger over time.
    // It uses linear interpolation (lerp) to achieve a smooth transition.

    // Assumptions:
    // - target_left_ring_finger_first_joint_angle is the desired angle in degrees.
    // - deltaTime is the time elapsed since the last frame (in seconds).
    // - We have an internal variable to track the current angle.
    // - A smoothing factor controls the speed of the transition.

    // Static variable to store the current angle.
    static float current_left_ring_finger_first_joint_angle = 0.0f;

    // Define parameters (adjust as needed)
    const float minAngle = -80.0f;  // Example range, adjust as needed
    const float maxAngle = 80.0f;   // Example range, adjust as needed

    // Clamp the target angle to the valid range
    target_left_ring_finger_first_joint_angle = std::clamp(target_left_ring_finger_first_joint_angle, minAngle, maxAngle);

    // Linearly interpolate between the current angle and the target angle.
    current_left_ring_finger_first_joint_angle = (1.0f - deltaTime * smoothing_factor) * current_left_ring_finger_first_joint_angle + deltaTime * smoothing_factor * target_left_ring_finger_first_joint_angle;

    // Clamp the current angle to prevent overshoot
    current_left_ring_finger_first_joint_angle = std::clamp(current_left_ring_finger_first_joint_angle, minAngle, maxAngle);

    // Update the output angle
    left_ring_finger_first_joint_angle = current_left_ring_finger_first_joint_angle;

    // In a complete system, you would use this angle to update the
    // 3D position of the finger joint in a rendering engine or simulation.
    // For demonstration purposes, we'll just print the angle.
    // std::cout << "Left Ring Finger First Joint Angle: " << current_left_ring_finger_first_joint_angle << std::endl;
}

//void _Kinesthetics::LeftArm::LeftHand::LeftRingFinger::setLeftRingFingerFirstJointAngle(
//    float& right_ring_finger_first_joint_angle,
//    float target_right_ring_finger_first_joint_angle,
//    float smoothing_factor,
//    float deltaTime)
//{
//    // This function smoothly changes the angle of the first joint of the right ring finger over time.
//    // It uses linear interpolation (lerp) to achieve a smooth transition.
//
//    // Assumptions:
//    // - target_right_ring_finger_first_joint_angle is the desired angle in degrees.
//    // - deltaTime is the time elapsed since the last frame (in seconds).
//    // - We have an internal variable to track the current angle.
//    // - A smoothing factor controls the speed of the transition.
//
//    // Static variable to store the current angle.
//    static float current_right_ring_finger_first_joint_angle = 0.0f;
//
//    // Define parameters (adjust as needed)
//    const float minAngle = -80.0f;  // Example range, adjust as needed
//    const float maxAngle = 80.0f;   // Example range, adjust as needed
//
//    // Clamp the target angle to the valid range
//    target_right_ring_finger_first_joint_angle = std::clamp(target_right_ring_finger_first_joint_angle, minAngle, maxAngle);
//
//    // Linearly interpolate between the current angle and the target angle.
//    current_right_ring_finger_first_joint_angle = (1.0f - deltaTime * smoothing_factor) * current_right_ring_finger_first_joint_angle + deltaTime * smoothing_factor * target_right_ring_finger_first_joint_angle;
//
//    // Clamp the current angle to prevent overshoot
//    current_right_ring_finger_first_joint_angle = std::clamp(current_right_ring_finger_first_joint_angle, minAngle, maxAngle);
//
//    // Update the output angle
//    right_ring_finger_first_joint_angle = current_right_ring_finger_first_joint_angle;
//
//    // In a complete system, you would use this angle to update the
//    // 3D position of the finger joint in a rendering engine or simulation.
//    // For demonstration purposes, we'll just print the angle.
//    // std::cout << "Left Ring Finger First Joint Angle: " << current_right_ring_finger_first_joint_angle << std::endl;
//}

void _Kinesthetics::LeftArm::LeftHand::LeftRingFinger::setLeftRingFingerSecondJointAngle(float& left_ring_finger_second_joint_angle, float target_ring_finger_first_joint_angle, float smoothing_factor, float deltaTime)
{
    // This function smoothly changes the X-axis angle of the second joint of the right ring finger over time.
    // It uses linear interpolation (lerp) to achieve a smooth transition.

    // Assumptions:
    // - target_right_ring_finger_second_joint_angle_x is the desired angle in degrees.
    // - deltaTime is the time elapsed since the last frame (in seconds).
    // - We have an internal variable to track the current angle.
    // - A smoothing factor controls the speed of the transition.

    // Static variable to store the current angle.
    static float current_right_ring_finger_second_joint_angle = 0.0f;

    // Define parameters (adjust as needed)
    const float minAngle = -60.0f;  // Example range, adjust as needed (likely smaller than first joint)
    const float maxAngle = 45.0f;   // Example range, adjust as needed

    // Clamp the target angle to the valid range
    target_ring_finger_first_joint_angle = std::clamp(target_ring_finger_first_joint_angle, minAngle, maxAngle);

    // Linearly interpolate between the current angle and the target angle.
    current_right_ring_finger_second_joint_angle = (1.0f - deltaTime * smoothing_factor) * current_right_ring_finger_second_joint_angle + deltaTime * smoothing_factor * target_ring_finger_first_joint_angle;

    // Clamp the current angle to prevent overshoot
    current_right_ring_finger_second_joint_angle = std::clamp(current_right_ring_finger_second_joint_angle, minAngle, maxAngle);

    // Update the output angle
    left_ring_finger_second_joint_angle = current_right_ring_finger_second_joint_angle;

    // In a complete system, you would use this angle to update the
    // 3D position of the finger joint in a rendering engine or simulation.
    // For demonstration purposes, we'll just print the angle.
    // std::cout << "Left Ring Finger Second Joint Angle: " << current_right_ring_finger_second_joint_angle << std::endl;
}

void _Kinesthetics::LeftArm::LeftHand::LeftRingFinger::setLeftRingFingerThirdJointAngle(float& right_ring_finger_third_joint_angle, float target_right_ring_finger_third_joint_angle_x, float smoothing_factor, float deltaTime)
{
    // This function smoothly changes the X-axis angle of the third joint of the right ring finger over time.
    // It uses linear interpolation (lerp) to achieve a smooth transition.

    // Assumptions:
    // - target_right_ring_finger_third_joint_angle_x is the desired angle in degrees.
    // - deltaTime is the time elapsed since the last frame (in seconds).
    // - We have an internal variable to track the current angle.
    // - A smoothing factor controls the speed of the transition.

    // Static variable to store the current angle.
    static float current_right_ring_finger_third_joint_angle = 0.0f;

    // Define parameters (adjust as needed)
    const float minAngle = -45.0f;  // Example range, adjust as needed (smallest range of motion)
    const float maxAngle = 45.0f;   // Example range, adjust as needed

    // Clamp the target angle to the valid range
    target_right_ring_finger_third_joint_angle_x = std::clamp(target_right_ring_finger_third_joint_angle_x, minAngle, maxAngle);

    // Linearly interpolate between the current angle and the target angle.
    current_right_ring_finger_third_joint_angle = (1.0f - deltaTime * smoothing_factor) * current_right_ring_finger_third_joint_angle + deltaTime * smoothing_factor * target_right_ring_finger_third_joint_angle_x;

    // Clamp the current angle to prevent overshoot
    current_right_ring_finger_third_joint_angle = std::clamp(current_right_ring_finger_third_joint_angle, minAngle, maxAngle);

    // Update the output angle
    right_ring_finger_third_joint_angle = current_right_ring_finger_third_joint_angle;

    // In a complete system, you would use this angle to update the
    // 3D position of the finger joint in a rendering engine or simulation.
    // For demonstration purposes, we'll just print the angle.
    // std::cout << "Left Ring Finger Third Joint Angle: " << current_right_ring_finger_third_joint_angle << std::endl;
}

void _Kinesthetics::LeftArm::LeftHand::LeftPinkyFinger::setLeftPinkyFingerFirstJointAngle(float& right_little_finger_first_joint_angle, float target_right_little_finger_first_joint_angle_x, float smoothing_factor, float deltaTime)
{
    // This function smoothly changes the X-axis angle of the first joint of the right pinky finger over time.
    // It uses linear interpolation (lerp) to achieve a smooth transition.

    // Assumptions:
    // - target_right_little_finger_first_joint_angle_x is the desired angle in degrees.
    // - deltaTime is the time elapsed since the last frame (in seconds).
    // - We have an internal variable to track the current angle.
    // - A smoothing factor controls the speed of the transition.

    // Static variable to store the current angle.
    static float current_right_little_finger_first_joint_angle = 0.0f;

    // Define parameters (adjust as needed)
    const float minAngle = -70.0f;  // Example range, adjust as needed (similar to ring finger, potentially more)
    const float maxAngle = 80.0f;   // Example range, adjust as needed

    // Clamp the target angle to the valid range
    target_right_little_finger_first_joint_angle_x = std::clamp(target_right_little_finger_first_joint_angle_x, minAngle, maxAngle);

    // Linearly interpolate between the current angle and the target angle.
    current_right_little_finger_first_joint_angle = (1.0f - deltaTime * smoothing_factor) * current_right_little_finger_first_joint_angle + deltaTime * smoothing_factor * target_right_little_finger_first_joint_angle_x;

    // Clamp the current angle to prevent overshoot
    current_right_little_finger_first_joint_angle = std::clamp(current_right_little_finger_first_joint_angle, minAngle, maxAngle);

    // Update the output angle
    right_little_finger_first_joint_angle = current_right_little_finger_first_joint_angle;

    // In a complete system, you would use this angle to update the
    // 3D position of the finger joint in a rendering engine or simulation.
    // For demonstration purposes, we'll just print the angle.
    // std::cout << "Left Pinky Finger First Joint Angle: " << current_right_little_finger_first_joint_angle << std::endl;
}

// Left Pinky Finger Second Joint
void _Kinesthetics::LeftArm::LeftHand::LeftPinkyFinger::setLeftPinkyFingerSecondJointAngle(
    float& right_little_finger_second_joint_angle,
    float target_right_little_finger_second_joint_angle_x,
    float smoothing_factor,
    float deltaTime)
{
    static float current_right_little_finger_second_joint_angle = 0.0f;
    const float minAngle = -45.0f;
    const float maxAngle = 45.0f;

    target_right_little_finger_second_joint_angle_x = std::clamp(target_right_little_finger_second_joint_angle_x, minAngle, maxAngle);

    current_right_little_finger_second_joint_angle = (1.0f - deltaTime * smoothing_factor) * current_right_little_finger_second_joint_angle +
        deltaTime * smoothing_factor * target_right_little_finger_second_joint_angle_x;

    current_right_little_finger_second_joint_angle = std::clamp(current_right_little_finger_second_joint_angle, minAngle, maxAngle);

    right_little_finger_second_joint_angle = current_right_little_finger_second_joint_angle;
    // std::cout << "Left Pinky Finger Second Joint Angle: " << current_right_little_finger_second_joint_angle << std::endl;
}

// Left Pinky Finger Third Joint
void _Kinesthetics::LeftArm::LeftHand::LeftPinkyFinger::setLeftPinkyFingerThirdJointAngle(
    float& right_little_finger_third_joint_angle,
    float target_right_little_finger_third_joint_angle_x,
    float smoothing_factor,
    float deltaTime)
{
    static float current_right_little_finger_third_joint_angle = 0.0f;
    const float minAngle = -30.0f;
    const float maxAngle = 30.0f;

    target_right_little_finger_third_joint_angle_x = std::clamp(target_right_little_finger_third_joint_angle_x, minAngle, maxAngle);

    current_right_little_finger_third_joint_angle = (1.0f - deltaTime * smoothing_factor) * current_right_little_finger_third_joint_angle +deltaTime * smoothing_factor * target_right_little_finger_third_joint_angle_x;

    current_right_little_finger_third_joint_angle = std::clamp(current_right_little_finger_third_joint_angle, minAngle, maxAngle);

    right_little_finger_third_joint_angle = current_right_little_finger_third_joint_angle;
    // std::cout << "Left Pinky Finger Third Joint Angle: " << current_right_little_finger_third_joint_angle << std::endl;
}

// Left Thumb Finger First Joint
//void _Kinesthetics::LeftArm::LeftHand::LeftThumbFinger::setLeftThumbFingerFirstJointAngle(
//    float& right_thumb_first_joint_angle,
//    float target_right_thumb_first_joint_angle_x,
//    float smoothing_factor,
//    float deltaTime)
//{
//    static float current_right_thumb_first_joint_angle = 0.0f;
//    const float minAngle = -45.0f;
//    const float maxAngle = 45.0f;
//
//    target_right_thumb_first_joint_angle_x = std::clamp(target_right_thumb_first_joint_angle_x, minAngle, maxAngle);
//
//    current_right_thumb_first_joint_angle = (1.0f - deltaTime * smoothing_factor) * current_right_thumb_first_joint_angle + deltaTime * smoothing_factor * target_right_thumb_first_joint_angle_x;
//
//    current_right_thumb_first_joint_angle = std::clamp(current_right_thumb_first_joint_angle, minAngle, maxAngle);
//
//    right_thumb_first_joint_angle = current_right_thumb_first_joint_angle;
//    // std::cout << "Left Thumb Finger First Joint Angle: " << current_right_thumb_first_joint_angle << std::endl;
//}

// Left Thumb Finger Second Joint
void _Kinesthetics::LeftArm::LeftHand::LeftThumbFinger::setLeftThumbFingerSecondJointAngle(
    float& right_thumb_second_joint_angle,
    float target_right_thumb_second_joint_angle_x,
    float smoothing_factor,
    float deltaTime)
{
    static float current_right_thumb_second_joint_angle = 0.0f;
    const float minAngle = -20.0f;
    const float maxAngle = 60.0f;

    target_right_thumb_second_joint_angle_x = std::clamp(target_right_thumb_second_joint_angle_x, minAngle, maxAngle);

    current_right_thumb_second_joint_angle = (1.0f - deltaTime * smoothing_factor) * current_right_thumb_second_joint_angle + deltaTime * smoothing_factor * target_right_thumb_second_joint_angle_x;

    current_right_thumb_second_joint_angle = std::clamp(current_right_thumb_second_joint_angle, minAngle, maxAngle);

    right_thumb_second_joint_angle = current_right_thumb_second_joint_angle;
    // std::cout << "Left Thumb Finger Second Joint Angle: " << current_right_thumb_second_joint_angle << std::endl;
}

// Left Thumb Finger Second Joint
void _Kinesthetics::LeftArm::LeftHand::LeftThumbFinger::setLeftThumbFingerThirdJointAngle(
    float& right_thumb_thid_joint_angle,
    float target_right_thumb_third_joint_angle_x,
    float smoothing_factor,
    float deltaTime)
{
    static float current_right_thumb_third_joint_angle = 0.0f;
    const float minAngle = -20.0f;
    const float maxAngle = 60.0f;

    target_right_thumb_third_joint_angle_x = std::clamp(target_right_thumb_third_joint_angle_x, minAngle, maxAngle);

    current_right_thumb_third_joint_angle = (1.0f - deltaTime * smoothing_factor) * current_right_thumb_third_joint_angle + deltaTime * smoothing_factor * target_right_thumb_third_joint_angle_x;

    current_right_thumb_third_joint_angle = std::clamp(current_right_thumb_third_joint_angle, minAngle, maxAngle);

    right_thumb_thid_joint_angle = current_right_thumb_third_joint_angle;
    // std::cout << "Left Thumb Finger Second Joint Angle: " << current_right_thumb_third_joint_angle << std::endl;
}

void _Kinesthetics::RightLeg::RightKnee::setRightKneeAngleSmoothly(float& right_knee_angle, float target_right_knee_angle, float smoothing_factor, float deltaTime)
{
    static float current_right_knee_angle = 0.0f;
    const float minAngle = 0.0f; // Minimum knee angle (fully extended)
    const float maxAngle = 120.0f; // Maximum knee angle (fully bent)

    target_right_knee_angle = std::clamp(target_right_knee_angle, minAngle, maxAngle);

    current_right_knee_angle = (1.0f - deltaTime * smoothing_factor) * current_right_knee_angle + deltaTime * smoothing_factor * target_right_knee_angle;

    current_right_knee_angle = std::clamp(current_right_knee_angle, minAngle, maxAngle);

    right_knee_angle = current_right_knee_angle;
    // std::cout << "Right Knee Angle: " << current_right_knee_angle << std::endl;
}

void _Kinesthetics::LeftLeg::LeftKnee::setLeftKneeAngleSmoothly(float& left_knee_angle, float target_left_knee_angle, float smoothing_factor, float deltaTime)
{
    static float current_left_knee_angle = 0.0f;
    const float minAngle = 0.0f; // Minimum knee angle (fully extended)
    const float maxAngle = 120.0f; // Maximum knee angle (fully bent)

    target_left_knee_angle = std::clamp(target_left_knee_angle, minAngle, maxAngle);

    current_left_knee_angle = (1.0f - deltaTime * smoothing_factor) * current_left_knee_angle + deltaTime * smoothing_factor * target_left_knee_angle;

    current_left_knee_angle = std::clamp(current_left_knee_angle, minAngle, maxAngle);

    left_knee_angle = current_left_knee_angle;
    // std::cout << "Left Knee Angle: " << current_left_knee_angle << std::endl;
}

void _Kinesthetics::LeftLeg::LeftAnkle::setLeftAnkleAngleSmoothly(float& left_ankle_angle, float target_left_ankle_angle, float smoothing_factor, float deltaTime)
{
    static float current_left_ankle_angle = 0.0f;
    const float minAngle = -20.0f; // Minimum ankle angle (dorsiflexion)
    const float maxAngle = 30.0f; // Maximum ankle angle (plantarflexion)

    target_left_ankle_angle = std::clamp(target_left_ankle_angle, minAngle, maxAngle);

    current_left_ankle_angle = (1.0f - deltaTime * smoothing_factor) * current_left_ankle_angle + deltaTime * smoothing_factor * target_left_ankle_angle;

    current_left_ankle_angle = std::clamp(current_left_ankle_angle, minAngle, maxAngle);

    left_ankle_angle = current_left_ankle_angle;
    // std::cout << "Left Ankle Angle: " << current_left_ankle_angle << std::endl;
}

void _Kinesthetics::RightLeg::RightAnkle::setRightAnkleAngleSmoothly(float& right_ankle_angle, float target_right_ankle_angle, float smoothing_factor, float deltaTime)
{
    static float current_right_ankle_angle = 0.0f;
    const float minAngle = -20.0f; // Minimum ankle angle (dorsiflexion)
    const float maxAngle = 30.0f; // Maximum ankle angle (plantarflexion)

    target_right_ankle_angle = std::clamp(target_right_ankle_angle, minAngle, maxAngle);

    current_right_ankle_angle = (1.0f - deltaTime * smoothing_factor) * current_right_ankle_angle + deltaTime * smoothing_factor * target_right_ankle_angle;

    current_right_ankle_angle = std::clamp(current_right_ankle_angle, minAngle, maxAngle);

    right_ankle_angle = current_right_ankle_angle;
    // std::cout << "Left Ankle Angle: " << current_right_ankle_angle << std::endl;
}

// Left Big Toe Metatarsophalangeal Joint
//void _Kinesthetics::LeftLeg::LeftFoot::LeftBigToe::setLeftBigToeMetatarsophalangealJointAngleSmoothly(
//    float& right_big_toe_metatarsophalangeal_joint_angle,
//    float target_right_big_toe_metatarsophalangeal_joint_angle,
//    float smoothing_factor,
//    float deltaTime)
//{
//    static float current_right_big_toe_metatarsophalangeal_joint_angle = 0.0f;
//    const float minAngle = -20.0f; // Minimum joint angle (hyperextension)
//    const float maxAngle = 50.0f; // Maximum joint angle (flexion)
//
//    target_right_big_toe_metatarsophalangeal_joint_angle = std::clamp(target_right_big_toe_metatarsophalangeal_joint_angle, minAngle, maxAngle);
//
//    current_right_big_toe_metatarsophalangeal_joint_angle = (1.0f - deltaTime * smoothing_factor) * current_right_big_toe_metatarsophalangeal_joint_angle + deltaTime * smoothing_factor * target_right_big_toe_metatarsophalangeal_joint_angle;
//
//    current_right_big_toe_metatarsophalangeal_joint_angle = std::clamp(current_right_big_toe_metatarsophalangeal_joint_angle, minAngle, maxAngle);
//
//    right_big_toe_metatarsophalangeal_joint_angle = current_right_big_toe_metatarsophalangeal_joint_angle;
//    // std::cout << "Left Big Toe Metatarsophalangeal Joint Angle: " << current_right_big_toe_metatarsophalangeal_joint_angle << std::endl;
//}

// Left Big Toe Interphalangeal Joint
//void _Kinesthetics::LeftLeg::LeftFoot::LeftBigToe::setLeftBigToeProximalInterphalangealJointAngleSmoothly(
//    float& right_big_toe_interphalangeal_joint_angle,
//    float target_right_big_toe_interphalangeal_joint_angle,
//    float smoothing_factor,
//    float deltaTime)
//{
//    static float current_right_big_toe_interphalangeal_joint_angle = 0.0f;
//    const float minAngle = -10.0f; // Minimum joint angle (hyperextension)
//    const float maxAngle = 30.0f; // Maximum joint angle (flexion)
//
//    target_right_big_toe_interphalangeal_joint_angle = std::clamp(target_right_big_toe_interphalangeal_joint_angle, minAngle, maxAngle);
//
//    current_right_big_toe_interphalangeal_joint_angle = (1.0f - deltaTime * smoothing_factor) * current_right_big_toe_interphalangeal_joint_angle + deltaTime * smoothing_factor * target_right_big_toe_interphalangeal_joint_angle;
//
//    current_right_big_toe_interphalangeal_joint_angle = std::clamp(current_right_big_toe_interphalangeal_joint_angle, minAngle, maxAngle);
//
//    right_big_toe_interphalangeal_joint_angle = current_right_big_toe_interphalangeal_joint_angle;
//
//    // std::cout << "Left Big Toe Interphalangeal Joint Angle: " << current_right_big_toe_interphalangeal_joint_angle << std::endl;
//}

// Left 2nd Toe Metatarsophalangeal Joint
//void _Kinesthetics::LeftLeg::LeftFoot::LeftSecondToe::setLeftSecondToeMetatarsophalangealJointAngleSmoothly(
//    float& right_second_toe_metatarsophalangeal_joint_angle,
//    float target_right_second_toe_metatarsophalangeal_joint_angle,
//    float smoothing_factor,
//    float deltaTime)
//{
//    static float current_right_second_toe_metatarsophalangeal_joint_angle = 0.0f;
//    const float minAngle = -20.0f; // Minimum joint angle (hyperextension)
//    const float maxAngle = 50.0f; // Maximum joint angle (flexion)
//
//    target_right_second_toe_metatarsophalangeal_joint_angle = std::clamp(target_right_second_toe_metatarsophalangeal_joint_angle, minAngle, maxAngle);
//
//    current_right_second_toe_metatarsophalangeal_joint_angle = (1.0f - deltaTime * smoothing_factor) * current_right_second_toe_metatarsophalangeal_joint_angle + deltaTime * smoothing_factor * target_right_second_toe_metatarsophalangeal_joint_angle;
//
//    current_right_second_toe_metatarsophalangeal_joint_angle = std::clamp(current_right_second_toe_metatarsophalangeal_joint_angle, minAngle, maxAngle);
//
//    right_second_toe_metatarsophalangeal_joint_angle = current_right_second_toe_metatarsophalangeal_joint_angle;
//    
//    // std::cout << "Left 2nd Toe Metatarsophalangeal Joint Angle: " << current_right_second_toe_metatarsophalangeal_joint_angle << std::endl;
//}
//
//// Left 2nd Toe Proximal Interphalangeal Joint
//void _Kinesthetics::LeftLeg::LeftFoot::LeftSecondToe::setLeftSecondToeProximalInterphalangealJointAngleSmoothly(
//    float& right_second_toe_proximal_interphalangeal_joint_angle,
//    float target_right_second_toe_proximal_interphalangeal_joint_angle,
//    float smoothing_factor,
//    float deltaTime)
//{
//    static float current_right_second_toe_proximal_interphalangeal_joint_angle = 0.0f;
//    const float minAngle = -10.0f; // Minimum joint angle (hyperextension)
//    const float maxAngle = 30.0f; // Maximum joint angle (flexion)
//
//    target_right_second_toe_proximal_interphalangeal_joint_angle = std::clamp(target_right_second_toe_proximal_interphalangeal_joint_angle, minAngle, maxAngle);
//
//    current_right_second_toe_proximal_interphalangeal_joint_angle = (1.0f - deltaTime * smoothing_factor) * current_right_second_toe_proximal_interphalangeal_joint_angle + deltaTime * smoothing_factor * target_right_second_toe_proximal_interphalangeal_joint_angle;
//
//    current_right_second_toe_proximal_interphalangeal_joint_angle = std::clamp(current_right_second_toe_proximal_interphalangeal_joint_angle, minAngle, maxAngle);
//
//    right_second_toe_proximal_interphalangeal_joint_angle = current_right_second_toe_proximal_interphalangeal_joint_angle;
//    
//    // std::cout << "Left 2nd Toe Proximal Interphalangeal Joint Angle: " << current_right_second_toe_proximal_interphalangeal_joint_angle << std::endl;
//}
//
//void _Kinesthetics::LeftLeg::LeftFoot::LeftSecondToe::setLeftSecondToeDistalInterphalangealJointAngleSmoothly(
//    float& right_second_toe_distal_interphalangeal_joint_angle,
//    float target_right_second_toe_distal_interphalangeal_joint_angle,
//    float smoothing_factor,
//    float deltaTime)
//{
//    static float current_right_second_toe_distal_interphalangeal_joint_angle = 0.0f;
//    const float minAngle = -10.0f; // Minimum joint angle (hyperextension)
//    const float maxAngle = 20.0f; // Maximum joint angle (flexion)
//
//    target_right_second_toe_distal_interphalangeal_joint_angle = std::clamp(target_right_second_toe_distal_interphalangeal_joint_angle, minAngle, maxAngle);
//
//    current_right_second_toe_distal_interphalangeal_joint_angle = (1.0f - deltaTime * smoothing_factor) *current_right_second_toe_distal_interphalangeal_joint_angle +
//        deltaTime * smoothing_factor * target_right_second_toe_distal_interphalangeal_joint_angle;
//
//    current_right_second_toe_distal_interphalangeal_joint_angle =
//        std::clamp(current_right_second_toe_distal_interphalangeal_joint_angle, minAngle, maxAngle);
//
//    right_second_toe_distal_interphalangeal_joint_angle = current_right_second_toe_distal_interphalangeal_joint_angle;
//    // std::cout << "Left 2nd Toe Distal Interphalangeal Joint Angle: " <<
//        current_right_second_toe_distal_interphalangeal_joint_angle << std::endl;
//}
//
//void _Kinesthetics::LeftLeg::LeftFoot::LeftThirdToe::setLeftThirdToeMetatarsophalangealJointAngleSmoothly(
//    float& right_third_toe_metatarsophalangeal_joint_angle,
//    float target_right_third_toe_metatarsophalangeal_joint_angle,
//    float smoothing_factor,
//    float deltaTime)
//{
//    static float current_right_third_toe_metatarsophalangeal_joint_angle = 0.0f;
//    const float minAngle = -20.0f; // Minimum joint angle (hyperextension)
//    const float maxAngle = 50.0f; // Maximum joint angle (flexion)
//
//    target_right_third_toe_metatarsophalangeal_joint_angle = std::clamp(target_right_third_toe_metatarsophalangeal_joint_angle, minAngle, maxAngle);
//
//    current_right_third_toe_metatarsophalangeal_joint_angle = (1.0f - deltaTime * smoothing_factor) * current_right_third_toe_metatarsophalangeal_joint_angle + deltaTime * smoothing_factor * target_right_third_toe_metatarsophalangeal_joint_angle;
//
//    current_right_third_toe_metatarsophalangeal_joint_angle = std::clamp(current_right_third_toe_metatarsophalangeal_joint_angle, minAngle, maxAngle);
//
//    right_third_toe_metatarsophalangeal_joint_angle = current_right_third_toe_metatarsophalangeal_joint_angle;
//    // std::cout << "Left 3rd Toe Metatarsophalangeal Joint Angle: " << current_right_third_toe_metatarsophalangeal_joint_angle << std::endl;
//}
//
//void _Kinesthetics::LeftLeg::LeftFoot::LeftThirdToe::setLeftThirdToeProximalInterphalangealJointAngleSmoothly(
//    float& right_third_toe_proximal_interphalangeal_joint_angle,
//    float target_right_third_toe_proximal_interphalangeal_joint_angle,
//    float smoothing_factor,
//    float deltaTime)
//{
//    static float current_right_third_toe_proximal_interphalangeal_joint_angle = 0.0f;
//    const float minAngle = -10.0f; // Minimum joint angle (hyperextension)
//    const float maxAngle = 30.0f; // Maximum joint angle (flexion)
//
//    target_right_third_toe_proximal_interphalangeal_joint_angle = std::clamp(target_right_third_toe_proximal_interphalangeal_joint_angle, minAngle, maxAngle);
//
//    current_right_third_toe_proximal_interphalangeal_joint_angle = (1.0f - deltaTime * smoothing_factor) * current_right_third_toe_proximal_interphalangeal_joint_angle + deltaTime * smoothing_factor * target_right_third_toe_proximal_interphalangeal_joint_angle;
//
//    current_right_third_toe_proximal_interphalangeal_joint_angle = std::clamp(current_right_third_toe_proximal_interphalangeal_joint_angle, minAngle, maxAngle);
//
//    right_third_toe_proximal_interphalangeal_joint_angle = current_right_third_toe_proximal_interphalangeal_joint_angle;
//    
//    // std::cout << "Left 3rd Toe Proximal Interphalangeal Joint Angle: " << current_right_third_toe_proximal_interphalangeal_joint_angle << std::endl;
//}
//
//void _Kinesthetics::LeftLeg::LeftFoot::LeftThirdToe::setLeftThirdToeDistalInterphalangealJointAngleSmoothly(
//    float& right_third_toe_distal_interphalangeal_joint_angle,
//    float target_right_third_toe_distal_interphalangeal_joint_angle,
//    float smoothing_factor,
//    float deltaTime)
//{
//    static float current_right_third_toe_distal_interphalangeal_joint_angle = 0.0f;
//    const float minAngle = -10.0f; // Minimum joint angle (hyperextension)
//    const float maxAngle = 20.0f; // Maximum joint angle (flexion)
//
//    target_right_third_toe_distal_interphalangeal_joint_angle = std::clamp(target_right_third_toe_distal_interphalangeal_joint_angle, minAngle, maxAngle);
//
//    current_right_third_toe_distal_interphalangeal_joint_angle = (1.0f - deltaTime * smoothing_factor) * current_right_third_toe_distal_interphalangeal_joint_angle + deltaTime * smoothing_factor * target_right_third_toe_distal_interphalangeal_joint_angle;
//
//    current_right_third_toe_distal_interphalangeal_joint_angle = std::clamp(current_right_third_toe_distal_interphalangeal_joint_angle, minAngle, maxAngle);
//
//    right_third_toe_distal_interphalangeal_joint_angle = current_right_third_toe_distal_interphalangeal_joint_angle;
//    
//    // std::cout << "Left 3rd Toe Distal Interphalangeal Joint Angle: " << current_right_third_toe_distal_interphalangeal_joint_angle << std::endl;
//}
//
//void _Kinesthetics::LeftLeg::LeftFoot::LeftFourthToe::setLeftFourthToeMetatarsophalangealJointAngleSmoothly(
//    float& right_fourth_toe_metatarsophalangeal_joint_angle,
//    float target_right_fourth_toe_metatarsophalangeal_joint_angle,
//    float smoothing_factor,
//    float deltaTime)
//{
//    static float current_right_fourth_toe_metatarsophalangeal_joint_angle = 0.0f;
//    const float minAngle = -20.0f; // Minimum joint angle (hyperextension)
//    const float maxAngle = 50.0f; // Maximum joint angle (flexion)
//
//    target_right_fourth_toe_metatarsophalangeal_joint_angle = std::clamp(target_right_fourth_toe_metatarsophalangeal_joint_angle, minAngle, maxAngle);
//
//    current_right_fourth_toe_metatarsophalangeal_joint_angle = (1.0f - deltaTime * smoothing_factor) * current_right_fourth_toe_metatarsophalangeal_joint_angle + deltaTime * smoothing_factor * target_right_fourth_toe_metatarsophalangeal_joint_angle;
//
//    current_right_fourth_toe_metatarsophalangeal_joint_angle = std::clamp(current_right_fourth_toe_metatarsophalangeal_joint_angle, minAngle, maxAngle);
//
//    right_fourth_toe_metatarsophalangeal_joint_angle = current_right_fourth_toe_metatarsophalangeal_joint_angle;
//    
//    // std::cout << "Left 4th Toe Metatarsophalangeal Joint Angle: " << current_right_fourth_toe_metatarsophalangeal_joint_angle << std::endl;
//}
//
//void _Kinesthetics::LeftLeg::LeftFoot::LeftFourthToe::setLeftFourthToeProximalInterphalangealJointAngleSmoothly(
//    float& right_fourth_toe_proximal_interphalangeal_joint_angle,
//    float target_right_fourth_toe_proximal_interphalangeal_joint_angle,
//    float smoothing_factor,
//    float deltaTime)
//{
//    static float current_right_fourth_toe_proximal_interphalangeal_joint_angle = 0.0f;
//    const float minAngle = -10.0f; // Minimum joint angle (hyperextension)
//    const float maxAngle = 30.0f; // Maximum joint angle (flexion)
//
//    target_right_fourth_toe_proximal_interphalangeal_joint_angle = std::clamp(target_right_fourth_toe_proximal_interphalangeal_joint_angle, minAngle, maxAngle);
//
//    current_right_fourth_toe_proximal_interphalangeal_joint_angle = (1.0f - deltaTime * smoothing_factor) * current_right_fourth_toe_proximal_interphalangeal_joint_angle + deltaTime * smoothing_factor * target_right_fourth_toe_proximal_interphalangeal_joint_angle;
//
//    current_right_fourth_toe_proximal_interphalangeal_joint_angle = std::clamp(current_right_fourth_toe_proximal_interphalangeal_joint_angle, minAngle, maxAngle);
//
//    right_fourth_toe_proximal_interphalangeal_joint_angle = current_right_fourth_toe_proximal_interphalangeal_joint_angle;
//    
//    // std::cout << "Left 4th Toe Proximal Interphalangeal Joint Angle: " << current_right_fourth_toe_proximal_interphalangeal_joint_angle << std::endl;
//}
//
//void _Kinesthetics::LeftLeg::LeftFoot::LeftFourthToe::setLeftFourthToeDistalInterphalangealJointAngleSmoothly(
//    float& right_fourth_toe_distal_interphalangeal_joint_angle,
//    float target_right_fourth_toe_distal_interphalangeal_joint_angle,
//    float smoothing_factor,
//    float deltaTime)
//{
//    static float current_right_fourth_toe_distal_interphalangeal_joint_angle = 0.0f;
//    const float minAngle = -10.0f; // Minimum joint angle (hyperextension)
//    const float maxAngle = 20.0f; // Maximum joint angle (flexion)
//
//    target_right_fourth_toe_distal_interphalangeal_joint_angle = std::clamp(target_right_fourth_toe_distal_interphalangeal_joint_angle, minAngle, maxAngle);
//
//    current_right_fourth_toe_distal_interphalangeal_joint_angle = (1.0f - deltaTime * smoothing_factor) * current_right_fourth_toe_distal_interphalangeal_joint_angle + deltaTime * smoothing_factor * target_right_fourth_toe_distal_interphalangeal_joint_angle;
//
//    current_right_fourth_toe_distal_interphalangeal_joint_angle = std::clamp(current_right_fourth_toe_distal_interphalangeal_joint_angle, minAngle, maxAngle);
//
//    right_fourth_toe_distal_interphalangeal_joint_angle = current_right_fourth_toe_distal_interphalangeal_joint_angle;
//    
//    // std::cout << "Left 4th Toe Distal Interphalangeal Joint Angle: " << current_right_fourth_toe_distal_interphalangeal_joint_angle << std::endl;
//}
//
//void _Kinesthetics::LeftLeg::LeftFoot::LeftFifthToe::setLeftFifthToeMetatarsophalangealJointAngleSmoothly(
//    float& right_fifth_toe_metatarsophalangeal_joint_angle,
//    float target_right_fifth_toe_metatarsophalangeal_joint_angle,
//    float smoothing_factor,
//    float deltaTime)
//{
//    static float current_right_fifth_toe_metatarsophalangeal_joint_angle = 0.0f;
//    const float minAngle = -10.0f; // Minimum joint angle (hyperextension)
//    const float maxAngle = 30.0f; // Maximum joint angle (flexion)
//
//    target_right_fifth_toe_metatarsophalangeal_joint_angle = std::clamp(target_right_fifth_toe_metatarsophalangeal_joint_angle, minAngle, maxAngle);
//
//    current_right_fifth_toe_metatarsophalangeal_joint_angle = (1.0f - deltaTime * smoothing_factor) * current_right_fifth_toe_metatarsophalangeal_joint_angle + deltaTime * smoothing_factor * target_right_fifth_toe_metatarsophalangeal_joint_angle;
//
//    current_right_fifth_toe_metatarsophalangeal_joint_angle = std::clamp(current_right_fifth_toe_metatarsophalangeal_joint_angle, minAngle, maxAngle);
//
//    right_fifth_toe_metatarsophalangeal_joint_angle = current_right_fifth_toe_metatarsophalangeal_joint_angle;
//
//    // std::cout << "Left 5th Toe Metatarsophalangeal Joint Angle: " << current_right_fifth_toe_metatarsophalangeal_joint_angle << std::endl;
//}
//
//void _Kinesthetics::LeftLeg::LeftFoot::LeftFifthToe::setLeftFifthToeProximalInterphalangealJointAngleSmoothly(
//    float& right_fifth_toe_proximal_interphalangeal_joint_angle,
//    float target_right_fifth_toe_proximal_interphalangeal_joint_angle,
//    float smoothing_factor,
//    float deltaTime)
//{
//    static float current_right_fifth_toe_proximal_interphalangeal_joint_angle = 0.0f;
//    const float minAngle = -10.0f; // Minimum joint angle (hyperextension)
//    const float maxAngle = 30.0f; // Maximum joint angle (flexion)
//
//    target_right_fifth_toe_proximal_interphalangeal_joint_angle = std::clamp(target_right_fifth_toe_proximal_interphalangeal_joint_angle, minAngle, maxAngle);
//
//    current_right_fifth_toe_proximal_interphalangeal_joint_angle = (1.0f - deltaTime * smoothing_factor) * current_right_fifth_toe_proximal_interphalangeal_joint_angle + deltaTime * smoothing_factor * target_right_fifth_toe_proximal_interphalangeal_joint_angle;
//
//    current_right_fifth_toe_proximal_interphalangeal_joint_angle = std::clamp(current_right_fifth_toe_proximal_interphalangeal_joint_angle, minAngle, maxAngle);
//
//    right_fifth_toe_proximal_interphalangeal_joint_angle = current_right_fifth_toe_proximal_interphalangeal_joint_angle;
//
//    // std::cout << "Left 5th Toe Proximal Interphalangeal Joint Angle: " << current_right_fifth_toe_proximal_interphalangeal_joint_angle << std::endl;
//}
//
//void _Kinesthetics::LeftLeg::LeftFoot::LeftFifthToe::setLeftFifthToeDistalInterphalangealJointAngleSmoothly(
//    float& right_fifth_toe_distal_interphalangeal_joint_angle,
//    float target_right_fifth_toe_distal_interphalangeal_joint_angle,
//    float smoothing_factor,
//    float deltaTime)
//{
//    static float current_right_fifth_toe_distal_interphalangeal_joint_angle = 0.0f;
//    const float minAngle = -10.0f; // Minimum joint angle (hyperextension)
//    const float maxAngle = 20.0f; // Maximum joint angle (flexion)
//
//    target_right_fifth_toe_distal_interphalangeal_joint_angle = std::clamp(target_right_fifth_toe_distal_interphalangeal_joint_angle, minAngle, maxAngle);
//    
//    current_right_fifth_toe_distal_interphalangeal_joint_angle = (1.0f - deltaTime * smoothing_factor) * current_right_fifth_toe_distal_interphalangeal_joint_angle + deltaTime * smoothing_factor * target_right_fifth_toe_distal_interphalangeal_joint_angle;
//    
//    current_right_fifth_toe_distal_interphalangeal_joint_angle = std::clamp(current_right_fifth_toe_distal_interphalangeal_joint_angle, minAngle, maxAngle);
//    
//    right_fifth_toe_distal_interphalangeal_joint_angle = current_right_fifth_toe_distal_interphalangeal_joint_angle;
//    
//    // std::cout << "Left 5th Toe Distal Interphalangeal Joint Angle: " << current_right_fifth_toe_distal_interphalangeal_joint_angle << std::endl;
//}

void _Kinesthetics::LeftLeg::LeftFoot::LeftBigToe::setLeftBigToeMetatarsophalangealJointAngleSmoothly(
    float& left_big_toe_metatarsophalangeal_joint_angle,
    float target_left_big_toe_metatarsophalangeal_joint_angle,
    float smoothing_factor,
    float deltaTime)
{
    static float current_left_big_toe_metatarsophalangeal_joint_angle = 0.0f;
    const float minAngle = -10.0f; // Minimum joint angle (hyperextension)
    const float maxAngle = 30.0f; // Maximum joint angle (flexion)

    target_left_big_toe_metatarsophalangeal_joint_angle = std::clamp(target_left_big_toe_metatarsophalangeal_joint_angle, minAngle, maxAngle);

    current_left_big_toe_metatarsophalangeal_joint_angle = (1.0f - deltaTime * smoothing_factor) * current_left_big_toe_metatarsophalangeal_joint_angle + deltaTime * smoothing_factor * target_left_big_toe_metatarsophalangeal_joint_angle;

    current_left_big_toe_metatarsophalangeal_joint_angle = std::clamp(current_left_big_toe_metatarsophalangeal_joint_angle, minAngle, maxAngle);

    left_big_toe_metatarsophalangeal_joint_angle = current_left_big_toe_metatarsophalangeal_joint_angle;

    // std::cout << "Left Big Toe Metatarsophalangeal Joint Angle: " << current_left_big_toe_metatarsophalangeal_joint_angle << std::endl;
}

void _Kinesthetics::LeftLeg::LeftFoot::LeftBigToe::setLeftBigToeProximalInterphalangealJointAngleSmoothly(
    float& left_big_toe_proximal_interphalangeal_joint_angle,
    float target_left_big_toe_proximal_interphalangeal_joint_angle,
    float smoothing_factor,
    float deltaTime)
{
    static float current_left_big_toe_proximal_interphalangeal_joint_angle = 0.0f;
    const float minAngle = -10.0f; // Minimum joint angle (hyperextension)
    const float maxAngle = 30.0f; // Maximum joint angle (flexion)

    target_left_big_toe_proximal_interphalangeal_joint_angle =
        std::clamp(target_left_big_toe_proximal_interphalangeal_joint_angle, minAngle, maxAngle);

    current_left_big_toe_proximal_interphalangeal_joint_angle = (1.0f - deltaTime * smoothing_factor) *
        current_left_big_toe_proximal_interphalangeal_joint_angle + deltaTime * smoothing_factor *
        target_left_big_toe_proximal_interphalangeal_joint_angle;

    current_left_big_toe_proximal_interphalangeal_joint_angle =
        std::clamp(current_left_big_toe_proximal_interphalangeal_joint_angle, minAngle, maxAngle);

    left_big_toe_proximal_interphalangeal_joint_angle = current_left_big_toe_proximal_interphalangeal_joint_angle;

    // std::cout << "Left Big Toe Proximal Interphalangeal Joint Angle: " << current_left_big_toe_proximal_interphalangeal_joint_angle << std::endl;
}

void _Kinesthetics::LeftLeg::LeftFoot::LeftBigToe::setLeftBigToeDistalInterphalangealJointAngleSmoothly(
    float& left_big_toe_distal_interphalangeal_joint_angle,
    float target_left_big_toe_distal_interphalangeal_joint_angle,
    float smoothing_factor,
    float deltaTime)
{
    static float current_left_big_toe_distal_interphalangeal_joint_angle = 0.0f;
    const float minAngle = -10.0f; // Minimum joint angle (hyperextension)
    const float maxAngle = 20.0f; // Maximum joint angle (flexion)

    target_left_big_toe_distal_interphalangeal_joint_angle =
        std::clamp(target_left_big_toe_distal_interphalangeal_joint_angle, minAngle, maxAngle);

    current_left_big_toe_distal_interphalangeal_joint_angle = (1.0f - deltaTime * smoothing_factor) *
        current_left_big_toe_distal_interphalangeal_joint_angle + deltaTime * smoothing_factor *
        target_left_big_toe_distal_interphalangeal_joint_angle;

    current_left_big_toe_distal_interphalangeal_joint_angle =
        std::clamp(current_left_big_toe_distal_interphalangeal_joint_angle, minAngle, maxAngle);

    left_big_toe_distal_interphalangeal_joint_angle = current_left_big_toe_distal_interphalangeal_joint_angle;

    // std::cout << "Left Big Toe Distal Interphalangeal Joint Angle: " << current_left_big_toe_distal_interphalangeal_joint_angle << std::endl;
}

void _Kinesthetics::LeftLeg::LeftFoot::LeftSecondToe::setLeftSecondToeMetatarsophalangealJointAngleSmoothly(
    float& left_second_toe_metatarsophalangeal_joint_angle,
    float target_left_second_toe_metatarsophalangeal_joint_angle,
    float smoothing_factor,
    float deltaTime)
{
    static float current_left_second_toe_metatarsophalangeal_joint_angle = 0.0f;
    const float minAngle = -10.0f; // Minimum joint angle (hyperextension)
    const float maxAngle = 30.0f; // Maximum joint angle (flexion)

    target_left_second_toe_metatarsophalangeal_joint_angle =
        std::clamp(target_left_second_toe_metatarsophalangeal_joint_angle, minAngle, maxAngle);

    current_left_second_toe_metatarsophalangeal_joint_angle = (1.0f - deltaTime * smoothing_factor) *
        current_left_second_toe_metatarsophalangeal_joint_angle + deltaTime * smoothing_factor *
        target_left_second_toe_metatarsophalangeal_joint_angle;

    current_left_second_toe_metatarsophalangeal_joint_angle =
        std::clamp(current_left_second_toe_metatarsophalangeal_joint_angle, minAngle, maxAngle);

    left_second_toe_metatarsophalangeal_joint_angle = current_left_second_toe_metatarsophalangeal_joint_angle;

    // std::cout << "Left Second Toe Metatarsophalangeal Joint Angle: " << current_left_second_toe_metatarsophalangeal_joint_angle << std::endl;
}

void _Kinesthetics::LeftLeg::LeftFoot::LeftSecondToe::setLeftSecondToeProximalInterphalangealJointAngleSmoothly(
    float& left_second_toe_proximal_interphalangeal_joint_angle,
    float target_left_second_toe_proximal_interphalangeal_joint_angle,
    float smoothing_factor,
    float deltaTime)
{
    static float current_left_second_toe_proximal_interphalangeal_joint_angle = 0.0f;
    const float minAngle = -10.0f; // Minimum joint angle (hyperextension)
    const float maxAngle = 30.0f; // Maximum joint angle (flexion)

    target_left_second_toe_proximal_interphalangeal_joint_angle =
        std::clamp(target_left_second_toe_proximal_interphalangeal_joint_angle, minAngle, maxAngle);

    current_left_second_toe_proximal_interphalangeal_joint_angle = (1.0f - deltaTime * smoothing_factor) *
        current_left_second_toe_proximal_interphalangeal_joint_angle + deltaTime * smoothing_factor *
        target_left_second_toe_proximal_interphalangeal_joint_angle;

    current_left_second_toe_proximal_interphalangeal_joint_angle =
        std::clamp(current_left_second_toe_proximal_interphalangeal_joint_angle, minAngle, maxAngle);

    left_second_toe_proximal_interphalangeal_joint_angle =
        current_left_second_toe_proximal_interphalangeal_joint_angle;

    // std::cout << "Left Second Toe Proximal Interphalangeal Joint Angle: " << current_left_second_toe_proximal_interphalangeal_joint_angle << std::endl;
}

void _Kinesthetics::LeftLeg::LeftFoot::LeftSecondToe::setLeftSecondToeDistalInterphalangealJointAngleSmoothly(
    float& left_second_toe_distal_interphalangeal_joint_angle,
    float target_left_second_toe_distal_interphalangeal_joint_angle,
    float smoothing_factor,
    float deltaTime)
{
    static float current_left_second_toe_distal_interphalangeal_joint_angle = 0.0f;
    const float minAngle = -10.0f; // Minimum joint angle (hyperextension)
    const float maxAngle = 20.0f; // Maximum joint angle (flexion)

    target_left_second_toe_distal_interphalangeal_joint_angle =
        std::clamp(target_left_second_toe_distal_interphalangeal_joint_angle, minAngle, maxAngle);

    current_left_second_toe_distal_interphalangeal_joint_angle = (1.0f - deltaTime * smoothing_factor) *
        current_left_second_toe_distal_interphalangeal_joint_angle + deltaTime * smoothing_factor *
        target_left_second_toe_distal_interphalangeal_joint_angle;

    current_left_second_toe_distal_interphalangeal_joint_angle =
        std::clamp(current_left_second_toe_distal_interphalangeal_joint_angle, minAngle, maxAngle);

    left_second_toe_distal_interphalangeal_joint_angle =
        current_left_second_toe_distal_interphalangeal_joint_angle;

    // std::cout << "Left Second Toe Distal Interphalangeal Joint Angle: " << current_left_second_toe_distal_interphalangeal_joint_angle << std::endl;
}

void _Kinesthetics::LeftLeg::LeftFoot::LeftThirdToe::setLeftThirdToeMetatarsophalangealJointAngleSmoothly(
    float& left_third_toe_metatarsophalangeal_joint_angle,
    float target_left_third_toe_metatarsophalangeal_joint_angle,
    float smoothing_factor,
    float deltaTime)
{
    static float current_left_third_toe_metatarsophalangeal_joint_angle = 0.0f;
    const float minAngle = -10.0f; // Minimum joint angle (hyperextension)
    const float maxAngle = 30.0f; // Maximum joint angle (flexion)

    target_left_third_toe_metatarsophalangeal_joint_angle =
        std::clamp(target_left_third_toe_metatarsophalangeal_joint_angle, minAngle, maxAngle);

    current_left_third_toe_metatarsophalangeal_joint_angle = (1.0f - deltaTime * smoothing_factor) *
        current_left_third_toe_metatarsophalangeal_joint_angle + deltaTime * smoothing_factor *
        target_left_third_toe_metatarsophalangeal_joint_angle;

    current_left_third_toe_metatarsophalangeal_joint_angle =
        std::clamp(current_left_third_toe_metatarsophalangeal_joint_angle, minAngle, maxAngle);

    left_third_toe_metatarsophalangeal_joint_angle = current_left_third_toe_metatarsophalangeal_joint_angle;

    // std::cout << "Left Third Toe Metatarsophalangeal Joint Angle: " << current_left_third_toe_metatarsophalangeal_joint_angle << std::endl;
}

void _Kinesthetics::LeftLeg::LeftFoot::LeftThirdToe::setLeftThirdToeProximalInterphalangealJointAngleSmoothly(
    float& left_third_toe_proximal_interphalangeal_joint_angle,
    float target_left_third_toe_proximal_interphalangeal_joint_angle,
    float smoothing_factor,
    float deltaTime)
{
    static float current_left_third_toe_proximal_interphalangeal_joint_angle = 0.0f;
    const float minAngle = -10.0f; // Minimum joint angle (hyperextension)
    const float maxAngle = 30.0f; // Maximum joint angle (flexion)

    target_left_third_toe_proximal_interphalangeal_joint_angle =
        std::clamp(target_left_third_toe_proximal_interphalangeal_joint_angle, minAngle, maxAngle);

    current_left_third_toe_proximal_interphalangeal_joint_angle = (1.0f - deltaTime * smoothing_factor) *
        current_left_third_toe_proximal_interphalangeal_joint_angle + deltaTime * smoothing_factor *
        target_left_third_toe_proximal_interphalangeal_joint_angle;

    current_left_third_toe_proximal_interphalangeal_joint_angle =
        std::clamp(current_left_third_toe_proximal_interphalangeal_joint_angle, minAngle, maxAngle);

    left_third_toe_proximal_interphalangeal_joint_angle =
        current_left_third_toe_proximal_interphalangeal_joint_angle;

    // std::cout << "Left Third Toe Proximal Interphalangeal Joint Angle: " << current_left_third_toe_proximal_interphalangeal_joint_angle << std::endl;
}

void _Kinesthetics::LeftLeg::LeftFoot::LeftThirdToe::setLeftThirdToeDistalInterphalangealJointAngleSmoothly(
    float& left_third_toe_distal_interphalangeal_joint_angle,
    float target_left_third_toe_distal_interphalangeal_joint_angle,
    float smoothing_factor,
    float deltaTime)
{
    static float current_left_third_toe_distal_interphalangeal_joint_angle = 0.0f;
    const float minAngle = -10.0f; // Minimum joint angle (hyperextension)
    const float maxAngle = 20.0f; // Maximum joint angle (flexion)

    target_left_third_toe_distal_interphalangeal_joint_angle = std::clamp(target_left_third_toe_distal_interphalangeal_joint_angle, minAngle, maxAngle);

    current_left_third_toe_distal_interphalangeal_joint_angle = (1.0f - deltaTime * smoothing_factor) * current_left_third_toe_distal_interphalangeal_joint_angle + deltaTime * smoothing_factor * target_left_third_toe_distal_interphalangeal_joint_angle;

    current_left_third_toe_distal_interphalangeal_joint_angle = std::clamp(current_left_third_toe_distal_interphalangeal_joint_angle, minAngle, maxAngle);

    left_third_toe_distal_interphalangeal_joint_angle = current_left_third_toe_distal_interphalangeal_joint_angle;

    // std::cout << "Left Third Toe Distal Interphalangeal Joint Angle: " << current_left_third_toe_distal_interphalangeal_joint_angle << std::endl;
}

void _Kinesthetics::LeftLeg::LeftFoot::LeftFourthToe::setLeftFourthToeMetatarsophalangealJointAngleSmoothly(
    float& left_fourth_toe_metatarsophalangeal_joint_angle,
    float target_left_fourth_toe_metatarsophalangeal_joint_angle,
    float smoothing_factor,
    float deltaTime)
{
    static float current_left_fourth_toe_metatarsophalangeal_joint_angle = 0.0f;
    const float minAngle = -10.0f; // Minimum joint angle (hyperextension)
    const float maxAngle = 30.0f; // Maximum joint angle (flexion)

    target_left_fourth_toe_metatarsophalangeal_joint_angle =
        std::clamp(target_left_fourth_toe_metatarsophalangeal_joint_angle, minAngle, maxAngle);

    current_left_fourth_toe_metatarsophalangeal_joint_angle = (1.0f - deltaTime * smoothing_factor) *
        current_left_fourth_toe_metatarsophalangeal_joint_angle + deltaTime * smoothing_factor *
        target_left_fourth_toe_metatarsophalangeal_joint_angle;

    current_left_fourth_toe_metatarsophalangeal_joint_angle =
        std::clamp(current_left_fourth_toe_metatarsophalangeal_joint_angle, minAngle, maxAngle);

    left_fourth_toe_metatarsophalangeal_joint_angle = current_left_fourth_toe_metatarsophalangeal_joint_angle;

    // std::cout << "Left Fourth Toe Metatarsophalangeal Joint Angle: " << current_left_fourth_toe_metatarsophalangeal_joint_angle << std::endl;
}

void _Kinesthetics::LeftLeg::LeftFoot::LeftFourthToe::setLeftFourthToeProximalInterphalangealJointAngleSmoothly(
    float& left_fourth_toe_proximal_interphalangeal_joint_angle,
    float target_left_fourth_toe_proximal_interphalangeal_joint_angle,
    float smoothing_factor,
    float deltaTime)
{
    static float current_left_fourth_toe_proximal_interphalangeal_joint_angle = 0.0f;
    const float minAngle = -10.0f; // Minimum joint angle (hyperextension)
    const float maxAngle = 30.0f; // Maximum joint angle (flexion)

    target_left_fourth_toe_proximal_interphalangeal_joint_angle =
        std::clamp(target_left_fourth_toe_proximal_interphalangeal_joint_angle, minAngle, maxAngle);

    current_left_fourth_toe_proximal_interphalangeal_joint_angle = (1.0f - deltaTime * smoothing_factor) *
        current_left_fourth_toe_proximal_interphalangeal_joint_angle + deltaTime * smoothing_factor *
        target_left_fourth_toe_proximal_interphalangeal_joint_angle;

    current_left_fourth_toe_proximal_interphalangeal_joint_angle =
        std::clamp(current_left_fourth_toe_proximal_interphalangeal_joint_angle, minAngle, maxAngle);

    left_fourth_toe_proximal_interphalangeal_joint_angle =
        current_left_fourth_toe_proximal_interphalangeal_joint_angle;

    // std::cout << "Left Fourth Toe Proximal Interphalangeal Joint Angle: " << current_left_fourth_toe_proximal_interphalangeal_joint_angle << std::endl;
}

void _Kinesthetics::LeftLeg::LeftFoot::LeftFourthToe::setLeftFourthToeDistalInterphalangealJointAngleSmoothly(
    float& left_fourth_toe_distal_interphalangeal_joint_angle,
    float target_left_fourth_toe_distal_interphalangeal_joint_angle,
    float smoothing_factor,
    float deltaTime)
{
    static float current_left_fourth_toe_distal_interphalangeal_joint_angle = 0.0f;
    const float minAngle = -10.0f; // Minimum joint angle (hyperextension)
    const float maxAngle = 20.0f; // Maximum joint angle (flexion)

    target_left_fourth_toe_distal_interphalangeal_joint_angle =
        std::clamp(target_left_fourth_toe_distal_interphalangeal_joint_angle, minAngle, maxAngle);

    current_left_fourth_toe_distal_interphalangeal_joint_angle = (1.0f - deltaTime * smoothing_factor) *
        current_left_fourth_toe_distal_interphalangeal_joint_angle + deltaTime * smoothing_factor *
        target_left_fourth_toe_distal_interphalangeal_joint_angle;

    current_left_fourth_toe_distal_interphalangeal_joint_angle =
        std::clamp(current_left_fourth_toe_distal_interphalangeal_joint_angle, minAngle, maxAngle);

    left_fourth_toe_distal_interphalangeal_joint_angle =
        current_left_fourth_toe_distal_interphalangeal_joint_angle;

    // std::cout << "Left Fourth Toe Distal Interphalangeal Joint Angle: " << current_left_fourth_toe_distal_interphalangeal_joint_angle << std::endl;
}

void _Kinesthetics::LeftLeg::LeftFoot::LeftFifthToe::setLeftFifthToeMetatarsophalangealJointAngleSmoothly(
    float& left_fifth_toe_metatarsophalangeal_joint_angle,
    float target_left_fifth_toe_metatarsophalangeal_joint_angle,
    float smoothing_factor,
    float deltaTime)
{
    static float current_left_fifth_toe_metatarsophalangeal_joint_angle = 0.0f;
    const float minAngle = -10.0f; // Minimum joint angle (hyperextension)
    const float maxAngle = 30.0f; // Maximum joint angle (flexion)

    target_left_fifth_toe_metatarsophalangeal_joint_angle =
        std::clamp(target_left_fifth_toe_metatarsophalangeal_joint_angle, minAngle, maxAngle);

    current_left_fifth_toe_metatarsophalangeal_joint_angle = (1.0f - deltaTime * smoothing_factor) *
        current_left_fifth_toe_metatarsophalangeal_joint_angle + deltaTime * smoothing_factor *
        target_left_fifth_toe_metatarsophalangeal_joint_angle;

    current_left_fifth_toe_metatarsophalangeal_joint_angle =
        std::clamp(current_left_fifth_toe_metatarsophalangeal_joint_angle, minAngle, maxAngle);

    left_fifth_toe_metatarsophalangeal_joint_angle = current_left_fifth_toe_metatarsophalangeal_joint_angle;

    // std::cout << "Left Fifth Toe Metatarsophalangeal Joint Angle: " << current_left_fifth_toe_metatarsophalangeal_joint_angle << std::endl;
}

void _Kinesthetics::LeftLeg::LeftFoot::LeftFifthToe::setLeftFifthToeProximalInterphalangealJointAngleSmoothly(
    float& left_fifth_toe_proximal_interphalangeal_joint_angle,
    float target_left_fifth_toe_proximal_interphalangeal_joint_angle,
    float smoothing_factor,
    float deltaTime)
{
    static float current_left_fifth_toe_proximal_interphalangeal_joint_angle = 0.0f;
    const float minAngle = -10.0f; // Minimum joint angle (hyperextension)
    const float maxAngle = 30.0f; // Maximum joint angle (flexion)

    target_left_fifth_toe_proximal_interphalangeal_joint_angle =
        std::clamp(target_left_fifth_toe_proximal_interphalangeal_joint_angle, minAngle, maxAngle);

    current_left_fifth_toe_proximal_interphalangeal_joint_angle = (1.0f - deltaTime * smoothing_factor) *
        current_left_fifth_toe_proximal_interphalangeal_joint_angle + deltaTime * smoothing_factor *
        target_left_fifth_toe_proximal_interphalangeal_joint_angle;

    current_left_fifth_toe_proximal_interphalangeal_joint_angle =
        std::clamp(current_left_fifth_toe_proximal_interphalangeal_joint_angle, minAngle, maxAngle);

    left_fifth_toe_proximal_interphalangeal_joint_angle =
        current_left_fifth_toe_proximal_interphalangeal_joint_angle;

    // std::cout << "Left Fifth Toe Proximal Interphalangeal Joint Angle: " << current_left_fifth_toe_proximal_interphalangeal_joint_angle << std::endl;
}

void _Kinesthetics::LeftLeg::LeftFoot::LeftFifthToe::setLeftFifthToeDistalInterphalangealJointAngleSmoothly(
    float& left_fifth_toe_distal_interphalangeal_joint_angle,
    float target_left_fifth_toe_distal_interphalangeal_joint_angle,
    float smoothing_factor,
    float deltaTime)
{
    static float current_left_fifth_toe_distal_interphalangeal_joint_angle = 0.0f;
    const float minAngle = -10.0f; // Minimum joint angle (hyperextension)
    const float maxAngle = 20.0f; // Maximum joint angle (flexion)

    target_left_fifth_toe_distal_interphalangeal_joint_angle =
        std::clamp(target_left_fifth_toe_distal_interphalangeal_joint_angle, minAngle, maxAngle);

    current_left_fifth_toe_distal_interphalangeal_joint_angle = (1.0f - deltaTime * smoothing_factor) *
        current_left_fifth_toe_distal_interphalangeal_joint_angle + deltaTime * smoothing_factor *
        target_left_fifth_toe_distal_interphalangeal_joint_angle;

    current_left_fifth_toe_distal_interphalangeal_joint_angle =
        std::clamp(current_left_fifth_toe_distal_interphalangeal_joint_angle, minAngle, maxAngle);

    left_fifth_toe_distal_interphalangeal_joint_angle =
        current_left_fifth_toe_distal_interphalangeal_joint_angle;

    // std::cout << "Left Fifth Toe Distal Interphalangeal Joint Angle: " << current_left_fifth_toe_distal_interphalangeal_joint_angle << std::endl;
}

void _Kinesthetics::RightLeg::RightFoot::RightBigToe::setRightBigToeMetatarsophalangealJointAngleSmoothly(float& right_big_toe_metatarsophalangeal_joint_angle, float target_right_big_toe_metatarsophalangeal_joint_angle, float smoothing_factor, float deltaTime)
{
    // This function smoothly changes the metatarsophalangeal joint angle of the right big toe over time.
    // It uses linear interpolation (lerp) to achieve a smooth transition.

    // Static variable to store the current angle.
    static float current_right_big_toe_metatarsophalangeal_joint_angle = 0.0f;

    // Define parameters (adjust as needed)
    const float minAngle = -45.0f;  // Example range, adjust as needed
    const float maxAngle = 45.0f;   // Example range, adjust as needed

    // Clamp the target angle to the valid range
    target_right_big_toe_metatarsophalangeal_joint_angle = std::clamp(target_right_big_toe_metatarsophalangeal_joint_angle,
        minAngle, maxAngle);

    // Linearly interpolate between the current angle and the target angle.
    current_right_big_toe_metatarsophalangeal_joint_angle = (1.0f - deltaTime * smoothing_factor) *
        current_right_big_toe_metatarsophalangeal_joint_angle + deltaTime * smoothing_factor *
        target_right_big_toe_metatarsophalangeal_joint_angle;

    // Clamp the current angle to prevent overshoot
    current_right_big_toe_metatarsophalangeal_joint_angle = std::clamp(current_right_big_toe_metatarsophalangeal_joint_angle,
        minAngle, maxAngle);

    // Update the output angle
    right_big_toe_metatarsophalangeal_joint_angle = current_right_big_toe_metatarsophalangeal_joint_angle;

    // Print the current angle for debugging purposes
    // // std::cout << "Right Big Toe Metatarsophalangeal Joint Angle: " << current_right_big_toe_metatarsophalangeal_joint_angle << std::endl;
}

void _Kinesthetics::RightLeg::RightFoot::RightBigToe::setRightBigToeInterphalangealJointAngleSmoothly(float& right_big_toe_interphalangeal_joint_angle, float target_right_big_toe_interphalangeal_joint_angle, float smoothing_factor, float deltaTime)
{
    // This function smoothly changes the Interphalangeal joint angle of the right second toe over time.
    // It uses linear interpolation (lerp) to achieve a smooth transition.

    // Static variable to store the current angle.
    static float current_right_big_toe_interphalangeal_joint_jngle = 0.0f;

    // Define parameters (adjust as needed)
    const float minAngle = -45.0f;  // Example range, adjust as needed
    const float maxAngle = 45.0f;   // Example range, adjust as needed

    // Clamp the target angle to the valid range
    target_right_big_toe_interphalangeal_joint_angle = std::clamp(target_right_big_toe_interphalangeal_joint_angle, minAngle, maxAngle);

    // Linearly interpolate between the current angle and the target angle.
    current_right_big_toe_interphalangeal_joint_jngle = (1.0f - deltaTime * smoothing_factor) *
        current_right_big_toe_interphalangeal_joint_jngle + deltaTime * smoothing_factor *
        target_right_big_toe_interphalangeal_joint_angle;

    // Clamp the current angle to prevent overshoot
    current_right_big_toe_interphalangeal_joint_jngle =
        std::clamp(current_right_big_toe_interphalangeal_joint_jngle, minAngle, maxAngle);

    // Update the output angle
    right_big_toe_interphalangeal_joint_angle = current_right_big_toe_interphalangeal_joint_jngle;

    // Print the current angle for debugging purposes
    // std::cout << "Right Second Toe Metatarsophalangeal Joint Angle: " << current_right_big_toe_interphalangeal_joint_jngle << std::endl;
}

void _Kinesthetics::RightLeg::RightFoot::RightSecondToe::setRightSecondToeMetatarsophalangealJointAngleSmoothly(float& right_second_toe_metatarsophalangeal_joint_angle, float target_right_second_toe_metatarsophalangeal_joint_angle, float smoothing_factor, float deltaTime)
{
    // This function smoothly changes the Metatarsophalangeal joint angle of the right second toe over time.
    // It uses linear interpolation (lerp) to achieve a smooth transition.

    // Static variable to store the current angle.
    static float current_right_second_toe_metatarsophalangeal_joint_jngle = 0.0f;

    // Define parameters (adjust as needed)
    const float minAngle = -45.0f;  // Example range, adjust as needed
    const float maxAngle = 45.0f;   // Example range, adjust as needed

    // Clamp the target angle to the valid range
    target_right_second_toe_metatarsophalangeal_joint_angle = std::clamp(target_right_second_toe_metatarsophalangeal_joint_angle, minAngle, maxAngle);

    // Linearly interpolate between the current angle and the target angle.
    current_right_second_toe_metatarsophalangeal_joint_jngle = (1.0f - deltaTime * smoothing_factor) *
        current_right_second_toe_metatarsophalangeal_joint_jngle + deltaTime * smoothing_factor *
        target_right_second_toe_metatarsophalangeal_joint_angle;

    // Clamp the current angle to prevent overshoot
    current_right_second_toe_metatarsophalangeal_joint_jngle =
        std::clamp(current_right_second_toe_metatarsophalangeal_joint_jngle, minAngle, maxAngle);

    // Update the output angle
    right_second_toe_metatarsophalangeal_joint_angle = current_right_second_toe_metatarsophalangeal_joint_jngle;

    // Print the current angle for debugging purposes
    // std::cout << "Right Second Toe Metatarsophalangeal Joint Angle: " << current_right_second_toe_metatarsophalangeal_joint_jngle << std::endl;
}

void _Kinesthetics::RightLeg::RightFoot::RightSecondToe::setRightSecondToeProximalInterphalangealJointAngleSmoothly(float& right_second_toe_proximal_interphalangeal_joint_angle, float target_right_second_toe_proximal_interphalangeal_joint_angle, float smoothing_factor, float deltaTime)
{
    // This function smoothly changes the Metatarsophalangeal joint angle of the right second toe over time.
    // It uses linear interpolation (lerp) to achieve a smooth transition.

    // Static variable to store the current angle.
    static float current_right_second_toe_proximophalangeal_joint_jngle = 0.0f;

    // Define parameters (adjust as needed)
    const float minAngle = -45.0f;  // Example range, adjust as needed
    const float maxAngle = 45.0f;   // Example range, adjust as needed

    // Clamp the target angle to the valid range
    target_right_second_toe_proximal_interphalangeal_joint_angle = std::clamp(target_right_second_toe_proximal_interphalangeal_joint_angle, minAngle, maxAngle);

    // Linearly interpolate between the current angle and the target angle.
    current_right_second_toe_proximophalangeal_joint_jngle = (1.0f - deltaTime * smoothing_factor) *
        current_right_second_toe_proximophalangeal_joint_jngle + deltaTime * smoothing_factor *
        target_right_second_toe_proximal_interphalangeal_joint_angle;

    // Clamp the current angle to prevent overshoot
    current_right_second_toe_proximophalangeal_joint_jngle =
        std::clamp(current_right_second_toe_proximophalangeal_joint_jngle, minAngle, maxAngle);

    // Update the output angle
    right_second_toe_proximal_interphalangeal_joint_angle = current_right_second_toe_proximophalangeal_joint_jngle;

    // Print the current angle for debugging purposes
    // std::cout << "Right Second Toe Metatarsophalangeal Joint Angle: " << current_right_second_toe_proximophalangeal_joint_jngle << std::endl;
}

void _Kinesthetics::RightLeg::RightFoot::RightSecondToe::setRightSecondToeDistalInterphalangealJointAngleSmoothly(float& right_second_toe_distal_interphalangeal_joint_angle, float target_right_second_toe_distal_interphalangeal_joint_angle, float smoothing_factor, float deltaTime)
{
    // This function smoothly changes the Metatarsophalangeal joint angle of the right second toe over time.
    // It uses linear interpolation (lerp) to achieve a smooth transition.

    // Static variable to store the current angle.
    static float current_right_second_toe_distal_interphalangeal_joint_jngle = 0.0f;

    // Define parameters (adjust as needed)
    const float minAngle = -45.0f;  // Example range, adjust as needed
    const float maxAngle = 45.0f;   // Example range, adjust as needed

    // Clamp the target angle to the valid range
    target_right_second_toe_distal_interphalangeal_joint_angle = std::clamp(target_right_second_toe_distal_interphalangeal_joint_angle, minAngle, maxAngle);

    // Linearly interpolate between the current angle and the target angle.
    current_right_second_toe_distal_interphalangeal_joint_jngle = (1.0f - deltaTime * smoothing_factor) *
        current_right_second_toe_distal_interphalangeal_joint_jngle + deltaTime * smoothing_factor *
        target_right_second_toe_distal_interphalangeal_joint_angle;

    // Clamp the current angle to prevent overshoot
    current_right_second_toe_distal_interphalangeal_joint_jngle =
        std::clamp(current_right_second_toe_distal_interphalangeal_joint_jngle, minAngle, maxAngle);

    // Update the output angle
    right_second_toe_distal_interphalangeal_joint_angle = current_right_second_toe_distal_interphalangeal_joint_jngle;

    // Print the current angle for debugging purposes
    // std::cout << "Right Second Toe Metatarsophalangeal Joint Angle: " << current_right_second_toe_distal_interphalangeal_joint_jngle << std::endl;
}

void _Kinesthetics::RightLeg::RightFoot::RightThirdToe::setRightThirdToeMetatarsophalangealJointAngleSmoothly(float& right_third_toe_metatarsophalangeal_joint_angle, float target_right_third_toe_metatarsophalangeal_joint_angle, float smoothing_factor, float deltaTime)
{
    // This function smoothly changes the Metatarsophalangeal joint angle of the right second toe over time.
    // It uses linear interpolation (lerp) to achieve a smooth transition.

    // Static variable to store the current angle.
    static float current_right_second_toe_distal_interphalangeal_joint_jngle = 0.0f;

    // Define parameters (adjust as needed)
    const float minAngle = -45.0f;  // Example range, adjust as needed
    const float maxAngle = 45.0f;   // Example range, adjust as needed

    // Clamp the target angle to the valid range
    target_right_third_toe_metatarsophalangeal_joint_angle = std::clamp(target_right_third_toe_metatarsophalangeal_joint_angle, minAngle, maxAngle);

    // Linearly interpolate between the current angle and the target angle.
    current_right_second_toe_distal_interphalangeal_joint_jngle = (1.0f - deltaTime * smoothing_factor) *
        current_right_second_toe_distal_interphalangeal_joint_jngle + deltaTime * smoothing_factor *
        target_right_third_toe_metatarsophalangeal_joint_angle;

    // Clamp the current angle to prevent overshoot
    current_right_second_toe_distal_interphalangeal_joint_jngle =
        std::clamp(current_right_second_toe_distal_interphalangeal_joint_jngle, minAngle, maxAngle);

    // Update the output angle
    right_third_toe_metatarsophalangeal_joint_angle = current_right_second_toe_distal_interphalangeal_joint_jngle;

    // Print the current angle for debugging purposes
    // std::cout << "Right Second Toe Metatarsophalangeal Joint Angle: " << current_right_second_toe_distal_interphalangeal_joint_jngle << std::endl;
}

void _Kinesthetics::RightLeg::RightFoot::RightThirdToe::setRightThirdToeProximalInterphalangealJointAngleSmoothly(float& right_third_toe_proximal_interphalangeal_joint_angle, float target_right_third_toe_proximal_interphalangeal_joint_angle, float smoothing_factor, float deltaTime)
{
    // This function smoothly changes the Metatarsophalangeal joint angle of the right second toe over time.
    // It uses linear interpolation (lerp) to achieve a smooth transition.

    // Static variable to store the current angle.
    static float current_right_third_toe_proximal_interphalangeal_joint_angle = 0.0f;

    // Define parameters (adjust as needed)
    const float minAngle = -45.0f;  // Example range, adjust as needed
    const float maxAngle = 45.0f;   // Example range, adjust as needed

    // Clamp the target angle to the valid range
    target_right_third_toe_proximal_interphalangeal_joint_angle = std::clamp(target_right_third_toe_proximal_interphalangeal_joint_angle, minAngle, maxAngle);

    // Linearly interpolate between the current angle and the target angle.
    current_right_third_toe_proximal_interphalangeal_joint_angle = (1.0f - deltaTime * smoothing_factor) *
        current_right_third_toe_proximal_interphalangeal_joint_angle + deltaTime * smoothing_factor *
        target_right_third_toe_proximal_interphalangeal_joint_angle;

    // Clamp the current angle to prevent overshoot
    current_right_third_toe_proximal_interphalangeal_joint_angle =
        std::clamp(current_right_third_toe_proximal_interphalangeal_joint_angle, minAngle, maxAngle);

    // Update the output angle
    right_third_toe_proximal_interphalangeal_joint_angle = current_right_third_toe_proximal_interphalangeal_joint_angle;

    // Print the current angle for debugging purposes
    // std::cout << "Right Second Toe Metatarsophalangeal Joint Angle: " << current_right_third_toe_proximal_interphalangeal_joint_angle << std::endl;
}

void _Kinesthetics::RightLeg::RightFoot::RightThirdToe::setRightThirdToeDistalInterphalangealJointAngleSmoothly(float& right_third_toe_distal_interphalangeal_joint_angle, float target_right_third_toe_distal_interphalangeal_joint_angle, float smoothing_factor, float deltaTime)
{
    // This function smoothly changes the Metatarsophalangeal joint angle of the right second toe over time.
    // It uses linear interpolation (lerp) to achieve a smooth transition.

    // Static variable to store the current angle.
    static float current_right_third_toe_distal_interphalangeal_joint_angle = 0.0f;

    // Define parameters (adjust as needed)
    const float minAngle = -45.0f;  // Example range, adjust as needed
    const float maxAngle = 45.0f;   // Example range, adjust as needed

    // Clamp the target angle to the valid range
    target_right_third_toe_distal_interphalangeal_joint_angle = std::clamp(target_right_third_toe_distal_interphalangeal_joint_angle, minAngle, maxAngle);

    // Linearly interpolate between the current angle and the target angle.
    current_right_third_toe_distal_interphalangeal_joint_angle = (1.0f - deltaTime * smoothing_factor) *
        current_right_third_toe_distal_interphalangeal_joint_angle + deltaTime * smoothing_factor *
        target_right_third_toe_distal_interphalangeal_joint_angle;

    // Clamp the current angle to prevent overshoot
    current_right_third_toe_distal_interphalangeal_joint_angle =
        std::clamp(current_right_third_toe_distal_interphalangeal_joint_angle, minAngle, maxAngle);

    // Update the output angle
    right_third_toe_distal_interphalangeal_joint_angle = current_right_third_toe_distal_interphalangeal_joint_angle;

    // Print the current angle for debugging purposes
    // std::cout << "Right Second Toe Metatarsophalangeal Joint Angle: " << current_right_third_toe_distal_interphalangeal_joint_angle << std::endl;
}

void _Kinesthetics::RightLeg::RightFoot::RightFourthToe::setRightFourthToeMetatarsophalangealJointAngleSmoothly(float& right_fourth_toe_metatarsophalangeal_joint_angle, float target_right_fourth_toe_metatarsophalangeal_joint_angle, float smoothing_factor, float deltaTime)
{
    // This function smoothly changes the Metatarsophalangeal joint angle of the right second toe over time.
    // It uses linear interpolation (lerp) to achieve a smooth transition.

    // Static variable to store the current angle.
    static float current_right_third_toe_distal_interphalangeal_joint_angle = 0.0f;

    // Define parameters (adjust as needed)
    const float minAngle = -45.0f;  // Example range, adjust as needed
    const float maxAngle = 45.0f;   // Example range, adjust as needed

    // Clamp the target angle to the valid range
    target_right_fourth_toe_metatarsophalangeal_joint_angle = std::clamp(target_right_fourth_toe_metatarsophalangeal_joint_angle, minAngle, maxAngle);

    // Linearly interpolate between the current angle and the target angle.
    current_right_third_toe_distal_interphalangeal_joint_angle = (1.0f - deltaTime * smoothing_factor) *
        current_right_third_toe_distal_interphalangeal_joint_angle + deltaTime * smoothing_factor *
        target_right_fourth_toe_metatarsophalangeal_joint_angle;

    // Clamp the current angle to prevent overshoot
    current_right_third_toe_distal_interphalangeal_joint_angle = std::clamp(current_right_third_toe_distal_interphalangeal_joint_angle, minAngle, maxAngle);

    // Update the output angle
    right_fourth_toe_metatarsophalangeal_joint_angle = current_right_third_toe_distal_interphalangeal_joint_angle;

    // Print the current angle for debugging purposes
    // std::cout << "Right Second Toe Metatarsophalangeal Joint Angle: " << current_right_third_toe_distal_interphalangeal_joint_angle << std::endl;
}

void _Kinesthetics::RightLeg::RightFoot::RightFourthToe::setRightFourthToeProximalInterphalangealJointAngleSmoothly(float& right_fourth_toe_proximal_interphalangeal_joint_angle, float target_right_fourth_toe_proximal_interphalangeal_joint_angle, float smoothing_factor, float deltaTime)
{
    // This function smoothly changes the Metatarsophalangeal joint angle of the right second toe over time.
    // It uses linear interpolation (lerp) to achieve a smooth transition.

    // Static variable to store the current angle.
    static float current_right_third_toe_distal_interphalangeal_joint_angle = 0.0f;

    // Define parameters (adjust as needed)
    const float minAngle = -45.0f;  // Example range, adjust as needed
    const float maxAngle = 45.0f;   // Example range, adjust as needed

    // Clamp the target angle to the valid range
    target_right_fourth_toe_proximal_interphalangeal_joint_angle = std::clamp(target_right_fourth_toe_proximal_interphalangeal_joint_angle, minAngle, maxAngle);

    // Linearly interpolate between the current angle and the target angle.
    current_right_third_toe_distal_interphalangeal_joint_angle = (1.0f - deltaTime * smoothing_factor) *
        current_right_third_toe_distal_interphalangeal_joint_angle + deltaTime * smoothing_factor *
        target_right_fourth_toe_proximal_interphalangeal_joint_angle;

    // Clamp the current angle to prevent overshoot
    current_right_third_toe_distal_interphalangeal_joint_angle = std::clamp(current_right_third_toe_distal_interphalangeal_joint_angle, minAngle, maxAngle);

    // Update the output angle
    right_fourth_toe_proximal_interphalangeal_joint_angle = current_right_third_toe_distal_interphalangeal_joint_angle;

    // Print the current angle for debugging purposes
    // std::cout << "Right Second Toe Metatarsophalangeal Joint Angle: " << current_right_third_toe_distal_interphalangeal_joint_angle << std::endl;
}

void _Kinesthetics::RightLeg::RightFoot::RightFourthToe::setRightFourthToeDistalInterphalangealJointAngleSmoothly(float& right_fourth_toe_distal_interphalangeal_joint_angle, float target_right_fourth_toe_distal_interphalangeal_joint_angle, float smoothing_factor, float deltaTime)
{
    // This function smoothly changes the Metatarsophalangeal joint angle of the right second toe over time.
    // It uses linear interpolation (lerp) to achieve a smooth transition.

    // Static variable to store the current angle.
    static float current_right_fourth_toe_distal_interphalangeal_joint_angle = 0.0f;

    // Define parameters (adjust as needed)
    const float minAngle = -45.0f;  // Example range, adjust as needed
    const float maxAngle = 45.0f;   // Example range, adjust as needed

    // Clamp the target angle to the valid range
    target_right_fourth_toe_distal_interphalangeal_joint_angle = std::clamp(target_right_fourth_toe_distal_interphalangeal_joint_angle, minAngle, maxAngle);

    // Linearly interpolate between the current angle and the target angle.
    target_right_fourth_toe_distal_interphalangeal_joint_angle = (1.0f - deltaTime * smoothing_factor) *
        current_right_fourth_toe_distal_interphalangeal_joint_angle + deltaTime * smoothing_factor *
        target_right_fourth_toe_distal_interphalangeal_joint_angle;

    // Clamp the current angle to prevent overshoot
    current_right_fourth_toe_distal_interphalangeal_joint_angle = std::clamp(current_right_fourth_toe_distal_interphalangeal_joint_angle, minAngle, maxAngle);

    // Update the output angle
    right_fourth_toe_distal_interphalangeal_joint_angle = current_right_fourth_toe_distal_interphalangeal_joint_angle;

    // Print the current angle for debugging purposes
    // std::cout << "Right Second Toe Metatarsophalangeal Joint Angle: " << current_right_fourth_toe_distal_interphalangeal_joint_angle << std::endl;
}

void _Kinesthetics::RightLeg::RightFoot::RightFifthToe::setRightFifthToeMetatarsophalangealJointAngleSmoothly(float& right_fifth_toe_metatarsophalangeal_joint_angle, float target_right_fifth_toe_metatarsophalangeal_joint_angle, float smoothing_factor, float deltaTime)
{
    // This function smoothly changes the Metatarsophalangeal joint angle of the right second toe over time.
    // It uses linear interpolation (lerp) to achieve a smooth transition.

    // Static variable to store the current angle.
    static float current_right_fifth_toe_metatarsophalangeal_joint_angle = 0.0f;

    // Define parameters (adjust as needed)
    const float minAngle = -45.0f;  // Example range, adjust as needed
    const float maxAngle = 45.0f;   // Example range, adjust as needed

    // Clamp the target angle to the valid range
    target_right_fifth_toe_metatarsophalangeal_joint_angle = std::clamp(target_right_fifth_toe_metatarsophalangeal_joint_angle, minAngle, maxAngle);

    // Linearly interpolate between the current angle and the target angle.
    target_right_fifth_toe_metatarsophalangeal_joint_angle = (1.0f - deltaTime * smoothing_factor) *
        current_right_fifth_toe_metatarsophalangeal_joint_angle + deltaTime * smoothing_factor *
        target_right_fifth_toe_metatarsophalangeal_joint_angle;

    // Clamp the current angle to prevent overshoot
    target_right_fifth_toe_metatarsophalangeal_joint_angle = std::clamp(target_right_fifth_toe_metatarsophalangeal_joint_angle, minAngle, maxAngle);

    // Update the output angle
    right_fifth_toe_metatarsophalangeal_joint_angle = current_right_fifth_toe_metatarsophalangeal_joint_angle;

    // Print the current angle for debugging purposes
    // std::cout << "Right Second Toe Metatarsophalangeal Joint Angle: " << current_right_fifth_toe_metatarsophalangeal_joint_angle << std::endl;
}

void _Kinesthetics::RightLeg::RightFoot::RightFifthToe::setRightFifthToeProximalInterphalangealJointAngleSmoothly(float& right_fifth_toe_proximal_interphalangeal_joint_angle, float target_right_fifth_toe_proximal_interphalangeal_joint_angle, float smoothing_factor, float deltaTime)
{
    // This function smoothly changes the Metatarsophalangeal joint angle of the right second toe over time.
    // It uses linear interpolation (lerp) to achieve a smooth transition.

    // Static variable to store the current angle.
    static float current_right_fifth_toe_proximal_interphalangeal_joint_angle = 0.0f;

    // Define parameters (adjust as needed)
    const float minAngle = -45.0f;  // Example range, adjust as needed
    const float maxAngle = 45.0f;   // Example range, adjust as needed

    // Clamp the target angle to the valid range
    target_right_fifth_toe_proximal_interphalangeal_joint_angle = std::clamp(target_right_fifth_toe_proximal_interphalangeal_joint_angle, minAngle, maxAngle);

    // Linearly interpolate between the current angle and the target angle.
    target_right_fifth_toe_proximal_interphalangeal_joint_angle = (1.0f - deltaTime * smoothing_factor) *
        current_right_fifth_toe_proximal_interphalangeal_joint_angle + deltaTime * smoothing_factor *
        target_right_fifth_toe_proximal_interphalangeal_joint_angle;

    // Clamp the current angle to prevent overshoot
    target_right_fifth_toe_proximal_interphalangeal_joint_angle = std::clamp(target_right_fifth_toe_proximal_interphalangeal_joint_angle, minAngle, maxAngle);

    // Update the output angle
    right_fifth_toe_proximal_interphalangeal_joint_angle = current_right_fifth_toe_proximal_interphalangeal_joint_angle;

    // Print the current angle for debugging purposes
    // std::cout << "Right Second Toe Metatarsophalangeal Joint Angle: " << current_right_fifth_toe_proximal_interphalangeal_joint_angle << std::endl;
}

void _Kinesthetics::RightLeg::RightFoot::RightFifthToe::setRightFifthToeDistalInterphalangealJointAngleSmoothly(float& right_fifth_toe_distal_interphalangeal_joint_angle, float target_right_fifth_toe_distal_interphalangeal_joint_angle, float smoothing_factor, float deltaTime)
{
    // This function smoothly changes the Metatarsophalangeal joint angle of the right second toe over time.
    // It uses linear interpolation (lerp) to achieve a smooth transition.

    // Static variable to store the current angle.
    static float current_right_fifth_toe_distal_interphalangeal_joint_angle = 0.0f;

    // Define parameters (adjust as needed)
    const float minAngle = -45.0f;  // Example range, adjust as needed
    const float maxAngle = 45.0f;   // Example range, adjust as needed

    // Clamp the target angle to the valid range
    target_right_fifth_toe_distal_interphalangeal_joint_angle = std::clamp(target_right_fifth_toe_distal_interphalangeal_joint_angle, minAngle, maxAngle);

    // Linearly interpolate between the current angle and the target angle.
    target_right_fifth_toe_distal_interphalangeal_joint_angle = (1.0f - deltaTime * smoothing_factor) *
        current_right_fifth_toe_distal_interphalangeal_joint_angle + deltaTime * smoothing_factor *
        target_right_fifth_toe_distal_interphalangeal_joint_angle;

    // Clamp the current angle to prevent overshoot
    target_right_fifth_toe_distal_interphalangeal_joint_angle = std::clamp(target_right_fifth_toe_distal_interphalangeal_joint_angle, minAngle, maxAngle);

    // Update the output angle
    target_right_fifth_toe_distal_interphalangeal_joint_angle = current_right_fifth_toe_distal_interphalangeal_joint_angle;

    // Print the current angle for debugging purposes
    // std::cout << "Right Second Toe Metatarsophalangeal Joint Angle: " << current_right_fifth_toe_distal_interphalangeal_joint_angle << std::endl;
}

void _Kinesthetics::RightLeg::setRightHipJointAnglesSmoothly(
    float& right_hip_flexion_extension_angle,
    float& right_hip_abduction_adduction_angle,
    float& right_hip_internal_external_rotation_angle,
    float target_right_hip_flexion_extension_angle,
    float target_right_hip_abduction_adduction_angle,
    float target_right_hip_internal_external_rotation_angle,
    float smoothing_factor,
    float deltaTime)
{
    static float current_right_hip_flexion_extension_angle = 0.0f;
    static float current_right_hip_abduction_adduction_angle = 0.0f;
    static float current_right_hip_internal_external_rotation_angle = 0.0f;

    // Flexion/Extension limits
    const float min_flexion_extension_angle = -10.0f; // hyperextension
    const float max_flexion_extension_angle = 120.0f; // flexion

    // Abduction/Adduction limits
    const float min_abduction_adduction_angle = -30.0f; // adduction
    const float max_abduction_adduction_angle = 45.0f; // abduction

    // Internal/External Rotation limits
    const float min_internal_external_rotation_angle = -45.0f; // internal rotation
    const float max_internal_external_rotation_angle = 45.0f; // external rotation

    target_right_hip_flexion_extension_angle = std::clamp(target_right_hip_flexion_extension_angle, min_flexion_extension_angle, max_flexion_extension_angle);
    target_right_hip_abduction_adduction_angle = std::clamp(target_right_hip_abduction_adduction_angle,min_abduction_adduction_angle, max_abduction_adduction_angle);
    target_right_hip_internal_external_rotation_angle = std::clamp(target_right_hip_internal_external_rotation_angle, min_internal_external_rotation_angle, max_internal_external_rotation_angle);

    current_right_hip_flexion_extension_angle = (1.0f - deltaTime * smoothing_factor) * current_right_hip_flexion_extension_angle + deltaTime * smoothing_factor * target_right_hip_flexion_extension_angle;
    current_right_hip_abduction_adduction_angle = (1.0f - deltaTime * smoothing_factor) * current_right_hip_abduction_adduction_angle + deltaTime * smoothing_factor * target_right_hip_abduction_adduction_angle;
    current_right_hip_internal_external_rotation_angle = (1.0f - deltaTime * smoothing_factor) * current_right_hip_internal_external_rotation_angle + deltaTime * smoothing_factor * target_right_hip_internal_external_rotation_angle;

    current_right_hip_flexion_extension_angle = std::clamp(current_right_hip_flexion_extension_angle, min_flexion_extension_angle, max_flexion_extension_angle);
    current_right_hip_abduction_adduction_angle = std::clamp(current_right_hip_abduction_adduction_angle, min_abduction_adduction_angle, max_abduction_adduction_angle);
    current_right_hip_internal_external_rotation_angle = std::clamp(current_right_hip_internal_external_rotation_angle, min_internal_external_rotation_angle, max_internal_external_rotation_angle);

    right_hip_flexion_extension_angle = current_right_hip_flexion_extension_angle;
    right_hip_abduction_adduction_angle = current_right_hip_abduction_adduction_angle;
    right_hip_internal_external_rotation_angle = current_right_hip_internal_external_rotation_angle;

    // std::cout << "Right Hip Flexion/Extension Angle: " << current_right_hip_flexion_extension_angle << std::endl;
    // std::cout << "Right Hip Abduction/Adduction Angle: " << current_right_hip_abduction_adduction_angle << std::endl;
    // std::cout << "Right Hip Internal/External Rotation Angle: " << current_right_hip_internal_external_rotation_angle << std::endl;
}

void _Kinesthetics::RightArm::setRightShoulderJointAnglesSmoothly(float& right_shoulder_flexion_extension_angle, float& right_shoulder_abduction_adduction_angle, float& right_shoulder_internal_external_rotation_angle, float target_right_shoulder_flexion_extension_angle, float target_right_shoulder_abduction_adduction_angle, float target_right_shoulder_internal_external_rotation_angle, float smoothing_factor, float deltaTime)
{
    // This function smoothly changes the right shoulder angle over time.
    // It uses linear interpolation (lerp) to achieve a smooth transition.

    // Assumptions:
    // - targetShoulderAngle is the desired shoulder angle in degrees.
    // - deltaTime is the time elapsed since the last frame (in seconds).
    // - We have internal variables to track the current shoulder angle.
    // - A smoothing factor controls the speed of the transition.

    // Static variables to store the current shoulder angles.
    static float currentShoulderAngle_x = 0.0f;
    static float currentShoulderAngle_y = 0.0f;
    static float currentShoulderAngle_z = 0.0f;

    // Define parameters (adjust as needed)
    const float minShoulderAngle = -180.0f;
    const float maxShoulderAngle = 180.0f;

    // Clamp the target angles to the valid range
    right_shoulder_flexion_extension_angle = std::clamp(target_right_shoulder_flexion_extension_angle, minShoulderAngle, maxShoulderAngle);
    right_shoulder_abduction_adduction_angle = std::clamp(target_right_shoulder_abduction_adduction_angle, minShoulderAngle, maxShoulderAngle);
    right_shoulder_internal_external_rotation_angle = std::clamp(target_right_shoulder_internal_external_rotation_angle, minShoulderAngle, maxShoulderAngle);

    // Linearly interpolate between the current angles and the target angles.
    currentShoulderAngle_x = (1.0f - deltaTime * smoothing_factor) * currentShoulderAngle_x + deltaTime * smoothing_factor * target_right_shoulder_flexion_extension_angle;
    currentShoulderAngle_y = (1.0f - deltaTime * smoothing_factor) * currentShoulderAngle_y + deltaTime * smoothing_factor * target_right_shoulder_abduction_adduction_angle;
    currentShoulderAngle_z = (1.0f - deltaTime * smoothing_factor) * currentShoulderAngle_z + deltaTime * smoothing_factor * target_right_shoulder_internal_external_rotation_angle;

    // Clamp the current angles to prevent overshoot
    currentShoulderAngle_x = std::clamp(currentShoulderAngle_x, minShoulderAngle, maxShoulderAngle);
    currentShoulderAngle_y = std::clamp(currentShoulderAngle_y, minShoulderAngle, maxShoulderAngle);
    currentShoulderAngle_z = std::clamp(currentShoulderAngle_z, minShoulderAngle, maxShoulderAngle);

    // Update the output angles
    right_shoulder_flexion_extension_angle = currentShoulderAngle_x;
    right_shoulder_abduction_adduction_angle = currentShoulderAngle_y;
    right_shoulder_internal_external_rotation_angle = currentShoulderAngle_z;

    // In a complete system, you would use these angles to update the
    // 3D position of the arm bones or joints in a rendering engine or
    // simulation.  For demonstration purposes, we'll just print the angles.
    //// std::cout << "right Shoulder Angle X: " << currentShoulderAngle_x << std::endl;
    //// std::cout << "right Shoulder Angle Y: " << currentShoulderAngle_y << std::endl;
    //// std::cout << "right Shoulder Angle Z: " << currentShoulderAngle_z << std::endl;
}

void _Kinesthetics::RightArm::setRightElbowAngleSmoothly(float& rightElbowAngle, float targetRightElbowAngle, float
    smoothing_factor, float deltaTime)
{
    // Static variable to store the current elbow angle.
    static float currentElbowAngle = 90.0f; // Initial elbow angle (degrees)

    // Define parameters (adjust as needed)
    const float minElbowAngle = 0.0f;   // Fully extended
    const float maxElbowAngle = 150.0f; // Fully flexed

    // Clamp the target angle to the valid range
    targetRightElbowAngle = std::clamp(targetRightElbowAngle, minElbowAngle, maxElbowAngle);

    // Linearly interpolate between the current angle and the target angle.
    currentElbowAngle = (1.0f - deltaTime * smoothing_factor) * currentElbowAngle + deltaTime * smoothing_factor *
        targetRightElbowAngle;

    // Clamp the current angle to prevent overshoot
    currentElbowAngle = std::clamp(currentElbowAngle, minElbowAngle, maxElbowAngle);

    // Update the output angle
    rightElbowAngle = currentElbowAngle;

    // std::cout << "Right Elbow Angle: " << currentElbowAngle << std::endl;
}

void _Kinesthetics::RightArm::setRightWristAnglesSmoothly(float& rightWristAngleX, float& rightWristAngleY, float targetRightWristAngleX, float targetRightWristAngleY, float smoothingFactor, float deltaTime)
{
    // Static variable to store the current wrist angles.
    static float currentWristAngleX = 0.0f; // Initial wrist angle (degrees)
    static float currentWristAngleY = 0.0f; // Initial wrist angle (degrees)

    // Define parameters (adjust as needed)
    const float minWristAngle = -90.0f;  // Example range, adjust as needed
    const float maxWristAngle = 90.0f;   // Example range, adjust as needed

    // Clamp the target angle to the valid range
    targetRightWristAngleX = std::clamp(targetRightWristAngleX, minWristAngle, maxWristAngle);
    targetRightWristAngleY = std::clamp(targetRightWristAngleY, minWristAngle, maxWristAngle);

    // Linearly interpolate between the current angles and the target angles.
    currentWristAngleX = (1.0f - deltaTime * smoothingFactor) * currentWristAngleX + deltaTime * smoothingFactor *
        targetRightWristAngleX;
    currentWristAngleY = (1.0f - deltaTime * smoothingFactor) * currentWristAngleY + deltaTime * smoothingFactor *
        targetRightWristAngleY;

    // Clamp the current angles to prevent overshoot
    currentWristAngleX = std::clamp(currentWristAngleX, minWristAngle, maxWristAngle);
    currentWristAngleY = std::clamp(currentWristAngleY, minWristAngle, maxWristAngle);

    // Update the output angles
    rightWristAngleX = currentWristAngleX;
    rightWristAngleY = currentWristAngleY;

    // std::cout << "Right Wrist Angle X: " << currentWristAngleX << std::endl;
    // std::cout << "Right Wrist Angle Y: " << currentWristAngleY << std::endl;
}

void _Kinesthetics::RightArm::RightHand::RightIndexFinger::setRightIndexFingerFirstJointAngles(
    float& right_index_finger_first_joint_angle_x,
    float& right_index_finger_first_joint_angle_y,
    float& right_index_finger_first_joint_angle_z,
    float target_right_index_finger_first_joint_angle_x,
    float target_right_index_finger_first_joint_angle_y,
    float target_right_index_finger_first_joint_angle_z,
    float smoothing_factor,
    float deltaTime)
{
    // This function smoothly changes the angles of the first joint of the right index finger over time.
    // It uses linear interpolation (lerp) to achieve a smooth transition.

    // Assumptions:
    // - target_right_index_finger_first_joint_angle_x, target_right_index_finger_first_joint_angle_y,
    // target_right_index_finger_first_joint_angle_z are the desired angles in degrees.
        // - deltaTime is the time elapsed since the last frame (in seconds).
        // - We have internal variables to track the current angles.
        // - A smoothing factor controls the speed of the transition.

        // Static variables to store the current angles.
    static float current_right_index_finger_first_joint_angle_x = 0.0f;
    static float current_right_index_finger_first_joint_angle_y = 0.0f;
    static float current_right_index_finger_first_joint_angle_z = 0.0f;

    // Define parameters (adjust as needed)
    const float minAngleX = -90.0f;  // Example range, adjust as needed
    const float maxAngleX = 90.0f;   // Example range, adjust as needed
    const float minAngleY = -90.0f;  // Example range, adjust as needed
    const float maxAngleY = 90.0f;   // Example range, adjust as needed
    const float minAngleZ = -90.0f;  // Example range, adjust as needed
    const float maxAngleZ = 90.0f;   // Example range, adjust as needed

    // Clamp the target angles to the valid ranges
    target_right_index_finger_first_joint_angle_x = std::clamp(target_right_index_finger_first_joint_angle_x, minAngleX,
        maxAngleX);
    target_right_index_finger_first_joint_angle_y = std::clamp(target_right_index_finger_first_joint_angle_y, minAngleY,
        maxAngleY);
    target_right_index_finger_first_joint_angle_z = std::clamp(target_right_index_finger_first_joint_angle_z, minAngleZ,
        maxAngleZ);

    // Linearly interpolate between the current angles and the target angles.
    current_right_index_finger_first_joint_angle_x = (1.0f - deltaTime * smoothing_factor) *
        current_right_index_finger_first_joint_angle_x + deltaTime * smoothing_factor * target_right_index_finger_first_joint_angle_x;
    current_right_index_finger_first_joint_angle_y = (1.0f - deltaTime * smoothing_factor) *
        current_right_index_finger_first_joint_angle_y + deltaTime * smoothing_factor * target_right_index_finger_first_joint_angle_y;
    current_right_index_finger_first_joint_angle_z = (1.0f - deltaTime * smoothing_factor) *
        current_right_index_finger_first_joint_angle_z + deltaTime * smoothing_factor * target_right_index_finger_first_joint_angle_z;

    // Clamp the current angles to prevent overshoot
    current_right_index_finger_first_joint_angle_x = std::clamp(current_right_index_finger_first_joint_angle_x, minAngleX,
        maxAngleX);
    current_right_index_finger_first_joint_angle_y = std::clamp(current_right_index_finger_first_joint_angle_y, minAngleY,
        maxAngleY);
    current_right_index_finger_first_joint_angle_z = std::clamp(current_right_index_finger_first_joint_angle_z, minAngleZ,
        maxAngleZ);

    // Update the output angles
    right_index_finger_first_joint_angle_x = current_right_index_finger_first_joint_angle_x;
    right_index_finger_first_joint_angle_y = current_right_index_finger_first_joint_angle_y;
    right_index_finger_first_joint_angle_z = current_right_index_finger_first_joint_angle_z;

    // In a complete system, you would use these angles to update the
    // 3D position of the finger joint in a rendering engine or simulation.
    // For demonstration purposes, we'll just print the angles.
    // std::cout << "Right Index Finger First Joint Angle X: " << current_right_index_finger_first_joint_angle_x << std::endl;
    // std::cout << "Right Index Finger First Joint Angle Y: " << current_right_index_finger_first_joint_angle_y << std::endl;
    // std::cout << "Right Index Finger First Joint Angle Z: " << current_right_index_finger_first_joint_angle_z << std::endl;
}

void _Kinesthetics::RightArm::RightHand::RightIndexFinger::setRightIndexFingerSecondJointAngle(float& right_index_finger_second_joint_angle_x, float target_right_index_finger_second_joint_angle_x, float smoothing_factor, float deltaTime)
{
    // This function smoothly changes the angles of the second joint of the right index finger over time.
    // It uses linear interpolation (lerp) to achieve a smooth transition.

    // Assumptions:
    // - target_right_index_finger_second_joint_angle_x, target_right_index_finger_second_joint_angle_y,
    // target_right_index_finger_second_joint_angle_z are the desired angles in degrees.
    // - deltaTime is the time elapsed since the last frame (in seconds).
    // - We have internal variables to track the current angles.
    // - A smoothing factor controls the speed of the transition.

    // Static variables to store the current angles.
    static float current_right_index_finger_second_joint_angle_x = 0.0f;

    // Define parameters (adjust as needed)
    const float minAngleX = -90.0f;  // Example range, adjust as needed
    const float maxAngleX = 90.0f;   // Example range, adjust as needed

    // Clamp the target angles to the valid ranges
    target_right_index_finger_second_joint_angle_x = std::clamp(target_right_index_finger_second_joint_angle_x, minAngleX,
        maxAngleX);

    // Linearly interpolate between the current angles and the target angles.
    current_right_index_finger_second_joint_angle_x = (1.0f - deltaTime * smoothing_factor) *
        current_right_index_finger_second_joint_angle_x + deltaTime * smoothing_factor *
        target_right_index_finger_second_joint_angle_x;

    // Clamp the current angles to prevent overshoot
    current_right_index_finger_second_joint_angle_x = std::clamp(current_right_index_finger_second_joint_angle_x, minAngleX,
        maxAngleX);

    // Update the output angles
    right_index_finger_second_joint_angle_x = current_right_index_finger_second_joint_angle_x;

    // In a complete system, you would use these angles to update the
    // 3D position of the finger joint in a rendering engine or simulation.
    // For demonstration purposes, we'll just print the angles.
    // std::cout << "Right Index Finger Second Joint Angle X: " << current_right_index_finger_second_joint_angle_x << std::endl;
}

void _Kinesthetics::RightArm::RightHand::RightIndexFinger::setRightIndexFingerThirdJointAngle(
    float& right_index_finger_third_joint_angle,
    float target_right_index_finger_third_joint_angle,
    float smoothing_factor,
    float deltaTime)
{
    // This function smoothly changes the angle of the third joint (tip) of the right index finger over time.
    // It uses linear interpolation (lerp) to achieve a smooth transition.

    // Assumptions:
    // - target_right_index_finger_third_joint_angle is the desired angle in degrees.
    // - deltaTime is the time elapsed since the last frame (in seconds).
    // - We have an internal variable to track the current angle.
    // - A smoothing factor controls the speed of the transition.

    // Static variable to store the current angle.
    static float current_right_index_finger_third_joint_angle = 0.0f;

    // Define parameters (adjust as needed)
    const float minAngle = -30.0f;  // Example range, adjust as needed
    const float maxAngle = 30.0f;   // Example range, adjust as needed

    // Clamp the target angle to the valid range
    target_right_index_finger_third_joint_angle = std::clamp(target_right_index_finger_third_joint_angle, minAngle, maxAngle);

    // Linearly interpolate between the current angle and the target angle.
    current_right_index_finger_third_joint_angle = (1.0f - deltaTime * smoothing_factor) *
        current_right_index_finger_third_joint_angle + deltaTime * smoothing_factor * target_right_index_finger_third_joint_angle;

    // Clamp the current angle to prevent overshoot
    current_right_index_finger_third_joint_angle = std::clamp(current_right_index_finger_third_joint_angle, minAngle, maxAngle);

    // Update the output angle
    right_index_finger_third_joint_angle = current_right_index_finger_third_joint_angle;

    // In a complete system, you would use this angle to update the
    // 3D position of the finger joint in a rendering engine or simulation.
    // For demonstration purposes, we'll just print the angle.
    // std::cout << "Right Index Finger Third Joint Angle: " << current_right_index_finger_third_joint_angle << std::endl;
}

void _Kinesthetics::RightArm::RightHand::RightMiddleFinger::setRightMiddleFingerFirstJointAngle(float& right_middle_finger_first_joint_angle, float target_right_middle_finger_first_joint_angle, float smoothing_factor, float deltaTime)
{
    // This function smoothly changes the angle of the first joint of the right middle finger over time.
    // It uses linear interpolation (lerp) to achieve a smooth transition.

    // Assumptions:
    // - target_right_middle_finger_first_joint_angle is the desired angle in degrees.
    // - deltaTime is the time elapsed since the last frame (in seconds).
    // - We have an internal variable to track the current angle.
    // - A smoothing factor controls the speed of the transition.

    // Static variable to store the current angle.
    static float current_right_middle_finger_first_joint_angle = 0.0f;

    // Define parameters (adjust as needed)
    const float minAngle = -90.0f;  // Example range, adjust as needed
    const float maxAngle = 90.0f;   // Example range, adjust as needed

    // Clamp the target angle to the valid range
    target_right_middle_finger_first_joint_angle = std::clamp(target_right_middle_finger_first_joint_angle, minAngle, maxAngle);

    // Linearly interpolate between the current angle and the target angle.
    current_right_middle_finger_first_joint_angle = (1.0f - deltaTime * smoothing_factor) * current_right_middle_finger_first_joint_angle + deltaTime * smoothing_factor * target_right_middle_finger_first_joint_angle;

    // Clamp the current angle to prevent overshoot
    current_right_middle_finger_first_joint_angle = std::clamp(current_right_middle_finger_first_joint_angle, minAngle, maxAngle);

    // Update the output angle
    right_middle_finger_first_joint_angle = current_right_middle_finger_first_joint_angle;

    // In a complete system, you would use this angle to update the
    // 3D position of the finger joint in a rendering engine or simulation.
    // For demonstration purposes, we'll just print the angle.
    // std::cout << "Right Middle Finger First Joint Angle: " << current_right_middle_finger_first_joint_angle << std::endl;
}

//void _Kinesthetics::RightArm::RightHand::RightMiddleFinger::setRightMiddleFingerFirstJointAngle(
//    float& right_middle_finger_first_joint_angle,
//    float target_right_middle_finger_first_joint_angle,
//    float smoothing_factor,
//    float deltaTime)
//{
//    // This function smoothly changes the angle of the first joint of the right middle finger over time.
//    // It uses linear interpolation (lerp) to achieve a smooth transition.
//
//    // Assumptions:
//    // - target_right_middle_finger_first_joint_angle is the desired angle in degrees.
//    // - deltaTime is the time elapsed since the last frame (in seconds).
//    // - We have an internal variable to track the current angle.
//    // - A smoothing factor controls the speed of the transition.
//
//    // Static variable to store the current angle.
//    static float current_right_middle_finger_first_joint_angle = 0.0f;
//
//    // Define parameters (adjust as needed)
//    const float minAngle = -90.0f;  // Example range, adjust as needed
//    const float maxAngle = 90.0f;   // Example range, adjust as needed
//
//    // Clamp the target angle to the valid range
//    target_right_middle_finger_first_joint_angle = std::clamp(target_right_middle_finger_first_joint_angle, minAngle, maxAngle);
//
//    // Linearly interpolate between the current angle and the target angle.
//    current_right_middle_finger_first_joint_angle = (1.0f - deltaTime * smoothing_factor) * current_right_middle_finger_first_joint_angle + deltaTime * smoothing_factor * target_right_middle_finger_first_joint_angle;
//
//    // Clamp the current angle to prevent overshoot
//    current_right_middle_finger_first_joint_angle = std::clamp(current_right_middle_finger_first_joint_angle, minAngle, maxAngle);
//
//    // Update the output angle
//    right_middle_finger_first_joint_angle = current_right_middle_finger_first_joint_angle;
//
//    // In a complete system, you would use this angle to update the
//    // 3D position of the finger joint in a rendering engine or simulation.
//    // For demonstration purposes, we'll just print the angle.
//    // std::cout << "Right Middle Finger First Joint Angle: " << current_right_middle_finger_first_joint_angle << std::endl;
//}

void _Kinesthetics::RightArm::RightHand::RightMiddleFinger::setRightMiddleFingerSecondJointAngle(float& right_middle_finger_second_joint_angle, float target_right_middle_finger_second_joint_angle, float smoothing_factor, float deltaTime)
{
    // This function smoothly changes the angle of the second joint of the right middle finger over time.
    // It uses linear interpolation (lerp) to achieve a smooth transition.

    // Assumptions:
    // - target_right_middle_finger_second_joint_angle is the desired angle in degrees.
    // - deltaTime is the time elapsed since the last frame (in seconds).
    // - We have an internal variable to track the current angle.
    // - A smoothing factor controls the speed of the transition.

    // Static variable to store the current angle.
    static float current_right_middle_finger_second_joint_angle = 0.0f;

    // Define parameters (adjust as needed)
    const float minAngle = -60.0f;  // Example range, adjust as needed
    const float maxAngle = 30.0f;   // Example range, adjust as needed

    // Clamp the target angle to the valid range
    target_right_middle_finger_second_joint_angle = std::clamp(target_right_middle_finger_second_joint_angle, minAngle, maxAngle);

    // Linearly interpolate between the current angle and the target angle.
    current_right_middle_finger_second_joint_angle = (1.0f - deltaTime * smoothing_factor) * current_right_middle_finger_second_joint_angle + deltaTime * smoothing_factor * target_right_middle_finger_second_joint_angle;

    // Clamp the current angle to prevent overshoot
    current_right_middle_finger_second_joint_angle = std::clamp(current_right_middle_finger_second_joint_angle, minAngle, maxAngle);

    // Update the output angle
    right_middle_finger_second_joint_angle = current_right_middle_finger_second_joint_angle;

    // In a complete system, you would use this angle to update the
    // 3D position of the finger joint in a rendering engine or simulation.
    // For demonstration purposes, we'll just print the angle.
    // std::cout << "Right Middle Finger Second Joint Angle: " << current_right_middle_finger_second_joint_angle << std::endl;
}

//void _Kinesthetics::RightArm::RightHand::RightMiddleFinger::setRightMiddleFingerSecondJointAngle(
//    float& right_middle_finger_second_joint_angle,
//    float target_right_middle_finger_second_joint_angle,
//    float smoothing_factor,
//    float deltaTime)
//{
//    // This function smoothly changes the angle of the second joint of the right middle finger over time.
//    // It uses linear interpolation (lerp) to achieve a smooth transition.
//
//    // Assumptions:
//    // - target_right_middle_finger_second_joint_angle is the desired angle in degrees.
//    // - deltaTime is the time elapsed since the last frame (in seconds).
//    // - We have an internal variable to track the current angle.
//    // - A smoothing factor controls the speed of the transition.
//
//    // Static variable to store the current angle.
//    static float current_right_middle_finger_second_joint_angle = 0.0f;
//
//    // Define parameters (adjust as needed)
//    const float minAngle = -60.0f;  // Example range, adjust as needed
//    const float maxAngle = 30.0f;   // Example range, adjust as needed
//
//    // Clamp the target angle to the valid range
//    target_right_middle_finger_second_joint_angle = std::clamp(target_right_middle_finger_second_joint_angle, minAngle, maxAngle);
//
//    // Linearly interpolate between the current angle and the target angle.
//    current_right_middle_finger_second_joint_angle = (1.0f - deltaTime * smoothing_factor) * current_right_middle_finger_second_joint_angle + deltaTime * smoothing_factor * target_right_middle_finger_second_joint_angle;
//
//    // Clamp the current angle to prevent overshoot
//    current_right_middle_finger_second_joint_angle = std::clamp(current_right_middle_finger_second_joint_angle, minAngle, maxAngle);
//
//    // Update the output angle
//    right_middle_finger_second_joint_angle = current_right_middle_finger_second_joint_angle;
//
//    // In a complete system, you would use this angle to update the
//    // 3D position of the finger joint in a rendering engine or simulation.
//    // For demonstration purposes, we'll just print the angle.
//    // std::cout << "Right Middle Finger Second Joint Angle: " << current_right_middle_finger_second_joint_angle << std::endl;
//}

//void _Kinesthetics::RightArm::RightHand::RightMiddleFinger::setRightMiddleFingerThirdJointAngle(
//    float& right_middle_finger_third_joint_angle,
//    float target_right_middle_finger_third_joint_angle,
//    float smoothing_factor,
//    float deltaTime)
//{
//    // This function smoothly changes the angle of the third joint (tip) of the right middle finger over time.
//    // It uses linear interpolation (lerp) to achieve a smooth transition.
//
//    // Assumptions:
//    // - target_right_middle_finger_third_joint_angle is the desired angle in degrees.
//    // - deltaTime is the time elapsed since the last frame (in seconds).
//    // - We have an internal variable to track the current angle.
//    // - A smoothing factor controls the speed of the transition.
//
//    // Static variable to store the current angle.
//    static float current_right_middle_finger_third_joint_angle = 0.0f;
//
//    // Define parameters (adjust as needed)
//    const float minAngle = -45.0f;  // Example range, adjust as needed
//    const float maxAngle = 45.0f;   // Example range, adjust as needed
//
//    // Clamp the target angle to the valid range
//    target_right_middle_finger_third_joint_angle = std::clamp(target_right_middle_finger_third_joint_angle, minAngle, maxAngle);
//
//    // Linearly interpolate between the current angle and the target angle.
//    current_right_middle_finger_third_joint_angle = (1.0f - deltaTime * smoothing_factor) * current_right_middle_finger_third_joint_angle + deltaTime * smoothing_factor * target_right_middle_finger_third_joint_angle;
//
//    // Clamp the current angle to prevent overshoot
//    current_right_middle_finger_third_joint_angle = std::clamp(current_right_middle_finger_third_joint_angle, minAngle, maxAngle);
//
//    // Update the output angle
//    right_middle_finger_third_joint_angle = current_right_middle_finger_third_joint_angle;
//
//    // In a complete system, you would use this angle to update the
//    // 3D position of the finger joint in a rendering engine or simulation.
//    // For demonstration purposes, we'll just print the angle.
//    // std::cout << "right Middle Finger Third Joint Angle: " << current_right_middle_finger_third_joint_angle << std::endl;
//}

void _Kinesthetics::RightArm::RightHand::RightMiddleFinger::setRightMiddleFingerThirdJointAngle(
    float& right_middle_finger_third_joint_angle,
    float target_right_middle_finger_third_joint_angle,
    float smoothing_factor,
    float deltaTime)
{
    // This function smoothly changes the angle of the third joint (tip) of the right middle finger over time.
    // It uses linear interpolation (lerp) to achieve a smooth transition.

    // Assumptions:
    // - target_right_middle_finger_third_joint_angle is the desired angle in degrees.
    // - deltaTime is the time elapsed since the last frame (in seconds).
    // - We have an internal variable to track the current angle.
    // - A smoothing factor controls the speed of the transition.

    // Static variable to store the current angle.
    static float current_right_middle_finger_third_joint_angle = 0.0f;

    // Define parameters (adjust as needed)
    const float minAngle = -45.0f;  // Example range, adjust as needed
    const float maxAngle = 45.0f;   // Example range, adjust as needed

    // Clamp the target angle to the valid range
    target_right_middle_finger_third_joint_angle = std::clamp(target_right_middle_finger_third_joint_angle, minAngle, maxAngle);

    // Linearly interpolate between the current angle and the target angle.
    current_right_middle_finger_third_joint_angle = (1.0f - deltaTime * smoothing_factor) * current_right_middle_finger_third_joint_angle + deltaTime * smoothing_factor * target_right_middle_finger_third_joint_angle;

    // Clamp the current angle to prevent overshoot
    current_right_middle_finger_third_joint_angle = std::clamp(current_right_middle_finger_third_joint_angle, minAngle, maxAngle);

    // Update the output angle
    right_middle_finger_third_joint_angle = current_right_middle_finger_third_joint_angle;

    // In a complete system, you would use this angle to update the
    // 3D position of the finger joint in a rendering engine or simulation.
    // For demonstration purposes, we'll just print the angle.
    // std::cout << "Right Middle Finger Third Joint Angle: " << current_right_middle_finger_third_joint_angle << std::endl;
}

void _Kinesthetics::RightArm::RightHand::RightRingFinger::setRightRingFingerFirstJointAngle(
    float& right_ring_finger_first_joint_angle,
    float target_right_ring_finger_first_joint_angle,
    float smoothing_factor,
    float deltaTime)
{
    // This function smoothly changes the angle of the first joint of the right ring finger over time.
    // It uses linear interpolation (lerp) to achieve a smooth transition.

    // Assumptions:
    // - target_right_ring_finger_first_joint_angle is the desired angle in degrees.
    // - deltaTime is the time elapsed since the last frame (in seconds).
    // - We have an internal variable to track the current angle.
    // - A smoothing factor controls the speed of the transition.

    // Static variable to store the current angle.
    static float current_right_ring_finger_first_joint_angle = 0.0f;

    // Define parameters (adjust as needed)
    const float minAngle = -80.0f;  // Example range, adjust as needed
    const float maxAngle = 80.0f;   // Example range, adjust as needed

    // Clamp the target angle to the valid range
    target_right_ring_finger_first_joint_angle = std::clamp(target_right_ring_finger_first_joint_angle, minAngle, maxAngle);

    // Linearly interpolate between the current angle and the target angle.
    current_right_ring_finger_first_joint_angle = (1.0f - deltaTime * smoothing_factor) * current_right_ring_finger_first_joint_angle + deltaTime * smoothing_factor * target_right_ring_finger_first_joint_angle;

    // Clamp the current angle to prevent overshoot
    current_right_ring_finger_first_joint_angle = std::clamp(current_right_ring_finger_first_joint_angle, minAngle, maxAngle);

    // Update the output angle
    right_ring_finger_first_joint_angle = current_right_ring_finger_first_joint_angle;

    // In a complete system, you would use this angle to update the
    // 3D position of the finger joint in a rendering engine or simulation.
    // For demonstration purposes, we'll just print the angle.
    // std::cout << "Right Ring Finger First Joint Angle: " << current_right_ring_finger_first_joint_angle << std::endl;
}

void _Kinesthetics::RightArm::RightHand::RightRingFinger::setRightRingFingerSecondJointAngle(float& right_ring_finger_second_joint_angle, float target_ring_finger_first_joint_angle, float smoothing_factor, float deltaTime)
{
    // This function smoothly changes the X-axis angle of the second joint of the right ring finger over time.
    // It uses linear interpolation (lerp) to achieve a smooth transition.

    // Assumptions:
    // - target_right_ring_finger_second_joint_angle_x is the desired angle in degrees.
    // - deltaTime is the time elapsed since the last frame (in seconds).
    // - We have an internal variable to track the current angle.
    // - A smoothing factor controls the speed of the transition.

    // Static variable to store the current angle.
    static float current_right_ring_finger_second_joint_angle = 0.0f;

    // Define parameters (adjust as needed)
    const float minAngle = -60.0f;  // Example range, adjust as needed (likely smaller than first joint)
    const float maxAngle = 45.0f;   // Example range, adjust as needed

    // Clamp the target angle to the valid range
    target_ring_finger_first_joint_angle = std::clamp(target_ring_finger_first_joint_angle, minAngle, maxAngle);

    // Linearly interpolate between the current angle and the target angle.
    current_right_ring_finger_second_joint_angle = (1.0f - deltaTime * smoothing_factor) * current_right_ring_finger_second_joint_angle + deltaTime * smoothing_factor * target_ring_finger_first_joint_angle;

    // Clamp the current angle to prevent overshoot
    current_right_ring_finger_second_joint_angle = std::clamp(current_right_ring_finger_second_joint_angle, minAngle, maxAngle);

    // Update the output angle
    right_ring_finger_second_joint_angle = current_right_ring_finger_second_joint_angle;

    // In a complete system, you would use this angle to update the
    // 3D position of the finger joint in a rendering engine or simulation.
    // For demonstration purposes, we'll just print the angle.
    // std::cout << "Right Ring Finger Second Joint Angle: " << current_right_ring_finger_second_joint_angle << std::endl;
}

void _Kinesthetics::RightArm::RightHand::RightRingFinger::setRightRingFingerThirdJointAngle(float& right_ring_finger_third_joint_angle, float target_right_ring_finger_third_joint_angle_x, float smoothing_factor, float deltaTime)
{
    // This function smoothly changes the X-axis angle of the third joint of the right ring finger over time.
    // It uses linear interpolation (lerp) to achieve a smooth transition.

    // Assumptions:
    // - target_right_ring_finger_third_joint_angle_x is the desired angle in degrees.
    // - deltaTime is the time elapsed since the last frame (in seconds).
    // - We have an internal variable to track the current angle.
    // - A smoothing factor controls the speed of the transition.

    // Static variable to store the current angle.
    static float current_right_ring_finger_third_joint_angle = 0.0f;

    // Define parameters (adjust as needed)
    const float minAngle = -45.0f;  // Example range, adjust as needed (smallest range of motion)
    const float maxAngle = 45.0f;   // Example range, adjust as needed

    // Clamp the target angle to the valid range
    target_right_ring_finger_third_joint_angle_x = std::clamp(target_right_ring_finger_third_joint_angle_x, minAngle, maxAngle);

    // Linearly interpolate between the current angle and the target angle.
    current_right_ring_finger_third_joint_angle = (1.0f - deltaTime * smoothing_factor) * current_right_ring_finger_third_joint_angle + deltaTime * smoothing_factor * target_right_ring_finger_third_joint_angle_x;

    // Clamp the current angle to prevent overshoot
    current_right_ring_finger_third_joint_angle = std::clamp(current_right_ring_finger_third_joint_angle, minAngle, maxAngle);

    // Update the output angle
    right_ring_finger_third_joint_angle = current_right_ring_finger_third_joint_angle;

    // In a complete system, you would use this angle to update the
    // 3D position of the finger joint in a rendering engine or simulation.
    // For demonstration purposes, we'll just print the angle.
    // std::cout << "Right Ring Finger Third Joint Angle: " << current_right_ring_finger_third_joint_angle << std::endl;
}

void _Kinesthetics::RightArm::RightHand::RightPinkyFinger::setRightPinkyFingerFirstJointAngle(float& right_little_finger_first_joint_angle, float target_right_little_finger_first_joint_angle_x, float smoothing_factor, float deltaTime)
{
    // This function smoothly changes the X-axis angle of the first joint of the right pinky finger over time.
    // It uses linear interpolation (lerp) to achieve a smooth transition.

    // Assumptions:
    // - target_right_little_finger_first_joint_angle_x is the desired angle in degrees.
    // - deltaTime is the time elapsed since the last frame (in seconds).
    // - We have an internal variable to track the current angle.
    // - A smoothing factor controls the speed of the transition.

    // Static variable to store the current angle.
    static float current_right_little_finger_first_joint_angle = 0.0f;

    // Define parameters (adjust as needed)
    const float minAngle = -70.0f;  // Example range, adjust as needed (similar to ring finger, potentially more)
    const float maxAngle = 80.0f;   // Example range, adjust as needed

    // Clamp the target angle to the valid range
    target_right_little_finger_first_joint_angle_x = std::clamp(target_right_little_finger_first_joint_angle_x, minAngle, maxAngle);

    // Linearly interpolate between the current angle and the target angle.
    current_right_little_finger_first_joint_angle = (1.0f - deltaTime * smoothing_factor) * current_right_little_finger_first_joint_angle + deltaTime * smoothing_factor * target_right_little_finger_first_joint_angle_x;

    // Clamp the current angle to prevent overshoot
    current_right_little_finger_first_joint_angle = std::clamp(current_right_little_finger_first_joint_angle, minAngle, maxAngle);

    // Update the output angle
    right_little_finger_first_joint_angle = current_right_little_finger_first_joint_angle;

    // In a complete system, you would use this angle to update the
    // 3D position of the finger joint in a rendering engine or simulation.
    // For demonstration purposes, we'll just print the angle.
    // std::cout << "Right Pinky Finger First Joint Angle: " << current_right_little_finger_first_joint_angle << std::endl;
}

// Right Pinky Finger Second Joint
void _Kinesthetics::RightArm::RightHand::RightPinkyFinger::setRightPinkyFingerSecondJointAngle(
    float& right_little_finger_second_joint_angle,
    float target_right_little_finger_second_joint_angle_x,
    float smoothing_factor,
    float deltaTime)
{
    static float current_right_little_finger_second_joint_angle = 0.0f;
    const float minAngle = -45.0f;
    const float maxAngle = 45.0f;

    target_right_little_finger_second_joint_angle_x = std::clamp(target_right_little_finger_second_joint_angle_x, minAngle, maxAngle);

    current_right_little_finger_second_joint_angle = (1.0f - deltaTime * smoothing_factor) * current_right_little_finger_second_joint_angle +
        deltaTime * smoothing_factor * target_right_little_finger_second_joint_angle_x;

    current_right_little_finger_second_joint_angle = std::clamp(current_right_little_finger_second_joint_angle, minAngle, maxAngle);

    right_little_finger_second_joint_angle = current_right_little_finger_second_joint_angle;
    // std::cout << "Right Pinky Finger Second Joint Angle: " << current_right_little_finger_second_joint_angle << std::endl;
}

// Right Pinky Finger Third Joint
void _Kinesthetics::RightArm::RightHand::RightPinkyFinger::setRightPinkyFingerThirdJointAngle(
    float& right_little_finger_third_joint_angle,
    float target_right_little_finger_third_joint_angle_x,
    float smoothing_factor,
    float deltaTime)
{
    static float current_right_little_finger_third_joint_angle = 0.0f;
    const float minAngle = -30.0f;
    const float maxAngle = 30.0f;

    target_right_little_finger_third_joint_angle_x = std::clamp(target_right_little_finger_third_joint_angle_x, minAngle, maxAngle);

    current_right_little_finger_third_joint_angle = (1.0f - deltaTime * smoothing_factor) * current_right_little_finger_third_joint_angle + deltaTime * smoothing_factor * target_right_little_finger_third_joint_angle_x;

    current_right_little_finger_third_joint_angle = std::clamp(current_right_little_finger_third_joint_angle, minAngle, maxAngle);

    right_little_finger_third_joint_angle = current_right_little_finger_third_joint_angle;
    // std::cout << "Right Pinky Finger Third Joint Angle: " << current_right_little_finger_third_joint_angle << std::endl;
}

// Right Thumb Finger First Joint
void _Kinesthetics::RightArm::RightHand::RightThumbFinger::setRightThumbFingerFirstJointAngle(
    float& right_thumb_first_joint_angle,
    float target_right_thumb_first_joint_angle_x,
    float smoothing_factor,
    float deltaTime)
{
    static float current_right_thumb_first_joint_angle = 0.0f;
    const float minAngle = -45.0f;
    const float maxAngle = 45.0f;

    target_right_thumb_first_joint_angle_x = std::clamp(target_right_thumb_first_joint_angle_x, minAngle, maxAngle);

    current_right_thumb_first_joint_angle = (1.0f - deltaTime * smoothing_factor) * current_right_thumb_first_joint_angle + deltaTime * smoothing_factor * target_right_thumb_first_joint_angle_x;

    current_right_thumb_first_joint_angle = std::clamp(current_right_thumb_first_joint_angle, minAngle, maxAngle);

    right_thumb_first_joint_angle = current_right_thumb_first_joint_angle;
    // std::cout << "Right Thumb Finger First Joint Angle: " << current_right_thumb_first_joint_angle << std::endl;
}

// Right Thumb Finger Second Joint
void _Kinesthetics::RightArm::RightHand::RightThumbFinger::setRightThumbFingerSecondJointAngle(
    float& right_thumb_second_joint_angle,
    float target_right_thumb_second_joint_angle_x,
    float smoothing_factor,
    float deltaTime)
{
    static float current_right_thumb_second_joint_angle = 0.0f;
    const float minAngle = -20.0f;
    const float maxAngle = 60.0f;

    target_right_thumb_second_joint_angle_x = std::clamp(target_right_thumb_second_joint_angle_x, minAngle, maxAngle);

    current_right_thumb_second_joint_angle = (1.0f - deltaTime * smoothing_factor) * current_right_thumb_second_joint_angle + deltaTime * smoothing_factor * target_right_thumb_second_joint_angle_x;

    current_right_thumb_second_joint_angle = std::clamp(current_right_thumb_second_joint_angle, minAngle, maxAngle);

    right_thumb_second_joint_angle = current_right_thumb_second_joint_angle;
    // std::cout << "Right Thumb Finger Second Joint Angle: " << current_right_thumb_second_joint_angle << std::endl;
}