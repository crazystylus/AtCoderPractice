#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define rep(i, n) for (int i = 0; i < n; i++)
const int mod = 1e9 + 7; //10^9 + 7;
const int N = 51;
///////////////////

bool compareRanks(pair<int, int> a, pair<int, int> b)
{
    if (a.first == b.first)
        return a.second < b.second;
    return a.first > b.first;
}

int n, m;
void solve()
{
    cin >> n >> m;
    n *= 2;
    vector<string> aij(n);
    vector<pair<int, int>> ranks(n);
    rep(i, n)
    {
        cin >>
            aij[i];
        ranks[i].first = 0;
        ranks[i].second = i;
    }
    sort(ranks.begin(), ranks.end(), compareRanks);
    rep(i, m)
    {
        //Round i
        for (int j = 0; j < n; j += 2)
        {
            char amove = aij[ranks[j].second][i], bmove = aij[ranks[j + 1].second][i];
            if (amove == bmove)
            {
                // if (ranks[j].second < ranks[j + 1].second)
                //     ranks[j].first++;
                // else
                //     ranks[j + 1].first++;
            }
            else if (amove == 'G') //Rock
            {
                if (bmove == 'P')
                    ranks[j + 1].first++;
                else
                    ranks[j].first++;
            }
            else if (amove == 'C') //Scissor
            {
                if (bmove == 'G')
                    ranks[j + 1].first++;
                else
                    ranks[j].first++;
            }
            else if (amove == 'P') //Paper
            {
                if (bmove == 'C')
                    ranks[j + 1].first++;
                else
                    ranks[j].first++;
            }
        }
        sort(ranks.begin(), ranks.end(), compareRanks);
        // cout << "\n##############\n";
        // rep(i, n)
        //         cout
        //     << ranks[i].second + 1 << "\n";
    }
    // cout << "\n##############\n";
    rep(i, n)
            cout
        << ranks[i].second + 1 << "\n";
}
int main()
{
    solve();
    return 0;
}