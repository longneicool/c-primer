#include "hasptraspointer.h"

SharePtr::SharePtr() :
    ps(new string),
    value(0),
    use(new int(1))
{

}

SharePtr::SharePtr(const string s) :
    ps(new string(s)),
    value(0),
    use(new int(1))
{

}

SharePtr::SharePtr(const SharePtr &h) :
    ps(h.ps),
    value(h.value),
    use(h.use)
{
    ++(*use);
}

SharePtr& SharePtr::operator =(const SharePtr& rhs)
{
    if(this == &rhs)
        return *this;

    if(--(*use) == 0)
    {
        delete ps;
        delete use;
    }

    value = rhs.value;
    ps = rhs.ps;
    use = rhs.use;
    ++(*use);
}

SharePtr::~SharePtr()
{
    if(--(*use) == 0)
    {
        delete ps;
        delete use;
    }
}
