#pragma once

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

using namespace std;
using namespace filesystem;

class _DatabaseFunctions
{
public:
    static void FindObject(string object);
    static void StoreObject(string object);
    static string GetMusicArtist(string search);
    static string GetMusicAlbum(string artist, string song);
    static string GetMusicSong(string artist, string album);
    static void MusicLyricsSearch(string search, string& artist, string& album, string& song);
    static void savePassword(string hostname, string password);
    static string* getPasswords();
    static string getPassword(string domain);
    static void getPasswordsScreenshot(string password);
    static void HomeDatabaseSearch();
    static void MemorySearch(string text);
    static void MemorySearch(string text, string prev_date, string prev_date2);
    //static static void MemorySearch(static string concept);
    //static static void MemorySearch(static string concept, static string prev_date, static string prev_date2);
    static void MemoryAnalysis();
    static void MemoryManagement();
    static bool MovieExists(string title);
    static void MoviesSorter();
    static void QueryMySQLDatabaseFederal(string title, string chapter, string sub_chapter, string section, string us_code_text);
    static void CreateMySQLTableFederal(string title, string chapter, string sub_chapter, string section, string us_code_text);
    static string** SearchDictionary(string word);
    static string** SearchDictionary(string word, string word_type);
    static string** SearchDictionary(string word, string word_type, string definition);
    static string** SearchDictionaryDefinition(string definition);
    static string** SearchDictionaryWordType(string word_type);
    static string* SearchDictionaryVector(string word);
    static string* SearchDictionaryVector(string word, string word_type);
    static string* SearchDictionaryVector(string word, string word_type, string definition);
    static string* SearchDictionaryVectorDefinition(string definition);
    static string** SearchDictionaryVectorWordType(string word_type);
    static string** DictionarySearch(string word);
    static string** DictionarySearchVector(string word);
    static string BibleVerseSearch(string book, int chapter);
    static int BibleChapterPageNumber(string book, int chapter);
    static string BibleVerseSearch(string book, int chapter, int verse);
    static int BibleVersePageNumber(string book);
    //static int BibleVersePageNumber(static string book, static int chapter);
    static int BibleVersePageNumber(string book, int chapter, int verse);
    static string** BookDatabaseSearch(string title);
    static string** BookDatabaseSearch(string title, string author);
    static string** BookDatabaseSearchAuthor(string author);
    static string** BookDatabaseSearchConcept(string search);
    static void BookDatabaseSearch(string search, string* bookTitle, string* PageNumber, string* author);
    static string** SearchWikipedia(string title);
    static string** WiktionarySearch(string word);
    static void PrintWikipedia(string title);
    static string** SearchStackExchangeStrings();
    static string** WikiHowSearch(string article);
    static void DropDatabase(string database_input);
    static void CreateDatabase(string database_input);
    static void DropTable(string database_input, string table_input);
    static void CreateTable(string database_input, string table_input, string* rows);

    //static string* GetAllEdWords()

    // Class for searching using CUDA
    class CUDA
    {
    public:
        //static void MusicLyricsSearch(string search, string& artist, string& album, string& song);
        //static string** DictionarySearch(string word);
        //static string** DictionarySearchVector(string word);
        //static string** SearchDictionary(string word);
        //static string** SearchDictionary(string word, string word_type);
        //static string** SearchDictionary(string word, string word_type, string definition);
        //static string** SearchDictionaryDefinition(string definition);
        //static string** SearchDictionaryWordType(string word_type);
        //static string* SearchDictionaryVector(string word);
        //static string* SearchDictionaryVector(string word, string word_type);
        //static string* SearchDictionaryVector(string word, string word_type, string definition);
        //static string* SearchDictionaryVectorDefinition(string definition);
        //static string** SearchDictionaryVectorWordType(string word_type);
        //static string** BookDatabaseSearch(string title);
        //static string** BookDatabaseSearch(string title, string author);
        //static string** BookDatabaseSearchAuthor(string author);
        //static string** BookDatabaseSearchConcept(string search);
        //static string** SearchStackExchangeStrings();
    };
};