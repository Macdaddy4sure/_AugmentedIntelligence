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
#include "Reference.h"
#include "Working-Memory.h"
#include "Short-Term Memory.h"
#include "Long-Term Memory.h"
#include "Settings.h"
#include "Variables.h"

using namespace std;

void _Reference::InitReference()
{
    _dictionary_terms = _Reference::init_dictionary();
    _wikisimple_articles = _Reference::init_wikisimple_articles();
    _wikipedia_articles = _Reference::init_wikipedia_articles();
    _rationalism_terms = _Reference::init_rationalism();
    _psychology_terms = _Reference::init_psychology();
    _cognitive_psychology_terms = _Reference::init_cognitive_psychology();
    _anatomy_terms = _Reference::init_anatomy();
    _biology_terms = _Reference::init_biology();
    _biophysics_terms = _Reference::init_biophysics();
    _chemistry_terms = _Reference::init_chemistry();
    _geology_terms = _Reference::init_geology();
    _geography_terms = _Reference::init_geography();
    _health_terms = _Reference::init_health();
    _philosophy_terms = _Reference::init_philosophy();
    _physics_terms = _Reference::init_physics();
    _basic_mathematics = _Reference::init_basic_mathematics();
    _algebra = _Reference::init_algebra();
    _calculus = _Reference::init_calculus();
    _geometry = _Reference::init_geometry();
    _combinatorics = _Reference::init_combinatorics();
    _trigonometry = _Reference::init_trigonometry();
    _logic = _Reference::init_logic();
    _number_theory = _Reference::init_number_theory();
    _differential_equations = _Reference::init_differential_equations();
    _probability_and_statistics = _Reference::init_probability_and_statistics();
    _game_theory = _Reference::init_game_theory();
    _CPP_programming_terms = _Reference::init_cpp();
    _computerPrograms = _Reference::init_computer_software();
    _computer_networking = _Reference::init_networking();
    _electrical_engineering = _Reference::init_electrical_engineering();
    _computer_science = _Reference::init_computer_science();
    _formal_fallacies = _Reference::init_formal_fallacies();
    _informal_fallacies = _Reference::init_informal_fallacies();
    _science_articles = _Reference::init_science_articles();
    _desktop_support = _Reference::init_desktop_support();
    _server_2022 = _Reference::init_server_2022();
    _windows11 = _Reference::init_windows11();
    _server_2019 = _Reference::init_server_2019();
    _windows10 = _Reference::init_windows10();
    _server_2016 = _Reference::init_server_2016();
    _windows7 = _Reference::init_windows7();
    _server_2012 = _Reference::init_server_2012();
    _server_2008 = _Reference::init_server_2008();
    _windows_vista = _Reference::init_windows_vista();
    _server_2003 = _Reference::init_server_2003();
    _windows_xp = _Reference::init_windows_xp();
    _windows_2000 = _Reference::init_windows_2000();
    _windows_98 = _Reference::init_windows_98();
    _windows_95 = _Reference::init_windows_95();
    _ms_dos_commands = _Reference::init_ms_dos();
    _powershell = _Reference::init_powershell();
    _bash_commands = _Reference::init_bash();
    _ubuntu = _Reference::init_ubuntu();
    _yellow_dog = _Reference::init_yellow_dog();
    _linux_mint = _Reference::init_linux_mint();
    //_lists = _Reference::init_lists();
    _osi_model = _Reference::init_osi_model();
}

//string* _Reference::init_lists()
//{
//    MYSQL* lists;
//    MYSQL_ROW row1;
//    MYSQL_RES* result1;
//    string query;
//    string mysql_database = "lists";
//    string mysql_username = _Settings::GetMySQLUsername();
//    string mysql_password = _Settings::GetMySQLPassword();
//
//    lists = mysql_init(0);
//    lists = mysql_real_connect(lists, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);
//
//    if (lists)
//    {
//        query = "SHOW TABLES;";
//        mysql_query(lists, query.c_str());
//        result1 = mysql_store_result(lists);
//
//        while ((row1 = mysql_fetch_row(result1)))
//        {
//            // Get an empty space in the fallaceis variable
//            for (int x = 0; x <= 1000; x++)
//            {
//                if (lists_temp[x] == "")
//                {
//                    lists_temp[x] = row1[3];
//                }
//            }
//        }
//    }
//    return lists_temp;
//}

string** _Reference::init_dictionary()
{
    MYSQL* dictionary;
    MYSQL_ROW row1;
    MYSQL_RES* result1;
    string query;
    string mysql_database = "dictionary";
    string mysql_username = _Settings::GetMySQLUsername();
    string mysql_password = _Settings::GetMySQLPassword();
    int count = 0;

    dictionary = mysql_init(0);
    dictionary = mysql_real_connect(dictionary, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

    if (dictionary)
    {
        query = "SELECT * FROM entries2;";
        mysql_query(dictionary, query.c_str());
        result1 = mysql_store_result(dictionary);

        while ((row1 = mysql_fetch_row(result1)))
        {
            // Get an empty space in the dictionary entries variable
            for (int x = 0; x <= 10000; x++)
            {
                if (_dictionary_terms[x][0] == "")
                {
                    _dictionary_terms[x][0] = row1[0];
                    _dictionary_terms[x][1] = row1[1];
                    _dictionary_terms[x][2] = row1[2];
                    _dictionary_terms[x][3] = row1[3];
                    count++;
                }
            }
        }
    }

    return _dictionary_terms;
}

string** _Reference::init_wikisimple_articles()
{
    MYSQL* wikisimple_articles;
    MYSQL_ROW row1;
    MYSQL_RES* result1;
    string query;
 
    string mysql_database = "intitialization";
    string mysql_username = _Settings::GetMySQLUsername();
    string mysql_password = _Settings::GetMySQLPassword();
    string temp;

    wikisimple_articles = mysql_init(0);
    wikisimple_articles = mysql_real_connect(wikisimple_articles, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

    if (wikisimple_articles)
    {
        query = "SHOW TABLES;";
        mysql_query(wikisimple_articles, query.c_str());
        result1 = mysql_store_result(wikisimple_articles);

        while ((row1 = mysql_fetch_row(result1)))
        {
            for (int x = 0; x <= 10000; x++)
            {
                if (_wikisimple_articles[x][0] == "")
                {
                    //cout << row1[0] << endl;
                    _wikisimple_articles[x][0] = temp;
                }
            }
        }
    }

    return _wikisimple_articles;
}

string** _Reference::init_wikipedia_articles()
{
    MYSQL* wikipedia_articles;
    MYSQL_ROW row1;
    MYSQL_RES* result1;
    string query;
    string mysql_database = "intitialization";
    string mysql_username = _Settings::GetMySQLUsername();
    string mysql_password = _Settings::GetMySQLPassword();

    wikipedia_articles = mysql_init(0);
    wikipedia_articles = mysql_real_connect(wikipedia_articles, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

    if (wikipedia_articles)
    {
        query = "SHOW TABLES;";
        mysql_query(wikipedia_articles, query.c_str());
        result1 = mysql_store_result(wikipedia_articles);

        while ((row1 = mysql_fetch_row(result1)))
        {
            for (int x = 0; x <= 10000; x++)
            {
                if (_wikipedia_articles[x][0] == "")
                {
                    _wikipedia_articles[x][0] = row1[0];
                    _wikipedia_articles[x][0] = row1[1];
                    _wikipedia_articles[x][0] = row1[2];
                    _wikipedia_articles[x][0] = row1[3];
                    _wikipedia_articles[x][0] = row1[4];
                }
            }
        }
    }
    return _wikipedia_articles;
}

string** _Reference::init_rationalism()
{
    MYSQL* rationalism;
    MYSQL_ROW row1;
    MYSQL_RES* result1;
    string query;
    string mysql_database = "intitialization";
    string mysql_username = _Settings::GetMySQLUsername();
    string mysql_password = _Settings::GetMySQLPassword();

    rationalism = mysql_init(0);
    rationalism = mysql_real_connect(rationalism, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

    if (rationalism)
    {
        query = "SELECT * FROM rationalism;";
        mysql_query(rationalism, query.c_str());
        result1 = mysql_store_result(rationalism);

        while ((row1 = mysql_fetch_row(result1)))
        {
            // Get an empty space in the fallaceis variable
            for (int x = 0; x <= 10000; x++)
            {
                if (_rationalism_terms[x][0] == "")
                {
                    _rationalism_terms[x][0] = row1[0];
                    _rationalism_terms[x][1] = row1[1];
                }
            }
        }
    }
    return _rationalism_terms;
}

string** _Reference::init_psychology()
{
    MYSQL* psychology;
    MYSQL_ROW row1;
    MYSQL_RES* result1;
    string query;
    string mysql_database = "intitialization";
    string mysql_username = _Settings::GetMySQLUsername();
    string mysql_password = _Settings::GetMySQLPassword();

    psychology = mysql_init(0);
    psychology = mysql_real_connect(psychology, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

    if (psychology)
    {
        query = "SELECT * FROM psychology;";
        mysql_query(psychology, query.c_str());
        result1 = mysql_store_result(psychology);

        while ((row1 = mysql_fetch_row(result1)))
        {
            // Get an empty space in the fallaceis variable
            for (int x = 0; x <= 10000; x++)
            {
                if (_psychology_terms[x][0] == "")
                {
                    _psychology_terms[x][0] = row1[0];
                    _psychology_terms[x][1] = row1[1];
                }
            }
        }
    }
    return _psychology_terms;
}

string** _Reference::init_cognitive_psychology()
{
    MYSQL* psychology;
    MYSQL_ROW row1;
    MYSQL_RES* result1;
    string query;
    string mysql_database = "intitialization";
    string mysql_username = _Settings::GetMySQLUsername();
    string mysql_password = _Settings::GetMySQLPassword();

    psychology = mysql_init(0);
    psychology = mysql_real_connect(psychology, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

    if (psychology)
    {
        query = "SELECT * FROM psychology;";
        mysql_query(psychology, query.c_str());
        result1 = mysql_store_result(psychology);

        while ((row1 = mysql_fetch_row(result1)))
        {
            // Get an empty space in the fallaceis variable
            for (int x = 0; x <= 100000; x++)
            {
                if (_cognitive_psychology_terms[x][0] == "")
                {
                    _cognitive_psychology_terms[x][0] = row1[0];
                    _cognitive_psychology_terms[x][1] = row1[1];
                }
            }
        }
    }
    return _cognitive_psychology_terms;
}

string** _Reference::init_anatomy()
{
    MYSQL* anatomy;
    MYSQL_ROW row1;
    MYSQL_RES* result1;
    string query;
    string mysql_database = "intitialization";
    string mysql_username = _Settings::GetMySQLUsername();
    string mysql_password = _Settings::GetMySQLPassword();

    anatomy = mysql_init(0);
    anatomy = mysql_real_connect(anatomy, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

    if (anatomy)
    {
        query = "SELECT * FROM anatomy;";
        mysql_query(anatomy, query.c_str());
        result1 = mysql_store_result(anatomy);

        while ((row1 = mysql_fetch_row(result1)))
        {
            // Get an empty space in the fallaceis variable
            for (int x = 0; x <= 1000; x++)
            {
                if (_anatomy_terms[x][0] == "")
                {
                    _anatomy_terms[x][0] = row1[0];
                    _anatomy_terms[x][1] = row1[1];
                }
            }
        }
    }
    return _anatomy_terms;
}

string** _Reference::init_biology()
{
    MYSQL* biology;
    MYSQL_ROW row1;
    MYSQL_RES* result1;
    string query;
    string mysql_database = "intitialization";
    string mysql_username = _Settings::GetMySQLUsername();
    string mysql_password = _Settings::GetMySQLPassword();

    biology = mysql_init(0);
    biology = mysql_real_connect(biology, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

    if (biology)
    {
        query = "SELECT * FROM biology;";
        mysql_query(biology, query.c_str());
        result1 = mysql_store_result(biology);

        while ((row1 = mysql_fetch_row(result1)))
        {
            // Get an empty space in the fallaceis variable
            for (int x = 0; x <= 1000; x++)
            {
                if (_biology_terms[x][0] == "")
                {
                    _biology_terms[x][0] = row1[0];
                    _biology_terms[x][1] = row1[1];
                }
            }
        }
    }
    return _biology_terms;
}

string** _Reference::init_biophysics()
{
    MYSQL* biophysics;
    MYSQL_ROW row1;
    MYSQL_RES* result1;
    string query;
    string mysql_database = "intitialization";
    string mysql_username = _Settings::GetMySQLUsername();
    string mysql_password = _Settings::GetMySQLPassword();

    biophysics = mysql_init(0);
    biophysics = mysql_real_connect(biophysics, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

    if (biophysics)
    {
        query = "SELECT * FROM biophysics;";
        mysql_query(biophysics, query.c_str());
        result1 = mysql_store_result(biophysics);

        while ((row1 = mysql_fetch_row(result1)))
        {
            // Get an empty space in the fallaceis variable
            for (int x = 0; x <= 10000; x++)
            {
                if (_biophysics_terms[x][0] == "")
                {
                    _biophysics_terms[x][0] = row1[0];
                    _biophysics_terms[x][1] = row1[1];
                }
            }
        }
    }
    return _biophysics_terms;
}
string** _Reference::init_chemistry()
{
    MYSQL* chemistry;
    MYSQL_ROW row1;
    MYSQL_RES* result1;
    string query;
    string mysql_database = "intitialization";
    string mysql_username = _Settings::GetMySQLUsername();
    string mysql_password = _Settings::GetMySQLPassword();

    chemistry = mysql_init(0);
    chemistry = mysql_real_connect(chemistry, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

    if (chemistry)
    {
        query = "SELECT * FROM chemistry;";
        mysql_query(chemistry, query.c_str());
        result1 = mysql_store_result(chemistry);

        while ((row1 = mysql_fetch_row(result1)))
        {
            // Get an empty space in the fallaceis variable
            for (int x = 0; x <= 100000; x++)
            {
                if (_chemistry_terms[x][0] == "")
                {
                    _chemistry_terms[x][0] = row1[0];
                    _chemistry_terms[x][1] = row1[1];
                }
            }
        }
    }
    return _chemistry_terms;
}

string** _Reference::init_geology()
{
    MYSQL* geology;
    MYSQL_ROW row1;
    MYSQL_RES* result1;
    string query;
    string mysql_database = "intitialization";
    string mysql_username = _Settings::GetMySQLUsername();
    string mysql_password = _Settings::GetMySQLPassword();

    geology = mysql_init(0);
    geology = mysql_real_connect(geology, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

    if (geology)
    {
        query = "SELECT * FROM geology;";
        mysql_query(geology, query.c_str());
        result1 = mysql_store_result(geology);

        while ((row1 = mysql_fetch_row(result1)))
        {
            // Get an empty space in the fallaceis variable
            for (int x = 0; x <= 10000; x++)
            {
                if (_geology_terms[x][0] == "")
                {
                    _geology_terms[x][0] = row1[0];
                    _geology_terms[x][1] = row1[1];
                }
            }
        }
    }
    return _geology_terms;
}

string** _Reference::init_geography()
{
    MYSQL* geography;
    MYSQL_ROW row1;
    MYSQL_RES* result1;
    string query;
    string mysql_database = "intitialization";
    string mysql_username = _Settings::GetMySQLUsername();
    string mysql_password = _Settings::GetMySQLPassword();

    geography = mysql_init(0);
    geography = mysql_real_connect(geography, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

    if (geography)
    {
        query = "SELECT * FROM geography;";
        mysql_query(geography, query.c_str());
        result1 = mysql_store_result(geography);

        while ((row1 = mysql_fetch_row(result1)))
        {
            // Get an empty space in the fallaceis variable
            for (int x = 0; x <= 10000; x++)
            {
                if (_geography_terms[x][0] == "")
                {
                    _geography_terms[x][0] = row1[0];
                    _geography_terms[x][1] = row1[1];
                }
            }
        }
    }
    return _geography_terms;
}

string** _Reference::init_health()
{
    MYSQL* health;
    MYSQL_ROW row1;
    MYSQL_RES* result1;
    string query;
    string mysql_database = "intitialization";
    string mysql_username = _Settings::GetMySQLUsername();
    string mysql_password = _Settings::GetMySQLPassword();

    health = mysql_init(0);
    health = mysql_real_connect(health, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

    if (health)
    {
        query = "SELECT * FROM health;";
        mysql_query(health, query.c_str());
        result1 = mysql_store_result(health);

        while ((row1 = mysql_fetch_row(result1)))
        {
            // Get an empty space in the fallaceis variable
            for (int x = 0; x <= 10000; x++)
            {
                if (_health_terms[x][0] == "")
                {
                    _health_terms[x][0] = row1[0];
                    _health_terms[x][1] = row1[1];
                }
            }
        }
    }
    return _health_terms;
}

string** _Reference::init_philosophy()
{
    MYSQL* philosophy;
    MYSQL_ROW row1;
    MYSQL_RES* result1;
    string query;
    string mysql_database = "intitialization";
    string mysql_username = _Settings::GetMySQLUsername();
    string mysql_password = _Settings::GetMySQLPassword();

    philosophy = mysql_init(0);
    philosophy = mysql_real_connect(philosophy, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

    if (philosophy)
    {
        query = "SELECT * FROM philosophy;";
        mysql_query(philosophy, query.c_str());
        result1 = mysql_store_result(philosophy);

        while ((row1 = mysql_fetch_row(result1)))
        {
            // Get an empty space in the fallaceis variable
            for (int x = 0; x <= 10000; x++)
            {
                if (_philosophy_terms[x][0] == "")
                {
                    _philosophy_terms[x][0] = row1[0];
                    _philosophy_terms[x][1] = row1[1];
                }
            }
        }
    }
    return _philosophy_terms;
}

string** _Reference::init_physics()
{
    MYSQL* physics;
    MYSQL_ROW row1;
    MYSQL_RES* result1;
    string query;
    string mysql_database = "intitialization";
    string mysql_username = _Settings::GetMySQLUsername();
    string mysql_password = _Settings::GetMySQLPassword();

    physics = mysql_init(0);
    physics = mysql_real_connect(physics, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

    if (physics)
    {
        query = "SELECT * FROM physics;";
        mysql_query(physics, query.c_str());
        result1 = mysql_store_result(physics);

        while ((row1 = mysql_fetch_row(result1)))
        {
            // Get an empty space in the fallaceis variable
            for (int x = 0; x <= 10000; x++)
            {
                if (_physics_terms[x][0] == "")
                {
                    _physics_terms[x][0] = row1[0];
                    _physics_terms[x][1] = row1[1];
                }
            }
        }
    }
    return _physics_terms;
}

string** _Reference::init_basic_mathematics()
{
    MYSQL* basic_mathematics;
    MYSQL_ROW row1;
    MYSQL_RES* result1;
    string query;
    string mysql_database = "intitialization";
    string mysql_username = _Settings::GetMySQLUsername();
    string mysql_password = _Settings::GetMySQLPassword();

    basic_mathematics = mysql_init(0);
    basic_mathematics = mysql_real_connect(basic_mathematics, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

    if (basic_mathematics)
    {
        query = "SELECT * FROM basic_mathematics;";
        mysql_query(basic_mathematics, query.c_str());
        result1 = mysql_store_result(basic_mathematics);

        while ((row1 = mysql_fetch_row(result1)))
        {
            // Get an empty space in the fallaceis variable
            for (int x = 0; x <= 10000; x++)
            {
                if (_basic_mathematics[x][0] == "")
                {
                    _basic_mathematics[x][0] = row1[0];
                    _basic_mathematics[x][1] = row1[1];
                }
            }
        }
    }
    return _basic_mathematics;
}

string** _Reference::init_algebra()
{
    MYSQL* algebra;
    MYSQL_ROW row1;
    MYSQL_RES* result1;
    string query;
    string mysql_database = "intitialization";
    string mysql_username = _Settings::GetMySQLUsername();
    string mysql_password = _Settings::GetMySQLPassword();

    algebra = mysql_init(0);
    algebra = mysql_real_connect(algebra, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

    if (algebra)
    {
        query = "SELECT * FROM algebra;";
        mysql_query(algebra, query.c_str());
        result1 = mysql_store_result(algebra);

        while ((row1 = mysql_fetch_row(result1)))
        {
            // Get an empty space in the _algebra variable
            for (int x = 0; x <= 10000; x++)
            {
                if (_algebra[x][0] == "")
                {
                    _algebra[x][0] = row1[0];
                    _algebra[x][1] = row1[1];
                }
            }
        }
    }
    return _algebra;
}

string** _Reference::init_calculus()
{
    MYSQL* calculus;
    MYSQL_ROW row1;
    MYSQL_RES* result1;
    string query;
    string mysql_database = "intitialization";
    string mysql_username = _Settings::GetMySQLUsername();
    string mysql_password = _Settings::GetMySQLPassword();

    calculus = mysql_init(0);
    calculus = mysql_real_connect(calculus, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

    if (calculus)
    {
        query = "SELECT * FROM calculus;";
        mysql_query(calculus, query.c_str());
        result1 = mysql_store_result(calculus);

        while ((row1 = mysql_fetch_row(result1)))
        {
            // Get an empty space in the fallaceis variable
            for (int x = 0; x <= 10000; x++)
            {
                if (_calculus[x][0] == "")
                {
                    _calculus[x][0] = row1[0];
                    _calculus[x][1] = row1[1];
                }
            }
        }
    }
    return _calculus;
}

string** _Reference::init_geometry()
{
    MYSQL* geometry;
    MYSQL_ROW row1;
    MYSQL_RES* result1;
    string query;
    string mysql_database = "intitialization";
    string mysql_username = _Settings::GetMySQLUsername();
    string mysql_password = _Settings::GetMySQLPassword();

    geometry = mysql_init(0);
    geometry = mysql_real_connect(geometry, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

    if (geometry)
    {
        query = "SELECT * FROM geometry;";
        mysql_query(geometry, query.c_str());
        result1 = mysql_store_result(geometry);

        while ((row1 = mysql_fetch_row(result1)))
        {
            // Get an empty space in the fallaceis variable
            for (int x = 0; x <= 10000; x++)
            {
                if (_geometry[x][0] == "")
                {
                    _geometry[x][0] = row1[0];
                    _geometry[x][1] = row1[1];
                }
            }
        }
    }
    return _geometry;
}

string** _Reference::init_trigonometry()
{
    MYSQL* trigonometry;
    MYSQL_ROW row1;
    MYSQL_RES* result1;
    string query;
    string mysql_database = "intitialization";
    string mysql_username = _Settings::GetMySQLUsername();
    string mysql_password = _Settings::GetMySQLPassword();

    trigonometry = mysql_init(0);
    trigonometry = mysql_real_connect(trigonometry, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

    if (trigonometry)
    {
        query = "SELECT * FROM trigonometry;";
        mysql_query(trigonometry, query.c_str());
        result1 = mysql_store_result(trigonometry);

        while ((row1 = mysql_fetch_row(result1)))
        {
            // Get an empty space in the fallaceis variable
            for (int x = 0; x <= 10000; x++)
            {
                if (_trigonometry[x][0] == "")
                {
                    _trigonometry[x][0] = row1[0];
                    _trigonometry[x][1] = row1[1];
                }
            }
        }
    }
    return _trigonometry;
}

string** _Reference::init_combinatorics()
{
    MYSQL* combinatorics;
    MYSQL_ROW row1;
    MYSQL_RES* result1;
    string query;
    string mysql_database = "intitialization";
    string mysql_username = _Settings::GetMySQLUsername();
    string mysql_password = _Settings::GetMySQLPassword();

    combinatorics = mysql_init(0);
    combinatorics = mysql_real_connect(combinatorics, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

    if (combinatorics)
    {
        query = "SELECT * FROM formal_fallacies;";
        mysql_query(combinatorics, query.c_str());
        result1 = mysql_store_result(combinatorics);

        while ((row1 = mysql_fetch_row(result1)))
        {
            // Get an empty space in the fallaceis variable
            for (int x = 0; x <= 10000; x++)
            {
                if (_combinatorics[x][0] == "")
                {
                    _combinatorics[x][0] = row1[0];
                    _combinatorics[x][1] = row1[1];
                }
            }
        }
    }
    return _combinatorics;
}

string** _Reference::init_logic()
{
    MYSQL* logic;
    MYSQL_ROW row1;
    MYSQL_RES* result1;
    string query;
    string mysql_database = "intitialization";
    string mysql_username = _Settings::GetMySQLUsername();
    string mysql_password = _Settings::GetMySQLPassword();

    logic = mysql_init(0);
    logic = mysql_real_connect(logic, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

    if (logic)
    {
        query = "SELECT * FROM logic;";
        mysql_query(logic, query.c_str());
        result1 = mysql_store_result(logic);

        while ((row1 = mysql_fetch_row(result1)))
        {
            // Get an empty space in the fallaceis variable
            for (int x = 0; x <= 10000; x++)
            {
                if (_logic[x][0] == "")
                {
                    _logic[x][0] = row1[0];
                    _logic[x][1] = row1[1];
                }
            }
        }
    }
    return _logic;
}

string** _Reference::init_number_theory()
{
    MYSQL* number_theory;
    MYSQL_ROW row1;
    MYSQL_RES* result1;
    string query;
    string mysql_database = "intitialization";
    string mysql_username = _Settings::GetMySQLUsername();
    string mysql_password = _Settings::GetMySQLPassword();

    number_theory = mysql_init(0);
    number_theory = mysql_real_connect(number_theory, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

    if (number_theory)
    {
        query = "SELECT * FROM number_theory;";
        mysql_query(number_theory, query.c_str());
        result1 = mysql_store_result(number_theory);

        while ((row1 = mysql_fetch_row(result1)))
        {
            // Get an empty space in the fallaceis variable
            for (int x = 0; x <= 10000; x++)
            {
                if (_number_theory[x][0] == "")
                {
                    _number_theory[x][0] = row1[0];
                    _number_theory[x][1] = row1[1];
                }
            }
        }
    }
    return _number_theory;
}

string** _Reference::init_differential_equations()
{
    MYSQL* differential_equations;
    MYSQL_ROW row1;
    MYSQL_RES* result1;
    string query;
    string mysql_database = "intitialization";
    string mysql_username = _Settings::GetMySQLUsername();
    string mysql_password = _Settings::GetMySQLPassword();

    differential_equations = mysql_init(0);
    differential_equations = mysql_real_connect(differential_equations, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

    if (differential_equations)
    {
        query = "SELECT * FROM differential_equations;";
        mysql_query(differential_equations, query.c_str());
        result1 = mysql_store_result(differential_equations);

        while ((row1 = mysql_fetch_row(result1)))
        {
            // Get an empty space in the fallaceis variable
            for (int x = 0; x <= 10000; x++)
            {
                if (_differential_equations[x][0] == "")
                {
                    _differential_equations[x][0] = row1[0];
                    _differential_equations[x][1] = row1[1];
                }
            }
        }
    }
    return _differential_equations;
}

string** _Reference::init_probability_and_statistics()
{
    MYSQL* probability_and_statistic;
    MYSQL_ROW row1;
    MYSQL_RES* result1;
    string query;
    string mysql_database = "intitialization";
    string mysql_username = _Settings::GetMySQLUsername();
    string mysql_password = _Settings::GetMySQLPassword();

    probability_and_statistic = mysql_init(0);
    probability_and_statistic = mysql_real_connect(probability_and_statistic, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

    if (probability_and_statistic)
    {
        query = "SELECT * FROM probability_and_statistic;";
        mysql_query(probability_and_statistic, query.c_str());
        result1 = mysql_store_result(probability_and_statistic);

        while ((row1 = mysql_fetch_row(result1)))
        {
            // Get an empty space in the fallaceis variable
            for (int x = 0; x <= 10000; x++)
            {
                if (_probability_and_statistics[x][0] == "")
                {
                    _probability_and_statistics[x][0] = row1[0];
                    _probability_and_statistics[x][1] = row1[1];
                }
            }
        }
    }
    return _probability_and_statistics;
}

string** _Reference::init_game_theory()
{
    MYSQL* game_theory;
    MYSQL_ROW row1;
    MYSQL_RES* result1;
    string query;
    string mysql_database = "intitialization";
    string mysql_username = _Settings::GetMySQLUsername();
    string mysql_password = _Settings::GetMySQLPassword();

    game_theory = mysql_init(0);
    game_theory = mysql_real_connect(game_theory, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

    if (game_theory)
    {
        query = "SELECT * FROM game_theory;";
        mysql_query(game_theory, query.c_str());
        result1 = mysql_store_result(game_theory);

        while ((row1 = mysql_fetch_row(result1)))
        {
            // Get an empty space in the fallaceis variable
            for (int x = 0; x <= 10000; x++)
            {
                if (_game_theory[x][0] == "")
                {
                    _game_theory[x][0] = row1[0];
                    _game_theory[x][1] = row1[1];
                }
            }
        }
    }
    return _game_theory;
}

string** _Reference::init_cpp()
{
    MYSQL* cpp;
    MYSQL_ROW row1;
    MYSQL_RES* result1;
    string query;
    string mysql_database = "intitialization";
    string mysql_username = _Settings::GetMySQLUsername();
    string mysql_password = _Settings::GetMySQLPassword();

    cpp = mysql_init(0);
    cpp = mysql_real_connect(cpp, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

    if (cpp)
    {
        query = "SELECT * FROM cpp;";
        mysql_query(cpp, query.c_str());
        result1 = mysql_store_result(cpp);

        while ((row1 = mysql_fetch_row(result1)))
        {
            // Get an empty space in the fallaceis variable
            for (int x = 0; x <= 10000; x++)
            {
                if (_CPP_programming_terms[x][0] == "")
                {
                    _CPP_programming_terms[x][0] = row1[0];
                    _CPP_programming_terms[x][1] = row1[1];
                }
            }
        }
    }
    return _CPP_programming_terms;
}

string** _Reference::init_computer_software()
{
    MYSQL* computer_software;
    MYSQL_ROW row1;
    MYSQL_RES* result1;
    string query;
    string mysql_database = "intitialization";
    string mysql_username = _Settings::GetMySQLUsername();
    string mysql_password = _Settings::GetMySQLPassword();

    computer_software = mysql_init(0);
    computer_software = mysql_real_connect(computer_software, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

    if (computer_software)
    {
        query = "SELECT * FROM computer_software;";
        mysql_query(computer_software, query.c_str());
        result1 = mysql_store_result(computer_software);

        while ((row1 = mysql_fetch_row(result1)))
        {
            // Get an empty space in the fallaceis variable
            for (int x = 0; x <= 10000; x++)
            {
                if (_computerPrograms[x][0] == "")
                {
                    _computerPrograms[x][0] = row1[0];
                    _computerPrograms[x][1] = row1[1];
                }
            }
        }
    }
    return _computerPrograms;
}

string** _Reference::init_networking()
{
    MYSQL* networking;
    MYSQL_ROW row1;
    MYSQL_RES* result1;
    string query;
    string mysql_database = "intitialization";
    string mysql_username = _Settings::GetMySQLUsername();
    string mysql_password = _Settings::GetMySQLPassword();

    networking = mysql_init(0);
    networking = mysql_real_connect(networking, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

    if (networking)
    {
        query = "SELECT * FROM networking;";
        mysql_query(networking, query.c_str());
        result1 = mysql_store_result(networking);

        while ((row1 = mysql_fetch_row(result1)))
        {
            // Get an empty space in the fallaceis variable
            for (int x = 0; x <= 10000; x++)
            {
                if (_computer_networking[x][0] == "")
                {
                    _computer_networking[x][0] = row1[0];
                    _computer_networking[x][1] = row1[1];
                }
            }
        }
    }
    return _computer_networking;
}

string** _Reference::init_electrical_engineering()
{
    MYSQL* electrical_engineering;
    MYSQL_ROW row1;
    MYSQL_RES* result1;
    string query;
    string mysql_database = "intitialization";
    string mysql_username = _Settings::GetMySQLUsername();
    string mysql_password = _Settings::GetMySQLPassword();

    electrical_engineering = mysql_init(0);
    electrical_engineering = mysql_real_connect(electrical_engineering, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

    if (electrical_engineering)
    {
        query = "SELECT * FROM electrical_engineering;";
        mysql_query(electrical_engineering, query.c_str());
        result1 = mysql_store_result(electrical_engineering);

        while ((row1 = mysql_fetch_row(result1)))
        {
            // Get an empty space in the fallaceis variable
            for (int x = 0; x <= 10000; x++)
            {
                if (_electrical_engineering[x][0] == "")
                {
                    _electrical_engineering[x][0] = row1[0];
                    _electrical_engineering[x][1] = row1[1];
                }
            }
        }
    }
    return _electrical_engineering;
}

string** _Reference::init_server_2022()
{
    MYSQL* server_2022;
    MYSQL_ROW row1;
    MYSQL_RES* result1;
    string query;
    string mysql_database = "intitialization";
    string mysql_username = _Settings::GetMySQLUsername();
    string mysql_password = _Settings::GetMySQLPassword();

    server_2022 = mysql_init(0);
    server_2022 = mysql_real_connect(server_2022, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

    if (server_2022)
    {
        query = "SELECT * FROM server_2022;";
        mysql_query(server_2022, query.c_str());
        result1 = mysql_store_result(server_2022);

        while ((row1 = mysql_fetch_row(result1)))
        {
            // Get an empty space in the fallaceis variable
            for (int x = 0; x <= 10000; x++)
            {
                if (_server_2022[x][0] == "")
                {
                    _server_2022[x][0] = row1[0];
                    _server_2022[x][1] = row1[1];
                }
            }
        }
    }
    return _server_2022;
}
string** _Reference::init_windows11()
{
    MYSQL* windows11;
    MYSQL_ROW row1;
    MYSQL_RES* result1;
    string query;
    string mysql_database = "intitialization";
    string mysql_username = _Settings::GetMySQLUsername();
    string mysql_password = _Settings::GetMySQLPassword();

    windows11 = mysql_init(0);
    windows11 = mysql_real_connect(windows11, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

    if (windows11)
    {
        query = "SELECT * FROM windows11;";
        mysql_query(windows11, query.c_str());
        result1 = mysql_store_result(windows11);

        while ((row1 = mysql_fetch_row(result1)))
        {
            // Get an empty space in the fallaceis variable
            for (int x = 0; x <= 10000; x++)
            {
                if (_windows11[x][0] == "")
                {
                    _windows11[x][0] = row1[0];
                    _windows11[x][1] = row1[1];
                }
            }
        }
    }
    return _windows11;
}
string** _Reference::init_server_2019()
{
    MYSQL* server_2019;
    MYSQL_ROW row1;
    MYSQL_RES* result1;
    string query;
    string mysql_database = "intitialization";
    string mysql_username = _Settings::GetMySQLUsername();
    string mysql_password = _Settings::GetMySQLPassword();
    
    server_2019 = mysql_init(0);
    server_2019 = mysql_real_connect(server_2019, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

    if (server_2019)
    {
        query = "SELECT * FROM server_2019;";
        mysql_query(server_2019, query.c_str());
        result1 = mysql_store_result(server_2019);

        while ((row1 = mysql_fetch_row(result1)))
        {
            // Get an empty space in the fallaceis variable
            for (int x = 0; x <= 10000; x++)
            {
                if (_server_2019[x][0] == "")
                {
                    _server_2019[x][0] = row1[0];
                    _server_2019[x][1] = row1[1];
                }
            }
        }
    }
    return _server_2019;
}
string** _Reference::init_windows10()
{
    MYSQL* windows10;
    MYSQL_ROW row1;
    MYSQL_RES* result1;
    string query;
    string mysql_database = "intitialization";
    string mysql_username = _Settings::GetMySQLUsername();
    string mysql_password = _Settings::GetMySQLPassword();

    windows10 = mysql_init(0);
    windows10 = mysql_real_connect(windows10, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

    if (windows10)
    {
        query = "SELECT * FROM windows10;";
        mysql_query(windows10, query.c_str());
        result1 = mysql_store_result(windows10);

        while ((row1 = mysql_fetch_row(result1)))
        {
            // Get an empty space in the fallaceis variable
            for (int x = 0; x <= 10000; x++)
            {
                if (_windows10[x][0] == "")
                {
                    _windows10[x][0] = row1[0];
                    _windows10[x][1] = row1[1];
                }
            }
        }
    }
    return _windows10;
}
string** _Reference::init_server_2016()
{
    MYSQL* server_2016;
    MYSQL_ROW row1;
    MYSQL_RES* result1;
    string query;
    string mysql_database = "intitialization";
    string mysql_username = _Settings::GetMySQLUsername();
    string mysql_password = _Settings::GetMySQLPassword();

    server_2016 = mysql_init(0);
    server_2016 = mysql_real_connect(server_2016, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

    if (server_2016)
    {
        query = "SELECT * FROM server_2016;";
        mysql_query(server_2016, query.c_str());
        result1 = mysql_store_result(server_2016);

        while ((row1 = mysql_fetch_row(result1)))
        {
            // Get an empty space in the fallaceis variable
            for (int x = 0; x <= 10000; x++)
            {
                if (_server_2016[x][0] == "")
                {
                    _server_2016[x][0] = row1[0];
                    _server_2016[x][1] = row1[1];
                }
            }
        }
    }
    return _server_2016;
}
string** _Reference::init_windows7()
{
    MYSQL* windows7;
    MYSQL_ROW row1;
    MYSQL_RES* result1;
    string query;
    string mysql_database = "intitialization";
    string mysql_username = _Settings::GetMySQLUsername();
    string mysql_password = _Settings::GetMySQLPassword();

    windows7 = mysql_init(0);
    windows7 = mysql_real_connect(windows7, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

    if (windows7)
    {
        query = "SELECT * FROM windows7;";
        mysql_query(windows7, query.c_str());
        result1 = mysql_store_result(windows7);

        while ((row1 = mysql_fetch_row(result1)))
        {
            // Get an empty space in the fallaceis variable
            for (int x = 0; x <= 10000; x++)
            {
                if (_windows7[x][0] == "")
                {
                    _windows7[x][0] = row1[0];
                    _windows7[x][1] = row1[1];
                }
            }
        }
    }
    return _windows7;
}
string** _Reference::init_server_2012()
{
    MYSQL* server_2012;
    MYSQL_ROW row1;
    MYSQL_RES* result1;
    string query;
    string mysql_database = "intitialization";
    string mysql_username = _Settings::GetMySQLUsername();
    string mysql_password = _Settings::GetMySQLPassword();

    server_2012 = mysql_init(0);
    server_2012 = mysql_real_connect(server_2012, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

    if (server_2012)
    {
        query = "SELECT * FROM server_2012;";
        mysql_query(server_2012, query.c_str());
        result1 = mysql_store_result(server_2012);

        while ((row1 = mysql_fetch_row(result1)))
        {
            // Get an empty space in the fallaceis variable
            for (int x = 0; x <= 10000; x++)
            {
                if (_server_2012[x][0] == "")
                {
                    _server_2012[x][0] = row1[0];
                    _server_2012[x][1] = row1[1];
                }
            }
        }
    }
    return _server_2012;
}
string** _Reference::init_server_2008()
{
    MYSQL* server_2008;
    MYSQL_ROW row1;
    MYSQL_RES* result1;
    string query;
    string mysql_database = "intitialization";
    string mysql_username = _Settings::GetMySQLUsername();
    string mysql_password = _Settings::GetMySQLPassword();

    server_2008 = mysql_init(0);
    server_2008 = mysql_real_connect(server_2008, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

    if (server_2008)
    {
        query = "SELECT * FROM windows_server_2008;";
        mysql_query(server_2008, query.c_str());
        result1 = mysql_store_result(server_2008);

        while ((row1 = mysql_fetch_row(result1)))
        {
            // Get an empty space in the fallaceis variable
            for (int x = 0; x <= 10000; x++)
            {
                if (_server_2008[x][0] == "")
                {
                    _server_2008[x][0] = row1[0];
                    _server_2008[x][1] = row1[1];
                }
            }
        }
    }
    return _server_2008;
}

string** _Reference::init_windows_vista()
{
    MYSQL* windows_vista;
    MYSQL_ROW row1;
    MYSQL_RES* result1;
    string query;
    string mysql_database = "intitialization";
    string mysql_username = _Settings::GetMySQLUsername();
    string mysql_password = _Settings::GetMySQLPassword();

    windows_vista = mysql_init(0);
    windows_vista = mysql_real_connect(windows_vista, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

    if (windows_vista)
    {
        query = "SELECT * FROM windows_vista;";
        mysql_query(windows_vista, query.c_str());
        result1 = mysql_store_result(windows_vista);

        while ((row1 = mysql_fetch_row(result1)))
        {
            // Get an empty space in the fallaceis variable
            for (int x = 0; x <= sizeof(_windows_vista); x++)
            {
                if (_windows_vista[x][0] == "")
                {
                    _windows_vista[x][0] = row1[0];
                    _windows_vista[x][1] = row1[1];
                }
            }
        }
    }
    return _windows_vista;
}

string** _Reference::init_server_2003()
{
    MYSQL* server_2003;
    MYSQL_ROW row1;
    MYSQL_RES* result1;
    string query;
    string mysql_database = "intitialization";
    string mysql_username = _Settings::GetMySQLUsername();
    string mysql_password = _Settings::GetMySQLPassword();

    server_2003 = mysql_init(0);
    server_2003 = mysql_real_connect(server_2003, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

    if (server_2003)
    {
        query = "SELECT * FROM windows_server_2003;";
        mysql_query(server_2003, query.c_str());
        result1 = mysql_store_result(server_2003);

        while ((row1 = mysql_fetch_row(result1)))
        {
            // Get an empty space in the fallaceis variable
            for (int x = 0; x <= sizeof(_server_2003); x++)
            {
                if (_server_2003[x][0] == "")
                {
                    _server_2003[x][0] = row1[0];
                    _server_2003[x][1] = row1[1];
                }
            }
        }
    }
    return _server_2003;
}

string** _Reference::init_windows_xp()
{
    MYSQL* windows_xp;
    MYSQL_ROW row1;
    MYSQL_RES* result1;
    string query;
    string mysql_database = "intitialization";
    string mysql_username = _Settings::GetMySQLUsername();
    string mysql_password = _Settings::GetMySQLPassword();
    
    windows_xp = mysql_init(0);
    windows_xp = mysql_real_connect(windows_xp, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

    if (windows_xp)
    {
        query = "SELECT * FROM windows_xp;";
        mysql_query(windows_xp, query.c_str());
        result1 = mysql_store_result(windows_xp);

        while ((row1 = mysql_fetch_row(result1)))
        {
            // Get an empty space in the fallaceis variable
            for (int x = 0; x <= 10000; x++)
            {
                if (_windows_xp[x][0] == "")
                {
                    _windows_xp[x][0] = row1[0];
                    _windows_xp[x][1] = row1[1];
                }
            }
        }
    }
    return _windows_xp;
}

string** _Reference::init_windows_2000()
{
    MYSQL* windows_2000;
    MYSQL_ROW row1;
    MYSQL_RES* result1;
    string query;
    string mysql_database = "intitialization";
    string mysql_username = _Settings::GetMySQLUsername();
    string mysql_password = _Settings::GetMySQLPassword();
    
    windows_2000 = mysql_init(0);
    windows_2000 = mysql_real_connect(windows_2000, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

    if (windows_2000)
    {
        query = "SELECT * FROM windows_2000;";
        mysql_query(windows_2000, query.c_str());
        result1 = mysql_store_result(windows_2000);

        while ((row1 = mysql_fetch_row(result1)))
        {
            // Get an empty space in the fallaceis variable
            for (int x = 0; x <= 10000; x++)
            {
                if (_windows_2000[x][0] == "")
                {
                    _windows_2000[x][0] = row1[0];
                    _windows_2000[x][1] = row1[1];
                }
            }
        }
    }
    return _windows_2000;
}

string** _Reference::init_windows_98()
{
    MYSQL* windows_98;
    MYSQL_ROW row1;
    MYSQL_RES* result1;
    string query;
    string mysql_database = "intitialization";
    string mysql_username = _Settings::GetMySQLUsername();
    string mysql_password = _Settings::GetMySQLPassword();

    windows_98 = mysql_init(0);
    windows_98 = mysql_real_connect(windows_98, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

    if (windows_98)
    {
        query = "SELECT * FROM windows_98;";
        mysql_query(windows_98, query.c_str());
        result1 = mysql_store_result(windows_98);

        while ((row1 = mysql_fetch_row(result1)))
        {
            // Get an empty space in the fallaceis variable
            for (int x = 0; x <= 10000; x++)
            {
                if (_windows_98[x][0] == "")
                {
                    _windows_98[x][0] = row1[0];
                    _windows_98[x][1] = row1[1];
                }
            }
        }
    }
    return _windows_98;
}

string** _Reference::init_windows_95()
{
    MYSQL* windows_95;
    MYSQL_ROW row1;
    MYSQL_RES* result1;
    string query;
    string mysql_database = "intitialization";
    string mysql_username = _Settings::GetMySQLUsername();
    string mysql_password = _Settings::GetMySQLPassword();

    windows_95 = mysql_init(0);
    windows_95 = mysql_real_connect(windows_95, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

    if (windows_95)
    {
        query = "SELECT * FROM windows_95;";
        mysql_query(windows_95, query.c_str());
        result1 = mysql_store_result(windows_95);

        while ((row1 = mysql_fetch_row(result1)))
        {
            // Get an empty space in the fallaceis variable
            for (int x = 0; x <= 10000; x++)
            {
                if (_windows_95[x][0] == "")
                {
                    _windows_95[x][0] = row1[0];
                    _windows_95[x][1] = row1[1];
                }
            }
        }
    }
    return _windows_95;
}

string** _Reference::init_ms_dos()
{
    MYSQL* ms_dos;
    MYSQL_ROW row1;
    MYSQL_RES* result1;
    string query;
    string mysql_database = "intitialization";
    string mysql_username = _Settings::GetMySQLUsername();
    string mysql_password = _Settings::GetMySQLPassword();

    ms_dos = mysql_init(0);
    ms_dos = mysql_real_connect(ms_dos, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

    if (ms_dos)
    {
        query = "SELECT * FROM ms_dos;";
        mysql_query(ms_dos, query.c_str());
        result1 = mysql_store_result(ms_dos);

        while ((row1 = mysql_fetch_row(result1)))
        {
            // Get an empty space in the fallaceis variable
            for (int x = 0; x <= 10000; x++)
            {
                if (_ms_dos_commands[x][0] == "")
                {
                    _ms_dos_commands[x][0] = row1[0];
                    _ms_dos_commands[x][1] = row1[1];
                }
            }
        }
    }
    return _ms_dos_commands;
}

string** _Reference::init_powershell()
{
    MYSQL* powershell;
    MYSQL_ROW row1;
    MYSQL_RES* result1;
    string query;
    string mysql_database = "intitialization";
    string mysql_username = _Settings::GetMySQLUsername();
    string mysql_password = _Settings::GetMySQLPassword();

    powershell = mysql_init(0);
    powershell = mysql_real_connect(powershell, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

    if (powershell)
    {
        query = "SELECT * FROM powershell;";
        mysql_query(powershell, query.c_str());
        result1 = mysql_store_result(powershell);

        while ((row1 = mysql_fetch_row(result1)))
        {
            // Get an empty space in the fallaceis variable
            for (int x = 0; x <= 10000; x++)
            {
                if (_powershell[x][0] == "")
                {
                    _powershell[x][0] = row1[0];
                    _powershell[x][1] = row1[1];
                }
            }
        }
    }
    return _powershell;
}

string** _Reference::init_bash()
{
    MYSQL* bash;
    MYSQL_ROW row1;
    MYSQL_RES* result1;
    string query;
    string mysql_database = "intitialization";
    string mysql_username = _Settings::GetMySQLUsername();
    string mysql_password = _Settings::GetMySQLPassword();
    
    bash = mysql_init(0);
    bash = mysql_real_connect(bash, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

    if (bash)
    {
        query = "SELECT * FROM bash;";
        mysql_query(bash, query.c_str());
        result1 = mysql_store_result(bash);

        while ((row1 = mysql_fetch_row(result1)))
        {
            // Get an empty space in the fallaceis variable
            for (int x = 0; x <= 10000; x++)
            {
                if (_bash_commands[x][0] == "")
                {
                    _bash_commands[x][0] = row1[0];
                    _bash_commands[x][1] = row1[1];
                }
            }
        }
    }
    return _bash_commands;
}

string** _Reference::init_ubuntu()
{
    MYSQL* ubuntu;
    MYSQL_ROW row1;
    MYSQL_RES* result1;
    string query;
    string mysql_database = "intitialization";
    string mysql_username = _Settings::GetMySQLUsername();
    string mysql_password = _Settings::GetMySQLPassword();

    ubuntu = mysql_init(0);
    ubuntu = mysql_real_connect(ubuntu, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

    if (ubuntu)
    {
        query = "SELECT * FROM ubuntu;";
        mysql_query(ubuntu, query.c_str());
        result1 = mysql_store_result(ubuntu);

        while ((row1 = mysql_fetch_row(result1)))
        {
            // Get an empty space in the fallaceis variable
            for (int x = 0; x <= 10000; x++)
            {
                if (_ubuntu[x][0] == "")
                {
                    _ubuntu[x][0] = row1[0];
                    _ubuntu[x][1] = row1[1];
                }
            }
        }
    }
    return _ubuntu;
}

string** _Reference::init_yellow_dog()
{
    MYSQL* yellow_dog;
    MYSQL_ROW row1;
    MYSQL_RES* result1;
    string query;
    string mysql_database = "intitialization";
    string mysql_username = _Settings::GetMySQLUsername();
    string mysql_password = _Settings::GetMySQLPassword();
    
    yellow_dog = mysql_init(0);
    yellow_dog = mysql_real_connect(yellow_dog, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

    if (yellow_dog)
    {
        query = "SELECT * FROM yellow_dog;";
        mysql_query(yellow_dog, query.c_str());
        result1 = mysql_store_result(yellow_dog);

        while ((row1 = mysql_fetch_row(result1)))
        {
            // Get an empty space in the fallaceis variable
            for (int x = 0; x <= 10000; x++)
            {
                if (_yellow_dog[x][0] == "")
                {
                    _yellow_dog[x][0] = row1[0];
                    _yellow_dog[x][1] = row1[1];
                }
            }
        }
    }
    return _yellow_dog;
}

string** _Reference::init_linux_mint()
{
    MYSQL* linux_mint;
    MYSQL_ROW row1;
    MYSQL_RES* result1;
    string query;
    string mysql_database = "intitialization";
    string mysql_username = _Settings::GetMySQLUsername();
    string mysql_password = _Settings::GetMySQLPassword();
    
    linux_mint = mysql_init(0);
    linux_mint = mysql_real_connect(linux_mint, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

    if (linux_mint)
    {
        query = "SELECT * FROM linux_mint;";
        mysql_query(linux_mint, query.c_str());
        result1 = mysql_store_result(linux_mint);

        while ((row1 = mysql_fetch_row(result1)))
        {
            // Get an empty space in the fallaceis variable
            for (int x = 0; x <= 10000; x++)
            {
                if (_linux_mint[x][0] == "")
                {
                    _linux_mint[x][0] = row1[0];
                    _linux_mint[x][1] = row1[1];
                }
            }
        }
    }
    return _linux_mint;
}

string** _Reference::init_computer_science()
{
    MYSQL* computer_science;
    MYSQL_ROW row1;
    MYSQL_RES* result1;
    string query;
    string mysql_database = "intitialization";
    string mysql_username = _Settings::GetMySQLUsername();
    string mysql_password = _Settings::GetMySQLPassword();

    computer_science = mysql_init(0);
    computer_science = mysql_real_connect(computer_science, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

    if (computer_science)
    {
        query = "SELECT * FROM computer_science;";
        mysql_query(computer_science, query.c_str());
        result1 = mysql_store_result(computer_science);

        while (row1 = mysql_fetch_row(result1))
        {
            // Get an empty space in the fallaceis variable
            for (int x = 0; x <= 10000; x++)
            {
                if (_computer_science[x][0] == "")
                {
                    _computer_science[x][0] = row1[0];
                    _computer_science[x][1] = row1[1];
                }
            }
        }
    }
    return _computer_science;
}

string** _Reference::init_formal_fallacies()
{
    MYSQL* formal_fallacies;
    MYSQL_ROW row1;
    MYSQL_RES* result1;
    string query;
    string mysql_database = "intitialization";
    string mysql_username = _Settings::GetMySQLUsername();
    string mysql_password = _Settings::GetMySQLPassword();
    
    formal_fallacies = mysql_init(0);
    formal_fallacies = mysql_real_connect(formal_fallacies, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

    if (formal_fallacies)
    {
        query = "SELECT * FROM formal_fallacies;";
        mysql_query(formal_fallacies, query.c_str());
        result1 = mysql_store_result(formal_fallacies);

        while ((row1 = mysql_fetch_row(result1)))
        {
            // Get an empty space in the fallaceis variable
            for (int x = 0; x <= 10000; x++)
            {
                if (_formal_fallacies[x][0] == "")
                {
                    _formal_fallacies[x][0] = row1[0];
                    _formal_fallacies[x][1] = row1[1];
                }
            }
        }
    }
    return _formal_fallacies;
}

string** _Reference::init_informal_fallacies()
{
    MYSQL* informal_fallacies;
    MYSQL_ROW row1;
    MYSQL_RES* result1;
    string query;
    string mysql_database = "intitialization";
    string mysql_username = _Settings::GetMySQLUsername();
    string mysql_password = _Settings::GetMySQLPassword();

    informal_fallacies = mysql_init(0);
    informal_fallacies = mysql_real_connect(informal_fallacies, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

    if (informal_fallacies)
    {
        query = "SELECT * FROM informal_fallacies;";
        mysql_query(informal_fallacies, query.c_str());
        result1 = mysql_store_result(informal_fallacies);

        while ((row1 = mysql_fetch_row(result1)))
        {
            // Get an empty space in the fallaceis variable
            for (int x = 0; x <= 10000; x++)
            {
                if (_informal_fallacies[x][0] == "")
                {
                    _informal_fallacies[x][0] = row1[0];
                    _informal_fallacies[x][1] = row1[1];
                }
            }
        }
    }
    return _informal_fallacies;
}

string** _Reference::init_science_articles()
{
    MYSQL* science_article;
    MYSQL_ROW row1;
    MYSQL_RES* result1;
    string query;
    string mysql_database = "intitialization";
    string mysql_username = _Settings::GetMySQLUsername();
    string mysql_password = _Settings::GetMySQLPassword();
    
    science_article = mysql_init(0);
    science_article = mysql_real_connect(science_article, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

    if (science_article)
    {
        query = "SELECT * FROM science_article;";
        mysql_query(science_article, query.c_str());
        result1 = mysql_store_result(science_article);

        while ((row1 = mysql_fetch_row(result1)))
        {
            // Get an empty space in the fallaceis variable
            for (int x = 0; x <= 10000; x++)
            {
                if (_science_articles[x][0] == "")
                {
                    _science_articles[x][0] = row1[0];
                    _science_articles[x][1] = row1[1];
                }
            }
        }
    }
    return _science_articles;
}

string** _Reference::init_desktop_support()
{
    MYSQL* desktop_support;
    MYSQL_ROW row1;
    MYSQL_RES* result1;
    string query;
    string mysql_database = "intitialization";
    string mysql_username = _Settings::GetMySQLUsername();
    string mysql_password = _Settings::GetMySQLPassword();

    desktop_support = mysql_init(0);
    desktop_support = mysql_real_connect(desktop_support, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

    if (desktop_support)
    {
        query = "SELECT * FROM desktop_support;";
        mysql_query(desktop_support, query.c_str());
        result1 = mysql_store_result(desktop_support);

        while ((row1 = mysql_fetch_row(result1)))
        {
            // Get an empty space in the fallaceis variable
            for (int x = 0; x <= 10000; x++)
            {
                if (_desktop_support[x][0] == "")
                {
                    _desktop_support[x][0] = row1[0];
                    _desktop_support[x][1] = row1[1];
                }
            }
        }
    }
    return _desktop_support;
}


string** _Reference::init_osi_model()
{
    MYSQL* osi_model;
    MYSQL_ROW row1;
    MYSQL_RES* result1;
    string query;
    string mysql_database = "intitialization";
    string mysql_username = _Settings::GetMySQLUsername();
    string mysql_password = _Settings::GetMySQLPassword();

    osi_model = mysql_init(0);
    osi_model = mysql_real_connect(osi_model, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

    if (osi_model)
    {
        query = "SELECT * FROM osi_model;";
        mysql_query(osi_model, query.c_str());
        result1 = mysql_store_result(osi_model);

        while ((row1 = mysql_fetch_row(result1)))
        {
            // Get an empty space in the fallaceis variable
            for (int x = 0; x <= 10000; x++)
            {
                if (_osi_model[x][0] == "")
                {
                    _osi_model[x][0] = row1[0];
                    _osi_model[x][1] = row1[1];
                }
            }
        }
    }
    return _osi_model;
}