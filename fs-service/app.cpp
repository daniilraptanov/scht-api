#include <iostream>
#include "user.h"

using namespace std;

int main(int argc, string argv[])
{
    User user {"id", "10.10.22", "batman@gmail.com", "Batman", "verySecretPasswd"};

    for (int index = 0; index < argc; index++)
    {
        cout << argv[index] << endl;
    }
    
    return 0;
}

// compile program => g++ app.cpp -o fs_service
// run program (example) => ./app.exe method:GET model:User id:9b307c28-3d31-48aa-8405-46c0e0f62cf3
