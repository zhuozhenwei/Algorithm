#include <bits/stdc++.h>
using namespace std;

int gcd(int x, int y) // 辗转相除
{
    int z = y;
    while (x % y != 0)
    {
        z = x % y;
        x = y;
        y = z;
    }
    return z; // 返回最大公因数
}

int main()
{
    int MC[3]; // 勾股数
    for (int i = 0; i < 3; i++)
    {
        cin >> MC[i];
    }

    sort(MC, MC + 3); // 排序
    cout << MC[0] / gcd(MC[0], MC[2]) << "/" << MC[2] / gcd(MC[0], MC[2]);
    return 0;
}