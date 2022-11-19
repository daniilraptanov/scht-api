#include <iostream>
#include "user.h"

using namespace std;

class User
{
    public:
        User(string id, string chatName="")
        {
            id = id;
            chatName = chatName;
        };

        string id;
        string chatName;
};

