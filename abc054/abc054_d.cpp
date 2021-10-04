#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define rep(i, n) for (int i = 0; i < n; i++)
const int mod = 1e9 + 7; //10^9 + 7;
const int N = 41;
///////////////////
// DP: 1 or 0 Knapsac
// Don't take GCD in mid calculation, calculation will become wrong
int a[N], b[N], c[N];
int dp[N][400][400];
int n, ma, mb, t1, t2, tgcd;
void solve()
{
    cin >> n >> ma >> mb;
    rep(i, n + 1)
        rep(j, 400)
            rep(k, 400)
                dp[i][j][k] = 4001;
    rep(i, n)
            cin >>
        a[i] >> b[i] >> c[i];
    dp[0][0][0] = 0;
    rep(i, n)
        rep(x, 400)
            rep(y, 400)
    {
        if (dp[i][x][y] == 4001)
            continue;
        dp[i + 1][x][y] = min(dp[i + 1][x][y], dp[i][x][y]);
        // printf("dp[%d][%d][%d]=%d\n", i + 1, x, y, dp[i + 1][y][x]);
        t1 = x + a[i];
        t2 = y + b[i];
        dp[i + 1][t1][t2] = min(dp[i + 1][t1][t2], dp[i][x][y] + c[i]);
        // printf("dp[%d][%d][%d]=%d\n", i + 1, t1, t2, dp[i + 1][t1][t2]);
    }
    for (int x = 1; x < 400; x++)
        for (int y = 1; y < 400; y++)
            if (dp[n][x][y] != 4001)
            {
                tgcd = __gcd(x, y);
                t1 = x / tgcd;
                t2 = y / tgcd;
                dp[n][t1][t2] = min(dp[n][t1][t2], dp[n][x][y]);
            }
    cout << ((dp[n][ma][mb] == 4001) ? -1 : dp[n][ma][mb]);
}
int main()
{
    solve();
    return 0;
}