#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	int n, j = 0;

	cin >> n;

	int r[100];
 
	for (int i = 0; n > 0; i++)
	{
		r[i] = n % 2;

		n = n / 2;

		j++;
	}
    
	for (int j = j - 1; j >= 0; j--)
	{
		cout << r[j];
	}
	cout << endl;
	
	return 0;
}