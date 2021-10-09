#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define rep(i, n) for (int i = 0; i < n; i++)
const int mod = 1e9 + 7; //10^9 + 7;
const int N = 1e5 + 1;
///////////////////
int64_t xmin, xmax, ymin, ymax, n, m, tmp, area, op;
void solve()
{
    cin >> n >> m;
    xmin = INT_MAX;
    xmax = INT_MIN;
    ymin = xmin;
    ymax = xmax;
    rep(i, n)
    {
        cin >> tmp;
        xmin = min(xmin, tmp);
        xmax = max(xmax, tmp);
    }
    rep(i, m)
    {
        cin >> tmp;
        ymin = min(ymin, tmp);
        ymax = max(ymax, tmp);
    }
    area = (xmax - xmin) * (ymax - ymin);
    op = area;
    for (int i = 0; i < (n - 1) * (m - 1); i++)
        op = (op + area) % mod;
    cout << op;
}
int main()
{
    solve();
    return 0;
}