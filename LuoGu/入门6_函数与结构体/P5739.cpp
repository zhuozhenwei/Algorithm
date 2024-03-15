#include <bits/stdc++.h>
using namespace std;

int M(int n)
{
    if (n == 1)
    {
        return n;
    }
    else
    {
        return n * M(n - 1);
    }
}

int main()
{
    int n;
    cin >> n;

    cout << M(n) << endl;
    cout << (double)clock() / CLOCKS_PER_SEC;
    return 0;
}