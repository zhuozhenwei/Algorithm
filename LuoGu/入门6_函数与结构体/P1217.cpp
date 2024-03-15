#include <bits/stdc++.h>
using namespace std;

bool num(int n)
{
    int x = 0; // 位数
    while (n > 0)
    {
        x += 1;
        n /= 10;
    }

    if (x % 2 == 0) // 偶数位
    {
        return false;
    }
    else // 奇数位
    {
        return true;
    }
}

bool isPrime(int n) // 判断质数
{
    if (n < 2)
    {
        return false;
    }
    else
    {
        for (int i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                return false;
            }
        }
    }
    return true;
}

bool isPalindromes(int n)
{
    int s = 0;
    int x = n;
    while (x > 0)
    {
        s = s * 10 + x % 10;
        x = x / 10;
    }

    if (s == n)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int a, b;
    cin >> a >> b;

    if (a % 2 == 0) // 变成奇数，因为偶数就不是质数
    {
        a += 1;
    }

    for (int i = a; i <= b; i += 2) // 遍历奇数
    {
        if (i == 11) // 偶数位的回文数都不是质数（除了11），因为都是11的倍数
        {
            cout << 11 << endl;
        }
        else
        {
            if (isPalindromes(i) == true) // 回文
            {
                if (num(i) == true) // 奇数位
                {
                    if (isPrime(i) == true) // 质数
                    {
                        cout << i << endl;
                    }
                }
            }
        }
    }
    return 0;
}