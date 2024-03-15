#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 2; i <= n / 2; i++) // 唯一分解定理
    {
        if (n % i == 0) // 能整除
        {
            cout << max(i, (n / i));
            return 0;
        }
    }
    return 0;
}