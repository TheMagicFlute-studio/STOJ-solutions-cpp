#include <iostream>

using namespace std;

int m, n, k;
int a[110][110], b[110][110], c[110][110];

int main(int argc, char *argv[])
{
    cin >> n >> m >> k;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < k; j++)
        {
            cin >> b[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < k; j++)
        {
            for (int l = 0; l < m; l++)
            {
                c[i][j] += a[i][l] * b[l][j];
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < k; j++)
        {
            cout << c[i][j];
            if (j != k - 1)
                cout << " ";
        }
        if (i != n - 1)
            cout << endl;
    }

    return 0;
}