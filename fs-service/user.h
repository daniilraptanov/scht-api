#pragma once
#include <iostream>
#include <vector>
#include "./baseModel.h"


class User : protected BaseModel
{
    public:
        static std::vector<std::string> USER_FIELDS;
        static std::string execute(int method, std::vector<std::string> fields);

    private:
        User() {};
};
