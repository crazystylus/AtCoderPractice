#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define llu unsigned long long
/*
Calculate the time required to solve all problems in normal conditions
for each entry of p and x
output totalTime + (x -t[p-1])
The simply sum up the time difference to solve the problem p
*/
int main()
{
    ll n, m;
    cin >> n;
    vector<int> t(n, 0);
    ll totTime = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> t[i];
        totTime += t[i];
    }
    cin >> m;
    ll p, x;
    while (m--)
    {
        cin >> p >> x;
        cout << (totTime + (x - t[p - 1])) << "\n";
    }
    return 0;
}
