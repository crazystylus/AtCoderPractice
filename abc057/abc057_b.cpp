#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define rep(i, n) for (int i = 0; i < n; i++)
const int mod = 1e9 + 7; //10^9 + 7;
const int N = 50;
///////////////////
// Bruteforce as the max limits are less

int n, m, dist, tsum;
int op;
void solve()
{
    cin >> n >> m;
    vector<pair<int, int>> students(n), checkpoint(m);
    rep(i, n)
            cin >>
        students[i].first >> students[i].second;
    rep(i, m)
            cin >>
        checkpoint[i].first >> checkpoint[i].second;
    for (auto s : students)
    {
        op = 0;
        dist = INT_MAX;
        rep(i, m)
        {
            tsum = abs(s.first - checkpoint[i].first) + abs(s.second - checkpoint[i].second);
            if (tsum < dist)
            {
                op = i;
                dist = tsum;
            }
        }
        printf("%d\n", op + 1);
    }
}
int main()
{
    solve();
    return 0;
}