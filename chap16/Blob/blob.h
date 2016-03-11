#ifndef BLOB_H
#define BLOB_H

#include <vector>
#include <initializer_list>
#include <memory>

template <typename T>
class Blob
{
public:
    typedef T value_type;
    typedef typename std::vector<T>::size_type size_type; //这儿为什么需要typename

    Blob() = default;
    Blob(std::initializer_list<T> il);

    size_type size() const;
    bool empty() const;

    void push_back(const T &t);
    void pop_back();

    T& back();
    T& operator[](size_type i);

private:
    std::shared_ptr<std::vector<T>> data;
};

#endif // BLOB_H
