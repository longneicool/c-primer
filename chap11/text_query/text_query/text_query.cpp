// text_query.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "textQuery.h"

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
    TextMap text("D:\\zk.txt", "mcm");

    auto result = text.getText();

    for (auto s : result)
    {
        cout << s.first <<" " << s.second << endl;
    }
	return 0;
}

