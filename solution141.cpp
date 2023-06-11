# include <bits/stdc++.h>

using namespace std;

int main(int argc, char** argv)
{
    char c;
	int smallletters = 0, largeletters=0,space = 0, digit = 0,douhao=0, other = 0;
	while ((c = getchar()) != '\n')
	{
		if (c >= 'a' && c <= 'z')
		{
			smallletters++;
		}
		else if (c >= 'A' && c <= 'Z')
		{
			largeletters++;
		}
		else if (c >= '0' && c <= '9')
		{
			digit++;
		}
		else if (c == ' ')
		{
			space++;
		}

	}
	cout << smallletters << " " << largeletters << " " << digit << " " << space << " " << endl;

	return 0;

}
