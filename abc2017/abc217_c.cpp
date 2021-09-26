#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, tmp;
    cin >> n;
    vector<int> qseq(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> tmp;
        qseq[tmp - 1] = i + 1;
    }
    for (auto x : qseq)
    {
        printf("%d ", x);
    }
    return 0;
}