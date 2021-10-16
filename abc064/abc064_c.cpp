#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define rep(i, n) for (int i = 0; i < n; i++)
const int mod = 1e9 + 7; // 10^9 + 7;
const int N = 1e5 + 1;
///////////////////
/*
mark colors in boolean array and then later sum up all trues (here stored rating). Increment arbitary if rating >= 3200
CASE 1: n == arbitary
    return (1,arbitary)
CASE 2: DEFAULT
    return (rating. rating+arbitary)
*/
bool pcolor[8];
int arbitary, n, rating;
void solve() {
    cin >> n;
    memset(pcolor, false, sizeof pcolor);
    arbitary = 0;
    rep(i, n) {
        cin >> rating;
        if (rating >= 3200)
            arbitary++;
        else if (rating >= 2800)
            pcolor[7] = true;
        else if (rating >= 2400)
            pcolor[6] = true;
        else if (rating >= 2000)
            pcolor[5] = true;
        else if (rating >= 1600)
            pcolor[4] = true;
        else if (rating >= 1200)
            pcolor[3] = true;
        else if (rating >= 800)
            pcolor[2] = true;
        else if (rating >= 400)
            pcolor[1] = true;
        else
            pcolor[0] = true;
    }
    rating = 0;
    rep(i, 8) if (pcolor[i]) rating++;
    if (n == arbitary)
        return (void)(cout << 1 << " " << arbitary);

    if (arbitary == 0)
        cout << rating << " " << rating;
    else
        cout << rating << " " << rating + arbitary;
}
int main() {
    solve();
    return 0;
}