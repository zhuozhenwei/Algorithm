#include <bits/stdc++.h>
using namespace std;

int arr[1030][1030];

void shemian(int arr[][1030], int l1, int c1, int size)
{
    if (size == 1) // 递归出口
    {
        arr[l1][c1] = 1;
        return;
    }
    else
    {
        for (int i = l1; i <= l1 + (size / 2) - 1; i++) // 左上角
        {
            for (int j = c1; j <= c1 + (size / 2) - 1; j++)
            {
                arr[i][j] = 0;
            }
        }
        shemian(arr, l1, c1 + (size / 2), size / 2);              // 右上角
        shemian(arr, l1 + (size / 2), c1, size / 2);              // 左下角
        shemian(arr, l1 + (size / 2), c1 + (size / 2), size / 2); // 右下角
    }
}

int main()
{
    // 输入
    int n;
    cin >> n;

    // 定义+赋值
    int line = pow(2, n); // 2的n次方
    for (int i = 0; i <= line - 1; i++)
    {
        for (int j = 0; j <= line - 1; j++)
        {
            arr[i][j] = 1;
        }
    }

    // 赦免过程
    shemian(arr, 0, 0, line);

    for (int i = 0; i < line; i++)
    {
        for (int j = 0; j < line; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}