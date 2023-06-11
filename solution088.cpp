#include <iostream>

int main()
{
    using namespace std;
    int x, y;
    for (x = 0; x <= 35; x++)
    {
        y = 35 - x;
        if (2 * x + 4 * y == 94)
        {
            cout << x; // chicken
            cout << " ";
            cout << y; // rabbit
            cout << endl;
            break;
        }
    }
    return 0;
}
