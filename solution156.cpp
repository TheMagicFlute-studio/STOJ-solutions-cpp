#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	int m, n, arr1[101][101], arr2[101][101];

	cin >> m >> n;

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> arr1[i][j];
		}
	}
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> arr2[i][j];
		}
	}
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << arr1[i][j] + arr2[i][j];
			if(j != n-1)
			{
				cout << ' ';
			}
			else
			{
				cout << endl;
			}
		}
	}
	
	return 0;
}