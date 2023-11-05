#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    int m, n;
    cin >> n >> m;
    char a[110][110];

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> a[i][j];
        }
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            int cnt = 0;
            if (a[i][j] == '?')
            {
                if (a[i - 1][j - 1] == '*')
                    cnt++;
                if (a[i - 1][j] == '*')
                    cnt++;
                if (a[i - 1][j + 1] == '*')
                    cnt++;

                if (a[i][j - 1] == '*')
                    cnt++;

                if (a[i][j + 1] == '*')
                    cnt++;

                if (a[i + 1][j - 1] == '*')
                    cnt++;
                if (a[i + 1][j] == '*')
                    cnt++;
                if (a[i + 1][j + 1] == '*')
                    cnt++;

                a[i][j] = (char)(cnt + '0');
            }
        }
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cout << a[i][j];
        }
        cout << '\n';
    }
    return 0;
}