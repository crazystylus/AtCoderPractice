#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1, s2, s3, t, op;
    cin >> s1 >> s2 >> s3 >> t;
    for (auto x : t)
    {
        if (x == '1')
        {
            op = op + s1;
        }
        else if (x == '2')
        {
            op = op + s2;
        }
        else if (x == '3')
        {
            op = op + s3;
        }
    }
    cout << op;
    return 0;
}