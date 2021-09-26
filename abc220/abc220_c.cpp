#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    uint64_t x, arr[n], arsum = 0, ans, pending;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        arsum += arr[i];
    }
    cin >> x;
    ans = (x / arsum) * n;
    pending = x % arsum;
    for (int i = 0; i < n; i++)
    {
        pending = pending - arr[i];
        ans += 1;
        if (pending > arsum)
        {
            cout << ans;
            return 0;
        }
    }
    cout << ans + 100;
    return 0;
}