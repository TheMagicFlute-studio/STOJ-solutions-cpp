#include <iostream>

int main()
{
    using namespace std;

    int m, n;
    cin >> m >> n;
    int a[m][n];
    int cnt = 0; // 非零元素个数
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
    // cout << m << " " << n << " " << cnt << endl;
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
