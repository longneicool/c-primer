#ifndef HASPTR_H
#define HASPTR_H
#include <string>

using std::string;

struct HasPtr
{
    HasPtr();
    HasPtr(const string s);
    HasPtr(const HasPtr&);
    HasPtr& operator=(const HasPtr& rhs);
    ~HasPtr();

public:
    string *ps;
    int value;
};



#endif // HASPTR_H

