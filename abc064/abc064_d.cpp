#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define rep(i, n) for (int i = 0; i < n; i++)
const int mod = 1e9 + 7; // 10^9 + 7;
const int N = 100;
///////////////////
/*
Consider '(' = 0 and ')' = 1 to find lexocigraphically smallest
Ideally you need to insert '(' in the start of string and ')' at the end of string to
get lexicographyically smallest bracket sequence.
Keep 2 array representing bracket count at every element;
Keep 2 counters representing how many ( and ) to insert
check the bracket count and every element and make corrections and also increment the counters
then construct the string by keeping original one in the middle
*/
int p1[N] = {0}, p2[N] = {0};
int n;
string brack;
void solve() {
    cin >> n >> brack;
    string op = "";
    int bo = 0, bc = 0;
    rep(i, n) {
        if (brack[i] == '(') {
            p1[i] = p1[(i - 1) % N] + 1;
            p2[i] = p2[(i - 1) % N];
        } else {
            p2[i] = p2[(i - 1) % N] + 1;
            p1[i] = p1[(i - 1) % N];
            if (p2[i] > p1[i]) {
                bo++;
                p1[i]++;
            }
        }
    }
    if (p1[n - 1] > p2[n - 1]) {
        bc = p1[n - 1] - p2[n - 1];
    }
    cout << string(bo, '(') + brack + string(bc, ')');
    cout << op;
}
int main() {
    solve();
    return 0;
}