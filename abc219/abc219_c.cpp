#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
unordered_map<char, int> newdict;
bool newcomp(string a, string b)
{
    int i = 0;
    while (i < a.length() && i < b.length())
    {
        if (a[i] != b[i])
        {
            return newdict[a[i]] < newdict[b[i]];
        }
        i++;
    }
    if (i < a.length())
    {
        return false;
    }
    return true;
}
int main()
{
    vector<string> names;
    string newrank;
    int n;
    cin >> newrank >> n;
    while (n--)
    {
        string name;
        cin >> name;
        names.push_back(name);
    }
    for (int i = 0; i < newrank.length(); i++)
    {
        newdict[newrank[i]] = i;
    }
    sort(names.begin(), names.end(), newcomp);
    for (auto x : names)
    {
        cout << x << endl;
    }
    return 0;
}