#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define rep(i, n) for (int i = 0; i < n; i++)
const int mod = 1e9 + 7; // 10^9 + 7;
const int N = 1e5 + 1;
///////////////////
void solve() {
    string s;
    cin >> s;
    if (s.length() == 1)
        return (void)(cout << s << "\n" << s);
    vector<string> arr;
    arr.push_back(s);
    int n = s.length();
    for (int i = 1; i < n; i++) {
        arr.push_back(s.substr(i, n - i) + s.substr(0, i));
    }
    sort(arr.begin(), arr.end());
    cout << arr[0] << "\n" << arr[arr.size() - 1];
}
int main() {
    solve();
    return 0;
}