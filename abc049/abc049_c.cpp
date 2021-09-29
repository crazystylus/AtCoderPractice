#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define llu unsigned long long
/*
Replace all occurences of word considerting words in a particular order.
Store string len in a counter and decrement it by word length per occurence found
*/
int main()
{
    string inp;
    cin >> inp;
    ll op = inp.length();
    size_t found;
    found = inp.find("eraser");
    while (found != string::npos)
    {
        inp.replace(found, 6, "......");
        op -= 6;
        found = inp.find("eraser");
    }
    found = inp.find("erase");
    while (found != string::npos)
    {
        inp.replace(found, 5, ".....");
        op -= 5;
        found = inp.find("erase");
    }
    found = inp.find("dreamer");
    while (found != string::npos)
    {
        inp.replace(found, 7, ".......");
        op -= 7;
        found = inp.find("dreamer");
    }
    found = inp.find("dream");
    while (found != string::npos)
    {
        inp.replace(found, 5, ".....");
        op -= 5;
        found = inp.find("dream");
    }
    if (op == 0)
    {
        cout << "YES";
        return 0;
    }
    cout << "NO";
    return 0;
}
