#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define rep(i, n) for (int i = 0; i < n; i++)
const int mod = 1e9 + 7; //10^9 + 7;
const int N = 50 + 1;
///////////////////
// Count the degree of each city
int ndeg[N] = {0};
int n, m, a, b;
void solve()
{
    cin >> n >> m;
    rep(i, m)
    {
        cin >> a >> b;
        ndeg[a]++;
        ndeg[b]++;
    }
    for (int i = 1; i <= n; i++)
        cout << ndeg[i] << "\n";
}
int main()
{
    solve();
    return 0;
}