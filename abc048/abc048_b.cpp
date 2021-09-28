#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define llu unsigned long long
// Use mod for taking ceil in case of a/x
int main()
{
    llu a, b, x, q1, q2;
    cin >> a >> b >> x;
    q1 = a / x;
    q2 = b / x;
    if (a % x != 0)
    {
        q1++;
    }
    cout << q2 - q1 + 1;
    return 0;
}
