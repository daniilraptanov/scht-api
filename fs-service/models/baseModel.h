#pragma once
#include <iostream>
#include <vector>
#include "../tools/fileHandler.h"

using namespace std;

class BaseModel : private FileHandler
{
    private:
        static int BaseModel::Get;
        static int BaseModel::Post;

    protected:
        BaseModel() : FileHandler() {};
        static string execute(string tableName, int method, vector<vector<string>> fields);
};
