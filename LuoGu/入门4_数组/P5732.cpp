#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    if (n == 1)
    {
        cout << 1;
    }
    else
    {
        int a[n][n];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                a[i][j] = 0;
            }
        }

        a[0][0] = 1;
        for (int i = 1; i < n; i++)
        {
            for (int j = 0; j <= i; j++)
            {
                a[i][0] = a[i][i] = 1;
                for (int k = 1; k <= i - 1; k++)
                {
                    a[i][k] = a[i - 1][k] + a[i - 1][k - 1];
                }
            }
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (a[i][j] != 0)
                {
                    cout << a[i][j] << " ";
                }
            }
            cout << endl;
        }
    }
    return 0;
}