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

    size_type size() const {return data->size();}
    bool empty() const { return data->empty();}

    void push_back(const T &t);
    void pop_back();

    T& back();
    T& operator[](size_type i);

private:
    std::shared_ptr<std::vector<T>> data;
};

template <typename T>
Blob<T>::Blob(std::initializer_list<T> il) :
    data(std::make_shared<std::vector<T>>(il))
{

}

template <typename T>
void Blob<T>::push_back(const T &t)
{
    data->push_back(t);
}

template <typename T>
void Blob<T>::pop_back()
{
    return data->pop_back();
}

template <typename T>
T& Blob<T>::back()
{
    return data->back();
}

template <typename T>
T& Blob<T>::operator [](size_type i)
{
    return data->at(i);
}

#endif // BLOB_H
