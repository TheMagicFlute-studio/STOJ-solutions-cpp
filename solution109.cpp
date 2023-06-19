#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	int n;

	cin >> n;

	char arr[n];

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];

		arr[i] = (arr[i] - 'a' + 3) % 26 + 'a';
	}
	
	for (int i = 0; i < n; i++)
	{
		cout << arr[i];
	}
	cout << endl;
	
	return 0;
}