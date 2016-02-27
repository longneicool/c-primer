#include "message.h"
#include "folder.h"

Message::Message(const string s) :
    contents(s)
{

}

Message::Message() : Message(string())
{

}

Message::Message(const Message& msg) :
    contents(msg.contents),
    folders(msg.folders)
{
    saveAll();
}

Message& Message::operator =(Message rhs)
{
    swap(*this, rhs);
    return *this;
}

Message::~Message()
{
    removeAll();
}

void Message::save(Folder &f)
{
    folders.insert(&f);
    f.add(*this);
}

void Message::remove(Folder &f)
{
    folders.erase(&f);
    f.remove(*this);
}

void Message::saveAll()
{
    for(auto f : folders)
    {
        save(*f);
    }
}

void Message::removeAll()
{
    for(auto f : folders)
    {
        remove(*f);
    }
}

void swap(Message &lhs, Message &rhs)
{
    lhs.contents.swap(rhs.contents);
}
