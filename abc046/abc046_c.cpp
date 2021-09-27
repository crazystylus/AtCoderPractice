#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define llu unsigned long long
// Ref: https://atcoder.jp/contests/abc046/submissions/25726258
/*
You can asume you have started with a,b
then if the input is x,y

You need to find the min value of i such that i*x >= a and  i*y >=b
If using non float, you need to use mod% to detect if the floor of a/x is actually a/x+1. You will add 1 if a/x remainder is non 0

*/
int main()
{
    ll n;
    scanf("%lld", &n);
    ll a = 1, b = 1;
    ll x, y;
    ll div1, div2, maxdiv;
    while (n--)
    {
        scanf("%lld %lld", &x, &y);
        div1 = a / x;
        div2 = b / y;
        if (a % x != 0)
        {
            div1++;
        }
        if (b % y != 0)
        {
            div2++;
        }
        maxdiv = max(div1, div2);
        a = x * maxdiv;
        b = y * maxdiv;
        // printf("%lld %lld \n", a, b);
    }
    cout << (a + b);
    return 0;
}
