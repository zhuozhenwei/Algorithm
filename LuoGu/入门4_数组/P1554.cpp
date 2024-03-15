#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;

    int a[10] = {0};
    for (int i = m; i <= n; i++)
    {
        if (i == 0)
        {
            a[0]++;
        }
        else
        {
            int n = i;
            while (n > 0)
            {
                a[n % 10]++;
                n = n / 10;
            }
        }
    }

    for (int i = 0; i < 10; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}