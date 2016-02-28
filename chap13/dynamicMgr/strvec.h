#ifndef STRVEC_H
#define STRVEC_H

#include <memory>
#include <string>

using std::allocator;
using std::string;

class StrVec
{
public:
    StrVec();
    StrVec(const Strvec&);
    Strvec &operator =(const Strvec& rhs);
    ~StrVec();

    void push_back(const string& s);
    size_t size()
    {
        return first_free - elements;
    }

    size_t capcity()
    {
        return cap - first_free;
    }

    string* begin()
    {
        return elements;
    }

    string* end()
    {
        return first_free;
    }

private:
    static allocator<string> alloc;

    void check_n_alloc()
    {
        if(size() == capcity())
            reallocate();
    }

    std::pair<string*, string*> alloc_n_copy(const string*, const string*);
    void free();
    void reallocate();
private:
    string *elements;
    string *first_free;
    string *cap;


private:
    allocator<string> a;

};

#endif // STRVEC_H
