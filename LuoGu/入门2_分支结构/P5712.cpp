#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin >> x;

    if (x == 0 || x == 1)
    {
        cout << "Today, I ate " << x << " apple.";
    }
    else
    {
        cout << "Today, I ate " << x << " apples.";
    }
    return 0;
}