#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define rep(i, n) for (int i = 0; i < n; i++)
const int mod = 1e9 + 7; //10^9 + 7;
const int N = 1e5 + 1;
///////////////////
/*
Count duplicates
If duplicates %2 is 0, all duplicates can be eliminated without loosing a normal card
If duplicates %2 is 1, 1 unique card will be utilized in extra to eliminate duplicates
*/
unordered_map<int, int> cards;
int n, a, dups;
void solve()
{
    cin >> n;
    rep(i, n)
    {
        cin >> a;
        if (cards.find(a) == cards.end())
            cards[a] = 0;
        else
            cards[a]++;
    }
    for (auto x : cards)
        dups += x.second;
    cout << (n - dups) - dups % 2;
}
int main()
{
    solve();
    return 0;
}