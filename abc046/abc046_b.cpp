#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define llu unsigned long long
// 4m
/*
Number of ways to paint 1st ball : k
Number of ways to paint next ball: (k-1)
... n-1 times
ANS -> k * (k-1)^(n-1)
*/
int main()
{
    ll n, k;
    cin >> n >> k;
    ll op = k * pow(k - 1, n - 1);
    cout << op;
    return 0;
}
