#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define rep(i, n) for (int i = 0; i < n; i++)
const int mod = 1e9 + 7; //10^9 + 7;
const int N = 1e5 + 1;
ll n, a, b;
///////////////////
/*
Find SQRT and reduce it till you get 0 as remainder on division with n
if n is prime a will reduce to 1
else you will get the best value of a
then find b using n/a
then equate them into the function to get the answer
*/
int digits(ll a)
{
    int op = 0;
    while (a > 0)
    {
        a /= 10;
        op++;
    }
    return op;
}
void solve()
{
    cin >> n;
    a = sqrt(n);
    while (n % a != 0 && a > 1)
        a--;
    cout << max(digits(a), digits(n / a));
}
int main()
{
    solve();
    return 0;
}