#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) // 判断自然数n是不是质数
{
    if (n < 2) // 0和1
        return false;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0) // 可以整除
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int L;
    cin >> L;

    if(L < 2)
    {
        cout << 0;
        return 0;
    }

    int load = 0;

    int i = 2;
    int count = 0;
    while (load < L)
    {
        if (isPrime(i) == true)
        {
            load += i;
            count++;
            cout << i << endl;
        }
        i++;

        if (load + i > L)
        {
            break;
        }
    }

    cout << count;
    return 0;
}