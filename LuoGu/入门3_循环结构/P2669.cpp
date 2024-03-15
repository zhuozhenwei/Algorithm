#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k;
    cin >> k;

    int sum = 0;
    int count = 0;

    for (int i = 1; i <= k; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            sum += i;
            count++;
            if (count == k)
            {
                cout << sum;
                return 0;
            }
        }
    }
    // for (int i = 1; count < k; i++)
    // {
    //     for (int j = 1; j <= i && count < k; j++)
    //     {
    //         sum += i;
    //         count++;
    //     }
    // }

    // cout << sum;

    return 0;
}