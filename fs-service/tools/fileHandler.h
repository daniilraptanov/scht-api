#pragma once
#include <iostream>
#include<vector>

using namespace std;

class FileHandler
{
    protected:
        static string get(string tableName, vector<vector<string>> fields);
        static string post(string tableName, vector<vector<string>> fields);

        FileHandler() {};
};
