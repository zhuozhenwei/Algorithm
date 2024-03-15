#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[n];
    cin >> a[0];
    int maxa = a[0];
    int mina = a[0];

    for (int i = 1; i < n; i++)
    {
        cin >> a[i];
        maxa = max(maxa, a[i]);
        mina = min(mina, a[i]);
    }

    cout << maxa - mina;
    return 0;
}