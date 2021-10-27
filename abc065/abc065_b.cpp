#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define rep(i, n) for (int i = 0; i < n; i++)
const int mod = 1e9 + 7; // 10^9 + 7;
const int N = 1e5 + 1;
// Simple Disjoint set union algorithm
int arr[N];
int counter, n, curr, tmp;
void solve() {
    cin >> n;
    rep(i, n) cin >> arr[i + 1];
    curr = 1;
    counter = 0;
    while (curr != -1) {
        tmp = curr;
        curr = arr[curr];
        arr[tmp] = -1;
        counter++;
        if (curr == 2)
            return (void)(cout << counter);
    }
    cout << -1;
}
int main() {
    solve();
    return 0;
}