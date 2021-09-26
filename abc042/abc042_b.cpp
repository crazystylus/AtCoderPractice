#include <bits/stdc++.h>
using namespace std;
#define ll long long
//8:25
int main()
{
    ll n, l;
    cin >> n >> l;
    vector<string> arrStrings(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arrStrings[i];
    }
    sort(arrStrings.begin(), arrStrings.end());
    for (int i = 0; i < n; i++)
    {
        cout << arrStrings[i];
    }
    return 0;
}