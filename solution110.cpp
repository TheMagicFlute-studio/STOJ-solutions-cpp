#include <iostream>

bool is_palindromic(int n)
{
	int x = 0, s = n;
	while (s > 0)
	{
		x = x * 10 + s % 10; // 反向求和，s%10为取s的个位数，例，123取3
		s = s / 10;			 // 删除s的个位数，例，123变成12
	}

	if (x == n)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main(int argc, char **argv)
{
	using namespace std;

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