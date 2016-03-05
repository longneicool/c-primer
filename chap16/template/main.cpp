#include <iostream>
#include "compare.h"
#include "salesdata.h"

using namespace std;

int main()
{
    int a = 1, b = 2;

    cout << compare(a, b) << endl;

    SalesData s1("Hello"), s2("Hi");

    cout << compare(s1, s2) << endl;

    return 0;
}

