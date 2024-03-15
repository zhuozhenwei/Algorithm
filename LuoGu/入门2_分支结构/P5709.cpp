#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m, t, s;
    cin >> m >> t >> s;

    int all = m * t; // 总时间

    int num; // 已经吃过的苹果个数
    if (s >= all)
    {
        num = m;
    }
    else
    {
        num = ceil((double)s / t);
    }

    int res = m - num; // 剩余的苹果个数
    cout << res;
    return 0;
}