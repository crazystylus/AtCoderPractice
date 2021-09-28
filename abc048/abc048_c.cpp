#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define llu unsigned long long
/*
User 2 block sliding window.
Check how much needs to be reduced from window sum
reduce the amount from 2nd element in window
ensure that end element is >= 0
*/
int main()
{
    ll n, x, op = 0;
    ll zero = 0;
    ll prev, curr;
    cin >> n >> x;
    cin >> prev;
    n--;
    while (n--)
    {
        cin >> curr;
        if (prev + curr > x)
        {
            op += (prev + curr - x);
            curr = max(curr - (curr + prev - x), zero);
        }
        prev = curr;
    }
    cout << op;
    return 0;
}
