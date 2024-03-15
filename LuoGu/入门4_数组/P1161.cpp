#include <bits/stdc++.h>
using namespace std;

<<<<<<< HEAD
int main()
{
=======
int b[2000000];

int main()
{
    // 输入n次操作
>>>>>>> 9e17faf (2024/3/15)
    int n;
    cin >> n;
    double a[n][2];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> a[i][j];
        }
    }

<<<<<<< HEAD
    int b[100] = {0}; // 初始表示路灯都关着
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= a[i][1]; j++)
        {
            int index = floor(j * a[i][0]);
            if (i % 2 == 0) // 第偶数行开灯
                b[index] = 1;
            else // 第奇数行关灯
                b[index] = 0;
        }
    }

    for (int i = 0; i < 100; i++)
=======
    // 开始执行
    // 初始所有路灯都是关的
    for (int i = 0; i < n; i++) // 每次操作
    {
        for (int j = 1; j <= a[i][1]; j++)
        {
            int index = (int)(j * a[i][0]);
            if (b[index - 1] == 0) // 一开始关灯
                b[index - 1] = 1;
            else // 后来开灯
                b[index - 1] = 0;
        }
    }

    for (int i = 0; i < 2000000; i++)
>>>>>>> 9e17faf (2024/3/15)
    {
        if (b[i] == 1)
        {
            cout << i + 1;
            return 0;
        }
    }
    return 0;
}