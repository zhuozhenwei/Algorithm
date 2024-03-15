#include <bits/stdc++.h>
using namespace std;

double loc[3][2];

double dis(double x1, double y1, double x2, double y2)
{
    return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}

int main()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> loc[i][j];
        }
    }

    double res = dis(loc[0][0], loc[0][1], loc[1][0], loc[1][1]) + dis(loc[0][0], loc[0][1], loc[2][0], loc[2][1]) + dis(loc[1][0], loc[1][1], loc[2][0], loc[2][1]);

    cout << fixed << setprecision(2) << res;
    return 0;
}