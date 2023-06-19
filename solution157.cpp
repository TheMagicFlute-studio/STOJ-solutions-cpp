#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int m, n, cnt = 0;

    cin >> m >> n;

    int a[m][n];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
            
            if (a[i][j] != 0)
            {
                cnt++;
            }
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] != 0)
            {
                cout << i + 1 << " " << j + 1 << " " << a[i][j] << endl;
            }
        }
    }
    
    return 0;
}