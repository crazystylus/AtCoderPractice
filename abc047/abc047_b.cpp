#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define llu unsigned long long
// BruteForce
bool matrix[100][100];
int main()
{
    memset(matrix, false, sizeof matrix);
    ll w, h, n;
    cin >> w >> h >> n;
    ll x, y, a;
    while (n--)
    {
        cin >> x >> y >> a;
        if (a == 1)
        {
            for (int i = 0; i < x; i++)
                for (int j = 0; j < h; j++)
                    matrix[i][j] = true;
        }
        else if (a == 2)
        {
            for (int i = x; i < w; i++)
                for (int j = 0; j < h; j++)
                    matrix[i][j] = true;
        }
        else if (a == 3)
        {
            for (int i = 0; i < w; i++)
                for (int j = 0; j < y; j++)
                    matrix[i][j] = true;
        }
        else
        {
            for (int i = 0; i < w; i++)
                for (int j = y; j < h; j++)
                    matrix[i][j] = true;
        }
    }
    ll op = 0;
    for (int i = 0; i < w; i++)
        for (int j = 0; j < h; j++)
            if (!matrix[i][j])
                op++;
    cout << op;
    return 0;
}
