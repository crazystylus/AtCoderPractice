#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define rep(i, n) for (int i = 0; i < n; i++)
const int mod = 1e9 + 7; // 10^9 + 7;
const int N = 1e5 + 1;
///////////////////
// Simple match substring
void solve() {
    string s;
    cin >> s;
    int n = s.length();
    for (int i = 2; i < n; i += 2)
        if (s.substr(0, (n - i) / 2) == s.substr((n - i) / 2, (n - i) / 2))
            return (void)(cout << n - i << "\n");
}
int main() {
    solve();
    return 0;
}