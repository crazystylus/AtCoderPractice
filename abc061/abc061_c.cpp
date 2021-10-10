#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define rep(i, n) for (ll i = 0; i < n; i++)
const int mod = 1e9 + 7; //10^9 + 7;
const int N = 1e5 + 1;
///////////////////
// Use array to store number of occurences of a number
ll n, a, b;
ll nrk, k;
ll ncount[N] = {0};
void solve()
{
    cin >> n >> k;
    rep(i, n)
    {
        cin >> a >> b;
        ncount[a] += b;
    }
    nrk = 0;
    rep(i, N)
    {
        nrk += ncount[i];
        if (k <= nrk)
            return (void)(cout << i);
    }
}
int main()
{
    solve();
    return 0;
}