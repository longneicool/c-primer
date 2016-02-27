#include "folder.h"

Folder::Folder()
{

}

Folder::Folder(const Folder &f) : msgs(f.msgs)
{
    addAll();
}

Folder& Folder::operator =(Folder &rhs)
{

}
