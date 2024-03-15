#include <bits/stdc++.h>
using namespace std;

<<<<<<< HEAD
int n;

int main()
{
    cin >> n;

    int a[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
=======
int main()
{
    // 输入以及初始化
    int n;
    cin >> n;

    int a[n + 2][n + 2];
    for (int i = 0; i < n + 2; i++)
    {
        for (int j = 0; j < n + 2; j++)
>>>>>>> 9e17faf (2024/3/15)
        {
            a[i][j] = 0;
        }
    }

<<<<<<< HEAD
    
=======
    // 核心代码
    int pos[4][2] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}}; // 改变位置的数组：向右，向下，向左，向上

    int x = 1, y = 1, d = 0; // 初始化
    for (int i = 1; i <= n * n; i++)
    {
        a[x][y] = i;                                                  // 赋值
        int tx = x + pos[d][0], ty = y + pos[d][1];                   // 先变着
        if (tx < 1 || tx > n || ty < 1 || ty > n || (a[tx][ty]) != 0) // 越界和有数阻拦
            d = (d + 1) % 4;
        x += pos[d][0], y += pos[d][1];
    }

    // 输出
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            printf("%3d", a[i][j]);
        } // 注意%3d
        if (i < n)
            printf("\n");
    }
>>>>>>> 9e17faf (2024/3/15)
    return 0;
}