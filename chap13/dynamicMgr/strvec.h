#ifndef STRVEC_H
#define STRVEC_H

#include <memory>
#include <string>
#include <utility>

using std::allocator;
using std::string;

class StrVec
{
public:
    StrVec();
    StrVec(const std::initializer_list<string> &il);
    StrVec(const StrVec&);
    StrVec &operator =(const StrVec& rhs);
    ~StrVec();

    void push_back(const string& s);
    size_t size() const
    {
        return first_free - elements;
    }

    size_t capacity() const
    {
        return cap - first_free;
    }

    string* begin() const
    {
        return elements;
    }

    string* end() const
    {
        return first_free;
    }

private:
    static allocator<string> alloc;

    void check_n_alloc()
    {
        if(size() == capacity())
            reallocate();
    }

    std::pair<string*, string*> alloc_n_copy(const string*, const string*);
    void free();
    void reallocate();
private:
    string *elements;
    string *first_free;
    string *cap;
};

allocator<string> StrVec::alloc;

#endif // STRVEC_H
