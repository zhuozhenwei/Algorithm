#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int sum = 1;
    for (int i = 1; i <= n - 1; i++)
    {
        sum = (sum + 1) * 2;
    }

    cout << sum;
    return 0;
}