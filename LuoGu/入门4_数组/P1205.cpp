#include <bits/stdc++.h>
using namespace std;
int n;
char a[15][15], b[15][15], c[15][15], d[15][15]; // a是初始，c是结束，b是中间变量，d用来保存a这个最初始的

bool work1() // 顺时针转90度
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
            b[j][n - i + 1] = a[i][j];
    }
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            if (b[i][j] != c[i][j])
                return 0;
    return 1;
}
bool work2() // 顺时针转180度
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
            b[n - i + 1][n - j + 1] = a[i][j];
    }
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            if (b[i][j] != c[i][j])
                return 0;
    return 1;
}
bool work3() // 顺时针转270度
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
            b[n - j + 1][i] = a[i][j];
    }
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            if (b[i][j] != c[i][j])
                return 0;
    return 1;
}
bool work4() // 反射
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
            b[i][n - j + 1] = a[i][j];
    }
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            if (b[i][j] != c[i][j])
                return 0;
    return 1;
}
bool work5() // 组合
{
    // 先反射
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
            b[i][n - j + 1] = a[i][j];
    }
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            a[i][j] = b[i][j];
    if (work1())
        return 1;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            a[i][j] = b[i][j];
    if (work2())
        return 1;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            a[i][j] = b[i][j];
    if (work3())
        return 1;
    return 0;
}
bool work6() // 不改变
{
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            if (b[i][j] != c[i][j])
                return 0;
    return 1;
}
void work()
{
    if (work1())
    {
        cout << 1;
        return;
    }
    if (work2())
    {
        cout << 2;
        return;
    }
    if (work3())
    {
        cout << 3;
        return;
    }
    if (work4())
    {
        cout << 4;
        return;
    }
    if (work5())
    {
        cout << 5;
        return;
    }
    if (work6())
    {
        cout << 6;
        return;
    }
    cout << 7;
}
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
            d[i][j] = a[i][j];
        }

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cin >> c[i][j];
    work();
    return 0;
}