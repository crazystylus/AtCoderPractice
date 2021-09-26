#include <bits/stdc++.h>
using namespace std;
int main()
{
    int marks, bar;
    scanf("%d", &marks);
    if (marks < 40)
    {
        bar = 40;
    }
    else if (marks < 70)
    {
        bar = 70;
    }
    else if (marks < 90)
    {
        bar = 90;
    }
    else
    {
        printf("expert");
        return 0;
    }
    printf("%d", bar - marks);
    return 0;
}