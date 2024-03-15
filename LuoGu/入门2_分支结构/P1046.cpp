#include <bits/stdc++.h>
using namespace std;

int main()
{
    int high[10] = {0};
    int highest;
    for (int i = 0; i < 10; i++)
    {
        cin >> high[i];
    }
    cin >> highest;

    int count = 0;
    highest += 30; // 加上30cm的板凳高度

    for (int i = 0; i < 10; i++)
    {
        if (high[i] <= highest)
        {
            count++;
        }
    }

    cout << count;
    return 0;
}