#include <iostream>
#include "begin_end.h"

using namespace std;

int main()
{
    char a[10] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'};

    cout << *mybegin(a) << endl;
    cout << *myend(a) << endl;

    return 0;
}

