#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	int n, i, tmp, max = 0, min = 2147483647;

	cin >> n;

	for(i = 0 ; i < n ; i++)
    {
		cin >> tmp;
		if (tmp <= min)
		{
			min = tmp;
		}
		else if (tmp >= max)
		{
			max = tmp;
		}

	}
	cout << max << " " << min << endl;
	
	return 0;
}