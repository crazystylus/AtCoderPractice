#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define rep(i, n) for (int i = 0; i < n; i++)
const int mod = 1e9 + 7; //10^9 + 7;
const int N = 1e5 + 1;
///////////////////
// the value of k is constant and the graph is a tree so no loops
// Hence we can perform DFS and store the distance form k in an array and keep track of parent to avoid looping
map<int, vector<pair<int, ll>>> adj;
map<int, ll> arr;
int n, a, b, c;
void dfs(int u, int parent)
{
  for (auto v : adj[u])
    if (v.first == parent)
      continue;
    else {
      arr[v.first] = v.second + arr[u];
      dfs(v.first, u);
    }
}
void solve()
{
  int q, k;
  cin >> q >> k;
  arr[k] = 0;
  dfs(k, 0);
  rep(i, q)
  {
    cin >> a >> b;
    cout << arr[a] + arr[b] << "\n";
  }
}
int main()
{
  cin >> n;
  rep(i, n - 1)
  {
    cin >> a >> b >> c;
    adj[a].push_back({ b, c });
    adj[b].push_back({ a, c });
  }
  solve();
  return 0;
}
