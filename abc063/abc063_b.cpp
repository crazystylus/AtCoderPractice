#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define rep(i, n) for (int i = 0; i < n; i++)
const int mod = 1e9 + 7; // 10^9 + 7;
const int N = 1e5 + 1;
///////////////////
// Use a boolean map of 26 character array of bools to keep track
void solve() {
    unordered_map<char, bool> uniqc;
    string s;
    cin >> s;
    for (auto x : s) {
        if (uniqc.find(x) != uniqc.end()) {
            return (void)(cout << "no");
        }
        uniqc[x] = true;
    }
    cout << "yes";
}
int main() {
    solve();
    return 0;
}