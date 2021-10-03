#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define llu unsigned long long
// Simple brute force
int main()
{
    ll k, s, op = 0;
    cin >> k >> s;
    for (int i = 0; i <= k; i++)
    {
        for (int j = 0; j <= k; j++)
        {
            if ((s - i - j) >= 0 && (s - i - j) <= k)
                op++;
        }
    }
    cout << op;
    return 0;
}
