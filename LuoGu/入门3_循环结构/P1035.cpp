#include <bits/stdc++.h>
using namespace std;

int main()
{
    double k;
    cin >> k;

    double Sn = 0;
    for (int i = 1;Sn <= k; i++)
    {
        Sn += 1.0 / i;
        if (Sn > k)
        {
            cout << i;
            return 0;
        }
    }

    return 0;
}