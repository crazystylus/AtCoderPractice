#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define rep(i, n) for (int i = 0; i < n; i++)
const int mod = 1e9 + 7; //10^9 + 7;
const int N = 1e5 + 1;
///////////////////
int n, p;
int ctr, tmp;
void solve()
{
    cin >> n >> p;
    ctr = 0;
    while (n--)
    {
        cin >> tmp;
        if (tmp < p)
            ctr++;
    }
    cout << ctr;
}
int main()
{
    solve();
    return 0;
}