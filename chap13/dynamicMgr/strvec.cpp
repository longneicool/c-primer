#include "strvec.h"

StrVec::StrVec()
{
    first_free = nullptr;
    cap = nullptr;
    elements = nullptr;
}

StrVec::StrVec(const std::initializer_list<string> &il)
{
    auto size = il.size() * 2;
    auto p = alloc.allocate(size);

    elements = p;
    for(auto s : il)
    {
        alloc.construct(p++, s);
    }

    first_free = p;
    cap = elements + size;
}

StrVec::StrVec(const StrVec& str)
{
    auto cpy = alloc_n_copy(str.begin(), str.end());
    elements = cpy.first;
    first_free = cpy.second;
    cap = first_free;
}

StrVec& StrVec::operator =(const StrVec& rhs)
{
    free();

    auto p = alloc_n_copy(rhs.begin(), rhs.end());

    elements = p.first;
    first_free = p.second;
    cap = first_free;

    return *this;
}

StrVec::~StrVec()
{
    free();
}

void StrVec::push_back(const std::string &s)
{
    check_n_alloc();

    alloc.construct(first_free++, s); // 先执行construct，再进行first_free++操作
}

// uninitialized_copy 返回的是拷贝的后一个指针地址，即类似于end();
std::pair<string*, string*> StrVec::alloc_n_copy(const string* begin, const string* end)
{
    auto data = alloc.allocate(end - begin);
    return {data, std::uninitialized_copy(begin, end, data)};
}

void StrVec::free()
{
    if(!elements)
        return;

    while(elements < first_free)
    {
        alloc.destroy(--first_free);
    }

    alloc.deallocate(first_free, capacity());
}

// 不仅要删掉旧的allocate区域，而且要将原有数值拷贝到新申请的内存区域
void StrVec::reallocate()
{
    size_t size = 100 + cap - elements;
    auto data = alloc.allocate(size);
    auto p = std::uninitialized_copy(elements, first_free, data);
    free();

    elements = data;
    first_free = p;
    cap = data + size;
}
