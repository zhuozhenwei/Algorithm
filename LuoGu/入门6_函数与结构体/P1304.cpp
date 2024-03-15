#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) // 判断是否为质数
{
    if (n < 2)
    {
        return false;
    }
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

int minPrime(int n)
{
    int res = 0;
    for (int i = 2; i <= n / 2; i++)
    {
        if ((isPrime(i) == true) && (isPrime(n - i) == true))
        {
            res = i;
            break;
        }
    }
    return res;
}

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= (n - 2) / 2; i++)
    {
        cout << 2 * i + 2 << "=" << minPrime(2 * i + 2) << "+" << 2 * i + 2 - minPrime(2 * i + 2) << endl;
    }
    return 0;
}