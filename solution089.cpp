#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    for (double x = 0; x < 20; x++)
    {
        for (double y = 0; y < 33; y++)
        {
            double z = 100 - x - y;
            
            if (5 * x + 3 * y + z / 3 == 100 && x + y + z == 100)
            {
                cout << x << " " << y << " " << z << endl;
            }
        }
    }
    
    return 0;
}