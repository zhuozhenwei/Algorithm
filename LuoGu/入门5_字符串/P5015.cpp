#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s); // 输入带有空格的字符串

    int num = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if ((s[i] >= '0' && s[i] <= '9') || (s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
        {
            num++;
        }
    }

    if (s.substr((s.length() - 2), 2) == "\n")
    {
        num--;
    }

    cout << num;

    return 0;
}