#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	int n, arr[100001], k;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	cin >> k;

	bool flag = false;

	for (int i = 0; i < n; i++)
	{
		if(arr[i] == k)
		{
			flag = !flag;
			cout << "Yes" << endl;
			break;
		}
	}
	if(!flag)
	{
		cout << "No" << endl;
	}
	
	return 0;
}