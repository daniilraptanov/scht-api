#include <iostream>
#include <vector>
#include "./user.h"
#include "./baseModel.h"

using namespace std;


vector<string> User::USER_FIELDS = {"id", "chatName"};
string User::execute(int method, vector<vector<string>> fields)
{
    return BaseModel::execute("users", method, fields);
};

