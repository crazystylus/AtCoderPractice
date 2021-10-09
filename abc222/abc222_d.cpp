#include <bits/stdc++.h>
using namespace std;
#define ll int
#define ull unsigned long long
#define rep(i, n) for (i = 0; i < n; i++)
const int mod = 998244353;
const int N = 3000;
///////////////////
// O(N(M^2)) : Results in TLE
ll dp[N][3001] = {0}, a[N], b[N];
ll n, sta, i, j, k;
ll op;
void solve()
{
    cin >> n;
    rep(i, n)
            cin >>
        a[i];
    rep(i, n)
            cin >>
        b[i];
    for (i = a[0]; i <= b[0]; i++)
        dp[0][i] = 1; // Sequences starting with i
    for (i = 0; i < n - 1; i++)
    {
        for (j = a[i]; j <= b[i]; j++)
        {
            // Calculating DP
            if (dp[i][j] == 0)
                continue;
            k = max(j, a[i + 1]);
            for (; k <= b[i + 1]; k++)
                dp[i + 1][k] = (dp[i + 1][k] + dp[i][j]) % mod;
        }
    }
    op = 0;
    for (i = a[n - 1]; i <= b[n - 1]; i++)
        op = (op + dp[n - 1][i]) % mod;
    cout << op;
}
int main()
{
    ios::sync_with_stdio(false), cin.tie(nullptr);
    solve();
    return 0;
}