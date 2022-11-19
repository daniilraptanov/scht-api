#pragma once
#include <iostream>

using namespace std;

class User
{
    public:
        User(string id, string chatName="");

        string id;
        string chatName;
};
