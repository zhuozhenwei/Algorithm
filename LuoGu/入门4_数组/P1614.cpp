#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int minm = __INT_MAX__;
    for (int i = 0; i <= n - m; i++)
    {
        int sum = 0;
        for (int j = i; j <= i + m - 1; j++)
        {
            sum += a[j];
        }
        minm = min(minm, sum);
    }

    cout << minm;
    return 0;
}