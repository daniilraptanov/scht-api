#include <iostream>
#include <vector>
#include "chat.h"
#include "baseModel.h"

using namespace std;

class Chat : protected BaseModel
{
   public:
        vector<string> Chat::CHAT_FIELDS = {"id", "userA", "userB"};
        static string execute(int method, vector<vector<string>> fields)
        {
            return BaseModel::execute("chats", method, fields);
        };

    private:
        Chat();
};
