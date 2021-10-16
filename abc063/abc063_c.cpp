#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define rep(i, n) for (int i = 0; i < n; i++)
const int mod = 1e9 + 7; // 10^9 + 7;
const int N = 100;
///////////////////
/*
If no question whose score%10 != 0 return 0
else sumup all scores and check for divisibility by 0
if total%10 != 0; return total
else
total - smallest score which is not divisible by 10
then return score
*/
int n, scores[N], op;
void solve() {
    // Handle all zeros
    bool alzero = true;
    cin >> n;
    op = 0;
    rep(i, n) {
        cin >> scores[i];
        if (scores[i] % 10 != 0)
            alzero = false;
        op += scores[i];
    }
    if (alzero)
        return (void)(cout << "0");
    if (op % 10 != 0)
        return (void)(cout << op);
    sort(scores, scores + n);
    for (int i = 0; i < n; i++)
        if (scores[i] % 10 != 0) {
            op -= scores[i];
            break;
        }
    cout << op;
}
int main() {
    solve();
    return 0;
}