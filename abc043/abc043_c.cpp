#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define llu unsigned long long

int main()
{
    ll avg = 0, n;
    cin >> n;
    ll arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        avg += arr[i];
    }
    avg /= n;
    ll cost1 = 0, cost2 = 0, cost3 = 0;
    for (int i = 0; i < n; i++)
    {
        cost1 += pow((arr[i] - avg), 2);
    }
    avg++;
    for (int i = 0; i < n; i++)
    {
        cost2 += pow((arr[i] - avg), 2);
    }
    avg -= 2;
    for (int i = 0; i < n; i++)
    {
        cost3 += pow((arr[i] - avg), 2);
    }
    cout << min(min(cost1, cost2), cost3);
    return 0;
}
