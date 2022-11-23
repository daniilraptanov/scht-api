#include <iostream>
#include <vector>
#include "user.h"
#include "baseModel.h"

using namespace std;

class User : protected BaseModel
{
   public:
        vector<string> User::USER_FIELDS = {"id", "chatName"};
        static string execute(int method, vector<vector<string>> fields)
        {
            return BaseModel::execute("users", method, fields);
        };

    private:
        User();
};
