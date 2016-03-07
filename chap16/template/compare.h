#ifndef COMPARE
#define COMPARE

#include <memory>
#include <cstring>
#include <iostream>

template<typename T> int compare(const T& v1, const T& v2)
{
    if(v1 < v2) return -1;
    if(v2 < v2) return 1;

    return 0;
}

template<unsigned int M, unsigned int N>
int compareArr(const char (&p1)[M], const char (&p2)[N])
{
    return strcmp(p1, p2);
}

void print(const int (&arr)[10])
{
    for(auto i : arr)
        std::cout << i << std::endl;
}

#endif // COMPARE

