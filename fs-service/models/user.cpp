#include <iostream>
#include "user.h"

using namespace std;

class User
{
    public:
        User(string id, string last_entry, string email, string login, string password);

        string id;
        string last_entry;
        string email;
        string login;
        string password;
};

