#pragma once
#include <iostream>
#include <vector>
#include "./baseModel.h"


class Chat : protected BaseModel
{
    public:
        static std::vector<std::string> CHAT_FIELDS;
        static std::string execute(int method, std::vector<std::vector<std::string>> fields);

    private:
        Chat() {};
};
