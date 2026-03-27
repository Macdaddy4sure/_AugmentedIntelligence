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

class _Swimming
{
public:
    static void Swimming();
    static void EggBeater();
    static void Crawl();
    static void CrawlFlipTurn();
    static void BreastStroke();
    static void BreastStrokeTurn();
    static void BackStroke();
    static void BackStrokeTurn();
    static void ElementaryBackstroke();
    static void Butterfly();
    static void SideStroke();
    static void ButterflyTurn();
    static void Dive();
    static void crawlSwimStroke(double theta_L, double theta_R, double time, double& dtheta_L_dt, double& dtheta_R_dt);
    static void eggBeaterStroke(double theta_L, double theta_R, double phi_L, double phi_R, double time, double& dtheta_L_dt, double& dtheta_R_dt, double& dphi_L_dt, double& dphi_R_dt);
    static void butterflyStroke(double theta_L, double theta_R, double phi_L, double phi_R, double t, double& dtheta_L_dt, double& dtheta_R_dt, double& dphi_L_dt, double& dphi_R_dt);
    static void breastSwimStroke(double theta_arm_L, double theta_arm_R, double phi_arm_L, double phi_arm_R, double theta_leg_L, double theta_leg_R, double phi_leg_L, double phi_leg_R, double t, double& dtheta_arm_L_dt, double& dtheta_arm_R_dt, double& dphi_arm_L_dt, double& dphi_arm_R_dt, double& dtheta_leg_L_dt, double& dtheta_leg_R_dt, double& dphi_leg_L_dt, double& dphi_leg_R_dt);
    static void backstrokeSwimStroke(double theta_arm_L, double theta_arm_R, double phi_arm_L, double phi_arm_R, double theta_leg_L, double theta_leg_R, double phi_leg_L, double phi_leg_R, double t, double& dtheta_arm_L_dt, double& dtheta_arm_R_dt, double& dphi_arm_L_dt, double& dphi_arm_R_dt, double& dtheta_leg_L_dt, double& dtheta_leg_R_dt, double& dphi_leg_L_dt, double& dphi_leg_R_dt);
    static double calculateTargetAngle(double time, bool isLeftArm);
    static double calculateLegTargetAngle(double time, bool isLeftLeg);
    static double calculateKneeTargetAngle(double time, bool isLeftKnee);

    class Terms
    {
    public:

    };
};