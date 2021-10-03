#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define llu unsigned long long

int main()
{
    string s, t;
    char tmp;
    cin >> s >> t;
    if (s == t)
    {
        cout << "Yes";
        return 0;
    }
    ll n = s.length() - 1;
    for (ll i = 0; i < n; i++)
    {
        //Do a swap
        tmp = s[i];
        s[i] = s[i + 1];
        s[i + 1] = tmp;
        if (s == t)
        {
            cout << "Yes";
            return 0;
        }
        //Do a swap
        tmp = s[i];
        s[i] = s[i + 1];
        s[i + 1] = tmp;
    }
    cout << "No";
    return 0;
}
