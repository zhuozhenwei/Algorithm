#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) // 判断自然数n是不是质数
{
    if (n < 2) // 0和1
        return false;
    else
    {
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0) // 可以整除
            {
                return false;
            }
        }
    }
    return true;
}

int main()
{
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (isPrime(a[i]) == true)
        {
            cout << a[i] << " ";
        }
    }
    return 0;
}