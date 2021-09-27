#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define llu unsigned long long
// Ref: https://github.com/cocoa-maemae/atcoder/blob/master/abc/abc061/many_formulas.py
// Ref: https://atcoder.jp/contests/abc045/submissions/26090258
/*
Algorithm: Brute force
1<len(S)<= 2^9
'+' -> 1
'' -> 0
using binary representation of numbers
*/
int main()
{
    string s;
    cin >> s;
    vector<int> number;
    number.reserve(s.length());
    for (auto x : s)
    {
        number.push_back(x - '0');
    }
    ll maxbit = 1 << (s.length() - 1);
    ll tmp, n = s.length(), op = 0;
    for (ll i = 0; i < maxbit; i++)
    {
        tmp = 0;
        for (ll j = 0; j < n - 1; j++)
        {
            tmp = tmp * 10 + number[j];
            if (i & (1 << j))
            {
                op += tmp;
                tmp = 0;
            }
        }
        // If we have + in last tmp = 0 and this will work
        // If we have ' ' in last, tmp = tmp*10 and last digit will be added
        // NOTE: last digit will always come at units place
        op += tmp * 10 + number[n - 1];
    }
    cout << op;
    return 0;
}
