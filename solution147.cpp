#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	string s;
	getline(cin, s);
	
	int cnt = 0;

	for(int i = 0; i <= s.length(); i++)
	{
		if(s[i] == ' ')
		{
			cnt++;
		}
	}
	cout << cnt + 1 << endl;
	
	return 0;
}