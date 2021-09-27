#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define llu unsigned long long
// 18:42
// 19:03
int main()
{
    unordered_map<char, queue<char>> decks;
    string inp;
    cin >> inp;
    for (auto x : inp)
        decks['a'].push(x);
    cin >> inp;
    for (auto x : inp)
        decks['b'].push(x);
    cin >> inp;
    for (auto x : inp)
        decks['c'].push(x);
    char current = 'a', next = 'a';
    while (true)
    {
        if (decks[next].empty())
        {
            break;
        }
        next = decks[current].front();
        decks[current].pop();
        current = next;
    }
    cout << char('A' + (next - 'a'));
    return 0;
}
