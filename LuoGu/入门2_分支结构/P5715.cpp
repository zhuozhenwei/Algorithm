#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> n[i];
    }

    sort(n, n + 3);

    for (int i = 0; i < 3; i++)
    {
        cout << n[i] << " ";
    }
    return 0;
}