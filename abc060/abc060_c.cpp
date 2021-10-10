#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define rep(i, n) for (int i = 0; i < n; i++)
const int mod = 1e9 + 7; //10^9 + 7;
const int N = 1e5 + 1;
///////////////////
/*
Handle ti = 0 separately
Keep a separate counter till to check till when shower was expected to run when pressed by previous person and compare with input

Keeping a relative counter is possible but will make it tricky to write the code
*/
int n, t, inp;
ll op, till;
bool flag;
void solve()
{
    cin >> n >> t;
    op = 0;
    flag = false;
    while (n--)
    {
        cin >> inp;
        if (flag)
        {
            if (inp >= till)
            {
                till = inp + t;
                op += t;
            }
            else
            {
                op = op + (inp + t - till);
                till = inp + t;
            }
        }
        else
        {
            flag = true;
            op += t;
            till = t;
        }
    }
    cout << op;
}
int main()
{
    solve();
    return 0;
}