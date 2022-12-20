#include <iostream>
#include <string>
#include "./queryParser.h"
#include "./tools.h"

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

vector<string> QueryParser::getFields(vector<string> keys)
{
    vector<string> result = {};
    for (int i = 0; i < keys.capacity(); i++)
    {
        result.push_back(findField(keys[i]));
    }
    return result;
};

string QueryParser::findField(string key)
{
    for (int i = 0; i < params.capacity(); i++)
    {
        vector<string> current = split(params[i], ':'); 
        if (current[0] == key)
        {
            return params[i];
        }
    }

    return "";
}

vector<string> QueryParser::findParam(string key)
{
    for (int i = 0; i < params.capacity(); i++)
    {
        vector<string> current = split(params[i], ':'); 
        if (current[0] == key)
        {
            return current;
        }
    }

    return {};
};

