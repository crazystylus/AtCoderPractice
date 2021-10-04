#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define rep(i, n) for (int i = 0; i < n; i++)
const int mod = 1e9 + 7; //10^9 + 7;
const int N = 1e5 + 1;
///////////////////
// Brute Force
void solve()
{
    string s;
    cin >> s;
    int a, z;
    rep(i, s.length()) if (s[i] == 'A')
    {
        a = i;
        break;
    }
    for (int i = a; i < s.length(); i++)
        if (s[i] == 'Z')
        {
            z = i;
        }
    cout << z - a + 1;
}
int main()
{
    solve();
    return 0;
}