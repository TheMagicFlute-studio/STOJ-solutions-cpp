#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char *argv[])
{
	int n, t[20][20] = {0};
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			if(j == 0 || j == i)
			{
				t[i][j] = 1;
			}
			else
			{
				t[i][j] = t[i - 1][j - 1] + t[i - 1][j];
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << t[i][j];
			if(j != i)
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