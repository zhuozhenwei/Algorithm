#include <bits/stdc++.h>
using namespace std;

// 反转并去掉前导零之后的字符串
string r(string s)
{
    reverse(s.begin(), s.end()); // 反转
    int n = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '0')
            n++;
        else
            break;
    }
    return (s.substr(n) != "") ? s.substr(n) : "0";
}

// 去掉后导零
string deleteTail(string s)
{
    int n = 0;
    for (int i = s.size() - 1; i >= 0; --i)
        if (s[i] == '0')
            n++;
        else
            break;
    s.erase(s.end() - n, s.end());
    return s != "" ? s : "0";
}

int main()
{
    string s;
    cin >> s;
    if (s.back() == '%') // 百分数
    {
        cout << r(s.substr(0, s.size() - 1)) << "%";
        return 0;
    }
    else
    {
        for (int i = 0; i < s.length(); i++)
        {
            string left, right;
            if (s[i] == '/') // 分数
            {
                left = s.substr(0, s.find("/"));
                right = s.substr(s.find("/") + 1);
                cout << r(left) << "/" << r(right);
                return 0;
            }
            if (s[i] == '.') // 小数
            {
                left = s.substr(0, s.find("."));
                right = s.substr(s.find(".") + 1);
                cout << r(left) << "." << deleteTail(r(right));
                return 0;
            }
        }
        // 最后剩下的一种情况是正整数
        cout << r(s);
    }
    return 0;
}
