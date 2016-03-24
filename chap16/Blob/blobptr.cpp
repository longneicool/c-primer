#include "blobptr.h"

template<typename T>
 BlobPtr<T>& BlobPtr<T>::operator ++()
{
    BlobPtr ret = *this;
    ++*this;

    return ret;
}

