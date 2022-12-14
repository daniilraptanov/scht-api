#include <iostream>
#include <vector>
#include "./chat.h"
#include "./baseModel.h"

using namespace std;

vector<string> Chat::CHAT_FIELDS = {"id", "userA", "userB"};

string Chat::execute(int method, vector<string> fields)
{
    return BaseModel::execute("chats", method, fields);
};