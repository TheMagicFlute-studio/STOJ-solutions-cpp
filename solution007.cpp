#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	char a, b, c;
	int score = 0;
	cin >> a >> b >> c;

	if (a == '1')
	{
		cout << "小星" << ' ';
		if (b == 'B')
		{
			score += 5;
		}
		if (c == 'B')
		{
			score += 10;
		}
		else
		{
			score -= 5;
		}
	}
	if (a == '2')
	{
		cout << "小爱" << ' ';
		if (b == 'A')
		{
			score += 5;
		}
		if (c == 'A')
		{
			score += 10;
		}
		else
		{
			score -= 5;
		}
	}
	if (a == '3')
	{
		cout << "依依" << ' ';
		if (b == 'O')
		{
			score += 5;
		}
		if (c == 'O')
		{
			score += 10;
		}
		else
		{
			score -= 5;
		}
	}
	if (a == '4')
	{
		cout << "小白" << ' ';
		if (b == 'S')
		{
			score += 5;
		}
		if (c == 'S')
		{
			score += 10;
		}
		else
		{
			score -= 5;
		}
	}
	cout << score << endl;

	return 0;
}