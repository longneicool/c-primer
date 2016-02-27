#include "hasptr.h"

HasPtr::HasPtr() : ps(new string()), value(0)
{

}

HasPtr::HasPtr(const string s) : ps(new string(s)), value(0)
{

}

HasPtr::HasPtr(const HasPtr& h) :
    ps(new string(*h.ps)),
    value(h.value)
{

}

HasPtr& HasPtr::operator =(const HasPtr& rhs)
{
    string tmp = *rhs.ps;
    delete ps;
    ps = new string(tmp);
    value = rhs.value;

    return *this;
}

HasPtr::~HasPtr()
{
    delete ps;
}
