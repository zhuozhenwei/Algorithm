#include <bits/stdc++.h>
using namespace std;

int main()
{
    double a, b, c, p;
    cin >> a >> b >> c;
    p = (a + b + c) / 2.0;

    double res = sqrt(p * (p - a) * (p - b) * (p - c));
    printf("%.1lf", res);
    return 0;
}