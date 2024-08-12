#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	int n;
	cin >> n;
	long long f = 1;
	long long ans = 0;

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			f *= j;
		}
		ans += f;
		f = 1;
	}
	cout << ans << endl;
	
	return 0;
}