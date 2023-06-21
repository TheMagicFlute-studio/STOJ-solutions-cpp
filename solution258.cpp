#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    long long n, ls[(const int)(10000)], x;

    cin >> n;

    for (long long i = 1; i <= n; i++)
    {
        cin >> ls[i];
    }

    cin >> x;

    for (long long i = 1; i <= n; i++)
    {
        if (ls[i] == x)
        {
            cout << i << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    
    return 0;
}