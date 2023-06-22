#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	int h;

	cin >> h;

	double totalDistance = h, currentHeight = h;

	for (int i = 0; i < 9; i++)
	{
		currentHeight /= 2;
		totalDistance += currentHeight * 2;
	}

	cout << totalDistance << endl << currentHeight / 2 << endl;

    return 0;
}
