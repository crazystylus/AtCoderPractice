#include <bits/stdc++.h>
using namespace std;
int main()
{
    char p[26];
    int inp;
    for (int i = 0; i < 26; i++)
    {
        scanf("%d", &inp);
        p[i] = 'a' + (inp - 1);
    }
    for (int i = 0; i < 26; i++)
    {
        printf("%c", p[i]);
    }
    return 0;
}