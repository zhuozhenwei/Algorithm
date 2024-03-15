#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string str;
    cin >> str;

    // 不做任何改变
    int count_0 = 0;
    for (int i = 0; i <= n - 2; i++)
    {
        if (str[i] == 'V' && str[i + 1] == 'K')
        {
            count_0++;
        }
    }

    // 改变一个数字
    for (int i = 0; i <= n - 2; i++)
    { // 两个V连在一起并且是在最后 或者 三个V连起来 或者 三个K连起来 或者 两个K连在一起并且是在最前边
        if ((str[i] == 'V' && str[i + 1] == 'V' && i + 1 == n - 1) || (str[i] == 'V' && str[i + 1] == 'V' && str[i + 2] == 'V') || (str[i] == 'K' && str[i + 1] == 'K' && i == 0) || (str[i] == 'K' && str[i + 1] == 'K' && str[i + 2] == 'K'))
        {
            count_0++;
            break;
        }
    }

    cout << count_0;
    return 0;
}