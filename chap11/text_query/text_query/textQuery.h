#ifndef _EFNERJVFBWEVBWEHRFEJRBGERVBVERBJSDBVV_
#define _EFNERJVFBWEVBWEHRFEJRBGERVBVERBJSDBVV_

#include <map>
#include <string>
#include <vector>

using std::map;
using std::string;
using std::vector;

struct TextMap
{
    TextMap() = default;
    TextMap(string file, string keyWord);
    map<int, string> getText()
    {
        return text;
    }
private:
    void read();
private:
    string filename;
    string key;
    map<int, string> text;
};

map<int, string> find(string word, map<int, string> &textMap);

#endif