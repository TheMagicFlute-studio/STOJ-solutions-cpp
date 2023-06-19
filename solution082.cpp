#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int m, n, sum = 0;

    cin >> m >> n;

    for (m; m <= n; m++)
    {
        if (!(m % 2 == 0))
        {
            sum += m;
        }
    }

    cout << sum << endl;
    
    return 0;
}