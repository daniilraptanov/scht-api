#include <iostream>
#include <vector>
#include "common/fileStorage.h"

using namespace std;

int main(int argc, string argv[])
{
    for (int index = 0; index < argc; index++)
    {
        cout << argv[index] << endl;
    }

    FileStorage storage {{"method:2", "model:1", "id:9b307c28-3d31-48aa-8405-46c0e0f62cf3", "chatName:Batman"}};
    storage.execute();

    return 0;
}

// compile program => g++ *.cpp -o fsService
// run program (example) => ./app.exe method:1 model:1 id:9b307c28-3d31-48aa-8405-46c0e0f62cf3
