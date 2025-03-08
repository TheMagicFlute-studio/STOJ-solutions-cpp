#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int n, l, r;
    cin >> n >> l >> r;

    if (l / n == r / n)
    {
        cout << r % n << endl;
    }
    else
    {
        cout << n - 1 << endl;
    }
    
    return 0;
}