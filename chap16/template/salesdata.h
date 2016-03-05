#ifndef SALESDATA_H
#define SALESDATA_H

#include <string>

class SalesData
{
    friend bool operator<(const SalesData &lhs, const SalesData &rhs);
public:
    SalesData() = default;
    SalesData(std::string s) : data(s)
    {

    }

private:
    std::string data;
};

bool operator <(const SalesData &lhs, const SalesData &rhs);

#endif // SALESDATA_H
