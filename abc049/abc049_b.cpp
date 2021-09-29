#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define llu unsigned long long
// 0:27
// 0:41
int main()
{
    ll h, w;
    cin >> h >> w;
    vector<vector<bool>> inp(h, vector<bool>(w));
    char tmp;
    for (int i = 0; i < h; i++)
        for (int j = 0; j < w; j++)
        {
            cin >> tmp;
            if (tmp == '*')
                inp[i][j] = true;
        }
    for (int i = 0; i < 2 * h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            if (inp[(round(i + 2) / 2.0) - 1][j])
            {
                cout << "*";
            }
            else
            {
                cout << ".";
            }
        }
        cout << "\n";
    }

    return 0;
}
