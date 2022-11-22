#include <iostream>
#include <string>
#include "queryParser.h"

using namespace std;

class QueryParser
{
    public:
        QueryParser(vector<string> params)
        {
            params = params;
        };

        int getMethod()
        {
            vector<string> currentMethod = findParam("method");
            return stoi(currentMethod[1]);
        };

        int getModel()
        {
            vector<string> currentModel = findParam("model");
            return stoi(currentModel[1]);
        };

        vector<vector<string>> getFields(vector<string> keys)
        {
            vector<vector<string>> result = {};
            for (int i = 0; i < keys.capacity(); i++)
            {
                result.push_back(findParam(keys[i]));
            }
            return result;
        };

    private:
        vector<string> params;

        vector<string> findParam(string key)
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
            
        };
};
