#ifndef BEGIN_END
#define BEGIN_END

template<typename T, unsigned M>
T* mybegin(T (&arr)[M])
{
    return &arr[0];
}

template<typename T, unsigned M>
T* myend(T (&arr)[M])
{
    return &arr[M-1];
}

#endif // BEGIN_END

