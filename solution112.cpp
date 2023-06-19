#include <iostream>

using namespace std;

bool is_prime(int num)
{
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main(int argc, char *argv[])
{
	int n;
	cin >> n;
	for (int i = n - 1; i >= 2; i--)
	{
		if (n % i == 0 && is_prime(i))
		{
			cout << i << endl;
			
			break;
		}
	}
	
	return 0;
}