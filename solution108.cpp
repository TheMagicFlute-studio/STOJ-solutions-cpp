#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	int n, h, count = 0;

	cin >> n;
	
	for (int i = 0; i < n; i++)
	{
		cin >> h;

		if (h <= 135 + 30)
		{
			count++;
		}
	}
	cout << count << endl;
	
	return 0;
}