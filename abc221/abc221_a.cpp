#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define llu unsigned long long

int main()
{
    ll a, b;
    cin >> a >> b;
    cout << (1 << ((a - b) * 5));
    return 0;
}
