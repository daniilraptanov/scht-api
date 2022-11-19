#pragma once
#include <iostream>
#include <string>
#include "user.h"

using namespace std;

class UserService
{
    public:
        UserService();

        virtual User getUserById(string id);
        virtual bool createOrUpdateUser(User user);
};

