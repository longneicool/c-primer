#include "stdafx.h"
#include "textQuery.h"
#include <fstream>
#include <sstream>
#include <iostream>
#include <regex>
#include <memory>
#include <set>

using std::ifstream;
using std::ofstream;
using std::cout;
using std::cin;
using std::endl;
using std::istringstream;
using std::regex;
using std::set;

TextMap::TextMap(string file, string keyWord) : filename(file), key(".*" + keyWord + ".*")
{
    read();
}

void TextMap::read()
{
    ifstream ifstr(filename);
    if (!ifstr)
    {
        cout << "Fail to read :" << filename << endl;
        return;
    }

    int lineNum = 0;
    string lineText;
    std::smatch results;
    regex r(key);
    while (getline(ifstr, lineText))
    {
        lineNum++;
        if (std::regex_search(lineText, results, r))
        {
            text[lineNum] = lineText;
        }
    }

    ifstr.close();
}

class TextQuery;
void runQueries(ifstream infile)
{
    TextQuery tq(infile);
    while (true)
    {
        cout << "enter word to look for, or q to quit: ";
        string s;
        if (!(cin >> s) || s == "q") break;
        print(cout, tq.query(s) << endl;
    }
}

class QueryResult;
class TextQuery{
public:
    using line_no = std::vector<std::string>::size_type;
    TextQuery(std::ifstream &);
    QueryResult query(const std::string&) const;
private:
    std::shared_ptr<std::vector<std::string>> file;
    std::map<std::string, std::shared_ptr<std::set<line_no>>> wm;
};

TextQuery::TextQuery(ifstream &is) : file(new vector<string>)
{
    string text;
    while (getline(is, text))
    {
        file->push_back(text);
        int n = file->size - 1;
        istringstream line(text);
        string word;
        while (line >> word)
        {
            auto &lines = wm[word];
            if (!lines)
            {
                lines.reset(new set<line_no>);
                lines->insert(n);
            }
        }
    }
}

QueryResult TextQuery::query(const std::string& sought) const
{
    static std::shared_ptr<set<line_no>> nodata(new set<line_no>);
    auto loc = wm.find(sought);
    if (loc == wm.end())
    {
        return QueryResult(sought, nodata, file);
    }
    else
    {
        return QueryResult(sought, loc->second, file);
    }
}

std::ostream& print(std::ostream &os, const QueryResult &qr)
{
    os << qr.sought << " occurs " << qr.lines->size() << " "
        << qr.lines->size() << "time" << std::endl;

    for (auto num : *qr.lines)
    {
        os << "\t(line" << num + 1 << ")"
            << *(qr.file->begin() + num) << endl;

        return os;
    }
}

class QueryResult
{
    using line_no = std::vector<std::string>::size_type;
    friend std::ostream& print(std::ostream&, const QueryResult&);
public:
    QueryResult(std::string s,
        std::shared_ptr<set<line_no>> p,
        std::shared_ptr<std::vector<std::string>> f) :
        sought(s), lines(p), file(f){}
private:
    std::string sought;
    std::shared_ptr <std::set<line_no>> lines;
    std::shared_ptr<std::vector<std::string>> file;
};

