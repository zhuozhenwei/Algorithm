#include <bits/stdc++.h>
using namespace std;

int main()
{
    // 输入数据
    int n;
    cin >> n;

    int hit[7];
    int buy[n][7];
    for (int i = 0; i < 7; i++)
    {
        cin >> hit[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            cin >> buy[i][j];
        }
    }

    int z[7] = {0};
    for (int i = 0; i < n; i++)
    {
        int count = 0; // 用于记录有几个数与中奖号码相同
        for (int j = 0; j < 7; j++)
        {
            for (int k = 0; k < 7; k++)
            {
                if (buy[i][j] == hit[k])
                {
                    count++;
                    break;
                }
            }
        }
        z[7 - count]++;
    }
    for (int i = 0; i < 7; i++)
    {
        cout << z[i] << " ";
    }
    return 0;
}