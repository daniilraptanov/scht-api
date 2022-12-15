#include <iostream>
#include <vector>
#include "../domain/chat.h"
#include "../domain/baseModel.h"

using namespace std;

vector<string> Chat::CHAT_FIELDS = {"id", "userA", "userB"};

string Chat::execute(int method, vector<vector<string>> fields)
{
    return BaseModel::execute("chats", method, fields);
};