#include <bits/stdc++.h>
using namespace std;

/*
//方法一
int part(int num[], int low, int high) // 划分函数
{
    int i = low, j = high, base = num[low]; // 基准
    while (i < j)
    {
        while (i < j && num[j] > base)
        { // 从右向左
            j--;
        }
        if (i < j)
        {
            swap(num[i], num[j]);
            i++;
        }

        while (i < j && num[i] <= base)
        { // 从左向右
            i++;
        }
        if (i < j)
        {
            swap(num[i], num[j]);
            j--;
        }
    }
    return i; // 最后i与j重合
}*/

/*
// 方法二
int part(int num[], int low, int high) // 划分函数
{
    int i = low + 1, j = high, base = num[low]; // 基准
    while (i < j)
    {
        while (i < j && num[j] > base)
        { // 从右向左
            j--;
        }
        while (i < j && num[i] <= base)
        { // 从左向右
            i++;
        }

        if (i < j)
        {
            swap(num[i], num[j]);
        }
    }

    if (i == j)
    {
        if (num[low] > num[j])
        {
            swap(num[low], num[j]);
        }
    }
    else
    {
        swap(num[low], num[j]);
    }
    return j; // 最后i与j重合
}

void Quicksort(int num[], int low, int high) // 快速排序
{
    if (low < high)
    {
        int mid = part(num, low, high);
        Quicksort(num, low, mid - 1);  // 左半部分
        Quicksort(num, mid + 1, high); // 右半部分
    }
}
*/

void QuickSort(int arr[], int begin, int end)
{
    if (begin > end)
    {
        return;
    }
    int i = begin, j = end;
    int change;
    int temp = arr[begin];//基准
    while (i < j)
    {
        while (temp <= arr[j] && i < j)
        {
            j--;
        }
        while (temp >= arr[i] && i < j)
        {
            i++;
        }
        if (i < j)
        {
            swap(arr[i], arr[j]);
        }
    }
    arr[begin] = arr[i];
    arr[i] = temp;
    QuickSort(arr, begin, j - 1);
    QuickSort(arr, j + 1, end);
}

int main()
{
    int m;
    cin >> m;

    int num[m];
    for (int i = 0; i < m; i++)
    {
        cin >> num[i];
    }

    QuickSort(num, 0, m - 1);

    for (int i = 0; i < m; i++)
    {
        cout << num[i] << " ";
    }
    return 0;
}