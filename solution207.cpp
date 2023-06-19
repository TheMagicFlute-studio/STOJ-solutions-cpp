#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	int km;
	
	double price = 8;

	cin >> km;

	if (km <= 3)
	{
		cout << price;
	}
	else
	{
		km -= 3;

		price += km * 2.7;

		cout << price;
	}
	cout << endl;
	
	return 0;
}