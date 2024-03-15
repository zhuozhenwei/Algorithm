#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int local = n * 5;
    int luogu = 11 + n * 3;

    if (local < luogu)
    {
        cout << "Local";
    }
    else
    {
        cout << "Luogu";
    }
    return 0;
}