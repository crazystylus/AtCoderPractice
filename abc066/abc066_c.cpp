#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define rep(i, n) for (int i = 0; i < n; i++)
const int mod = 1e9 + 7; // 10^9 + 7;
const int N = 1e5 + 1;
///////////////////
// Use boolean to alternate over push_front and push_back
int inp, n;
bool flap;
void solve() {
    flap = false;
    list<int> arr;
    cin >> n;
    rep(i, n) {
        cin >> inp;
        if (flap)
            arr.push_back(inp);
        else
            arr.push_front(inp);
        flap = !flap;
    }
    if (!flap)
        reverse(arr.begin(), arr.end());
    for (auto x : arr)
        cout << x << " ";
}
int main() {
    solve();
    return 0;
}