#include <iostream>
#include <vector>
#include "message.h"
#include "baseModel.h"

using namespace std;

class Message : protected BaseModel
{
   public:
        vector<string> Message::MESSAGE_FIELDS = {"id", "chatId", "text"};
        static string execute(int method, vector<vector<string>> fields)
        {
            return BaseModel::execute("messages", method, fields);
        };

    private:
        Message();
};
