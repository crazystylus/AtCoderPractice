#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define rep(i, n) for (int i = 0; i < n; i++)
const int mod = 1e9 + 7; // 10^9 + 7;
const int N = 1e5 + 1;
///////////////////
/*
categorize numbers into 3 types, divisible by 2 (div2), divisible by 4 (div4), others (divn)
There can be 3 cases
CASE 1: "1 4 1 4 1"
CASE 2: "1 4 1 4 1 2"
CASE 2: "1 4 1 4 1 2 2"
So after pairing div4 with divn-1 we need to have spare div4's to pair with div2 if div2 is odd
*/
int n, div2, div4, divn;
void solve() {
    cin >> n;
    div2 = 0;
    div4 = 0;
    divn = 0;
    vector<int> arr(n);
    rep(i, n) {
        cin >> arr[i];
        if (arr[i] % 4 == 0)
            div4++;
        else if (arr[i] % 2 == 0)
            div2++;
        else
            divn++;
    }
    if (divn == div4 || (divn - 1 <= div4 && div2 % 2 <= (div4 - divn + 1)))
        cout << "Yes\n";
    else
        cout << "No\n";
}
int main() {
    solve();
    return 0;
}