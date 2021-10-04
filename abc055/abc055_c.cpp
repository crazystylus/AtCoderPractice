#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define rep(i, n) for (int i = 0; i < n; i++)
const int mod = 1e9 + 7; //10^9 + 7;
const int N = 1e5 + 1;
///////////////////
/*
Check if you have spare c's after pairing them with given s's
if no return m/2;
else
consider after pairing with n we will be left with m = (m/2-n)*2
for creating futher pairs we need 4 c's so answer will be n + m/4
*/
void solve()
{
    ll n, m, op;
    cin >> n >> m;
    if (n > m / 2)
        return (void)(cout << m / 2);
    m /= 2;
    m -= n;
    cout << (n + m / 2);
}
int main()
{
    solve();
    return 0;
}