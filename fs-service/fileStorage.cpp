#include <iostream>
#include <vector>
#include "./fileStorage.h"
#include "./queryParser.h"
#include "./user.h"
#include "./chat.h"
#include "./message.h"

using namespace std;

FileStorage::FileStorage(vector<string> params) : QueryParser(params)
{
    FileStorage::params = params;
}


string FileStorage::execute()
{
    int method = getMethod();
    int model = getModel();


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

    return "";
};
