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
    static string** SearchStackExchange();
    static string** WikiHowSearch(string article);
    static void DropDatabase(string database_input);
    static void CreateDatabase(string database_input);
    static void DropTable(string database_input, string table_input);
    static void CreateTable(string database_input, string table_input, string* rows);
    static string QueryWordVector(string word, string word_type);

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

class _MySQL
{
public:
    static bool CheckArticleExists(string article);
    static string* QueryDatabaseWordTypes(string word);
    static string** QueryDatabaseDefinitions(string word, string* wordTypes);
    static void CreateTableWords(string mysql_origin_database, string mysql_table);
    static void CreateTableSentences(string mysql_origin_database, string mysql_table);
    static void CheckArticlePOS(string article);
    static void QueryDatabaseWikiWords(string mysql_database, string mysql_table, string paragraph_number, string sentence_number, string word, string word_type, string definition, string special_type, string pronoun_anaphora, bool object_of_preposition, bool direct_object, bool indirect_object, string vector);
    static void QueryDatabaseWikiSentences(string mysql_database, string mysql_table, string paragraph_number, string sentence_number, string sentence, string* subject, string verb, string* predicate_sentence, string direct_object, string indirect_object, string* prepositional_phrase, string object_of_preposition, string* noun_phrase, string* relative_clause, string* infinitive_phrase, string* adjective_phrase, string* adverbial_phrase, string* participle_phrase, string* absolute_phrase, string* independent_clause, string* dependent_clause, string* noun_clause, bool simple_sentence, bool compound_sentence, bool complex_sentence, bool compound_complex_sentence, bool declarative_sentence, bool interrogative_sentence, bool negative_interrogative_sentence, bool imperative_sentence, bool conditional_sentence, bool regular_sentence, bool irregular_sentence, bool single_word_sentence, bool instructions, bool yes_or_no_sentence, bool literal_question, bool it_depends, bool statement_of_uncertainty, string sentence_vector, string averaged_vector);
    static string QueryWordVector(string word, string word_type);
};