#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int y, m;
    cin >> y >> m;

    bool leep = (y % 4 == 0 && y % 100 != 0) || y % 400 == 0;

    if (m == 2 && leep)
    {
        cout << 29 << endl;
    }
    else if (m == 2 && !leep)
    {
        cout << 28 << endl;
    }
    else if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
    {
        cout << 31 << endl;
    }
    else
    {
        cout << 30 << endl;
    }
    
    return 0;
}