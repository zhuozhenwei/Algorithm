#include <bits/stdc++.h>
using namespace std;
/*
void Bubblesort(int arr[], int n)//冒泡排序
{
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 0; j <= i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}
*/

int part(int low, int high) // 划分函数
{
    int i = low, j = high, base = arr[low]; // 基准
    while (i < j)
    {
        while (i < j && arr[j] > base)
        { // 从右向左
            j--;
        }
        if (i < j)
        {
            swap(arr[i], arr[j]);
            i++;
        }

        while (i < j && arr[i] <= base)
        { // 从左向右
            i++;
        }
        if (i < j)
        {
            swap(arr[i], arr[j]);
            j--;
        }
    }
    return i; // 最后i与j重合
}

void QuickSort(int low, int high) // 快速排序
{
    if (low < high)
    {
        int mid = part(low, high);
        QuickSort(low, mid - 1);
        QuickSort(mid + 1, high);
    }
    else
        return;
}

int arr[100001];

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    QuickSort(0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}