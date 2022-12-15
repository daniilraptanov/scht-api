#pragma once
#include <iostream>
#include <vector>
#include "./fileHandler.h"


class BaseModel : private FileHandler
{
    protected:
        BaseModel();
        static std::string execute(std::string tableName, int method, std::vector<std::vector<std::string>> fields);
};
