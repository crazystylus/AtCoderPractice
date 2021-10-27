#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define rep(i, n) for (int i = 0; i < n; i++)
const int mod = 1e9 + 7; // 10^9 + 7;
const int N = 1e5 + 1;
///////////////////
// Insert n entries in max heap and pop and sum top k entries
int n, k, inp;
ll op;
priority_queue<int> pq1;
void solve() {
    cin >> n >> k;
    rep(i, n) {
        cin >> inp;
        pq1.push(inp);
    }
    op = 0;
    while (k--) {
        op += pq1.top();
        pq1.pop();
    }
    cout << op << "\n";
}
int main() {
    solve();
    return 0;
}