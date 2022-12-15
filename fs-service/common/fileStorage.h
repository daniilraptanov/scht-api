#pragma once
#include <iostream>
#include <vector>
#include "../tools/queryParser.h"


class FileStorage : public QueryParser
{
    private:
        std::vector<std::string> params;

        int User = 1;
        int Chat = 2;
        int Message = 3;

    public:
        FileStorage(std::vector<std::string> params) : QueryParser(params) {};
        std::string execute();
};
