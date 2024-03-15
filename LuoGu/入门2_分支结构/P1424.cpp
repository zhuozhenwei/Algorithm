#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, n, sum = 0;
    cin >> x >> n;

    for (int i = 0; i < n; i++)
    {
        if ((x != 6) && (x != 7))
        {
            sum += 250;
        }

        if (x == 7)
        {
            x = 1;
        }
        else
        {
            x++;
        }
    }
    cout << sum;

    return 0;
}