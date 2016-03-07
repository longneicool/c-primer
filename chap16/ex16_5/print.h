#ifndef PRINT
#define PRINT

#include <iostream>

template<unsigned N, typename T>
void print(T (&array)[N])
{
    for(auto v : array)
        std::cout << v << std::endl;
}


#endif // PRINT

