/*
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x = 0, k = 0;
    cin >> n;

    for (int i = 1; i <= 100; i++)
    {
        if (((n / 364 - i) / 3 > 0) && (364 * (i + 3 * ((n / 364 - i) / 3)) == n))
        {
            x = max(x, i);
            k = (n / 364 - i) / 3;
        }
    }

    cout << x << endl;
    cout << k;
    return 0;
}*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x = 0, k = 0;
    cin >> n;

    int num = n / 364;
    if (num <= 103)
    {
        k = 1;
        x = num - 3 * k;
    }
    else
    {
        x = num;
        while (x > 100)
        {
            k++;
            x = num - 3 * k;
        }
    }

    cout << x << endl;
    cout << k;
    return 0;
}