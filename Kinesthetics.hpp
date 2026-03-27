#pragma once

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

using namespace std;

struct Point2D
{
    float x;
    float y;
};

class _Kinesthetics
{
public:

    class LeftLeg
    {
    public:
        static void setLeftHipJointAnglesSmoothly(float& left_hip_flexion_extension_angle, float& left_hip_abduction_adduction_angle, float& left_hip_internal_external_rotation_angle, float target_left_hip_flexion_extension_angle, float target_left_hip_abduction_adduction_angle, float target_left_hip_internal_external_rotation_angle, float smoothing_factor, float deltaTime);

        class LeftKnee
        {
        public:
            static void setLeftKneeAngleSmoothly(float& left_knee_angle, float target_left_knee_angle, float smoothing_factor, float deltaTime);
		};

        class LeftAnkle
        {
        public:
			static void setLeftAnkleAngleSmoothly(float& left_ankle_angle, float target_left_ankle_angle, float smoothing_factor, float deltaTime);
        };

        class LeftFoot
        {
		public:
            
            class LeftBigToe
            {
            public:
                static void setLeftBigToeMetatarsophalangealJointAngleSmoothly(float& left_big_toe_metatarsophalangeal_joint_angle, float target_left_big_toe_metatarsophalangeal_joint_angle, float smoothing_factor, float deltaTime);
                static void setLeftBigToeProximalInterphalangealJointAngleSmoothly(float& left_big_toe_proximal_interphalangeal_joint_angle, float target_left_big_toe_proximal_interphalangeal_joint_angle, float smoothing_factor, float deltaTime);
                static void setLeftBigToeDistalInterphalangealJointAngleSmoothly(float& left_big_toe_distal_interphalangeal_joint_angle, float target_left_big_toe_distal_interphalangeal_joint_angle, float smoothing_factor, float deltaTime);
            };

            class LeftSecondToe
            {
            public:
                static void setLeftSecondToeMetatarsophalangealJointAngleSmoothly(float& left_second_toe_metatarsophalangeal_joint_angle, float target_left_second_toe_metatarsophalangeal_joint_angle, float smoothing_factor, float deltaTime);
                static void setLeftSecondToeProximalInterphalangealJointAngleSmoothly(float& left_second_toe_proximal_interphalangeal_joint_angle, float target_left_second_toe_proximal_interphalangeal_joint_angle, float smoothing_factor, float deltaTime);
                static void setLeftSecondToeDistalInterphalangealJointAngleSmoothly(float& left_second_toe_distal_interphalangeal_joint_angle, float target_left_second_toe_distal_interphalangeal_joint_angle, float smoothing_factor, float deltaTime);
            };

            class LeftThirdToe
            {
            public:
                static void setLeftThirdToeMetatarsophalangealJointAngleSmoothly(float& left_third_toe_metatarsophalangeal_joint_angle, float target_left_third_toe_metatarsophalangeal_joint_angle, float smoothing_factor, float deltaTime);
				static void setLeftThirdToeProximalInterphalangealJointAngleSmoothly(float& left_third_toe_proximal_interphalangeal_joint_angle, float target_left_third_toe_proximal_interphalangeal_joint_angle, float smoothing_factor, float deltaTime);
                static void setLeftThirdToeDistalInterphalangealJointAngleSmoothly(float& left_third_toe_distal_interphalangeal_joint_angle, float target_left_third_toe_distal_interphalangeal_joint_angle, float smoothing_factor, float deltaTime);
            };

            class LeftFourthToe
            {
            public:
                static void setLeftFourthToeMetatarsophalangealJointAngleSmoothly(float& left_fourth_toe_metatarsophalangeal_joint_angle, float target_left_fourth_toe_metatarsophalangeal_joint_angle, float smoothing_factor, float deltaTime);
                static void setLeftFourthToeProximalInterphalangealJointAngleSmoothly(float& left_fourth_toe_proximal_interphalangeal_joint_angle, float target_left_fourth_toe_proximal_interphalangeal_joint_angle, float smoothing_factor, float deltaTime);
				static void setLeftFourthToeDistalInterphalangealJointAngleSmoothly(float& left_fourth_toe_distal_interphalangeal_joint_angle, float target_left_fourth_toe_distal_interphalangeal_joint_angle, float smoothing_factor, float deltaTime);
            };

            class LeftFifthToe
            {
            public:
                static void setLeftFifthToeMetatarsophalangealJointAngleSmoothly(float& left_fifth_toe_metatarsophalangeal_joint_angle, float target_left_fifth_toe_metatarsophalangeal_joint_angle, float smoothing_factor, float deltaTime);
                static void setLeftFifthToeProximalInterphalangealJointAngleSmoothly(float& left_fifth_toe_proximal_interphalangeal_joint_angle, float target_left_fifth_toe_proximal_interphalangeal_joint_angle, float smoothing_factor, float deltaTime);
                static void setLeftFifthToeDistalInterphalangealJointAngleSmoothly(float& left_fifth_toe_distal_interphalangeal_joint_angle, float target_left_fifth_toe_distal_interphalangeal_joint_angle, float smoothing_factor, float deltaTime);
            };
        };
    };

    class RightLeg
    {
    public:
        static void setRightHipJointAnglesSmoothly(
            float& Right_hip_flexion_extension_angle,
            float& Right_hip_abduction_adduction_angle,
            float& Right_hip_internal_external_rotation_angle,
            float target_Right_hip_flexion_extension_angle,
            float target_Right_hip_abduction_adduction_angle,
            float target_Right_hip_internal_external_rotation_angle,
            float smoothing_factor,
            float deltaTime);

        class RightKnee
        {
        public:
            static void setRightKneeAngleSmoothly(float& right_knee_angle, float target_right_knee_angle, float smoothing_factor, float deltaTime);
        };

        class RightAnkle
        {
        public:
            static void setRightAnkleAngleSmoothly(float& right_ankle_angle, float target_right_ankle_angle, float smoothing_factor, float deltaTime);
        };
       
        class RightFoot
        {
        public:

            class RightBigToe
            {
            public:
                static void setRightBigToeMetatarsophalangealJointAngleSmoothly(float& right_big_toe_metatarsophalangeal_joint_angle, float target_right_big_toe_metatarsophalangeal_joint_angle, float smoothing_factor, float deltaTime);
                static void setRightBigToeInterphalangealJointAngleSmoothly(float& right_big_toe_interphalangeal_joint_angle, float target_right_big_toe_interphalangeal_joint_angle, float smoothing_factor, float deltaTime);
            };

            class RightSecondToe
            {
            public:
                static void setRightSecondToeMetatarsophalangealJointAngleSmoothly(float& right_second_toe_metatarsophalangeal_joint_angle, float target_right_second_toe_metatarsophalangeal_joint_angle, float smoothing_factor, float deltaTime);
                static void setRightSecondToeProximalInterphalangealJointAngleSmoothly(float& right_second_toe_proximal_interphalangeal_joint_angle, float target_right_second_toe_proximal_interphalangeal_joint_angle, float smoothing_factor, float deltaTime);
                static void setRightSecondToeDistalInterphalangealJointAngleSmoothly(float& right_second_toe_distal_interphalangeal_joint_angle, float target_right_second_toe_distal_interphalangeal_joint_angle, float smoothing_factor, float deltaTime);
            };

            class RightThirdToe
            {
            public:
                static void setRightThirdToeMetatarsophalangealJointAngleSmoothly(float& right_third_toe_metatarsophalangeal_joint_angle, float target_right_third_toe_metatarsophalangeal_joint_angle, float smoothing_factor, float deltaTime);
                static void setRightThirdToeProximalInterphalangealJointAngleSmoothly(float& right_third_toe_proximal_interphalangeal_joint_angle, float target_right_third_toe_proximal_interphalangeal_joint_angle, float smoothing_factor, float deltaTime);
                static void setRightThirdToeDistalInterphalangealJointAngleSmoothly(float& right_third_toe_distal_interphalangeal_joint_angle, float target_right_third_toe_distal_interphalangeal_joint_angle, float smoothing_factor, float deltaTime);
            };

            class RightFourthToe
            {
            public:
                static void setRightFourthToeMetatarsophalangealJointAngleSmoothly(float& right_fourth_toe_metatarsophalangeal_joint_angle, float target_right_fourth_toe_metatarsophalangeal_joint_angle, float smoothing_factor, float deltaTime);
				static void setRightFourthToeProximalInterphalangealJointAngleSmoothly(float& right_fourth_toe_proximal_interphalangeal_joint_angle, float target_right_fourth_toe_proximal_interphalangeal_joint_angle, float smoothing_factor, float deltaTime);
				static void setRightFourthToeDistalInterphalangealJointAngleSmoothly(float& right_fourth_toe_distal_interphalangeal_joint_angle, float target_right_fourth_toe_distal_interphalangeal_joint_angle, float smoothing_factor, float deltaTime);
            };
            
            class RightFifthToe
            {
            public:
                static void setRightFifthToeMetatarsophalangealJointAngleSmoothly(float& right_fifth_toe_metatarsophalangeal_joint_angle, float target_right_fifth_toe_metatarsophalangeal_joint_angle, float smoothing_factor, float deltaTime);
                static void setRightFifthToeProximalInterphalangealJointAngleSmoothly(float& right_fifth_toe_proximal_interphalangeal_joint_angle, float target_right_fifth_toe_proximal_interphalangeal_joint_angle, float smoothing_factor, float deltaTime);
                static void setRightFifthToeDistalInterphalangealJointAngleSmoothly(float& right_fifth_toe_distal_interphalangeal_joint_angle, float target_right_fifth_toe_distal_interphalangeal_joint_angle, float smoothing_factor, float deltaTime);
            };
        };
    };

    class LeftArm
    {
    public:
        static void LeftShoulderTension(float& left_shoulder);
        static void setLeftShoulderJointAnglesSmoothly(float& left_shoulder_flexion_extension_angle, float& left_shoulder_abduction_adduction_angle, float& left_shoulder_internal_external_rotation_angle, float target_left_shoulder_flexion_extension_angle, float target_left_shoulder_abduction_adduction_angle, float target_left_shoulder_internal_external_rotation_angle, float smoothing_factor, float deltaTime);
        static void setLeftElbowAngleSmoothly(float& LeftElbowAngle, float targetLeftElbowAngle, float smoothing_factor, float deltaTime);
        static void setLeftWristAnglesSmoothly(float& leftWristAngleX, float& leftWristAngleY, float targetLeftWristAngleX, float targetLeftWristAngleY, float smoothingFactor, float deltaTime);

        class LeftHand
        {
        public:
            class LeftIndexFinger
            {
            public:
				static void LeftIndexFingerTension(float& left_index_finger);
				static void setLeftIndexFingerFirstJointAngles(float& left_index_finger_first_joint_angle_x, float& left_index_finger_first_joint_angle_y, float& left_index_finger_first_joint_angle_z, float target_left_index_finger_first_joint_angle_x, float target_left_index_finger_first_joint_angle_y, float target_left_index_finger_first_joint_angle_z, float smoothing_factor, float deltaTime);
                static void setLeftIndexFingerSecondJointAngle(float& left_index_finger_second_joint_angle_x, float target_left_index_finger_second_joint_angle_x, float smoothing_factor, float deltaTime);
                static void setLeftIndexFingerThirdJointAngle(float& left_index_finger_third_joint_angle, float target_left_index_finger_third_joint_angle, float smoothing_factor, float deltaTime);
            };

            class LeftMiddleFinger
            {
            public:
                static void setLeftMiddleDigitTension(float& left_middle_digit);
                static void setLeftMiddleFingerFirstJointAngle(float& left_middle_finger_first_joint_angle, float target_left_middle_finger_first_joint_angle, float smoothing_factor, float deltaTime);
                static void setLeftMiddleFingerSecondJointAngle(float& left_middle_finger_second_joint_angle, float target_left_middle_finger_second_joint_angle, float smoothing_factor, float deltaTime);
                static void setLeftMiddleFingerThirdJointAngle(float& left_middle_finger_third_joint_angle, float target_left_middle_finger_third_joint_angle, float smoothing_factor, float deltaTime);
            };

            class LeftRingFinger
            {
            public:
                static void setLeftRingDigitTension(float& left_ring_digit);
				static void setLeftRingFingerFirstJointAngle(float& left_ring_finger_first_joint_angle, float target_ring_finger_first_joint_angle_x, float smoothing_factor, float deltaTime);
                static void setLeftRingFingerSecondJointAngle(float& left_ring_finger_second_joint_angle, float target_ring_finger_first_joint_angle, float smoothing_factor, float deltaTime);
				static void setLeftRingFingerThirdJointAngle(float& left_ring_finger_third_joint_angle, float target_ring_finger_third_joint_angle_x, float smoothing_factor, float deltaTime);
            };

            class LeftPinkyFinger
			{
            public:
				static void setLeftPinkyDigitTension(float& left_pinky_digit);
				static void setLeftPinkyFingerFirstJointAngle(float& left_pinky_finger_first_joint_angle, float target_ring_finger_second_joint_angle_x, float smoothing_factor, float deltaTime);
				static void setLeftPinkyFingerSecondJointAngle(float& left_pinky_finger_second_joint_angle, float target_ring_finger_second_joint_angle_x, float smoothing_factor, float deltaTime);
                static void setLeftPinkyFingerThirdJointAngle(float& left_pinky_finger_third_joint_angle, float target_ring_finger_second_joint_angle_x, float smoothing_factor, float deltaTime);
			};

            class LeftThumbFinger
			{
			public:
				static void setLeftThumbDigitTension(float& left_thumb_digit);
				static void setLeftThumbFingerFirstJointAngle(float& left_thumb_finger_first_joint_angle, float target_ring_finger_second_joint_angle_x, float smoothing_factor, float deltaTime);
				static void setLeftThumbFingerSecondJointAngle(float& left_thumb_finger_second_joint_angle, float target_ring_finger_second_joint_angle_x, float smoothing_factor, float deltaTime);
				static void setLeftThumbFingerThirdJointAngle(float& left_thumb_finger_third_joint_angle, float target_ring_finger_third_joint_angle_x, float smoothing_factor, float deltaTime);
			};
        };
    };

    class RightArm
    {
    public:
        static void setRightShoulderTension(float& right_shoulder);
        static void setRightShoulderJointAnglesSmoothly(float& right_shoulder_flexion_extension_angle, float& right_shoulder_abduction_adduction_angle, float& right_shoulder_internal_external_rotation_angle, float target_right_shoulder_flexion_extension_angle, float target_right_shoulder_abduction_adduction_angle, float target_right_shoulder_internal_external_rotation_angle, float smoothing_factor, float deltaTime);
        static void setRightElbowAngleSmoothly(float& RightElbowAngle, float targetRightElbowAngle, float smoothing_factor, float deltaTime);
        static void setRightWristAnglesSmoothly(float& rightWristAngleX, float& rightWristAngleY, float targetRightWristAngleX, float targetRightWristAngleY, float smoothingFactor, float deltaTime);

        class Anterior
        {
        public:
            static void BicepsBrachii(float& biceps_brachii);
            static void Brachialis(float& brachialis);
            static void Coracobrachialis(float& coracobrachialis);
        };

        class Posterior
        {
        public:
            static void TricepsBrachii(float &triceps_brachii);
            static void Anconeus(float &anconeus);
        };

        class RightHand
        {
        public:

            class RightIndexFinger
			{
			public:
				static void setRightIndexFingerTension(float& right_index_finger_tension);
                static void setRightIndexFingerFirstJointAngles(float& right_index_finger_first_joint_angle_x, float& right_index_finger_first_joint_angle_y, float& right_index_finger_first_joint_angle_z, float target_right_index_finger_first_joint_angle_x, float target_right_index_finger_first_joint_angle_y, float target_right_index_finger_first_joint_angle_z, float smoothing_factor, float deltaTime);
                static void setRightIndexFingerSecondJointAngle(float& right_index_finger_second_joint_angle_x, float target_right_index_finger_second_joint_angle_x, float smoothing_factor, float deltaTime);
                static void setRightIndexFingerThirdJointAngle(float& right_index_finger_third_joint_angle, float target_right_index_finger_third_joint_angle, float smoothing_factor, float deltaTime);
			};

            class RightMiddleFinger
            {
			public:
				static void setRightMiddleFingerTension(float& right_middle_finger_tension);
				static void setRightMiddleFingerFirstJointAngle(float& right_middle_finger_first_joint_angle, float target_right_middle_finger_first_joint_angle_x, float smoothing_factor, float deltaTime);
				static void setRightMiddleFingerSecondJointAngle(float& right_middle_finger_second_joint_angle, float target_right_middle_finger_second_joint_angle_x, float smoothing_factor, float deltaTime);
				static void setRightMiddleFingerThirdJointAngle(float& right_middle_finger_third_joint_angle, float target_right_middle_finger_third_joint_angle_x, float smoothing_factor, float deltaTime);
            };

            class RightRingFinger
			{
			public:
				static void setRightRingFingerTension(float& right_ring_finger_tension);
				static void setRightRingFingerFirstJointAngle(float& right_ring_finger_first_joint_angle, float target_right_ring_finger_first_joint_angle_x, float smoothing_factor, float deltaTime);
				static void setRightRingFingerSecondJointAngle(float& right_ring_finger_second_joint_angle, float target_right_ring_finger_second_joint_angle_x, float smoothing_factor, float deltaTime);
				static void setRightRingFingerThirdJointAngle(float& right_ring_finger_third_joint_angle, float target_right_ring_finger_third_joint_angle_x, float smoothing_factor, float deltaTime);
			};

			class RightPinkyFinger
			{
			public:
				static void setRightPinkyFingerTension(float& right_pinky_finger_tension);
				static void setRightPinkyFingerFirstJointAngle(float& right_pinky_finger_first_joint_angle, float target_right_pinky_finger_first_joint_angle_x, float smoothing_factor, float deltaTime);
				static void setRightPinkyFingerSecondJointAngle(float& right_pinky_finger_second_joint_angle, float target_right_pinky_finger_second_joint_angle_x, float smoothing_factor, float deltaTime);
				static void setRightPinkyFingerThirdJointAngle(float& right_pinky_finger_third_joint_angle, float target_right_pinky_finger_third_joint_angle_x, float smoothing_factor, float deltaTime);
			};

			class RightThumbFinger
			{
			public:
				static void setRightThumbFingerTension(float& right_thumb_finger_tension);
                static void setRightThumbFingerFirstJointAngle(float& right_thumb_finger_first_joint_angle, float target_right_thumb_finger_first_joint_angle_x, float smoothing_factor, float deltaTime);
				static void setRightThumbFingerSecondJointAngle(float& right_thumb_finger_second_joint_angle, float target_right_thumb_finger_second_joint_angle_x, float smoothing_factor, float deltaTime);
			};
        };
    };

    class Torso
    {
    public:
        class ChestShoulder
        {
        public:
            static void PectoralisMajor(float &pectoralis_major);   // A large, fan-shaped muscle on the upper chest that helps to flex, adduct, and internally rotate the humerus (upper arm bone).
            static void PectoralisMinor(float &pectoralis_minor);   // A smaller, triangular muscle located underneath the pectoralis major.It helps to depress and protract the scapula(shoulder blade).
            static void SerratusAnterior(float &serratus_anterior); // A fan-shaped muscle on the side of the ribcage. Often called the "boxer's muscle" because it helps to protract the scapula, as in throwing a punch.
            static void IntercostalMuscles(float &intercostal);     // Small muscles located between the ribs that expand and contract the ribcage to facilitate breathing.
            static void Diaphragm(float &diaphram);
        };

        class AbdominalCore
        {
        public:
            static void RectusAbdominis(float &rectus_absominis);
            static void staticalObliques(float &statical_obliques);
            static void InternalObliques(float &internal_obliques);
            static void TraversusAbdominus(float &traversus_abdominus);
            static void PelvicFloorMuscles(float &pelvic_floor_muscles);
        };

        class BackAndSpinalMuscles
        {
        public:
            static void Trapezius(float &trapezius);
            static void LatissimusDorsi(float &latissimus_dorsi);
            static void ErectorSpinae(float &erector_spinae);
            static void RhomboidMajor(float &rhomboid_major);
            static void RhomboidMinor(float &rhomboid_minor);
            static void QuadratusLumborum(float &quadratus_lumborum);
            static void Multifidus(float &multifidus);
        };

        class HipAndPelvicMuscles
        {
        public:
            static void Ilopsoas(float &ilopsoas);
            static void GluteusMedius(float &gluteus_medius);
            static void GluteusMinimus(float &gluteus_minimus);
        };

        class Genitals
        {
        public:
            static void GenitalsTension(float &genitals_tension);
        };
    };

    class Head
    {
    public:

        class LeftEye
        {
        public:
            static void LeftEyeTracking(float& left_eye);
            static void setLeftEyeAngleSmoothly(Point2D& LeftEyeAngle, const Point2D& targetLeftEyeAngle, float smoothingFactor, float deltaTime);
            static void getLeftSuperiorRectusTension(float& LeftSuperiorRectusTension);
            static void getLeftLateralRectusTension(float& LeftLateralRectusTension);
            static void getLeftInferiorObliqueTension(float& LeftInferiorObliqueTension);
            static void getLeftInferiorRectusTension(float& LeftInteriorRectusTension);
            static void getLeftMedialRectusTension(float& LeftMedialRectusTension);
            static void setLeftEyeMuscleTension(float LeftSuperiorRectus, float LeftLeteralRectus, float LeftInferiorOblique, float LeftInferiorRectus, float leftMedialRectus);
        };

        class RightEye
        {
        public:
            static void RightEyeTracking(float& right_eye);
			static void setRightEyeAngleSmoothly(Point2D& RightEyeAngle, const Point2D& targetRightEyeAngle, float smoothingFactor, float deltaTime);
            static void getRightSuperiorRectusTension(float& RightSuperiorRectusTension);
            static void getRightLateralRectusTension(float& RightLateralRectusTension);
            static void getRightInferiorObliqueTension(float& RightInferiorObliqueTension);
            static void getRightInferiorRectusTension(float& RightInferiorRectusTension);
            static void getRightMedialRectusTension(float& RightMedialRectusTension);
            static void setRightEyeMuscleTension(float RightSuperiorRectus, float RightLeteralRectus, float RightInferiorOblique, float RightInferiorRectus, float RightMedialRectus);
        };

        class Neck
        {
        public:
            static void setHeadNeckJointAnglesSmoothly(float& neck_swivel_x, float& neck_swivel_y, float& neck_swivel_z, float target_neck_swivel_x, float target_neck_swivel_y, float target_neck_swivel_z);
            
            class Anterior
            {
            public:
                static void Sternocleidomastoid(float &sternocleidomastoid); // Extends and rotates the head, flexes the neck
                static void Scalene(float &scalene);                         // Flex and rotate the neck
                static void Infrahyoid(float &infrehyoid);                   // Swallowing and speech
            };

            class Posterior
            {
            public:
                static void Trapezius(float &trapezius);               // Extends, rotates, and elevates the head, stabilizes the shoulder blade
                static void LevatorScapulae(float &levator_scapulae);  // Elevates and depresses the scapula
                static void SpleniusCapitis(float &splenius_capitis);  // Extend and rotate the neck
                static void Cervicis(float &cervicis);                 // Extend and rotate the neck
                static void Suboccipital(float &suboccipital);         // Control fine movements of the head and neck
            };
        };

        class Nose
        {
        public:

        };
    };

    //static float* RightShoulderAngleTracking();
    //static void MoveRightArm(float* dimenisons);
};