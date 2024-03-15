#include <bits/stdc++.h>
using namespace std;

int main()
{
    float t;
    int n;
    cin >> t >> n;

    float res = t / n;

    cout << setprecision(3) << fixed << res << endl;
    cout << 2 * n;
    return 0;
}