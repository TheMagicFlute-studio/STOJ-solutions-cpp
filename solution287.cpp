#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char *argv[])
{
	vector<vector<int>> v(10010);
	int n, m;
	cin >> n >> m;

	while (m--)
	{
		int x, y;
		cin >> x >> y;
		v[x].push_back(y);
	}
	for (int i = 1; i <= n; i++)
	{
		for (int j = 0; j < v[i].size(); j++)
		{
			cout << v[i][j];
			if (j != v[i].size() - 1)
				cout << ' ';
		}
		cout << endl;
	}

	return 0;
}