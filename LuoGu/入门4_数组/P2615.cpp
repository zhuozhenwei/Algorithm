#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int nn = n * n;
    int a[n][n];                // 用来存储幻方
    for (int i = 0; i < n; i++) // 初始化为0矩阵
    {
        for (int j = 0; j < n; j++)
        {
            a[i][j] = 0;
        }
    }

    a[0][n / 2] = 1; // 首先将1写在第一行的中间

    for (int k = 2; k <= nn; k++)
    {
        int line = 0;
        int column = 0;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (a[i][j] == k - 1)
                {
                    line = i;
                    column = j;
                }
            }

        }

        if ((line == 0) && (column != n - 1)) // 在第一行但不在最后一列
        {
            a[n - 1][column + 1] = k;
        }
        if ((line != 0) && (column == n - 1)) // 在最后一列但不在第一行
        {
            a[line - 1][0] = k;
        }
        if ((line == 0) && (column == n - 1)) // 在第一行最后一列
        {
            a[line + 1][column] = k;
        }
        if ((line != 0) && (column != n - 1)) // 既不在第一行，也不在最后一列
        {
            if (a[line - 1][column + 1] == 0)
            {
                a[line - 1][column + 1] = k;
            }
            else
            {
                a[line + 1][column] = k;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}