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
  cin >> n;
  int a;
  unordered_map<int, int> hm;
  rep(i, n) {
    cin >> a;
    if (hm.find(a) == hm.end())
      hm[a] = 1;
    else
      hm[a]++;
    if (hm.find(a + 1) == hm.end())
      hm[a + 1] = 1;
    else
      hm[a + 1]++;
    if (hm.find(a - 1) == hm.end())
      hm[a - 1] = 1;
    else
      hm[a - 1]++;
  }
  a = 0;
  n = 0;
  for (auto ele : hm)
    if (ele.second > a)
      a = ele.second;
  cout << a << "\n";
}
int main() {
  solve();
  return 0;
}
