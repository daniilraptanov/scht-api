#include <iostream>
#include <vector>
#include "../domain/user.h"
#include "../domain/baseModel.h"

using namespace std;


vector<string> User::USER_FIELDS = {"id", "chatName"};
string User::execute(int method, vector<vector<string>> fields)
{
    return BaseModel::execute("users", method, fields);
};

