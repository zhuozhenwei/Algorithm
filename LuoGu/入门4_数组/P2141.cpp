#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[n] = {0};
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int count = 0;

    sort(a, a + n);
    for (int i = 2; i < n; i++)
    {
        for (int j = 0; j < i - 1; j++) // 测试再a[i]前面是否存在两个数相加为a[i]
        {
            int re = a[i] - a[j];
            for (int k = j + 1; k < i; k++)
            {
                if (re == a[k])
                {
                    count++;
                    goto below; // 提前跳出两层循环
                }
            }
        }
    below:
        count = count; // 设置一个挑战语句
    }

    cout << count;
    return 0;
}