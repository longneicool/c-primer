#ifndef FOLDER
#define FOLDER

#include <set>
#include <memory>

using std::set;
using std::shared_ptr;

class Message;

struct Folder
{
    Folder();
    Folder(const Folder& f);
    Folder& operator=(const Folder& rhs);
    ~Folder();

public:
    add(Message &msg);
    remove(Message &msg);
private:
    set<Message*> msgs;
};

#endif // FOLDER
