#include "salesdata.h"

bool operator <(const SalesData &lhs, const SalesData &rhs)
{
    return lhs.data < rhs.data;
}

