#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define rep(i, n) for (int i = 0; i < n; i++)
const int mod = 1e9 + 7; // 10^9 + 7;
const int N = 1e5 + 1;
///////////////////
/*
Consider all 6 possible cases.
Use Ceil/Floor both in Case 3-4
Store a1,a2,a3 separately to avoid calculation confusion
Use floor on 2nd cut to directly get the one with smaller area (Only works in case 1 & 2)
In case 3-4 compare a1,a2,a3 all of them to get largest and smallest
*/
ll h, w, op, a1, a3, h1, w1;
void solve() {
    op = INT_MAX;
    cin >> h >> w;
    // Case 1: 2 horizontal cuts
    h1 = ceil(h / 3.0);
    a1 = h1 * w;
    a3 = floor((h - h1) / 2.0) * w;
    op = min(op, abs(a1 - a3));
    // cout << op << " ";
    // Case 2: 2 vertical cuts
    w1 = ceil(w / 3.0);
    a1 = w1 * h;
    a3 = floor((w - w1) / 2.0) * h;
    op = min(op, abs(a1 - a3));
    // cout << op << " ";
    // Case 3: 1 horizontal, 1 vertical cut
    h1 = ceil(h / 3.0);
    a1 = h1 * w;
    a3 = floor(w / 2.0) * (h - h1);
    op = min(op, abs(a1 - a3));
    // cout << op << " ";
    // Recalculate a1 as it's not the biggest area as we have not used ceil
    // a1 can also be the smallest
    h1 = floor(h / 3.0);
    a1 = h1 * w;
    a3 = floor(w / 2.0) * (h - h1);
    a3 = min(a3, a1);
    a1 = max(double(a1), ceil(w / 2.0) * (h - h1));
    op = min(op, abs(a1 - a3));
    // cout << op << " ";
    // Case 4: 1 vertical, 1 horizopntal cut
    w1 = ceil(w / 3.0);
    a1 = w1 * h;
    a3 = floor(h / 2.0) * (w - w1);
    op = min(op, abs(a1 - a3));
    // cout << op << " ";
    // Recalculate a1 as it's not the biggest area as we have not used ceil
    // a1 can also be the smallest
    w1 = floor(w / 3.0);
    a1 = w1 * h;
    a3 = floor(h / 2.0) * (w - w1);
    a3 = min(a3, a1);
    a1 = max(double(a1), ceil(h / 2.0) * (w - w1));
    op = min(op, abs(a1 - a3));
    cout << op;
}
int main() {
    solve();
    return 0;
}