#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int a[50][50];

    for (int i = 0; i < 50; i++)
    {
        for (int j = 0; j < 50; j++)
        {
            a[i][j] = 0;
        }
    }
    int n;
    cin >> n;

    int x = 1, y = n / 2 + 1;
    a[x][y] = 1;

    for (int i = 2; i <= n * n; i++)
    {
        if (x == 1 && y != n)
        {
            x = n;
            y += 1;
        }
        else if (x != 1 && y == n)
        {
            x -= 1;
            y = 1;
        }
        else if (x == 1 && y == n)
        {
            x += 1;
        }
        else
        {
            if (a[x - 1][y + 1] == 0)
            {
                x -= 1;
                y += 1;
            }
            else
            {
                x += 1;
            }
        }
        a[x][y] = i;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
    
    return 0;
}