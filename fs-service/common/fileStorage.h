#pragma once
#include <iostream>
#include <vector>
#include "../tools/queryParser.h"


class FileStorage : public QueryParser
{
    private:
        vector<string> params;

        int User = 1;
        int Chat = 2;
        int Message = 3;

    public:
        FileStorage(vector<string> params) : QueryParser(params) {};
        string execute();
};
