#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, res;
    cin >> a >> b;

    int j1 = 1 * 10 + 9;
    int j2 = a * 10 + b;
    res = j2 / j1;

    cout << res;
    return 0;
}