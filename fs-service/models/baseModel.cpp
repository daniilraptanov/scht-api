#include <iostream>
#include <vector>
#include "baseModel.h"
#include "fileHandler.h"

using namespace std;


class BaseModel : private FileHandler
{
    private:
        static int BaseModel::Get;
        static int BaseModel::Post;

    protected:
        BaseModel() : FileHandler() {
            BaseModel::Get = 1;
            BaseModel::Post = 2;
        };

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

