#include <bits/stdc++.h>
using namespace std;

int n, m;

int main()
{
    // 输入+初始化
    cin >> n >> m;
    char c[n + 2][m + 2]; // 多加2行2列，包围住
    for (int i = 0; i <= n + 1; i++)
    {
        c[i][0] = '?';
        c[i][m + 1] = '?';
    }
    for (int j = 0; j <= m + 1; j++)
    {
        c[0][j] = '?';
        c[n + 1][j] = '?';
    }

    for (int i = 1; i <= n; i++)
    {
        string s;
        cin >> s;
        for (int j = 0; j < m; j++)
        {
            c[i][j + 1] = s[j];
        }
    }

    // 计算地雷数量并且输出
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (c[i][j] == '*')
            {
                cout << "*";
            }
            else
            {
                int sum = 0;
                if (c[i - 1][j - 1] == '*')
                    sum++;
                if (c[i - 1][j] == '*')
                    sum++;
                if (c[i - 1][j + 1] == '*')
                    sum++;
                if (c[i][j - 1] == '*')
                    sum++;
                if (c[i][j + 1] == '*')
                    sum++;
                if (c[i + 1][j - 1] == '*')
                    sum++;
                if (c[i + 1][j] == '*')
                    sum++;
                if (c[i + 1][j + 1] == '*')
                    sum++;

                cout << sum;
            }
        }
        cout << endl;
    }
    return 0;
}