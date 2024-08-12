#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	int m, n, arr[11][11];
	cin >> m >> n;

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> arr[i][j];
		}
	}
	for (int i = m - 1; i >= 0; i--)
	{
		for (int j = n - 1; j >= 0; j--)
		{
			cout << arr[i][j];
			if(j != 0)
			{
				cout << " ";
			}
			else
			{
				cout << endl;
			}
		}
	}
	
	return 0;
}