#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define rep(i, n) for (int i = 0; i < n; i++)
const int mod = 1e9 + 7; //10^9 + 7;
const int N = 1e5 + 1;
///////////////////
// Compare the string starting at MSB if of same length
// Else just compare the string length as mentions non of them are prefixed with 0s
string a, b;
void solve()
{
    cin >> a >> b;
    if (a.length() > b.length())
        return (void)(cout << "GREATER");
    else if (a.length() < b.length())
        return (void)(cout << "LESS");
    rep(i, a.length())
    {
        if (a[i] == b[i])
            continue;
        if (a[i] > b[i])
            return (void)(cout << "GREATER");
        else
            return (void)(cout << "LESS");
    }
    cout << "EQUAL";
}
int main()
{
    solve();
    return 0;
}