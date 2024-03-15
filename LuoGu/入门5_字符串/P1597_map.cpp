#include <bits/stdc++.h>
using namespace std;

map<char, char> m;

int main()
{
    string s;
    cin >> s;

    // map初始化
    m['a'] = m['b'] = m['c'] = '0';

    for (int i = 0; i <= s.length() - 5; i += 5)
    {
        if (s[i + 3] >= 48 && s[i + 3] <= 57) // 一位整数
        {
            m[s[i]] = s[i + 3];
        }
        else // 一个变量
        {
            m[s[i]] = m[s[i + 3]];
        }
    }

    for (auto it : m)
    {
        cout << it.second << " ";
    }
    return 0;
}
