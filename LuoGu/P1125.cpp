#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    if (n < 2)
        return false;

    if (n == 2)
        return true;

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    string str;
    cin >> str;

    int maxn = 0, minn = 0;
    int len = str.length();

    int num[len] = {0};

    for (int i = 0; i < str.length(); i++)
    {
        num[i] = 1;
        for (int j = 0; j < str.length(); j++)
        {
            if (j == i)
            {
                continue;
            }

            if (str[i] == str[j])
            {
                num[i]++;
            }
        }
    }

    // for (int i = 0; i < str.length(); i++)
    // {
    //     cout << num[i] << " ";
    // }
    // cout << endl;

    sort(num, num + str.length());
    maxn = num[str.length() - 1];
    minn = num[0];

    if (isPrime(maxn - minn) == true)
    {
        cout << "Lucky Word" << endl;
        cout << maxn - minn;
    }
    else
    {
        cout << "No Answer" << endl;
        cout << 0;
    }
    return 0;
}