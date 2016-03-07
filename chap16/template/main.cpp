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

    compareArr("Hi", "HelloWorld");

    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    print(arr);

    return 0;
}

