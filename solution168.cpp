#include <iostream>
using namespace std;

int main()
{
	int R;
	cin >> R;
	int dp[R][R];
	for (int i = 0; i < R; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cin >> dp[i][j];
		}
	}

	for (int i = R - 2; i >= 0; i--)
	{
		for (int j = 0; j <= i; j++)
		{
			dp[i][j] = max(dp[i + 1][j], dp[i + 1][j + 1]) + dp[i][j];
		}
	}

	cout << dp[0][0] << endl;
	return 0;
}
