#pragma once
#include <iostream>
#include <vector>


class QueryParser
{
    public:
        QueryParser(std::vector<std::string> params);
        int getMethod();
        int getModel();
        std::vector<std::vector<std::string>> getFields(std::vector<std::string> keys);

    private:
        std::vector<std::string> params;
        std::vector<std::string> findParam(std::string key);
};
