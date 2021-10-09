#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define rep(i, n) for (int i = 0; i < n; i++)
const int mod = 1e9 + 7; //10^9 + 7;
const int N = 1e5 + 1;
///////////////////
// Simple loop and check for length
void solve()
{
    string o, e;
    cin >> o >> e;
    rep(i, max(o.length(), e.length()))
    {
        if (i < o.length())
            cout << o[i];
        if (i < e.length())
            cout << e[i];
    }
}
int main()
{
    solve();
    return 0;
}