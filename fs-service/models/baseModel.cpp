#include <iostream>
#include <vector>
#include "baseModel.h"

using namespace std;

class BaseModel : private FileHandler // add to header
{
    private:
        BaseModel();

        int BaseModel::Get = 1;
        int BaseModel::Post = 2;

    protected:
        static string execute(string tableName, int method, vector<vector<string>> fields)
        {
            if (method == BaseModel::Get)
            {
                return FileHandler::get(tableName, fields);
            }

            if (method == BaseModel::Post)
            {
                return FileHandler::post(tableName, fields);
            }
        };
};
