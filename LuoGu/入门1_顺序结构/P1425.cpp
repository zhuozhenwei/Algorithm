#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d, e, f;
    cin >> a >> b >> c >> d;

    if (d < b)
    {
        f = 60 + d - b;
        e = c - 1 - a;
    }
    else
    {
        f = d - b;
        e = c - a;
    }

    if (f == 60)
    {
        f = 0;
        e += 1;
    }

    cout << e << " " << f;
    return 0;
}