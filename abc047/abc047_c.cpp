#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define llu unsigned long long
// For each 2 block sliding window, if 2 elements have different colour, they will need 1 stone for same colour
// Acc to rules, it's turn based, so you need to place B if you placed W and vice a versa
int main()
{
    string inp;
    cin >> inp;
    if (inp.length() == 1)
    {
        cout << 0;
        return 0;
    }
    ll op = 0;
    for (int i = 1; i < inp.length(); i++)
    {
        if (inp[i - 1] != inp[i])
            op++;
    }
    cout << op;
    return 0;
}
