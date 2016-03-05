#ifndef FIND
#define FIND

template<typename T1, typename T2> T1 find(const T1 &begin,
                                           const T1 &end,
                                           const T2 &value)
{
    T1 b = begin;
    while(b != end)
    {
        if(*b == value)
            return b;
        b++;
    }

    return end;
}

#endif // FIND

