#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define llu unsigned long long
// 22:29
// 22:34
int main()
{
    bool arr[26];
    memset(arr, true, sizeof arr);
    string inp;
    cin >> inp;
    for (auto x : inp)
    {
        arr[x - 'a'] = !arr[x - 'a'];
    }
    bool op = true;
    for (int i = 0; i < 26; i++)
    {
        op = op && arr[i];
    }
    if (op)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
    return 0;
}
