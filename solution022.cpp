#include <iostream>

const int MAXN = 5005;
const int MAXC = 50005;
int c, h, v[MAXN], dp[MAXC];

int main()
{
	using namespace std;

	cin >> c >> h;

	for (int i = 1; i <= h; i++)
	{
		cin >> v[i];
	}

	for (int i = 1; i <= h; i++)
	{
		for (int j = c; j >= v[i]; j--)
		{
			dp[j] = max(dp[j], dp[j - v[i]] + v[i]);
		}
	}

	cout << dp[c] << endl;

	return 0;
}
