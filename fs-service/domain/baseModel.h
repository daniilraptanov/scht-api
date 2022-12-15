#pragma once
#include <iostream>
#include <vector>
#include "./fileHandler.h"


class BaseModel : private FileHandler
{
    private:
        static int BaseModel::Get;
        static int BaseModel::Post;

    protected:
        BaseModel() : FileHandler() {};
        static std::string execute(std::string tableName, int method, std::vector<std::vector<std::string>> fields);
};
