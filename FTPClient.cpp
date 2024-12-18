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
#include "FTPClient.hpp"
#include "Settings.hpp"
#include "Utilities.hpp"

using namespace std;

void _FTP::FTPClient(string directory, string file)
{
    CURL* curl;
    CURLcode res;
    FILE* uploadfile;
    string ftp_credentials = ftp_username.c_str();
    ftp_credentials += ':';
    ftp_credentials += ftp_password.c_str();

    curl_global_init(CURL_GLOBAL_ALL);
    curl = curl_easy_init();

    if (curl)
    {
        // Open the file to upload
        uploadfile = fopen(file.c_str(), "rb");

        // Set the URL, including protocol, user, password, and file path
        curl_easy_setopt(curl, CURLOPT_URL, ftp_hostname);

        // Set user and password for FTP authentication
        curl_easy_setopt(curl, CURLOPT_USERPWD, ftp_credentials);

        // Specify the callback function to read data to upload
        curl_easy_setopt(curl, CURLOPT_READFUNCTION, _FTP::read_callback);

        // Provide the file pointer as input to the callback function
        curl_easy_setopt(curl, CURLOPT_READDATA, uploadfile);

        // Enable uploading
        curl_easy_setopt(curl, CURLOPT_UPLOAD, 1L);

        // Perform the file upload
        res = curl_easy_perform(curl);

        // Check for errors
        if (res != CURLE_OK)
        {
            std::cerr << "curl_easy_perform() failed: " << curl_easy_strerror(res) << std::endl;
        }

        // Always cleanup
        fclose(uploadfile);
        curl_easy_cleanup(curl);
    }
    curl_global_cleanup();
}

size_t _FTP::read_callback(void* ptr, size_t size, size_t nmemb, FILE* stream)
{
    size_t retcode = fread(ptr, size, nmemb, stream);
    return retcode;
}
