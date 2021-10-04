#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define rep(i, n) for (int i = 0; i < n; i++)
const int mod = 1e9 + 7; //10^9 + 7;
const int N = 50;
///////////////////
// Basic Image shifting
char A[N][N], B[N][N];
int n, m, diff;
void solve()
{
    cin >> n >> m;
    rep(i, n)
            rep(j, n)
                cin >>
        A[i][j];
    rep(i, m)
            rep(j, m)
                cin >>
        B[i][j];
    diff = n - m + 1;
    bool flag = true;
    rep(x, diff)
        rep(y, diff)
    {
        flag = true;
        rep(i, m)
            rep(j, m) if (A[i + x][j + y] != B[i][j])
        {
            flag = false;
            // printf("%d %d, %d %d\n", i, j, x, y);
            break;
        }
        if (flag)
            return (void)(cout << "Yes");
    }
    cout << "No";
}
int main()
{
    solve();
    return 0;
}
