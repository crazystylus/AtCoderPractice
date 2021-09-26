#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d\n", &n);
    char s[n][n], t[n][n];
    int scount = 0, tcount = 0;
    int sminx = n, sminy = n, smaxx = 0, smaxy = 0;
    int tminx = n, tminy = n, tmaxx = 0, tmaxy = 0;
    char tmp;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%c", &s[i][j]);
            if (s[i][j] == '#')
            {
                scount++;
                sminx = min(sminx, i);
                sminy = min(sminy, j);
                smaxx = max(smaxx, i);
                smaxy = max(smaxy, j);
            }
        }
        scanf("%c", &tmp);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%c", &t[i][j]);
            if (t[i][j] == '#')
            {
                tcount++;
                tminx = min(tminx, i);
                tminy = min(tminy, j);
                tmaxx = max(tmaxx, i);
                tmaxy = max(tmaxy, j);
            }
        }
        scanf("%c", &tmp);
    }
    // printf("Boundaries for s %d %d %d %d", sminx, sminy, smaxx, smaxy);
    // printf("Boundaries for t %d %d %d %d", tminx, tminy, tmaxx, tmaxy);
    // printf("\n");
    if (scount != tcount)
    {
        printf("No");
        return 0;
    }
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         printf("%c", s[i][j]);
    //     }
    //     printf("\n");
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         printf("%c", t[i][j]);
    //     }
    //     printf("\n");
    // }
    // Confirm area and perimeter of the shape
    if ((smaxx - sminx) * (smaxy - sminy) != (tmaxx - tminx) * (tmaxy - tminy))
    {
        printf("No");
        return 0;
    }
    if ((smaxx - sminx) + (smaxy - sminy) != (tmaxx - tminx) + (tmaxy - tminy))
    {
        printf("No");
        return 0;
    }
    bool flag = false;
    // Try Translation
    for (int i1 = sminx, i2 = tminx; i1 < smaxx && i2 < tmaxx; i1++, i2++)
    {
        for (int j1 = sminy, j2 = tminy; j1 < smaxy && j2 < tmaxy; j1++, j2++)
        {
            if (s[i1][j1] != t[i2][j2])
            {
                flag = true;
                break;
            }
        }
    }
    if (!flag)
    {
        printf("Yes");
        return 0;
    }
    flag = false;
    // Rotate Left C
    for (int i1 = sminy, i2 = tminx; i1 <= smaxy && i2 <= tmaxx; i1++, i2++)
    {
        for (int j1 = smaxx, j2 = tminy; j1 >= sminx && j2 <= tmaxy; j1--, j2++)
        {
            if (s[j1][i1] != t[i2][j2])
            {
                flag = true;
                break;
            }
        }
    }
    if (!flag)
    {
        printf("Yes");
        return 0;
    }
    flag = false;
    // Rotate Right C
    for (int i1 = smaxy, i2 = tminx; i1 >= sminy && i2 <= tmaxx; i1--, i2++)
    {
        for (int j1 = sminx, j2 = tminy; j1 <= smaxx && j2 <= tmaxy; j1++, j2++)
        {
            if (s[j1][i1] != t[i2][j2])
            {
                flag = true;
                break;
            }
        }
    }
    if (!flag)
    {
        printf("Yes");
        return 0;
    }
    flag = false;
    // Rotate 180 C `
    for (int i1 = smaxx, i2 = tminx; i1 >= sminx && i2 <= tmaxx; i1--, i2++)
    {
        for (int j1 = smaxy, j2 = tminy; j1 >= sminy && j2 <= tmaxy; j1--, j2++)
        {
            // printf("%c", s[i1][j1]);
            if (s[i1][j1] != t[i2][j2])
            {
                flag = true;
                break;
            }
        }
        // printf("\n");
    }
    if (!flag)
    {
        printf("Yes");
        return 0;
    }
    printf("No");
    return 0;
}