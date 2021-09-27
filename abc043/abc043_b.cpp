#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define llu unsigned long long

int main()
{
    char inp = 'B';
    vector<char> output;
    while (inp == '0' || inp == '1' || inp == 'B')
    {
        if (inp == 'B')
        {
            if (!output.empty())
                output.pop_back();
        }
        else
        {
            output.push_back(inp);
        }
        scanf("%c", &inp);
    }
    for (auto x : output)
    {
        cout << x;
    }
    return 0;
}
