#include <bits/stdc++.h>
using namespace std;

int main()
{
    double s, v, HH, MM;
    cin >> s >> v; // 路程 速度

    int t = ceil(s / v); // 向上取整

    t = t + 10; // 加上垃圾分类的时间

    int h, m;
    h = t / 60; // 所用的小时
    m = t % 60; // 所用的分钟

    if (h >= 8) // 可能最晚也得在前一天
    {
        HH = 23 - (h - 8);
        MM = 60 - (m);
    }
    else
    {
        HH = 7 - h;
        MM = 60 - m;
    }

    if (MM == 60) // 排除4:60这样的情况
    {
        HH += 1;
        MM = 0;
    }

    cout << setw(2) << setfill('0') << HH << ":" << setw(2) << setfill('0') << MM; // 注意输出格式
    return 0;
}