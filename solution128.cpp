#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, char *argv[])
{
	string n;
	cin >> n;

	while (n.size() > 1 && n.back() == '0')
	{
		n.pop_back();
	}

	reverse(n.begin(), n.end());
	
	cout << n << endl;

	return 0;
}