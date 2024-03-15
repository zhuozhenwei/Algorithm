//时间复杂度：O(nlogn)
#include <bits/stdc++.h>
using namespace std;

int x[5000005], k;

int main()
{
    int n;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }
    sort(x, x + n); // 快排
    cout << x[k];
}