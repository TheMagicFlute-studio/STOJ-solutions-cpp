#include<iostream>

using namespace std;

int main()
{
	int n, m;

	cin >> n >> m;

	int x = n < m ? n : m;

	for(x; x >= 1; x--)
	{
		if(n % x == 0 && m % x == 0)
        {
			break;
        }
	}

	cout << x << endl;

	return 0;
}