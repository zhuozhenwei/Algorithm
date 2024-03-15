#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str_0;
    cin >> str_0;

    int N = str_0.length();
    string str[N];
    str[0] = str_0;
    for (int i = 1; i < N; i++)
    {
        cin >> str[i];
    }

    cout << N << " ";

    char c[N * N];
    for (int i = 0; i < N; i++) // 将二维数组转成一维数组
    {
        for (int j = 0; j < N; j++)
        {
            c[i * N + j] = str[i][j];
        }
    }

    if (c[0] == '1') // 第一个数表示连续有几个0，如果一开始就是1，首先输出0
    {
        cout << "0 ";
    }

    int count = 1;
    int sum = 0;
    for (int i = 0; i < N * N - 1; i++) // 遍历排序后的arr数组
    {
        if (c[i] == c[i + 1]) // 如果相等，则count + 1
        {
            count++;
        }
        else // 否则输出个数，并将count重置为 1；
        {
            cout << count << " ";
            sum += count;
            count = 1;
        }
    }

    if (sum < N * N)
    {
        cout << N * N - sum;
    }
    return 0;
}