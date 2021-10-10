#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define rep(i, n) for (int i = 0; i < n; i++)
const int mod = 1e9 + 7; //10^9 + 7;
const int N = 1e5 + 1;
///////////////////
// Remainders repeat after a certain period. Use a map to break loop if they start repeating
int a, b, c, tmp;
unordered_map<int, bool> rem;
void solve()
{
    cin >> a >> b >> c;
    c = c % b;
    tmp = 0;
    while (true)
    {
        if (tmp % b == c)
            return (void)(cout << "YES");
        if (rem.find(tmp % b) != rem.end())
            break;
        rem[tmp % b] = true;
        tmp += a;
    }
    cout << "NO";
}
int main()
{
    solve();
    return 0;
}