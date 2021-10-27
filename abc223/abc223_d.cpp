#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define rep(i, n) for (int i = 0; i < n; i++)
const int mod = 1e9 + 7; // 10^9 + 7;
const int N = (1e5) * 2 + 1;
///////////////////
// Store A->B edges
// Use Topological Sorting to get the correct permutation
int n, m, a, b;
vector<int> op;
int indegree[N];
map<int, vector<int>> adj;
void solve() {
    cin >> n >> m;
    memset(indegree, 0, sizeof indegree);
    rep(i, m) {
        cin >> a >> b;
        adj[a].push_back(b);
        indegree[b]++;
    }
    // Let Priority Queue arrange the nodes that can be visited in lexicographical order
    priority_queue<int, vector<int>, greater<int>> pq1;
    for (int i = 1; i <= n; i++)
        if (indegree[i] == 0)
            pq1.push(i);
    while (!pq1.empty()) {
        a = pq1.top();
        pq1.pop();
        for (auto v : adj[a])
            if (--indegree[v] == 0)
                pq1.push(v);
        op.push_back(a);
    }
    if (op.size() != n)
        return (void)(cout << "-1\n");
    for (int i = 0; i < op.size(); i++)
        cout << op[i] << (i + 1 == op.size() ? '\n' : ' ');
}
int main() {
    solve();
    return 0;
}