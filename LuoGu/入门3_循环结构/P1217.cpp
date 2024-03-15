#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) // 判断是否为质数
{
    if (n == 1) // 特判1
        return false;
    if (n % 2 == 0) // 偶数
        return false;
    else
    { // 不然就暴力枚举
        int i;
        for (i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0)
                return false;
        }
        return true;
    }
}

bool isPalindromes(int n) // 判断是否为回文数
{
    int x = 0;
    int s = n; // 拷贝一份
    while (s > 0)
    {
        x = x * 10 + s % 10; // 反向求和，s%10为取s的个位数，例，123取3
        s = s / 10;          // 删除s的个位数，例，123变成12
    }

    if (x == n)
        return true;

    else
        return false;
}

int main()
{
    int a, b;
    cin >> a >> b;

    for (int i = a; i <= b; i++)
    {
        if (i == 9989900) // 如果到了这个数，就break
            break;
        if (isPalindromes(i) && isPrime(i)) // 否则判断是否回文和素数
            cout << i << endl;              // 输出每个回文质数
    }
    return 0;
}