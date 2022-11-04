#include <iostream>
#include "file_storage.h"

using namespace std;

class FileStorage
{

    private:
        FileStorage(string params[])
        {
            params = params;
        }

        static FileStorage *FileStorage_;
        string params[];

    public:
        FileStorage(FileStorage &other) = delete; // Singletons should not be cloneable;
        void operator=(const FileStorage &) = delete; // Singletons should not be assignable;

        static FileStorage *get_instance(string params[]);

        string* execute()
        {
            // 1) parse params & determine model -> /tools/query_parser
            // 2) create new Model -> this.execute by Entities enum
            // 3) select service method -> this.execute by parser result
            // 4) execute method with model fields -> /services
            // 5) convert to string array for Node js app -> /tools/query_parser
        };
};

FileStorage *FileStorage::FileStorage_ = nullptr;
FileStorage *FileStorage::get_instance(string params[]) // Static methods should be defined outside the class;
{
    if (FileStorage_ == nullptr)
    {
        FileStorage_ = new FileStorage(params);
    }
    return FileStorage_;
}
