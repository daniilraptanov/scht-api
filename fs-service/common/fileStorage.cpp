#include <iostream>
#include <vector>
#include "fileStorage.h"

using namespace std;

class FileStorage
{

    private:
        vector<string> params;
    public:
        FileStorage(vector<string> params)
        {
            params = params;
        }

        string execute()
        {
            // 1) parse params & determine model -> /tools/queryParser
            // 2) create new Model -> this.execute by Entities enum
            // 3) select service method -> this.execute by parser result
            // 4) execute method with model fields -> /services
            // 5) convert to string array for Node js app -> /tools/queryParser
        };
};
