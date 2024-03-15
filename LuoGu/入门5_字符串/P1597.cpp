#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int a = 0;
    int b = 0;
    int c = 0;

    for (int i = 0; i <= s.length() - 5; i += 5)
    {
        if (s[i] == 'a')
        {
            if (s[i + 3] >= 48 && s[i + 3] <= 57) // 一位整数
            {
                a = s[i + 3] - 48;
            }
            else // 变量
            {
                if (s[i + 3] == 'b')
                {
                    a = b;
                }
                if (s[i + 3] == 'c')
                {
                    a = c;
                }
            }
        }
        else if (s[i] == 'b')
        {
            if (s[i + 3] >= 48 && s[i + 3] <= 57) // 一位整数
            {
                b = s[i + 3] - 48;
            }
            else // 变量
            {
                if (s[i + 3] == 'a')
                {
                    b = a;
                }
                if (s[i + 3] == 'c')
                {
                    b = c;
                }
            }
        }
        else
        {
            if (s[i + 3] >= 48 && s[i + 3] <= 57) // 一位整数
            {
                c = s[i + 3] - 48;
            }
            else // 变量
            {
                if (s[i + 3] == 'a')
                {
                    c = a;
                }
                if (s[i + 3] == 'b')
                {
                    c = b;
                }
            }
        }
    }

    cout << a << " " << b << " " << c;
    return 0;
}