#include <iostream>

using namespace std;

int main()
{

	int t, s, max_t = 0, unhappy_day = 0;

	for (int i = 1; i <= 7; i++)
	{
		cin >> t >> s;

		int total = t + s;

		if (total > 8 && total > max_t)
		{
			max_t = total;

			unhappy_day = i;
		}
	}

	cout << unhappy_day << endl;
	
	return 0;
}
