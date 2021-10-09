#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define rep(i, n) for (int i = 0; i < n; i++)
const int mod = 1e9 + 7; //10^9 + 7;
const int N = 1e5 + 1;
string s;
///////////////////
void solve()
{
    cin >> s;
    string t = string(4 - s.length(), '0');
    cout << t << s;
}
int main()
{
    solve();
    return 0;
}