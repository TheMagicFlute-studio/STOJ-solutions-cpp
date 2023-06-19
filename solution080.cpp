#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    for (int i = 0; i <= 100; i += 2)
    {
        if (i % 3 == 0)
        {
            if(!(i % 5 == 0))
            {
                cout << i << " ";
            }
        }
    }
    
    cout << endl;
    
    return 0;
}