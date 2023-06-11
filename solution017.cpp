#include <iostream>

int main(int argc, char** argv)
{
	using namespace std;

    int km;
	
	float price = 15;

	cin >> km;

	if (km <= 3)
	{
		cout << price << endl;
	}
	else if (km > 3)
	{
		km -= 3;

		price += km * 2.7;

		cout << price << endl;
	}

	return 0;
}
