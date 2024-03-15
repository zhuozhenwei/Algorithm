#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    for (int i = 0; i < s.length(); i++)
    {
        char t = s[i];
        for (int j = 1; j <= n; j++)
        {
            if (t == 'z')
            {
                t = 'a';
            }
            else
            {
                t = (char)(t + 1);
            }
        }

        s[i] = t;
    }

    cout << s;
    return 0;
}