#include <bits/stdc++.h>
using namespace std;

long long int ans, a, n, i;

int main()
{
    while (scanf("%lld", &a) != EOF)
    {
        n++;
        ans += a;
    }

    for (i = 1; i < n; i++)
    {
        ans *= 2;
    }

    cout << ans;
    return 0;
}
