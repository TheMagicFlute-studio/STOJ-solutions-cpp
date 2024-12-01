#include <iostream>
#include <cmath>

using namespace std;

int a[25][25];

int main(int argc, char *argv[])
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];

    for (int i = 0; i < n; i++)
    {
        a[i][i] += m;
        if (i != n / 2 || n % 2 == 0)
            a[n - i - 1][i] += m;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j];
            if (j != n - 1)
                cout << " ";
        }
        if (i != n - 1)
            cout << endl;
    }

    return 0;
}