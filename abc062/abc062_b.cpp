#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define rep(i, n) for (int i = 0; i < n; i++)
const int mod = 1e9 + 7; // 10^9 + 7;
const int N = 1e5 + 1;
///////////////////
char tmp, border = '#';
int h, w;
void solve() {
    cin >> h >> w;
    cout << string(w + 2, border) << "\n";
    rep(i, h) {
        cout << border;
        rep(j, w) {
            cin >> tmp;
            cout << tmp;
        }
        cout << border << "\n";
    }
    cout << string(w + 2, border);
}
int main() {
    solve();
    return 0;
}