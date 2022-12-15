#include <iostream>
#include <vector>
#include "../domain/baseModel.h"
#include "../domain/fileHandler.h"

using namespace std;


BaseModel::BaseModel() : FileHandler() {
    BaseModel::Get = 1;
    BaseModel::Post = 2;
};

string BaseModel::execute(string tableName, int method, vector<vector<string>> fields)
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
