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
#include "Citations.hpp"

using namespace std;

string _Citations::WikiMediaCitation(string wiki_name, string article_name)
{
    string temp;

    if (wiki_name == "wikipedia")
    {
        temp = "Source: Wikipedia Title: ";
        temp += article_name;
        return temp;
    }
    if (wiki_name == "wikisimple")
    {
        temp = "Source: Wikisimple Title: ";
        temp += article_name;
        return temp;
    }
    if (wiki_name == "wikidata")
    {
        temp = "Source: Wikidata Title: ";
        temp += article_name;
        return temp;
    }
    if (wiki_name == "wikisource")
    {
        temp = "Source: Wikisource Title: ";
        temp += article_name;
        return temp;
    }
    if (wiki_name == "wikiquote")
    {
        temp = "Source: Wikiquote Title: ";
        temp += article_name;
        return temp;
    }
}