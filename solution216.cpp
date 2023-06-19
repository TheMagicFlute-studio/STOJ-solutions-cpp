#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    unsigned n;

    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        unsigned x = i;

        while (x)
        {
            if (x % 10 == 7 || i % 7 == 0)
            {
                cout << i << " ";
                
                break;
            }
            x /= 10;
        }
    }
    cout << endl;
    
    return 0;
}