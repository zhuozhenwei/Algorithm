#include <bits/stdc++.h>
using namespace std;

int main()
{
    int w, x, h, q;
    cin >> w >> x >> h;
    cin >> q;
    int a[q][6];
    for (int i = 0; i < q; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            cin >> a[i][j];
        }
    }

    int b[w][x][h];
    int count = w * x * h;
    for (int i = 0; i < w; i++)
    {
        for (int j = 0; j < x; j++)
        {
            for (int k = 0; k < h; k++)
            {
                b[i][j][k] = 1;
            }
        }
    }

    for (int i = 0; i < q; i++)
    {
        for (int j = a[i][0] - 1; j <= a[i][3] - 1; j++)
        {
            for (int k = a[i][1] - 1; k <= a[i][4] - 1; k++)
            {
                for (int m = a[i][2] - 1; m <= a[i][5] - 1; m++)
                {
                    if (b[j][k][m] == 1)
                    {
                        b[j][k][m] = 0;
                        count--;
                    }
                }
            }
        }
    }
    cout << count;
    return 0;
}