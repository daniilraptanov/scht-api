#pragma once
#include <iostream>
#include <string>

using namespace std;

class User
{
    public:
        User(string id, string chatName);

        string id;
        string chatName;
};
