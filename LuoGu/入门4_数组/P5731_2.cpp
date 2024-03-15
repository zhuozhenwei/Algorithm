#include <bits/stdc++.h>
using namespace std;

int a[15][15];

int main()
{
    int n;
    cin >> n;

    int k = 1, x = 1, y = 0;
    while (k <= n * n)
    {
        while (y < n && !a[x][y + 1]) // 向右到底
        {
            y += 1;
            a[x][y] = k;
            k++;
        }
        while (x < n && !a[x + 1][y]) // 向下到底
        {
            x += 1;
            a[x][y] = k;
            k++;
        }
        while (y > 1 && !a[x][y - 1]) // 向左到底
        {
            y -= 1;
            a[x][y] = k;
            k++;
        }
        while (x > 1 && !a[x - 1][y]) // 向上到底
        {
            x -= 1;
            a[x][y] = k;
            k++;
        }
    }

    // 输出
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            printf("%3d", a[i][j]);
        }
        if (i < n)
            printf("\n");
    }
    return 0;
}