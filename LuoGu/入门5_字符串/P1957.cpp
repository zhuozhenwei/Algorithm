#include <bits/stdc++.h>
using namespace std;

int main()
{
    // 输入
    int n;
    cin >> n;
    // 用于输出结果记录使用
    string s[n];
    int r[n];

    char last_op; // 上一个运算符
    char real_op; // abc代指运算符转成真正的+-*运算符
    for (int i = 0; i < n; i++)
    {
        string op; // 输入一串数字或者是运算符abc
        cin >> op;

        // 输入数据
        int num1, num2, result;
        if (op[0] >= 'a' && op[0] <= 'c')
        {
            cin >> num1 >> num2;
            last_op = op[0];
        }
        else
        {
            num1 = stoi(op);
            cin >> num2;
        }

        // 计算
        if (last_op == 'a')
        {
            real_op = '+';
            result = num1 + num2;
        }
        else if (last_op == 'b')
        {
            real_op = '-';
            result = num1 - num2;
        }
        else
        {
            real_op = '*';
            result = num1 * num2;
        }

        // 结果
        s[i] = to_string(num1) + real_op + to_string(num2) + "=" + to_string(result);
        r[i] = to_string(num1).length() + to_string(num2).length() + to_string(result).length() + 2;
    }

    for (int i = 0; i < n; i++)
    {
        cout << s[i] << endl;
        cout << r[i] << endl;
    }

    return 0;
}