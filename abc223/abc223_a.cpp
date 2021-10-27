#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define rep(i, n) for (int i = 0; i < n; i++)
const int mod = 1e9 + 7; // 10^9 + 7;
const int N = 1e5 + 1;
///////////////////
void solve() {
    int x;
    cin >> x;
    if (x >= 100 && x % 100 == 0) {
        cout << "Yes";
    } else {
        cout << "No";
    }
}
int main() {
    solve();
    return 0;
}