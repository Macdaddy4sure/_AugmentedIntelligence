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
#include "Actions.h"
#include "Gaming.h"
#include "Working-Memory.h"
#include "Short-Term Memory.h"
#include "Long-Term Memory.h"
#include "Reference.h"
#include "Variables.h"
#include "Settings.h"
#include "Utilities.h"

using namespace std;

/*
    List of games in my Steam Account as of April 27, 2022:
    1. Anno Online
    2. Arma 3
    3. Assassin's Creed
    4. Assassin's Creed II
    5. Assassin's Creed Brotherhood
    6. Assassin's Creed Revelations
    7. Assassin's Creed III
    8. Assassin's Creed IV: Black Flag
    9. Battle Islands
    10. Battlefield Bad Company II
    11. Bioshock
    12. Bioshock Remastered
    13. Bioshock II
    14. Bioshock II: Remastered
    15. Bioshock Infinite
    16. Call of Duty 4: Modern Warfare
    17. Call of Duty 5: World At War
    18. Call of Duty: Modern Warfare II
    19. Call of Duty: Black Ops
    20. Call of Duty: Black Ops II
    21. Call of Duty: Black Ops III
    22. Cities: Skylines
    23. CounterStrike 1.6
    24. CounterStrike: Condition Zero
    25. CounterStrike: Condition Zero Deleted Scenes
    26. CounterStrike: Global Offensive
    27. CounterStrike: Source
    28. Crysis II: Maximum Edition
    29. DEFCON
    30. Defiance
    31. Democracy III
    32. Dota II
    33. Dragon Age: Origins
    34. Skyrim
    35. Emily is Away
    36. The Escapists
    37. Fallout 3
    38. Fallout 4
    39. Fallout New Vagas
    40. Far Cry
    41. Farming Simulator
    42. Far Cry II
    43. Far Cry III
    44. Far Cry IV
    45. Far Cry V
    46. Far Cry Primal
    47. Five Nights At Freddy's
    48. Fractured Space
    49. Faster Then Light
    50. Garry's Mod
    51. Half Life II
    52. Half-Life Deathmatch
    53. Heroes and Generals
    54. Hitman II
    55. Hitman Absolution
    56. Hitman: Sniper Challenge
    57. Interplanetary
    58. Just Cause
    59. Kerbal
*/

// The following function will for initializing playing video games
//      TODO: Get keywords to call this function
//            Get vision data to call this function
void _Actions::Gaming()
{
    //PyObject* pName, * pModule, * pFunc;
    //PyObject* pArgs, * pValue;
    //int i;

    //if (argc < 3) {
    //    fprintf(stderr, "Usage: call pythonfile funcname [args]\n");
    //    return 1;
    //}

    //Py_Initialize();
    //pName = PyUnicode_DecodeFSDefault(argv[1]);
    ///* Error checking of pName left out */

    //pModule = PyImport_Import(pName);
    //Py_DECREF(pName);

    //if (pModule != NULL) {
    //    pFunc = PyObject_GetAttrString(pModule, argv[2]);
    //    /* pFunc is a new reference */

    //    if (pFunc && PyCallable_Check(pFunc)) {
    //        pArgs = PyTuple_New(argc - 3);
    //        for (i = 0; i < argc - 3; ++i) {
    //            pValue = PyLong_FromLong(atoi(argv[i + 3]));
    //            if (!pValue) {
    //                Py_DECREF(pArgs);
    //                Py_DECREF(pModule);
    //                fprintf(stderr, "Cannot convert argument\n");
    //                return 1;
    //            }
    //            /* pValue reference stolen here: */
    //            PyTuple_SetItem(pArgs, i, pValue);
    //        }
    //        pValue = PyObject_CallObject(pFunc, pArgs);
    //        Py_DECREF(pArgs);
    //        if (pValue != NULL) {
    //            printf("Result of call: %ld\n", PyLong_AsLong(pValue));
    //            Py_DECREF(pValue);
    //        }
    //        else {
    //            Py_DECREF(pFunc);
    //            Py_DECREF(pModule);
    //            PyErr_Print();
    //            fprintf(stderr, "Call failed\n");
    //            return 1;
    //        }
    //    }
    //    else {
    //        if (PyErr_Occurred())
    //            PyErr_Print();
    //        fprintf(stderr, "Cannot find function \"%s\"\n", argv[2]);
    //    }
    //    Py_XDECREF(pFunc);
    //    Py_DECREF(pModule);
    //}
    //else {
    //    PyErr_Print();
    //    fprintf(stderr, "Failed to load \"%s\"\n", argv[1]);
    //    return 1;
    //}
    //if (Py_FinalizeEx() < 0) {
    //    return 120;
    //}
    //return 0;
}