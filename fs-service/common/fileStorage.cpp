#include <iostream>
#include <vector>
#include "../domain/fileStorage.h"
#include "../domain/queryParser.h"
#include "../domain/user.h"
#include "../domain/chat.h"
#include "../domain/message.h"

using namespace std;

FileStorage::FileStorage(vector<string> params) : QueryParser(params)
{
    params = params;
}

string FileStorage::execute()
{
    int method = QueryParser::getMethod();
    int model = QueryParser::getModel();

    if (model == FileStorage::User)
    {
        return User::execute(method, QueryParser::getFields(User::USER_FIELDS));
    }

    if (model == FileStorage::Chat)
    {
        return Chat::execute(method, QueryParser::getFields(Chat::CHAT_FIELDS));
    }

    if (model == FileStorage::Message)
    {
        return Message::execute(method, QueryParser::getFields(Message::MESSAGE_FIELDS));
    }
};
