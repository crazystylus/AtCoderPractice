#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define llu unsigned long long
/*
Part 1: Verify consistency of the report
If consistent print 2^((n-n%2)/2)
*/
int main()
{
    ll n, tmp;
    cin >> n;
    vector<ll> arr(n, -1);
    for (ll i = 0; i < n; i++)
    {
        cin >> tmp;
        if ((tmp + n - 1) % 2 != 0)
        {
            cout << "0\n";
            return 0;
        }
        if (arr[(tmp + n - 1) / 2] == -1)
        {
            arr[(tmp + n - 1) / 2] = i;
        }
        else if (arr[n - 1 - (tmp + n - 1) / 2] == -1)
        {
            arr[n - 1 - (tmp + n - 1) / 2] = i;
        }
        else
        {
            cout << "0\n";
            return 0;
        }
    }
    ll op = 1;
    for (int i = 0; i < (n - n % 2) / 2; i++)
    {
        op = (op << 1) % 1000000007;
    }
    cout << op;
    return 0;
}
