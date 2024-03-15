#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    getline(cin, str);

    int n = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if ((str[i] == 'a') || (str[i] == 'd') || (str[i] == 'g') || (str[i] == 'j') || (str[i] == 'm') || (str[i] == 'p') || (str[i] == 't') || (str[i] == 'w') || (str[i] == ' '))
        {
            n += 1;
        }
        if ((str[i] == 'b') || (str[i] == 'e') || (str[i] == 'h') || (str[i] == 'k') || (str[i] == 'n') || (str[i] == 'q') || (str[i] == 'u') || (str[i] == 'x'))
        {
            n += 2;
        }
        if ((str[i] == 'c') || (str[i] == 'f') || (str[i] == 'i') || (str[i] == 'l') || (str[i] == 'o') || (str[i] == 'r') || (str[i] == 'v') || (str[i] == 'y'))
        {
            n += 3;
        }
        if ((str[i] == 's') || (str[i] == 'z'))
        {
            n += 4;
        }
    }

    cout << n;
    return 0;
}