#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    int sum_A = 0, count_A = 0, sum_B = 0, count_B = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % k == 0)
        {
            sum_A += i;
            count_A++;
        }
        else
        {
            sum_B += i;
            count_B++;
        }
    }

    cout << fixed << setprecision(1) << (double)sum_A / count_A;
    cout << " ";
    cout << fixed << setprecision(1) << (double)sum_B / count_B;
    return 0;
}