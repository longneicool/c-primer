#include "blob.h"

template<typename T>
Blob<T>::Blob(const std::initializer_list<T> il) :
    data(std::make_shared<std::vector<T>>(il))
{

}

template<typename T>
typename Blob<T>::size_type Blob<T>::size() const // 这里为什么需要typename
{
    return data->size();
}

template<typename T>
bool Blob<T>::empty() const
{
    return data->empty();
}

template<typename T>
void Blob<T>::push_back(const T &t)
{
    data->push_back(t);
}

template<typename T>
void Blob<T>::pop_back()
{
    data->pop_back();
}

template<typename T>
T& Blob<T>::back()
{
    return data->back();
}

template<typename T>
T& Blob<T>::operator [](size_type i)
{
    return data->at(i);
}
