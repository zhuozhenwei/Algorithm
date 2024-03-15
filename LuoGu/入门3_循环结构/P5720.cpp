#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cin >> a;

    int re = a;
    int count = 1;
    while (re > 1)
    {
        re = floor(re / 2);
        count++;
    }
    cout << count;
    return 0;
}