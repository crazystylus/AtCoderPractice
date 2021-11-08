#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define rep(i, n) for (int i = 0; i < n; i++)
const int mod = 1e9 + 7; //10^9 + 7;
const int N = 1e5 + 1;
///////////////////
// Create a Max heap from input and pop till we get 2 pairs
// If we don't get 2 pairs print 0
// else print product of 2 pairs
ll n, a;
void solve()
{
  cin >> n;
  priority_queue<ll> pq;
  rep(i, n)
  {
    cin >> a;
    pq.push(a);
  }
  vector<ll> l;
  a = pq.top();
  pq.pop();
  while (!pq.empty() && l.size() < 2) {
    if (a == pq.top()) {
      l.push_back(a);
      pq.pop();
    }
    if (pq.empty())
      break;
    a = pq.top();
    pq.pop();
  }
  if (l.size() == 2)
    cout << l[0] * l[1] << "\n";
  else
    cout << "0\n";
}
int main()
{
  solve();
  return 0;
}
