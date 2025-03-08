#include <iostream>

using namespace std;
int t = 0;

void sort(int arr[], int n)
{
	//冒泡
	for(int i = 0; i < n-1; i++)
	{
		for(int j = 0; j < n-1-i; j++)
		{
			if(arr[j] > arr[j+1])
			{
				swap(arr[j], arr[j+1]);

				t ++;
			}
		}
	}
}

int main(int argc, char *argv[])
{
	int n, arr[100001];

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	sort(arr, n);

	cout << t;
	
	return 0;
}