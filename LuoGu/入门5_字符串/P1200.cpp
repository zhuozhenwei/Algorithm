#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1, s2;
    cin >> s1 >> s2;

    int num1 = 1;
    int num2 = 1;
    for (int i = 0; i < s1.length(); i++)
    {
        num1 *= s1[i] - 64;
    }
    for (int i = 0; i < s2.length(); i++)
    {
        num2 *= s2[i] - 64;
    }

    if ((num1 % 47) == (num2 % 47))
    {
        cout << "GO";
    }
    else
    {
        cout << "STAY";
    }
    return 0;
}