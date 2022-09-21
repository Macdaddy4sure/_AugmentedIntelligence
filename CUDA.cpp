/*
    Copyright(C) 2022 Tyler Crockett | Macdaddy4sure.com

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

using namespace std;

/*
    Purpose: Server application to run on a dedicated server computer with CUDA enabled GPUs
    1. Settings menu
        a. Add reservations for CUDA threads
    1. Start thread for listening over ipv4
    2. Get the data required for the CUDA processors
    3. Get the algorithms that can be executed
    4. Construct a queue to be executed
    5. Get status of all running CUDA threads and the number of cores reserved and available
        a. If the reservation size is greater than the number of requested CUDA cores; return the error to the _AI server application
    6. Save a log of executed CUDA threads in MySQL
*/