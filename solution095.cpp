#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, char *argv[])
{
	int n;

	cin >> n;

	int arr[n];

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	
	sort(arr, arr + n);

	int max_span = arr[n - 1] - arr[0];
	
	cout << max_span << endl;
	
	return 0;
}