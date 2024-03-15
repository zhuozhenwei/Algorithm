#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int a[N * N];

    int count = 0;
    int p = 0;
    while (count < N * N)
    {
        int b;
        cin >> b;

        for (int i = count; i < count + b; i++)
        {
            a[i] = p;
        }

        count += b;
        p = (p == 0) ? 1 : 0;
    }

    int m = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << a[m];
            m++;
            // 输出
        }
        cout << endl;
        /*按格式输出*/
    }

    // int c[N][N];
    // for (int i = 0; i < N; i++)
    // {
    //     for (int j = 0; j < N; j++)
    //     {
    //         c[i][j] = a[i * N + j];
    //     }
    // }

    // for (int i = 0; i < N; i++)
    // {
    //     for (int j = 0; j < N; j++)
    //     {
    //         cout << c[i][j];
    //     }
    //     cout << endl;
    // }
    return 0;
}