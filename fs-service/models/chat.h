#pragma once
#include <iostream>
#include<vector>
#include "../models/baseModel.h"

using namespace std;

class Chat : protected BaseModel
{
    public:
        static vector<string> CHAT_FIELDS;
        static string execute(int method, vector<vector<string>> fields);

    private:
        Chat() {};
};
