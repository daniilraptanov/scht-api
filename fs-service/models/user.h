#pragma once
#include <iostream>
#include <vector>
#include "../models/baseModel.h"

using namespace std;

class User : protected BaseModel
{
    public:
        static vector<string> USER_FIELDS;
        static string execute(int method, vector<vector<string>> fields);

    private:
        User();
};
