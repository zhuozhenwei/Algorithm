#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int num = n;
    int c = 1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < num; j++)
        {
            cout << setw(2) << setfill('0') << c;
            c++;
        }
        cout << endl;
        num--;
    }
    return 0;
}