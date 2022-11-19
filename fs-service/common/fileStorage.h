#pragma once
#include <iostream>
#include <vector>

using namespace std;

class FileStorage
{
    public:
        FileStorage(vector<string> params);
        string execute();
};
