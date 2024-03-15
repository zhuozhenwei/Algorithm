#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x, count = 0;
    cin >> n >> x;

    for (int i = 1; i <= n; i++)
    {
        int num = i;
        while (num >= 10)
        {
            int yu = num % 10;
            if (yu == x)
            {
                count++;
            }
            num /= 10;
        }
        count = (num == x) ? count + 1 : count;
    }

    cout << count;
    return 0;
}