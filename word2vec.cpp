/*
    Copyright(c) 2021 Tyler Crockett | Macdaddy4sure.com

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

/**
 * @file
 * @brief
 * @author Max Fomichev
 * @date 18.03.2017
 * @copyright Apache License v.2 (http://www.apache.org/licenses/LICENSE-2.0)
*/

#include "AugmentedIntelligence.h"

using namespace std;
using namespace w2v;

void Word2VecSum(string operator1, string operator2)
{
    // load pre-trained model
    unique_ptr<w2vModel_t> w2vModel;

    try
    {
        w2vModel.reset(new w2vModel_t());
        if (!w2vModel->load(argv[1])) // Select model here
        {
            throw runtime_error(w2vModel->errMsg());
        }
    }
    catch (const exception& _e)
    {
        cerr << _e.what() << endl;
        return 2;
    }
    catch (...)
    {
        cerr << "unknown error" << endl;
        return 2;
    }

    word2vec_t operator1_vec(w2vModel, operator1.c_str());
    word2vec_t operator2_vec(w2vModel, operator2.c_Str());

    vector_t result = operator1_vec + operator2_vec // result vector

    // get nearest vectors and their words
    vector<pair<string, float>> nearest;
    w2vModel->nearest(result, nearest, 10);

    // output nearest words and distances from the result vector
    for (auto const& i : nearest)
    {
        // skip source words from the set
        if ((i.first == "king") || (i.first == "man") || (i.first == "woman"))
        {
            continue;
        }
        // output word and its distance from the result vector
        cout << i.first << ": " << i.second << endl;
    }
}