#include <memory>
#include <string>
#include <iostream>
#include <vector>

using namespace std;

void process(int *p)
{
    cout << *p << endl;
}
int main(int argc, char** argv)
{
    int * p = new int(1);
    shared_ptr<int> sp(p, process);

    weak_ptr<int> w = sp;

    cout << w.expired() << endl;

    auto w_sp = w.lock();
    cout << *w_sp << endl;

    return 0;
}