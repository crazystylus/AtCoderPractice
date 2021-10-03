#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define llu unsigned long long
int main()
{
    string inp;
    ll op = 0, x = 0, n;
    cin >> n;
    cin >> inp;
    for (int i = 0; i < n; i++)
    {
        if (inp[i] == 'I')
        {
            x++;
            op = max(op, x);
        }
        else if (inp[i] == 'D')
        {
            x--;
        }
    }
    cout << op;
    return 0;
}
