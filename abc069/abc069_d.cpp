#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define rep(i, n) for (int i = 0; i < n; i++)
const int mod = 1e9 + 7; // 10^9 + 7;
const int N = 100 + 1;
///////////////////
// Alternate the direction of 2nd loop to get the answer
int arr[N][N] = {0}, colors[N * N];
int n, h, w;
void solve() {
    cin >> h >> w >> n;
    rep(i, n) cin >> colors[i + 1];
    int currCol = 1;
    bool flag = true; // paint direction
    for (int i = 0; i < h; i++) {
        if (flag)
            for (int j = 0; j < w; j++) {
                if (colors[currCol] == 0)
                    currCol++;
                arr[i][j] = currCol;
                colors[currCol]--;
            }
        else
            for (int j = w - 1; j >= 0; j--) {
                if (colors[currCol] == 0)
                    currCol++;
                arr[i][j] = currCol;
                colors[currCol]--;
            }
        flag = !flag;
    }
    rep(i, h) {
        rep(j, w) cout << arr[i][j] << " ";
        cout << "\n";
    }
}
int main() {
    solve();
    return 0;
}
