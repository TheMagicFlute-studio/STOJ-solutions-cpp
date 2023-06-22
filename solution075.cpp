#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char *argv[])
{
	int num, rev, i = 1, cl, cl0;

	cin >> num;

	cl = num;

	cl0 = num;

	bool x = num >= 0;

	num = abs(num);

	while (cl)
	{
		cl /= 10;

		i *= 10;
	}
	do
	{
		rev += num % 10 * i;
		num /= 10;
		i /= 10;

	} while (i != 0);

	rev /= 10;

	if (x)
	{
		cout << rev << endl;
	}
	else
	{
		cout << -rev << endl;
	}

	return 0;
}