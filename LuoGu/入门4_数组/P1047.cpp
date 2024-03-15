#include <bits/stdc++.h>
using namespace std;

int main()
{
    int l, m;
    cin >> l >> m;

    int a[l + 1];
    for (int i = 0; i <= l; i++)
    {
        a[i] = 1;
    }

    int b[m][2];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> b[i][j];
        }
    }

    int count = l + 1;
    for (int i = 0; i < m; i++)
    {
        for (int j = b[i][0]; j <= b[i][1]; j++)
        {
            if (a[j] != 0)
            {
                a[j] = 0;
                count--;
            }
        }
    }

    cout << count;
    return 0;
}