#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    for (int i = a; i <= b; i++)
    {
        if (i % c == 0)
        {
            cout << i;
            return 0;
        }
    }
    cout << -1;
    return 0;
}