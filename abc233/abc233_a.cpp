#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define rep(i, n) for (int i = 0; i < n; i++)
const int mod = 1e9 + 7; // 10^9 + 7;
const int N = 1e5 + 1;
///////////////////
// ANS =  Ceil(difference in value)/10.0
double x, y;
void solve() {
  cin >> x >> y;
  cout << (x < y ? ceil((y - x) / 10.0) : 0);
}
int main() {
  solve();
  return 0;
}
