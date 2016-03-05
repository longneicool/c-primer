#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int count = 0;
    while(1)
    {
        double d = double(30/10.0);
        if(3 != int(d))
        {
            cout << "the int unequal float!" << endl;
            break;
        }

        cout << count++ << endl;
    }

    return 0;
}

