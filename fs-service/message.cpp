#include <iostream>
#include <vector>
#include "./message.h"
#include "./baseModel.h"

using namespace std;


vector<string> Message::MESSAGE_FIELDS = {"id", "chatId", "text"};
string Message::execute(int method, vector<string> fields)
{
    return BaseModel::execute("messages", method, fields);
};

