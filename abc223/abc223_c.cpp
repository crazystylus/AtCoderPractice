#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define rep(i, n) for (int i = 0; i < n; i++)
const int mod = 1e9 + 7; // 10^9 + 7;
const int N = 1e5 + 1;
///////////////////
// Calculate T/2 and then do a linear search
// Track time in c[] in cumulative way
int a[N], n, b[N];
double c[N];
void solve() {
    cin >> n;
    double total = 0;
    rep(i, n) {
        cin >> a[i] >> b[i];
        c[i] = a[i] / double(b[i]);
        if (i > 0)
            c[i] += c[i - 1];
    }
    total = c[n - 1] / 2.0;
    int ans = 0;
    if (c[0] >= total) {
        return (void)(cout << (total)*b[0]);
    }
    ans += a[0];
    for (int i = 0; i < n - 1; i++) {
        // Here i th fuse is already burnt and will be checking how much of i+1 th fuse will burn
        if (c[i] <= total && c[i + 1] >= total) {
            return (void)(cout << double(ans) + (total - c[i]) * b[i + 1]);
        }
        ans += a[i + 1];
    }
}
int main() {
    solve();
    return 0;
}