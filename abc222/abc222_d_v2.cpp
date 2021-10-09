#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define rep(i, n) for (i = 0; i < n; i++)
const int mod = 998244353;
const int N = 3000;
///////////////////
// O(NM) : Implementing cumulative sum in DP array for each dp[i][...]
ll dp[N][3003] = {0}, a[N], b[N];
ll n, sta, i, j, k;
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
        dp[0][i] = (dp[0][i - 1] + 1) % mod; // Sequences starting with i
    for (i = b[0] + 1; i < 3001; i++)
        dp[0][i] = dp[0][i - 1];
    for (i = 1; i < n; i++)
    {
        dp[i][0] = dp[i - 1][0];
        for (j = 0; j < a[i]; j++)
            dp[i][j] = dp[i][j - 1];
        for (j = a[i]; j <= b[i]; j++)
        {
            dp[i][j] = (dp[i - 1][j] + dp[i][j - 1]) % mod;
        }
        for (j = b[i] + 1; j < 3001; j++)
            dp[i][j] = dp[i][j - 1];
        if (i == n - 1)
            cout << dp[i][b[i]];
    }
}
int main()
{
    ios::sync_with_stdio(false), cin.tie(nullptr);
    solve();
    return 0;
}