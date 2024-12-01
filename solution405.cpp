#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int n, cnt = 0;
    cin >> n;

    for (int a = 0; a <= 1; a++)
    {
        for (int b = a; b <= 9; b++)
        {
            for (int c = b; c <= 9; c++)
            {
                for (int d = c; d <= 9; d++)
                {
                    for (int e = d; e <= 9; e++)
                    {
                        int sum = a * 10000 + b * 1000 + c * 100 + d * 10 + e;
                        if (sum <= n && sum >= 11)
                        {
                            cnt++;
                        }
                        else if (sum > n)
                        {
                            cout << cnt << endl;
                            return 0;
                        }
                    }
                }
            }
        }
    }
    cout << cnt << endl;

    return 0;
}