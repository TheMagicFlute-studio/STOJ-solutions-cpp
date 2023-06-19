#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
	string s;
	getline(cin, s);
	
	int count = 0;

	for(int i = 0; i <= s.size(); i++)
	{
		if(s[i] == ' ')
		{
			count += 1;
		}
	}
	cout << count + 1 << endl;
	
	return 0;
}