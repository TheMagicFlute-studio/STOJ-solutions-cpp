#include <iostream>

using namespace std;
int h[110][110];
int h1[110][110];

int sum(int x1, int y1, int x2, int y2)
{
    return h1[x2][y2] - h1[x1 - 1][y2] - h1[x2][y1 - 1] + h1[x1 - 1][y1 - 1];
}

int main(int argc, char *argv[])
{
    for (int i = 0; i < 110; i++)
    {
        for (int j = 0; j < 110; j++)
        {
            h[i][j] = 0;
            h1[i][j] = 0;
        }
    }
    int ans = 0x3FFFFFF;
    int n, m, k;
    cin >> n >> m >> k;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            char tmp;
            cin >> tmp;
            h[i][j] = (tmp - '0') + h[i][j - 1];
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            h1[i][j] = h[i][j] + h1[i - 1][j];
        }
    }
    for (int x1 = 1; x1 <= n; x1++)
    {
        for (int y1 = 1; y1 <= m; y1++)
        {
            for (int x2 = x1; x2 <= n; x2++)
            {
                for (int y2 = y1; y2 <= m; y2++)
                {
                    if (sum(x1, y1, x2, y2) < k)
                        continue;
                    ans = min(ans, (x2 - x1 + 1) * (y2 - y1 + 1));
                }
            }
        }
    }

    cout << (ans == 0x3FFFFFF ? 0 : ans) << endl;

    return 0;
}