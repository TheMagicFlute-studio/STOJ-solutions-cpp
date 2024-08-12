#include <iostream>
#include <algorithm>

using namespace std;
bool cmp1(int a, int b) { return a > b; }
bool cmp2(int a, int b) { return a < b; }

int main(int argc, char *argv[])
{
	int n, arr[1001], x, a1[1001], a2[1001];

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	cin >> x;

	for (int i = 0; i < x - 1; i++)
	{
		a1[i] = arr[i];
	}

	for (int i = x, cnt = 0; i < n; i++, cnt++)
	{
		a2[cnt] = arr[i];
	}

	// sort)
	sort(a1, a1 + x - 1, cmp2);
	sort(a2, a2 + n - x, cmp1);

	for (int i = 0; i < x - 1; i++)
	{
		cout << a1[i] << " ";
	}
	cout << arr[x - 1] << " ";
	for (int i = 0; i < n - x; i++)
	{
		cout << a2[i] << " ";
	}

	return 0;
}