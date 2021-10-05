#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define rep(i, n) for (int i = 0; i < n; i++)
const int mod = 1e9 + 7; //10^9 + 7;
const int N = 1e5 + 1;
///////////////////
/*
swap a & b to ensure a < b
Check if the rectanles are connected, if so return 0
else
    return distance between (a+w) and b
*/
void solve()
{
    ll w, a, b, tmp;
    cin >> w >> a >> b;
    if (a > b)
    {
        tmp = a;
        a = b;
        b = tmp;
    }

    if (a + w < b)
        cout << (b - a - w);
    else
        cout << 0;
}
int main()
{
    solve();
    return 0;
}