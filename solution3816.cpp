#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int x, y, z, q;
    cin >> x >> y >> z >> q;

    if (q - (2 * x + 5 * y + 3 * z) >= 0)
    {
        cout << "Yes" << endl;
        cout << q - (2 * x + 5 * y + 3 * z) << endl;
    }
    else
    {
        cout << "No" << endl;
        cout << x * 2 + y * 5 + z * 3 - q << endl;
    }
    
    return 0;
}