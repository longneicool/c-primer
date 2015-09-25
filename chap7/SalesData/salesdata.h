#ifndef SALESDATA_H
#define SALESDATA_H

#include <string>

class SalesData
{
public:
    SalesData();
public:
    std::string isbn () const{return bookNo;}
    SalesData &combine(const SalesData &transData);
    double avarge() const{return totalMoney/nums;}
private:
    std::string bookNo;
    unsigned int nums;
    double totalMoney;

};

#endif // SALESDATA_H
