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

class _LiteratureDevices
{
public:
    static string getLiteratureDevice(string text);
    //bool isOrder(string text);
    //bool isParallelPlot(string text);
    static bool isEpigraph(string text);
    static bool isMetaphor(string text);
    static bool isIrony(string text);
    static bool isSimilies(string text);
    static bool isNarration(string text);
    static bool isDialogue(string text);
    static bool isFoils(string text);
    static bool isPrologue(string text);
    static bool isEpilogue(string text);
    static bool isAllusion(string text);
    static bool isForeshadowing(string text);
    static bool isFigurativeLanguage(string text);
    static bool isImagery(string text);
    static bool isCharacterization(string text);
    static bool isSymbolism(string text);
    static bool isAlitteration(string text);
    static bool isAnchronism(string text);
    static bool isAphorism(string text);
    static bool isDiction(string text);
    static bool isDoubleEntendre(string text);
    static bool isEpigram(string text);
    static bool isEuphemism(string text);
    static bool isHyperbole(string text);
    static bool isIdiom(string text);
    static bool isLitotes(string text);
    static bool isMalpropism(string text);
    static bool isMetonymy(string text);
    static bool isOxymoron(string text);
    static bool isParable(string text);
    static bool isParadox(string text);
    static bool isParallelism(string text);
    static bool isParody(string text);
    static bool isPersonification(string text);
    static bool isProse(string text);
    static bool isPun(string text);
    static bool isRhetoric(string text);
    static bool isSatire(string text);
    static bool isSetting(string text);
    static bool isSimile(string text);
    static bool isSituationalIrony(string text);
    static bool isSoliloquy(string text);
    static bool isSynecdoche(string text);
    static bool isTheme(string text);
    static bool isTone(string text);
    static bool isVerbalIrony(string text);
    static bool isAllegory(string text);
};