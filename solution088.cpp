#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int c, r;

    for (c = 0; c <= 35; c++)
    {
        r = 35 - c;

        if (2 * c + 4 * r == 94)
        {
            cout << c << " " << r << endl;
            
            break;
        }
    }
    
    return 0;
}