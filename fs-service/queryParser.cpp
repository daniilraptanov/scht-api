#include <iostream>
#include <sstream>
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
        vector<string> current = QueryParser::split(params[i], ':'); 
        if (current[0] == key)
        {
            return current;
        }
    }

    return {};
};

vector<string> QueryParser::split(const string &s, char delim) {
    vector<string> result;
    stringstream ss (s);
    string item;

    while (getline(ss, item, delim)) {
        result.push_back (item);
    }

    return result;
}
