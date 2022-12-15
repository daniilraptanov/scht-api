#include <iostream>
#include <vector>
#include "./baseModel.h"
#include "./fileHandler.h"

using namespace std;


// BaseModel::BaseModel() : FileHandler() {
//     // BaseModel::Get = 1;
//     // BaseModel::Post = 2;
// };

string BaseModel::execute(string tableName, int method, vector<vector<string>> fields)
{
    if (method == 1)
    {
        return FileHandler::get(tableName, fields);
    }

    if (method == 2)
    {
        return FileHandler::post(tableName, fields);
    }

    return "";
};
