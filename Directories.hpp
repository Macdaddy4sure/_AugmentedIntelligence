#pragma once

/*
    Copyright(C) 2024 Tyler Crockett | Macdaddy4sure.com

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

class _Directories
{
public:
    static string* init_earth_c_directory();
    static string* init_earth_raid1_directory();
    static string* init_earth_games_directory();
    static string* init_earth_ai_directory();
    static string* init_earth_data_directory();
    static string* init_athena_raid_directory();
    static string* init_mars_hdd_raid_directory();
    static string* init_mars_ssd_raid_directory();
    static string* init_mercury_raid_directory();
    static string* init_pluto_c_directory();
    static string* init_saturn_raid_directory();
    static string* init_sun_c_directory();
    static string* init_sun_raid_directory();
};

//static string* _earth_c = _Directories::init_earth_c_directory();
//static string* _earth_raid1 = _Directories::init_earth_raid1_directory();
//static string* _earth_games = _Directories::init_earth_games_directory();
//static string* _earth_ai = _Directories::init_earth_ai_directory();
//static string* _earth_data = _Directories::init_earth_data_directory();
//static string* _athena_raid = _Directories::init_athena_raid_directory();
//static string* _mars_hdd_raid = _Directories::init_mars_hdd_raid_directory();
//static string* _mars_ssd_raid = _Directories::init_mars_ssd_raid_directory();
//static string* _mercury_raid = _Directories::init_mercury_raid_directory();
//static string* _pluto_c = _Directories::init_pluto_c_directory();
//static string* _sun_c = _Directories::init_sun_c_directory();
//static string* _sun_raid = _Directories::init_sun_raid_directory();