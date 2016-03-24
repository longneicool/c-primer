#include <iostream>
#include <string>
#include "blob.h"

using namespace std;

int main()
{
    Blob<string> b = {"a", "b", "c", "d"};
    for(auto c : b)
        cout << c << endl;
    return 0;
}

