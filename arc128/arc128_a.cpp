#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define rep(i, n) for (int i = 0; i < n; i++)
const int mod = 1e9 + 7; // 10^9 + 7;
const int N = 200000 + 1;
///////////////////
int n, arr[N];
int action[N] = {0};
void solve() {
    cin >> n;
    rep(i, n) cin >> arr[i];
    for (int i = 0; i < n - 1; i++)
        if (arr[i] > arr[i + 1]) {
            action[i] ^= 1;
            action[i + 1] ^= 1;
        }
    for (int i = 0; i < n; i++)
        cout << action[i] << " ";
}
int main() {
    solve();
    return 0;
}
