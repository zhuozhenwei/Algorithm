#include <bits/stdc++.h>
using namespace std;

string s[4];
int num[26];

int main()
{
    // 输入四行字符并记录字符个数
    for (int i = 0; i < 4; i++)
    {
        getline(cin, s[i]);
        for (int j = 0; j < s[i].length(); j++)
        {
            if (s[i][j] >= 'A' && s[i][j] <= 'Z')
            {
                num[s[i][j] - 'A']++;
            }
        }
    }

    // 出现次数最多的字母
    int max_num = *max_element(num, num + 26);

    // 赋值数组
    char res[max_num + 1][26];
    for (int i = 0; i < max_num + 1; i++)
    {
        for (int j = 0; j < 26; j++)
        {
            res[i][j] = ' ';
        }
    }
    for (int j = 0; j < 26; j++) // 最后一行
    {
        res[max_num][j] = (char)(j + 65);
    }
    for (int j = 0; j < 26; j++)
    {
        for (int i = max_num - 1; i >= max_num - num[j]; i--)
        {
            res[i][j] = '*';
        }
    }

    // 输出
    for (int i = 0; i < max_num + 1; i++)
    {
        for (int j = 0; j < 26; j++)
        {
            if (j <= 24)
            {
                cout << res[i][j] << " ";
            }
            else
            {
                cout << res[i][j];
            }
        }
        if (i <= max_num - 1)
        {
            cout << endl;
        }
    }
    return 0;
}