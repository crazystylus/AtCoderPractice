#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define llu unsigned long long

int main()
{
    string s;
    cin >> s;

    vector<ll> arr(s.length(), 0);
    for (ll i = 0; i < s.length(); i++)
    {
        arr[i] = (s[i] - '0');
    }
    sort(arr.begin(), arr.end());
    reverse(arr.begin(), arr.end());
    ll n1 = 0, n2 = 0;
    for (auto x : arr)
    {
        // cout << x << "\n";
        if (n1 < n2)
        {
            n1 = n1 * 10 + x;
        }
        else
        {
            n2 = n2 * 10 + x;
        }
    }
    ll op = n1 * n2;
    cout << op;
    return 0;
}
