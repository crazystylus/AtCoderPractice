#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define rep(i, n) for (int i = 0; i < n; i++)
const int mod = 1e9 + 7; // 10^9 + 7;
const int N = 1e5 + 1;
///////////////////
// Simple PnC
ll a, b, tmp;
ll fact(ull a) {
    ull fact = 1;
    while (a > 1)
        fact = (fact * (a--)) % mod;
    return fact;
}
void solve() {
    cin >> a >> b;
    if (abs(a - b) > 1)
        return (void)(cout << "0\n");
    if (a < b) {
        tmp = a;
        a = b;
        b = tmp;
    }
    ll op = fact(b);
    op = (op * op) % mod;
    if (a == b)
        op = (op * 2) % mod;
    else
        op = (op * a) % mod;
    cout << op << "\n";
}
int main() {
    solve();
    return 0;
}