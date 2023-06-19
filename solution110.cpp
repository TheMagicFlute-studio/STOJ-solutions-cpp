#include <iostream>

using namespace std;

bool is_palindromic(int n)
{
	int x = 0, s = n;
	while (s > 0)
	{
		x = x * 10 + s % 10;

		s = s / 10;
	}

	if (x == n)
	{
		return true;
	}
	return false;
}

int main(int argc, char *argv[])
{
	int n;

	cin >> n;

	if (is_palindromic(n))
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}
	cout << endl;
	
	return 0;
}