#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define rep(i, n) for (int i = 0; i < n; i++)
const int mod = 1e9 + 7; //10^9 + 7;
const int N = 1e5 + 1;
///////////////////
// Simple
void solve()
{
    ll n;
    cin >> n;
    ll op = 1;
    for (int i = 1; i <= n; i++)
        op = (op * i) % mod;
    cout << op;
}
int main()
{
    solve();
    return 0;
}