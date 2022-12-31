#pragma once
#include <iostream>
#include <vector>


class FileHandler
{
    protected:
        static std::string get(std::string tableName, std::vector<std::string> fields);
        static std::string post(std::string tableName, std::vector<std::string> fields);

        FileHandler();

    private:
        static std::string getIdFromFields(std::vector<std::string> fields);
        static void appendToFile(std::string path, std::vector<std::string> fields);
};
