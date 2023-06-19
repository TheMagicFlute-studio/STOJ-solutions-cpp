#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	int a, b, c, ans;

	cin >> a >> b >> c;

	ans = a > b ? a : b;

	ans = ans > c ? ans : c;

	cout << ans << endl;
	
	return 0;
}