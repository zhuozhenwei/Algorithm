#include <bits/stdc++.h>
using namespace std;

int a[105];

int main()
{
    int n;
    cin >> n;

    a[0] = n;
    int i = 1;
    for (; n > 1; i++)
    {
        if (n % 2 == 0) // 偶数
        {
            n /= 2;
        }
        else // 奇数
        {
            n = n * 3 + 1;
        }
        a[i] = n;
    }

    for (int j = i - 1; j >= 0; j--)
    {
        cout << a[j] << " ";
    }
    return 0;
}