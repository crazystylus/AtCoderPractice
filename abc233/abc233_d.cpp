#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define rep(i, n) for (int i = 0; i < n; i++)
const int mod = 1e9 + 7; // 10^9 + 7;
const int N = 1e5 + 1;
///////////////////
// Algorithm : Cumulative array with Map O(n log n)
// It can also be done using 2 for loops but might result in TLE
// Consider is a sub array arr starts at p and ends at q and has sum k
// For an equivalent cumulative array carr, we can say the following
//					carr[p] = carr[q] - k
// So while creating the cumulative array, we add carr[i]-k to map, which means
// i is a possible value for q for some p Then we can have a for loop and where
// remove current possition as end point and try to search possible options if
// we start subarray at i such that the sum is k If we don't drop current index
// as end point, we will have duplicate cases resulting in wrong answer
ll arr[200002], n, k;
void solve() {
  cin >> n >> k;
  ll op = 0;
  unordered_map<ll, ll> hm;
  arr[0] = 0;
  for (ll i = 1; i <= n; i++) {
    cin >> arr[i];
    arr[i] += arr[i - 1];
    if (arr[i] == k)
      op++;
    hm[arr[i] - k]++;
  }
  for (int i = 1; i < n; i++) {
    hm[arr[i] - k]--;
    op += hm[arr[i]];
  }
  cout << op << "\n";
}
int main() {
  solve();
  return 0;
}
