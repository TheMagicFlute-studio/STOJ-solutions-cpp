#include <iostream>
#include <algorithm>

int main()
{
	using namespace std;
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	sort(arr, arr + n);					// 将序列排序
	int max_span = arr[n - 1] - arr[0]; // 计算最大跨度
	cout << max_span << endl;
	return 0;
}
