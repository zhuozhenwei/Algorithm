#include <bits/stdc++.h>
using namespace std;

int n, m; // 玩具小人的个数和指令的条数

int main()
{
    // 输入
    cin >> n >> m;
    int people[n];
    string work[n];
    int direction[m][2];
    for (int i = 0; i < n; i++)
    {
        cin >> people[i] >> work[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> direction[i][0] >> direction[i][1];
    }

    // 计算最终位置
    int loc = 0; // 此时所在位置
    for (int i = 0; i < m; i++)
    {
        if (direction[i][0] == 0) // 向左
        {
            if (people[loc] == 0) // 朝向圈内
            {
                loc -= direction[i][1];
            }
            else // 朝向圈外
            {
                loc += direction[i][1];
            }
        }
        else // 向右
        {
            if (people[loc] == 0) // 朝向圈内
            {
                loc += direction[i][1];
            }
            else // 朝向圈外
            {
                loc -= direction[i][1];
            }
        }

        // 循环一圈
        while (loc < 0)
        {
            loc += n;
        }
        while (loc > n - 1)
        {
            loc -= n;
        }
    }

    // 输出
    cout << work[loc];
    return 0;
}