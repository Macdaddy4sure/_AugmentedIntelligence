#pragma once

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

using namespace std;

class _AnalysisError
{
public:
    
    class Terms
    {
    public:
        string AnalysisChecking(string text);
        static bool SamplingError(string text);
        static bool MeasurmentError(string text);
        static bool ProcessingError(string text);
        static bool AnalysisError(string text);
        static bool ConfirmationBias(string text);
        static bool OutliersAndNoise(string text);
        static bool OverFitting(string text);
        static bool UnderFitting(string text);
        static bool DataIntegrity(string text);
        static bool ConfoundingVariables(string text);
        static bool SamplingErrorVision(string image_location);
        static bool MeasurmentErrorVision(string image_location);
        static bool ProcessingErrorVision(string image_location);
        static bool AnalysisErrorVision(string image_location);
        static bool ConfirmationBiasVision(string image_location);
        static bool OutliersAndNoiseVision(string image_location);
        static bool OverFittingVision(string image_location);
        static bool UnderFittingVision(string image_location);
        static bool DataIntegrityVision(string image_location);
        static bool ConfoundingVariablesVision(string image_location);
    };

};