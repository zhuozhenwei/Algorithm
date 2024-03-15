#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int m;

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            m = n / i;
            break;
        }
    }
    cout << m;
    return 0;
}