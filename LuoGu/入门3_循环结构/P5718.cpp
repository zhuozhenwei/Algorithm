#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[n] = {0};
    cin >> a[0];
    int min_value = a[0];

    for (int i = 1; i < n; i++)
    {
        cin >> a[i];
        min_value = min(min_value, a[i]);
    }

    cout << min_value;
    return 0;
}