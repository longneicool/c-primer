#include "strvec.h"

StrVec::StrVec()
{
    alloc.allocate(10);
}

StrVec::StrVec(const Strvec& str)
{
    alloc.allocate(str.capcity);
    auto cpy = alloc_n_copy(str.begin(), str.end());
    elements = cpy.first;
    first_free = cpy.second;
}

StrVec& StrVec::operator =(const StrVec& rhs)
{
    free();
    auto p = alloc.allocate(rhs.capcity());
    elements = p.first;
    first_free = p.second;
}

StrVec::~StrVec()
{
    free();
}

void StrVec::push_back(const std::string &s)
{
    check_n_alloc();

}

