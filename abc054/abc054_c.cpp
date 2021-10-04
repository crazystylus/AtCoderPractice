#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define rep(i, n) for (int i = 0; i < n; i++)
const int mod = 1e9 + 7; //10^9 + 7;
const int N = 9;
const int M = 29;
///////////////////
// Simply do a DFS with parent array, save the dfs length in a counter and keep comparing till it equals n
vector<int> adj[N];
bool visited[N];
int n, m, a, b, cntr, vc;
void dfs(int u)
{
    visited[u] = true;
    vc++;
    // printf("%d(%d)->", u, vc);
    for (auto v : adj[u])
    {
        if (!visited[v])
            dfs(v);
    }

    if (vc == n)
        cntr++;
    visited[u] = false;
    vc--;
}
void solve()
{
    cin >> n >> m;
    rep(i, m)
    {
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    memset(visited, 0, sizeof visited);
    cntr = 0;
    vc = 0;
    dfs(1);
    cout << cntr;
}
int main()
{
    solve();
    return 0;
}