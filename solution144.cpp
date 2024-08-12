#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	string s1, s2;
	cin >> s1;
	s2 = s1;
	int sum = 0;
	char code;

	for (int i = 0; i < s1.length(); i++)
	{
		if (i == 0)
		{
			sum += (int)(s1[i] - '0') * (i + 1);
		}
		else if (i >= 2 && i <= 4)
		{
			sum += (int)(s1[i] - '0') * i;
		}
		else if (i >= 6 && i <= 10)
		{
			sum += (int)(s1[i] - '0') * (i - 1);
		}
	}
	if (sum % 11 == 10)
	{
		code = 'X';
	}
	else
	{
		code = (char)((sum % 11) + '0');
	}

	if (s1[12] == code)
	{
		cout << "Right" << endl;
	}
	else
	{
		s2[12] = code;
		cout << s2 << endl;
	}

	return 0;
}