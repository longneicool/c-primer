#include <iostream>
#include "hasptraspointer.h"

using namespace std;

int main()
{
    SharePtr s1;
    SharePtr s2("Hello World");
    SharePtr s3 = s1;

    s1 = s2;
    s1 = s1;
    s3 = s2;
    s2 = s3;

    return 0;
}

