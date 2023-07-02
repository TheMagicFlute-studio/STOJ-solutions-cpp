#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	int n, first, second;

	cin >> n;

	int a[10000];

	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	first = a[n - 1];

	second = a[0];

	for (int i = n - 1; i > 1; i--)
	{
		a[i] = a[i - 1];
	}

	a[0] = first;

	a[1] = second;

	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}

	return 0;
}