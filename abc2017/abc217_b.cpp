#include <bits/stdc++.h>
using namespace std;
int main()
{
    unordered_map<string, bool> clist;
    clist["ABC"] = false;
    clist["ARC"] = false;
    clist["AGC"] = false;
    clist["AHC"] = false;
    string inps;
    for (int i = 0; i < 3; i++)
    {
        cin >> inps;
        clist[inps] = true;
    }
    for (auto x : clist)
    {
        if (!x.second)
        {
            cout << x.first;
            return 0;
        }
    }
    return 0;
}