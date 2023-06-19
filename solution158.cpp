#include <iostream>
#include <climits>

using namespace std;

int main(int argc, char *argv[])
{
    int m, n;

    cin >> m >> n;

    int max_val = INT_MIN;

    for (int i = 0; i < m; i++)
	{
        for (int j = 0; j < n; j++)
		{
            int val;

            cin >> val;

            if (val > max_val)
			{
                max_val = val;
            }
        }
    }

    cout << max_val << endl;
    
    return 0;
}