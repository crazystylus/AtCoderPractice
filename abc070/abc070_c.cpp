#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define rep(i, n) for (int i = 0; i < n; i++)
const int mod = 1e9 + 7; //10^9 + 7;
const int N = 101;
///////////////////
// gcd(a,b,c) = gcd(a, gcd(b,c))
// lcm(a,b,c) = lcm(a,lcm(b,c))
ll n, arr[N];
ll op;
ll lcm(ll a, ll b)
{
  ll g = __gcd(a, b);
  return a / g * b;
}
void solve()
{
  cin >> n;
  rep(i, n)
          cin
      >> arr[i];
  op = arr[0];
  for (int i = 1; i < n; i++)
    op = lcm(op, arr[i]);
  cout << op << "\n";
}
int main()
{
  solve();
  return 0;
}
