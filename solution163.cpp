#include <iostream>
#include <cstdio>

using namespace std;

int a[110][110];

int main(int argc, char *argv[])
{
    int m, n, cnt = 0, tmp;
    double cnt1 = 0;
    cin >> m >> n;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
            cnt++;
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> tmp;
            if (tmp == a[i][j])
            {
                cnt1++;
            }
        }
    }
    printf("%.2lf%\n", cnt1 / cnt * 100);

    return 0;
}