#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define rep(i, n) for (int i = 0; i < n; i++)
const int mod = 1e9 + 7; //10^9 + 7;
const int N = 1e5 + 1;
///////////////////
// Simple maths
int a, b, c, d;
void solve()
{
  cin >> a >> b >> c >> d;
  cout << max(min(b, d) - max(a, c), 0);
}
int main()
{
  solve();
  return 0;
}
