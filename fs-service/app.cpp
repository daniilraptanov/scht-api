#include <iostream>
#include <vector>
#include <string>
#include "./fileStorage.h"

using namespace std;

int main()
{
    // for (int index = 0; index < argc; index++)
    // {
    //     cout << argv[index] << endl;
    // }

    FileStorage storage {{"method:2", "model:1", "id:9b307c28-3d31-48aa-8405-46c0e0f62cf3", "chatName:SpiderMan"}};
    string result = storage.execute();

    cout << "RESULT => " << result << endl;

    return 0;
}

// compile program => g++ *.cpp -o fs
// run program (example) => ./app.exe method:1 model:1 id:9b307c28-3d31-48aa-8405-46c0e0f62cf3
