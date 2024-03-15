#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + n);

    int sum = 0;
    for (int i = 1; i < n - 1; i++)
    {
        sum += arr[i];
    }

    cout << fixed << setprecision(2) << (double)sum / (n - 2);

    return 0;
}