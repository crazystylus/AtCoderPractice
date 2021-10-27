#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define rep(i, n) for (int i = 0; i < n; i++)
const int mod = 1e9 + 7; // 10^9 + 7;
const int N = (1e5) * 2 + 1;
///////////////////
//
ll n, arrsuml, arrsumr, op;
ll arr[N];
void solve() {
    cin >> n;
    arrsuml = 0;
    arrsumr = 0;
    rep(i, n) {
        cin >> arr[i];
        arrsuml += arr[i];
    }
    op = INT_MAX;
    for (int i = n - 1; i >= 1; i--) {
        arrsumr += arr[i];
        arrsuml -= arr[i];
        op = min(op, abs(arrsuml - arrsumr));
    }
    cout << op;
}
int main() {
    solve();
    return 0;
}