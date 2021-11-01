#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define rep(i, n) for (int i = 0; i < n; i++)
const int mod = 1e9 + 7; // 10^9 + 7;
const int N = 1e5 + 1;
///////////////////
// multiply 1 with 2 till it is <= n
int n, op;
void solve() {
    op = 1;
    cin >> n;
    // if (n == 1)
    //     return (void)(cout << "0\n");
    while (op <= n)
        op = op << 1;
    cout << op / 2 << '\n';
}
int main() {
    solve();
    return 0;
}