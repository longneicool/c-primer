#include <iostream>
#include "strvec.h"

using namespace std;

int main()
{
    StrVec vec;
    vec.push_back("Hello");
    vec.push_back(" World");
    vec.push_back("!");

    cout << vec.size() << endl;
    cout << vec.capacity() << endl;
    for(string *p = vec.begin(); p < vec.end(); p++)
    {

        cout << *p << endl;
    }

    return 0;
}


