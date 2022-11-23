#include <iostream>
#include <vector>
#include "baseModel.h"

using namespace std;

class BaseModel : private FileHandler // add to header
{
   protected:
        static string execute(string tableName, int method, vector<vector<string>> fields)
        {
            if (method == 1) // replace this magic numbers
            {
                FileHandler::get(tableName, fields);
            }

            if (method == 2)
            {
                FileHandler::post(tableName, fields);
            }
        };

    private:
        BaseModel();
};
