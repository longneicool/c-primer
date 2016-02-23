#include <iostream>
#include <fstream>
#include <sstream>
#include <map>
#include <string>

using namespace std;

map<string, string> buildMap(string file)
{
    ifstream fstrm;
    fstrm.open(file);
    if(!fstrm)
    {
        cout << "Fail to open file:" << file <<endl;
    }

    map<string, string> tmpMap;

    string key;
    string value;
    while(fstrm >> key && getline(fstrm, value))
    {
        if(value.size() > 1)
            tmpMap[key] = value.substr(1);
    }
}

void transform(string ruleFile, string transFile)
{
    auto rule = buildMap(ruleFile);

    ifstream iftrm(transFile);
    ofstream ofstrm;
    ofstrm.open("D:\zk.txt");
    string line;
    while(getline(iftrm, line))
    {
        istringstream strim(line);
        string word;
        while(strim >> word)
        {
            auto iter = rule.find(word);
            if(iter != rule.end())
                ofstrm << iter->second;
        }
    }
}

int main()
{
    //transform("D:\rules.txt", "D:\trans.txt");
    ifstream ifstrm("D:\rules.txt");
    while(ifstrm)
    {
        ifstrm >>sssssaqweert
    }
    cout << "Hello World!" << endl;
    return 0;
}

