#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	string n;
	cin >> n;

	bool flag = false;

	if(n == "0")
	{
		cout << "0";
		return 0;
	}

	for (int i = n.size() - 1; i >= 0; i--)
	{
		if (flag)
		{
			cout << n[i];
		}
		if (!flag && n[i] == '0')
		{
			continue;
		}
		if (!flag && n[i] != '0')
		{
			flag = true;
			cout << n[i];
		}
	}

	return 0;
}