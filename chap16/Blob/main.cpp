#include <iostream>
#include <string>
#include "blob.h"
#include <initializer_list>


using namespace std;

int main()
{
    Blob<string> b = {"a", "an", "the"};
    for(int i = 0; i < b.size(); i++)
        cout << b[i] << endl;
    return 0;
}

