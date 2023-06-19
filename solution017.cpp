#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	int km;
	
	double price = 15;

	cin >> km;

	if (km > 3)
	{
		km -= 3;

		price += km * 2.7;
	}
	cout << price << endl;

	return 0;
}