#pragma once
#include <iostream>
#include "user.h"

using namespace std;

class UserService
{
    public:
        UserService();

        virtual User get_user_by_email(string email);
        virtual bool create_or_update_user(User user);
        virtual bool remove_user_by_id(string id);
};

