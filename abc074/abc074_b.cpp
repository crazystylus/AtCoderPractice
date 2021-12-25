#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define rep(i, n) for (int i = 0; i < n; i++)
const int mod = 1e9 + 7; // 10^9 + 7;
const int N = 1e5 + 1;
///////////////////
// Check for min distance from Robot A and Robot B

void solve() {
  int n, k, x, op = 0;
  cin >> n >> k;
  rep(i, n) {
    cin >> x;
    op += min(x, abs(x - k)) * 2;
  }
  cout << op << "\n";
}
int main() {
  solve();
  return 0;
}
