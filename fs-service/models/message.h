#pragma once
#include <iostream>
#include<vector>
#include "baseModel.h"

using namespace std;

class Message : protected BaseModel
{
    public:
        static vector<string> MESSAGE_FIELDS;
        static string execute(int method, vector<vector<string>> fields);

    private:
        Message();
};
