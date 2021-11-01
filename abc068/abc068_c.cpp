#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define rep(i, n) for (int i = 0; i < n; i++)
const int mod = 1e9 + 7; // 10^9 + 7;
const int N = (1e5) * 2 + 1;
///////////////////
// Apply DFS and restrict maxdepth to 2
int visited[N], n, m, a, b;
map<int, vector<int>> adj;
bool dfs(int u, int depth) {
    if (depth >= 2)
        return false;
    visited[u] = 1;
    for (auto v : adj[u])
        if (visited[v] == 0 && (v == n || dfs(v, depth + 1)))
            return true;
    visited[u] = 2;
    return false;
}

void solve() {
    cin >> n >> m;
    rep(i, m) {
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    cout << (dfs(1, 0) ? "POSSIBLE" : "IMPOSSIBLE");
}
int main() {
    solve();
    return 0;
}