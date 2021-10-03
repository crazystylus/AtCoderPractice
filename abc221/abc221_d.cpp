#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define rep(i, n) for (int i = 0; i < n; i++)
const int mod = 1e9 + 7; //10^9 + 7;
const int N = 1e5 * 2 + 1;
///////////////////
int n, a, b, s;
vector<pair<int, int>> hist;
int d[N];
void solve()
{
    memset(d, 0, sizeof d);
    cin >> n;
    rep(i, n)
    {
        cin >> a >> b;
        hist.push_back({a, 1});
        hist.push_back({a + b, -1});
    }
    sort(hist.begin(), hist.end());
    s = 0;
    rep(i, hist.size() - 1)
    {
        s += hist[i].second;
        d[s] += (hist[i + 1].first - hist[i].first);
    }
    rep(i, n)
            cout
        << d[i + 1] << " ";
}
int main()
{
    solve();
    return 0;
}
