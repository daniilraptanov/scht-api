#pragma once
#include <iostream>
#include <vector>
#include "../models/baseModel.h"


class User : protected BaseModel
{
    public:
        static std::vector<std::string> USER_FIELDS;
        static std::string execute(int method, std::vector<std::vector<std::string>> fields);

    private:
        User() {};
};
