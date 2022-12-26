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
        for (int fieldIndex = 0; fieldIndex < fields.capacity(); fieldIndex++) // TODO :: length - 1 ?
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

    // TODO :: update by id
    string current = "";
    for (int fieldIndex = 0; fieldIndex < fields.capacity() - 1; fieldIndex++)
    {
        vector<string> field = split(fields[fieldIndex], ':');
        if (field[0] == "id")
        {
            current = FileHandler::get(tableName, {fields[fieldIndex]});
        }
    }

    if (current.capacity() > 0)
    {
        string entity;
        vector<string> entities;

        fstream currentFile;
        currentFile.open(dbName.append(tableName.append(".txt")));

        while (currentFile >> entity)
        {
            entities.push_back(entity);
        }

        string currentId = FileHandler::getIdFromFields(fields);
        for (int entityIndex = 0; entityIndex < entities.capacity(); entityIndex++)
        {
            vector<string> currentEntity = split(entities[entityIndex], ';');
            vector<string> id = split(currentEntity[0], ':');
            if (id[1] == currentId)
            {
                cout << id[1] << "   " << currentId << endl;
            }
            // cout << currentEntity[0] << "   " << currentId << endl;
        }
    }

    // --------------------------------


    ofstream file;
    file.open(dbName.append(tableName.append(".txt")), std::ios_base::app);

    ostream_iterator<string> iterator(file, ";");
    copy(fields.begin(), fields.end(), iterator);

    file << "\n";
    file.close();

    return "ok";
};

string FileHandler::getIdFromFields(vector<string> fields)
{
    string currentId;
    for (int index = 0; index < fields.capacity() - 1; index++)
    {
        vector<string> field = split(fields[index], ':');
        if (field[0] == "id")
        {
            currentId = field[1];
        }
    }

    return currentId;
}
