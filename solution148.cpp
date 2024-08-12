#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	string s1, s2;
	cin >> s1 >> s2;

	int sum = 0;

	for (int i = 0; i < s2.size(); i++)
	{
		for (int j = 0; j < s1.size(); j++)
		{
			if(s1[j] == s2[i])
			{
				sum ++;
			}
		}
	}
	cout << sum << endl;
	
	return 0;
}