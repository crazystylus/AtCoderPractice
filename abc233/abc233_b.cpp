#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define rep(i, n) for (int i = 0; i < n; i++)
const int mod = 1e9 + 7; // 10^9 + 7;
const int N = 1e5 + 1;
///////////////////
// Simple swap the elements in the input range
void solve() {
  int l, r;
  cin >> l >> r;
  string inp;
  cin >> inp;
  char tmp;
  l--;
  r--;
  for (int i = 0; i <= (r - l)/2; i++) {
    tmp = inp[l + i];
    inp[l + i] = inp[r - i];
    inp[r - i] = tmp;
  }

  cout << inp << "\n";
}
int main() {
  solve();
  return 0;
}
