#pragma once
#include <iostream>
#include<vector>


class FileHandler
{
    protected:
        static std::string get(std::string tableName, std::vector<std::vector<std::string>> fields);
        static std::string post(std::string tableName, std::vector<std::vector<std::string>> fields);

        FileHandler() {};
};
