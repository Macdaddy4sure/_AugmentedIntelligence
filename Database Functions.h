#pragma once

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

class _DatabaseFunctions
{
public:
    static void FindObject(string object);
    static void StoreObject(string object);
    static void BookDatabaseSearch(string search, string* bookTitle, string* PageNumber, string* author);
    static void BookReadingSync(string search);
    static string GetMusicArtist(string search);
    static string GetMusicAlbum(string artist, string song);
    static string GetMusicSong(string artist, string album);
    static void MusicLyricsSearch(string search, string& artist, string& album, string& song);
    static string BibleVerseSearch(string book, int chapter, int verse);
    static int BibleVersePageNumber(string book);
    //static int BibleVersePageNumber(static string book, static int chapter);
    static int BibleVersePageNumber(string book, int chapter, int verse);
    static void SearchWikipedia(string title, string mode);
    static void HomeDatabaseSearch();
    static void MemorySearch(string text);
    static void MemorySearch(string text, string prev_date, string prev_date2);
    //static static void MemorySearch(static string concept);
    //static static void MemorySearch(static string concept, static string prev_date, static string prev_date2);
    static void MemoryAnalysis();
    static void MemoryManagement();
    static string BibleVerseSearch(string book, int chapter);
    static int BibleChapterPageNumber(string book, int chapter);
    static string** DictionarySearch(string word);
    static string** DictionarySearchVector(string word);
    static bool MovieExists(string title);
    static void MoviesSorter();
    //static static void cURLsFTPUpload();
};