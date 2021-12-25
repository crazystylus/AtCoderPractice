#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define rep(i, n) for (int i = 0; i < n; i++)
const int mod = 1e9 + 7; // 10^9 + 7;
const int N = 1e5 + 1;
///////////////////
int n;
void solve() {
  int a;
  unordered_map<int, bool> hm;
  cin >> n;
  rep(i, n) {
    cin >> a;
    if (hm.find(a) == hm.end())
      hm[a] = true;
    else
      hm.erase(a);
  }
  cout << hm.size() << "\n";
}
int main() {
  solve();
  return 0;
}
