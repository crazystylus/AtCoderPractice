#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define rep(i, n) for (int i = 0; i < n; i++)
const int mod = 1e9 + 7; // 10^9 + 7;
const int N = 100;
///////////////////
// Sort all elements and sum all difference between 2 consecutive elements
int n, adj[N];
int op;
void solve() {
    cin >> n;
    rep(i, n) cin >> adj[i];
    sort(adj, adj + n);
    rep(i, n - 1) { op += adj[i + 1] - adj[i]; }
    cout << op;
}
int main() {
    solve();
    return 0;
}