#include <iostream>
#include <fstream>
#include <iterator>
#include <vector>
#include "./fileHandler.h"
#include "./tools.h"

using namespace std;


string FileHandler::get(string tableName, vector<string> fields)
{
    string dbName = "database/";
    string entity;
    vector<string> entities;
    string result;

    fstream file;
    file.open(dbName.append(tableName.append(".txt")));

    while (file >> entity)
    {
        entities.push_back(entity);
    }

    for (int entityIndex = 0; entityIndex < entities.capacity(); entityIndex++)
    {
        vector<string> currentEntity = split(entities[entityIndex], ';');
        for (int fieldIndex = 0; fieldIndex < fields.capacity() - 1; fieldIndex++)
        {
            vector<string> findParam = split(fields[fieldIndex], ':');
            for (int currentIndex = 0; currentIndex < currentEntity.capacity(); currentIndex++)
            {
                vector<string> current = split(currentEntity[currentIndex], ':');
                if ((current[0] == findParam[0]) && (current[1] == findParam[1])) {
                    return entities[entityIndex];
                }
            }
        }
    }

    return "";
};

string FileHandler::post(string tableName, vector<string> fields)
{
    string dbName = "database/";
    ofstream file;
    file.open(dbName.append(tableName.append(".txt")), std::ios_base::app);

    ostream_iterator<string> iterator(file, ";");
    copy(fields.begin(), fields.end(), iterator);

    file << "\n";
    file.close();

    return "batman";
};
