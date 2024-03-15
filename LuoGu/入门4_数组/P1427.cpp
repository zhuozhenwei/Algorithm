#include <bits/stdc++.h>
using namespace std;

int a[105];

int main()
{
    int len = 0;
    for (int i = 0; i < 105; i++)
    {
        int n;
        cin >> n;
        a[i] = n;
        len++;
        if (n == 0)
            break;
    }

    for (int i = len - 2; i >= 0; i--)
    {
        cout << a[i] << " ";
    }
    return 0;
}