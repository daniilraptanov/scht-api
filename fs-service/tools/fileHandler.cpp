#include <iostream>
#include <fstream>
#include <vector>
#include "fileHandler.h"

using namespace std;

class FileHandler
{
    protected:
        static string get(string tableName, vector<vector<string>> fields)
        {

        };

        static string post(string tableName, vector<vector<string>> fields)
        {
            ofstream file(tableName.append(".txt"));
            file << "test-data";
            file.close();
        };

        FileHandler() {};
};
