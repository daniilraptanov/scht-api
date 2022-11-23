#include <iostream>
#include <vector>
#include "fileStorage.h"
#include "queryParser.h"
#include "user.h"
#include "chat.h"
#include "message.h"

using namespace std;

class FileStorage : protected QueryParser
{

    private:
        vector<string> params;

        int FileStorage::User = 1;
        int FileStorage::Chat = 2;
        int FileStorage::Message = 3;
    public:
        FileStorage(vector<string> params) : QueryParser(params)
        {
            params = params;
        }

        string execute()
        {
            string result;

            int method = QueryParser::getMethod();
            int model = QueryParser::getModel();

            if (model == FileStorage::User)
            {
                result = User::execute(method, QueryParser::getFields(User::USER_FIELDS));
            }

            if (model == FileStorage::Chat)
            {
                result = Chat::execute(method, QueryParser::getFields(Chat::CHAT_FIELDS));
            }

            if (model == FileStorage::Message)
            {
                result = Message::execute(method, QueryParser::getFields(Message::MESSAGE_FIELDS));
            }

            // 4) execute method with model fields -> /services
            // 5) convert to string array for Node js app -> /tools/queryParser

            return result;
        };
};
