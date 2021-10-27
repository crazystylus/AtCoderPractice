#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define rep(i, n) for (int i = 0; i < n; i++)
const int mod = 1e9 + 7; //10^9 + 7;
const int N = 1e5 + 1;
///////////////////
ll arr[3], op;
void solve()
{
    cin>>arr[0]>>arr[1]>>arr[2];
    if( (arr[0]%3 != arr[1]%3) && (arr[0]%3 != arr[2]%3) && (arr[1]%3 != arr[2]%3))
        return (void)(cout<<"-1\n");
    sort(arr,arr+3);
    if (arr[0]%3 == arr[1]%3)
        return (void)(cout<<arr[1]<<"\n");
    else
        return (void)(cout<<arr[2]<<"\n");
}
int main()
{
    int t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}