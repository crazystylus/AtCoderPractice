#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define rep(i, n) for (int i = 0; i < n; i++)
const int mod = 1e9 + 7; // 10^9 + 7;
const int N = 1e5 + 1;
///////////////////
// Algorithm: if A[i] == i, we need to swap once
// if A[i] == i && A[i-1] == i-1, if we considered swapping at i-1, then we
// don't need to increment swap here
int n, a, op, aa;
void solve() {
  cin >> n;
  op = 0;
  aa = 0;
  rep(i, n) {
    cin >> a;
    if (a == i + 1) {
      if (a > 1 && i == aa)
        continue;
      else
        op++;
    }
    aa = a;
  }
  cout << op << "\n";
}
int main() {
  solve();
  return 0;
}
