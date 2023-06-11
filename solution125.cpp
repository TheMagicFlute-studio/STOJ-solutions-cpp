# include <iostream>

using namespace std;

int main(int argc, char** argv)
{

    long long int n;

	cin >> n;

	int r[100];

	int i, j = 0;
 
	for (i = 0; n > 0; i++)
	{
		r[i] = n % 2;

		n = n / 2;

		j++;
	}
    
	for (j = j - 1; j >= 0; j--)
	{
		cout << r[j];
	}
	
	return 0;
}