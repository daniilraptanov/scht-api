#pragma once
#include <iostream>
#include <vector>

using namespace std;

class QueryParser
{
    public:
        QueryParser(vector<string> params);
        int getMethod();
        int getModel();
        vector<vector<string>> getFields(vector<string> keys);

    private:
        vector<string> params;
        vector<string> findParam(string key);
};
