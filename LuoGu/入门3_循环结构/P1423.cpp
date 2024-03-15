#include <bits/stdc++.h>
using namespace std;

int main()
{
    double s;
    cin >> s;

    int n = 1;        // 记录游了多少步
    double first = 2; // 第一步游泳的米数
    double c = first;

    while (c < s)
    {
        c += first * 0.98;
        n++;
        first *= 0.98;
    }
    cout << n;
    return 0;
}