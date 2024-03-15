#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin >> x;

    int arr[4];
    for (int i = 0; i < 4; i++) // 初始化
    {
        arr[i] = 0;
    }

    int a = 0, b = 0;
    if (x % 2 == 0) // 满足性质1
        a = 1;
    if (x > 4 && x <= 12) // 满足性质2
        b = 1;

    if (a == 1 && b == 1) // 小A喜欢
    {
        arr[0] = 1;
    }
    if (a == 1 || b == 1) // Uim 喜欢
    {
        arr[1] = 1;
    }
    if ((a == 1 && b == 0) || (a == 0 && b == 1)) // 八尾勇喜欢
    {
        arr[2] = 1;
    }
    if (a == 0 && b == 0) // 正妹喜欢
    {
        arr[3] = 1;
    }

    for (int i = 0; i < 4; i++) // 输出
    {
        cout << arr[i] << " ";
    }
    return 0;
}