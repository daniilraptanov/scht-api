#include <iostream>
#include <vector>
#include "fileStorage.h"
#include "queryParser.h"
#include "user.h"

using namespace std;

class FileStorage : public QueryParser
{

    private:
        vector<string> params;
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

            if (model == 1)
            {
                result = User::execute(QueryParser::getFields(User::USER_FIELDS));
            }

            // if (model == 2)
            // {
            //     result = Chat::execute(QueryParser::getFields(Chat::CHAT_FIELDS));
            // }

            // if (model == 3)
            // {
            //     result = Message::execute(QueryParser::getFields(Message::MESSAGE_FIELDS));
            // }

            // 3) select service method -> this.execute by parser result
            // 4) execute method with model fields -> /services
            // 5) convert to string array for Node js app -> /tools/queryParser

            return result;
        };
};
