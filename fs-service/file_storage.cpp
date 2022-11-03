#include <iostream>

using namespace std;

class User 
{

};

int main(int argc, char* argv[])
{
    for (int index = 0; index < argc; index++)
    {
        cout << argv[index] << endl;
    }
    
    return 0;
}

// compile program => g++ file_storage.cpp -o app
// run program => ./app.exe
