#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define llu unsigned long long
int main()
{
    ll sx, sy, tx, ty;
    cin >> sx >> sy >> tx >> ty;
    ll u = ty - sy, r = tx - sx;
    char uc = 'U', rc = 'R';
    cout << string(r, 'R') << string(u, 'U');
    cout << string(r, 'L') << string(u, 'D');
    cout << 'D' << string(r + 1, 'R') << string(u + 1, 'U') << 'L';
    cout << 'U' << string(r + 1, 'L') << string(u + 1, 'D') << 'R';
    return 0;
}
