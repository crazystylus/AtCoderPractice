#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define rep(i, n) for (int i = 0; i < n; i++)
const int mod = 1e9 + 7; //10^9 + 7;
const int N = 1e5 + 1;
///////////////////
/*
Let S(n) represent sum of first n natural numbers
Then find n such that,
S(n) >= x > S(n-1)
You can simply take sqrt if 2x and reduce till you get n-1 and return n
*/
void solve()
{
    ll x, n, nsum;
    cin >> x;
    n = sqrt(x * 2);
    nsum = ((n + 1) * n) / 2;
    while (nsum >= x)
    {
        nsum -= n;
        n--;
    }
    cout << n + 1;
}
int main()
{
    solve();
    return 0;
}