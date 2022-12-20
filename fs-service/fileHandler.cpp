#include <iostream>
#include <fstream>
#include <iterator>
#include <vector>
#include "./fileHandler.h"
#include "./tools.h"

using namespace std;


string FileHandler::get(string tableName, vector<string> fields)
{
    string dbName = "database";
    string entity;
    vector<string> entities;
    string result;

    fstream file;
    file.open(dbName.append(tableName.append(".txt")));

    while (file >> entity)
    {
        entities.push_back(entity);
    }

    for (int i = 0; i < entities.capacity(); i++)
    {
        vector<string> currentEntity = split(entities[i], ';');
        for (int j = 0; j < fields.capacity(); j++)
        {
            for (int k = 0; k < currentEntity.capacity(); k++)
            {
                vector<string> current = split(currentEntity[k], ':');
                vector<string> findParam = split(fields[j], ':');
                if ((current[0] == findParam[0]) && (current[1] != findParam[1]))
                {
                    return "";
                }
            }
        }
        
       
    }
    

    return "Iron man";
};

string FileHandler::post(string tableName, vector<string> fields)
{
    string dbName = "database";
    ofstream file;
    file.open(dbName.append(tableName.append(".txt")), std::ios_base::app);

    ostream_iterator<string> iterator(file, ";");
    copy(fields.begin(), fields.end(), iterator);

    file << "\n";
    file.close();

    return "batman";
};
