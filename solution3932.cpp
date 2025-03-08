#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int x, n;
    cin >> x >> n;
    while (n--)
    {
        x++;
        if (x == 8) x = 1;
    }
    cout << x << endl;
    
    return 0;
}
