#include <bits/stdc++.h>
using namespace std;

int main()
{
    int e;
    cin >> e;

    double price;
    if (e <= 150)
    {
        price = 0.4463 * e;
    }
    else if (e >= 150 && e <= 400)
    {
        price = 0.4463 * 150 + (e - 150) * 0.4663;
    }
    else
    {
        price = 0.4463 * 150 + 250 * 0.4663 + (e - 400) * 0.5663;
    }

    cout << fixed << setprecision(1) << price;
    return 0;
}