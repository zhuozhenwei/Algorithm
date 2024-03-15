#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int num[3];   // 包装内铅笔的数量
    int price[3]; // 这种包装的价格
    int all_cost[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> num[i] >> price[i];
        all_cost[i] = ceil(n * 1.0 / num[i]) * price[i];
    }

    sort(all_cost, all_cost + 3);
    cout << all_cost[0];

    return 0;
}