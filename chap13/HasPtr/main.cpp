#include <iostream>
#include "hasptr.h"

using namespace std;

int main()
{
    HasPtr h1;
    HasPtr h2("Hello World");

    h1 = h2;
    h1 = h1;

    cout << *h1.ps << endl;
    cout << *h2.ps << endl;
    return 0;
}

