#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define rep(i, n) for (int i = 0; i < n; i++)
const int mod = 1e9 + 7; //10^9 + 7;
const int N = 1e5 + 1;
///////////////////
// Brute Force: move between 5 and 6
void solve()
{
    ll x, elv = 11, op;
    cin >> x;
    op = (x / elv) << 1;
    if (x % elv > 6)
        op += 2;
    else if (x % elv != 0)
    {
        op += 1;
    }
    cout << op;
}
int main()
{
    solve();
    return 0;
}