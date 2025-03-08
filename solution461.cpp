#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char *argv[])
{
    int n;
    cin >> n;
    for (int a = 0; a < log(n); a++)
    {
        for (int b = 0; b < log(n); b++)
        {
            for (int c = 0; c < sqrt(n); c++)
            {
                double dd = sqrt(n - a * a - b * b - c * c);
                int d = dd;
                if (dd == d * 1.0)
                {
                    cout << a << " " << b << " " << c << " " << d << endl;
                    return 0;
                }
            }
        }
    }
    return 0;
}