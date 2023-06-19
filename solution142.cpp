#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
	string str;
	getline(cin, str);

	int word_count = 0;
	bool in_word = false;
	
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] == ' ')
		{
			if (in_word)
			{
				word_count++;
				in_word = false;
			}
		}
		else if (!in_word)
		{
			in_word = true;
		}
	}
	if (in_word)
	{
		word_count++;
	}
	cout << word_count << endl;
	
	return 0;
}