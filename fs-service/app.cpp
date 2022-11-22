#include <iostream>
#include <vector>
#include "fileStorage.h"

using namespace std;

int main(int argc, string argv[])
{
    for (int index = 0; index < argc; index++)
    {
        cout << argv[index] << endl;
    }

    FileStorage storage {{"method:1", "model:1", "id:9b307c28-3d31-48aa-8405-46c0e0f62cf3"}};
    storage.execute();

    return 0;
}

// compile program => g++ app.cpp -o fsService
// run program (example) => ./app.exe method:1 model:1 id:9b307c28-3d31-48aa-8405-46c0e0f62cf3
