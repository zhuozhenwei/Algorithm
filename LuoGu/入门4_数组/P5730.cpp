#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    char str[n];
    for (int i = 0; i < n; i++)
    {
        cin >> str[i];
    }

    int a[n];
    for (int i = 0; i < n; i++)
    {
        a[i] = str[i] - '0';
    }

    int column = 3 * n + n - 1;
    char c[5][column];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < column; j++)
        {
            c[i][j] = '.';
        }
    }

    int k = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            c[0][k] = c[0][k + 1] = c[0][k + 2] = c[4][k] = c[4][k + 1] = c[4][k + 2] = c[1][k] = c[2][k] = c[3][k] = c[1][k + 2] = c[2][k + 2] = c[3][k + 2] = 'X';
        }
        else if (a[i] == 1)
        {
            c[0][k + 2] = c[1][k + 2] = c[2][k + 2] = c[3][k + 2] = c[4][k + 2] = 'X';
        }
        else if (a[i] == 2)
        {
            c[0][k] = c[0][k + 1] = c[0][k + 2] = c[2][k] = c[2][k + 1] = c[2][k + 2] = c[4][k] = c[4][k + 1] = c[4][k + 2] = c[1][k + 2] = c[3][k] = 'X';
        }
        else if (a[i] == 3)
        {
            c[0][k] = c[0][k + 1] = c[0][k + 2] = c[2][k] = c[2][k + 1] = c[2][k + 2] = c[4][k] = c[4][k + 1] = c[4][k + 2] = c[1][k + 2] = c[3][k + 2] = 'X';
        }
        else if (a[i] == 4)
        {
            c[2][k] = c[2][k + 1] = c[2][k + 2] = c[0][k] = c[0][k + 2] = c[1][k] = c[1][k + 2] = c[3][k + 2] = c[4][k + 2] = 'X';
        }
        else if (a[i] == 5)
        {
            c[0][k] = c[0][k + 1] = c[0][k + 2] = c[2][k] = c[2][k + 1] = c[2][k + 2] = c[4][k] = c[4][k + 1] = c[4][k + 2] = c[1][k] = c[3][k + 2] = 'X';
        }
        else if (a[i] == 6)
        {
            c[0][k] = c[0][k + 1] = c[0][k + 2] = c[2][k] = c[2][k + 1] = c[2][k + 2] = c[4][k] = c[4][k + 1] = c[4][k + 2] = c[1][k] = c[3][k] = c[3][k + 2] = 'X';
        }
        else if (a[i] == 7)
        {
            c[0][k] = c[0][k + 1] = c[0][k + 2] = c[1][k + 2] = c[2][k + 2] = c[3][k + 2] = c[4][k + 2] = 'X';
        }
        else if (a[i] == 8)
        {
            c[0][k] = c[0][k + 1] = c[0][k + 2] = c[2][k] = c[2][k + 1] = c[2][k + 2] = c[4][k] = c[4][k + 1] = c[4][k + 2] = c[1][k] = c[1][k + 2] = c[3][k] = c[3][k + 2] = 'X';
        }
        else
        {
            c[0][k] = c[0][k + 1] = c[0][k + 2] = c[2][k] = c[2][k + 1] = c[2][k + 2] = c[4][k] = c[4][k + 1] = c[4][k + 2] = c[1][k] = c[1][k + 2] = c[3][k + 2] = 'X';
        }
        k += 4;
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cout << c[i][j];
        }
        cout << endl;
    }
    return 0;
}