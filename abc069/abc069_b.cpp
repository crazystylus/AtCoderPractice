#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define rep(i, n) for (int i = 0; i < n; i++)
const int mod = 1e9 + 7; // 10^9 + 7;
const int N = 1e5 + 1;
///////////////////
// Simple s.length()-2
void solve() {
    string s;
    cin >> s;
    cout << s[0] << s.length() - 2 << s[s.length() - 1] << "\n";
}
int main() {
    solve();
    return 0;
}