#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[7];
    int maxelement = 0;
    for (int i = 0; i < 7; i++)
    {
        int x, y;
        cin >> x >> y;
        a[i] = x + y;

        maxelement = max(maxelement, a[i]);
    }

    int count = 0;
    for (int i = 0; i < 7; i++)
    {
        if (a[i] > 8)
        {
            count++;
        }
    }

    if (count == 0) // 没有不高兴的情况
    {
        cout << 0;
    }
    else
    {
        int j; // 最大值定位
        for (j = 0; j < 7; j++)
        {
            if (maxelement == a[j])
                break;
        }
        cout << j + 1;
    }

    return 0;
}