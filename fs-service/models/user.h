#pragma once
#include <iostream>
#include<vector>

using namespace std;

class User
{
    public:
        static vector<string> USER_FIELDS;
        static string execute(vector<vector<string>> fields);

    private:
        User();
};
