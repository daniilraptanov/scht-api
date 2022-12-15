#include <iostream>
#include <string>
#include "./queryParser.h"

using namespace std;


QueryParser::QueryParser(vector<string> params)
{
    QueryParser::params = params;
};

int QueryParser::getMethod()
{
    vector<string> currentMethod = findParam("method");
    return stoi(currentMethod[1]);
};

int QueryParser::getModel()
{
    vector<string> currentModel = findParam("model");
    return stoi(currentModel[1]);
};

vector<vector<string>> QueryParser::getFields(vector<string> keys)
{
    vector<vector<string>> result = {};
    for (int i = 0; i < keys.capacity(); i++)
    {
        result.push_back(findParam(keys[i]));
    }
    return result;
};


vector<string> QueryParser::findParam(string key)
{
    for (int i = 0; i < params.capacity(); i++)
    {
        string currentKey = params[i].substr(0, params[i].find(":"));
        string currentValue = params[i].substr(1, params[i].find(":"));
        if (currentKey == key)
        {
            return {currentKey, currentValue};
        }
    }

    return {};
};
