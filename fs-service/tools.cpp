#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include "./tools.h"

using namespace std;

vector<string> split(const string &s, char delim) {
    vector<string> result;
    stringstream ss (s);
    string item;

    while (getline(ss, item, delim)) {
        result.push_back (item);
    }

    return result;
}
