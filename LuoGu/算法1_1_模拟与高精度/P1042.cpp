#include <bits/stdc++.h>
using namespace std;

char c;
int loc, k_11, k_21;                        // loc用于记录一共有多少个字符，k用于记录有几场比赛
int score_11[10000][2], score_21[10000][2]; // 记录11分制的分数比和21分制的分数比

int main()
{
    for (; cin >> c && c != 'E'; loc++)
    {
        // 判断加分情况
        if (c == 'W')
        {
            score_11[k_11][0] += 1; // 华华加分
            score_21[k_21][0] += 1;
        }
        else
        {
            score_11[k_11][1] += 1; // 华华的对手加分
            score_21[k_21][1] += 1;
        }

        // 一局结束
        if ((score_11[k_11][0] >= 11 || score_11[k_11][1] >= 11) && abs(score_11[k_11][0] - score_11[k_11][1]) >= 2)
        {
            k_11++;
        }

        if ((score_21[k_21][0] >= 21 || score_21[k_21][1] >= 21) && abs(score_21[k_21][0] - score_21[k_21][1]) >= 2)
        {
            k_21++;
        }
    }

    // 输出
    for (int i = 0; i <= k_11; i++)
    {
        cout << score_11[i][0] << ":" << score_11[i][1] << endl;
    }
    cout << endl;
    for (int i = 0; i <= k_21; i++)
    {
        cout << score_21[i][0] << ":" << score_21[i][1] << endl;
    }
    return 0;
}