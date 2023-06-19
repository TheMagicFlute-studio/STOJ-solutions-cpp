#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char *argv[])
{
	int i, j, k;

    cin >> k;

	for (i = 2; i <= k; i++)
	{
		for (j = 2; j < sqrt(i); j++)
		{
			if (i % j == 0)
            {
                break;
            }
		}
		
		if (j == int(sqrt(i)) + 1)
        {
			cout << i << " ";
        }
	}
	
	return 0;
}