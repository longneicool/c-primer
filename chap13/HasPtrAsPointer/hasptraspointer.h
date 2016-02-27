#ifndef HASPTRASPOINTER
#define HASPTRASPOINTER

#include <string>

using std::string;

struct SharePtr
{
    SharePtr();
    SharePtr(const string s);
    SharePtr(const SharePtr& h);
    SharePtr& operator=(const SharePtr& rhs);
    ~SharePtr();

    int count()
    {
        return *use;
    }

private:
    string *ps;
    int value;
    int *use;
};

#endif // HASPTRASPOINTER

