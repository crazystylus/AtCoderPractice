#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool dislikes[10] = {false};
bool doIter(ll ele);
int main()
{

    ll n, k, tmp;
    cin >> n >> k;
    for (int i = 0; i < k; i++)
    {
        cin >> tmp;
        dislikes[tmp] = true;
    }
    while (doIter(n))
    {
        n++;
    }
    cout << n;
    return 0;
}
bool doIter(ll ele)
{
    while (ele > 0)
    {
        if (dislikes[ele % 10])
            return true;
        ele /= 10;
    }
    return false;
}