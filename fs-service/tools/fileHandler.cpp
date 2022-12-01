#include <iostream>
#include <fstream>
#include <vector>
#include "fileHandler.h"

using namespace std;


string FileHandler::get(string tableName, vector<vector<string>> fields)
{

};

string FileHandler::post(string tableName, vector<vector<string>> fields)
{
    ofstream file(tableName.append(".txt"));
    file << "test-data";
    file.close();

    return "batman";
};
