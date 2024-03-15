#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    double people[n] = {0};
    for (int i = 0; i < n; i++)
    {
        int score[m];
        for (int j = 0; j < m; j++)
        {
            cin >> score[j];
        }
        // 从小到大排序
        sort(score, score + m);

        double sum = 0;
        for (int j = 1; j < m - 1; j++) // 去掉最高分，去掉最低分
        {
            sum += score[j];
        }

        people[i] = sum / ((double)(m - 2));
    }

    sort(people, people + n);
    cout << fixed << setprecision(2) << people[n - 1];
    return 0;
}