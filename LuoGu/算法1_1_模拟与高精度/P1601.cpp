#include <bits/stdc++.h>
using namespace std;

string s1, s2;

int main()
{
    // 将高精度的数字以字符串形式输入
    cin >> s1 >> s2;
    int len = max(s1.length(), s2.length());
    int num1[len] = {0};
    int num2[len] = {0};

    // 将字符串转换成数组存储
    for (int i = 0; i < s1.length(); i++)
    {
        num1[i] = s1[s1.length() - 1 - i] - '0';
    }
    for (int i = 0; i < s2.length(); i++)
    {
        num2[i] = s2[s2.length() - 1 - i] - '0';
    }

    // 相加，过10进1
    int res[len + 5] = {0};
    int t = 0;
    for (int i = 0; i < len; i++)
    {
        t += num1[i] + num2[i];
        res[i] = t % 10;
        t /= 10;
    }

    // 最高位也存在进位情况
    if (t != 0)
    {
        res[len] = t;
        len++;
    }

    for (int i = len - 1; i >= 0; i--)
    {
        cout << res[i];
    }
    return 0;
}