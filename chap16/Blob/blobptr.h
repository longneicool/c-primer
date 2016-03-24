#ifndef BLOBPTR_H
#define BLOBPTR_H

#include <memory>
#include <vector>
#include "blob.h"

using std::weak_ptr;
using std::vector;

template<typename T>
class BlobPtr
{
public:
    BlobPtr() : curr(0){}
    BlobPtr(Blob<T> &a, size_t sz = 0):
        wptr(a.data), curr(sz){ }

    BlobPtr& operator ++();
    BlobPtr& operator --();
private:
    std::weak_ptr<std::vector<T>> wptr;
    std::size_t curr;

};

#endif // BLOBPTR_H
