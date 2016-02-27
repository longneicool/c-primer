#ifndef MESSAGE_H
#define MESSAGE_H

#include <set>
#include <memory>
#include <string>

using std::set;
using std::shared_ptr;
using std::string;

class Folder;

struct Message
{
    friend void swap(Message &lhs, Message &rhs);
    Message();

    Message(const string s);
    Message(const Message& m);
    Message& operator=(Message rhs);
    ~Message();

public:
    void save(Folder &f);
    void remove(Folder &f);

private:
    void saveAll();
    void removeAll();

private:
    set<Folder*> folders;
    string contents;
};

void swap(Message &lhs, Message &rhs);

#endif // MESSAGE_H

