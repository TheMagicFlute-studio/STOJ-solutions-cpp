#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	double sum = 0;

	for (double i = 1; i <= 100; i++)
	{
		sum = sum + 1.0 / i;
	}

	cout << sum << endl;
	
	return 0;
}