#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define rep(i, n) for (int i = 0; i < n; i++)
const int mod = 1e9 + 7; //10^9 + 7;
const int N = 1e5 + 1;
int arr[50][26];
///////////////////
// Get min count of each character considering all n strings
// Use that count to construct the string
string st[50];
int n, amin;
void solve()
{
    cin >> n;
    rep(i, n)
    {
        cin >> st[i];
        rep(j, 26)
            arr[i][j] = 0;
        for (auto x : st[i])
            arr[i][x - 'a']++;
    }
    string op;
    rep(i, 26)
    {
        amin = INT_MAX;
        rep(j, n)
        {
            amin = min(amin, arr[j][i]);
            if (amin == 0)
                break;
        }
        if (amin == 0)
            continue;
        op = op + string(amin, (char)(i + 'a'));
    }
    cout << op;
}
int main()
{
    solve();
    return 0;
}