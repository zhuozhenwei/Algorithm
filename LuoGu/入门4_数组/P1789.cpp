#include <bits/stdc++.h>
using namespace std;

int main()
{
    // 输入+初始化
    int n, m, k;
    cin >> n >> m >> k;

    int a[n + 4][n + 4]; // 加4行4列防止数据溢出
    int h[m][2];         // 记录火把的位置
    for (int i = 0; i < m; i++)
    {
        cin >> h[i][0] >> h[i][1];
    }

    for (int i = 0; i < n + 4; i++)
    {
        for (int j = 0; j < n + 4; j++)
        {
            a[i][j] = 0;
        }
    }

    // 判断n的取值，分情况讨论
    if (n == 1) // 只有一个方格，一定有火把
    {
        cout << 0;
        return 0;
    }
    else
    {
        for (int i = 0; i < m; i++) // 火把照亮的位置
        {
            int x = h[i][0] + 2 - 1;
            int y = h[i][1] + 2 - 1;
            a[x][y] = 2; // 放置火把，数字为2
            // 设置光
            a[x - 1][y] = a[x - 2][y] = a[x + 1][y] = a[x + 2][y] = 1;                 // 行
            a[x][y - 1] = a[x][y - 2] = a[x][y + 1] = a[x][y + 2] = 1;                 // 列
            a[x - 1][y - 1] = a[x - 1][y + 1] = a[x + 1][y - 1] = a[x + 1][y + 1] = 1; // 四个角
        }

        if (k != 0) // 有k个萤石
        {
            int y[k][2];
            for (int i = 0; i < k; i++)
            {
                cin >> y[i][0] >> y[i][1];
            }

            for (int i = 0; i < k; i++)
            {
                int o = y[i][0] + 2 - 1;
                int p = y[i][1] + 2 - 1;

                a[o][p] = 3; // 放置萤石，数字为3
                // 设置光
                a[o - 2][p - 2] = a[o - 2][p - 1] = a[o - 2][p] = a[o - 2][p + 1] = a[o - 2][p + 2] = 1; // 第1行
                a[o - 1][p - 2] = a[o - 1][p - 1] = a[o - 1][p] = a[o - 1][p + 1] = a[o - 1][p + 2] = 1; // 第2行
                a[o][p - 2] = a[o][p - 1] = a[o][p + 1] = a[o][p + 2] = 1;                               // 第3行
                a[o + 1][p - 2] = a[o + 1][p - 1] = a[o + 1][p] = a[o + 1][p + 1] = a[o + 1][p + 2] = 1; // 第4行
                a[o + 2][p - 2] = a[o + 2][p - 1] = a[o + 2][p] = a[o + 2][p + 1] = a[o + 2][p + 2] = 1; // 第5行
            }
        }

        int monster = 0;
        for (int i = 2; i <= n + 1; i++)
        {
            for (int j = 2; j <= n + 1; j++)
            {
                if (a[i][j] == 0) // 没有放东西而且也没有光的地方
                {
                    monster++;
                }
            }
        }
        cout << monster;
    }
    return 0;
}