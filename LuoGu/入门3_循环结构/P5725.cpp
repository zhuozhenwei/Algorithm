#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int num = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << setw(2) << setfill('0') << num;
            num++;
        }
        cout << endl;
    }

    cout << endl;

    num = 1;
    for (int i = 0; i < n; i++)
    {
        string s = string(2 * (n - i - 1), ' ');
        cout << s;
        
        for (int j = 0; j < i + 1; j++)
        {
            cout << setw(2) << setfill('0') << num;
            num++;
        }
        cout << endl;
    }
    return 0;
}