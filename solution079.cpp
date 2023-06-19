#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	for (int i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && !(i % 5 == 0))
		{
			cout << i << " ";
		}
	}
	cout << endl;
	
	return 0;
}