#include <iostream>
#include <vector>

using namespace std;

int f()
{
    return 0;
}

int main()
{
    vector<int> vec(100);

    int&& ri1 = f();
    int& ri2 = vec[0];
    int &ri4 = ri1;
    int&& ri5 = f()*vec[0];

    int test = 0;
    int&& rrtest = std::move(test);
    rrtest = 1;
    int a = rrtest;

    cout << rrtest << endl;
    cout << test << endl;

    return 0;
}

