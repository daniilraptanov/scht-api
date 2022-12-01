#pragma once
#include <iostream>
#include <vector>
#include "../tools/queryParser.h"

using namespace std;

class FileStorage : public QueryParser
{
    public:
        FileStorage(vector<string> params) : QueryParser(params) {};
        string execute();
};
