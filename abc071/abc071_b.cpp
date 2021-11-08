#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define rep(i, n) for (int i = 0; i < n; i++)
const int mod = 1e9 + 7; //10^9 + 7;
const int N = 1e5 + 1;
///////////////////
// Use an array to track visited characters
bool arr[256];
void solve()
{
  memset(arr, false, sizeof arr);
  string s;
  cin >> s;
  for (auto ele : s)
    arr[ele] = true;
  for (int i = 'a'; i <= 'z'; i++)
    if (!arr[i])
      return (void)(cout << (char)i << "\n");
  cout << "None\n";
}
int main()
{
  solve();
  return 0;
}
