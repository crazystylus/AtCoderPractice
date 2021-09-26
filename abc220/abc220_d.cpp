#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int64_t arr[n], dp[n][10], tmp, modo = 998244353;
    memset(dp, 0, sizeof dp);
    for (int64_t i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    dp[0][arr[0]] = 1;
    for (int64_t i = 0; i < n; i++)
    {
        for (int64_t j = 0; j < 10; j++)
        {
            if (dp[i][j] == 0)
            {
                continue;
            }
            tmp = (j + arr[i + 1]) % 10;
            dp[i + 1][tmp] = (dp[i][j] + dp[i + 1][tmp]) % modo;
            tmp = (j * arr[i + 1]) % 10;
            dp[i + 1][tmp] = (dp[i][j] + dp[i + 1][tmp]) % modo;
        }
    }
    for (int64_t i = 0; i < 10; i++)
    {
        cout << dp[n - 1][i] << endl;
    }
    return 0;
}