// 时间复杂度：O(n)
#include <bits/stdc++.h>
using namespace std;

int x[5000005], k;

void qsort(int low, int high)
{
	int i = low, j = high;
	int mid = x[(low + high) / 2];   //这里pivot值的选取非常不同，特别有创意，需要记住
	while (i <= j)
	{
		while (x[j] > mid)
		{
			j--;
		}
		while (x[i] < mid)
		{
			i++;
		}
		if (i <= j)
		{
			swap(x[i], x[j]);
			i++;
			j--;
		}
	}

	// 快排后数组被划分为三块： l<=j<=i<=r
	if (k <= j)
		qsort(low, j); // 在左区间只需要搜左区间
	else if (i <= k)
		qsort(i, high); // 在右区间只需要搜右区间
	else				// 如果在中间区间直接输出
	{
		cout << x[j + 1];    //与前面mid的设置有很大关系
		return;
	}
}

int main()
{
	int n;
	cin >> n >> k;
	for (int i = 0; i < n; i++)
	{
		cin >> x[i];
	}
	qsort(0, n - 1);
}