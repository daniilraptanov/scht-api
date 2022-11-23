#pragma once
#include <iostream>
#include<vector>

using namespace std;

class BaseModel
{
    protected:
        static string execute(string tableName, int method, vector<vector<string>> fields);

    private:
        BaseModel();
};
