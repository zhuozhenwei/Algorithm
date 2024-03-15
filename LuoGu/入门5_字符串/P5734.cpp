#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin >> q;
    string str;
    cin >> str;

    string l[q];

    for (int i = 0; i < q; i++)
    {
        int num;
        cin >> num;

        if (num == 1)
        {
            string str_1;
            cin >> str_1;
            str = str.append(str_1);

            l[i] = str;
        }
        else if (num == 2)
        {
            int a, b;
            cin >> a >> b;
            str = str.substr(a, b);

            l[i] = str;
        }
        else if (num == 3)
        {
            int n;
            string str_3;
            cin >> n >> str_3;
            str = str.insert(n, str_3);

            l[i] = str;
        }
        else
        {
            string str_4;
            cin >> str_4;

            int loc = -1;
            for (int i = 0; i <= str.length() - str_4.length(); i++)
            {
                if (str.substr(i, str_4.length()) == str_4)
                {
                    loc = i;
                    break;
                }
            }

            l[i] = to_string(loc);
        }
    }

    for (int i = 0; i < q; i++)
    {
        cout << l[i] << endl;
    }
    return 0;
}