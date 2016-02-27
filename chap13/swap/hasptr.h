#ifndef HASPTR_H
#define HASPTR_H
#include <string>

using std::string;

struct HasPtr
{
    friend void swap(HasPtr &lhs, HasPtr &rhs);
    HasPtr();
    HasPtr(const string s);
    HasPtr(const HasPtr&);
    HasPtr& operator=(const HasPtr& rhs);
    ~HasPtr();

public:
    string *ps;
    int value;
};

inline void swap(HasPtr &lhs, HasPtr &rhs)
{
    using std::swap;
    swap(lhs.ps, rhs.ps);
    swap(lhs.value, rhs.value);
}


#endif // HASPTR_H

