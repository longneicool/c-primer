#include <iostream>
#include <vector>
#include <list>
#include "find.h"
using namespace std;

int main()
{
    vector<int> v1 = {1, 2, 3, 4, 5, 6, 7, 8, 10};

    if(find(v1.cbegin(), v1.cend(), 10) != v1.cend())
    {
        cout << "Find 10 Success" << endl;
    }

    list<int> l1 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    if(find(l1.cbegin(), l1.cend(), 10) != l1.cend())
    {
        cout << "Find 10 Success" << endl;
    }

    return 0;
}

