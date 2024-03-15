#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, count = 0;
    cin >> n;
    int a[n][3];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> a[i][j];
        }
    }

    int sum[n] = {0};
    for (int i = 0; i < n; i++)
    {
        sum[i] = a[i][0] + a[i][1] + a[i][2];
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int a_0 = a[i][0] - a[j][0];
            int a_1 = a[i][1] - a[j][1];
            int a_2 = a[i][2] - a[j][2];
            int s = sum[i] - sum[j];
            if ((abs(a_0) <= 5) && (abs(a_1) <= 5) && (abs(a_2) <= 5) && (abs(s) <= 10))
            {
                count++;
            }
        }
    }

    cout <<count;
    return 0;
}