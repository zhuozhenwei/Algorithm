#include <bits/stdc++.h>
using namespace std;

int main()
{
    int money[12];
    for (int i = 0; i < 12; i++)
    {
        cin >> money[i];
    }

    int store = 0;  // 存在妈妈那里的
    int remain = 0; // 剩余的

    for (int i = 0; i < 12; i++)
    {
        int r = remain + 300 - money[i]; // 当月剩余的钱数
        if (r < 0)
        {
            cout << "-" << i + 1;
            return 0;
        }

        if (r >= 100)
        {
            store += (r / 100) * 100; 
            remain = r % 100;
        }
        else
        {
            remain = r;
        }
    }

    double sum = store * 1.2 + remain;

    cout << sum;
    return 0;
}