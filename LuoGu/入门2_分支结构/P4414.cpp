#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[3] = {0};
    int res[3] = {0};
    string ch;

    for (int i = 0; i < 3; i++)
    {
        cin >> arr[i];
    }
    cin >> ch;

    sort(arr, arr + 3); // 从小到大排序

    for (int i = 0; i < 3; i++)
    {
        if (ch[i] == 'A')
            res[i] = arr[0];
        else if (ch[i] == 'B')
            res[i] = arr[1];
        else
            res[i] = arr[2];
    }

    for (int i = 0; i < 3; i++)
    {
        cout << res[i] << " ";
    }
    return 0;
}