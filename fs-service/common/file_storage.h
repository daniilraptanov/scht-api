#pragma once
#include <iostream>

using namespace std;

class FileStorage
{
    public:
        string* execute();      

    private:
        FileStorage(string params[]);
};
