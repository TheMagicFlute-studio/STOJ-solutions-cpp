#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int cnt = 0;

    for (int i = 1; i <= 100; i++)
    {
        if (i % 5 == 0 & i % 8 == 0)
        {
            cnt++;
        }
    }
    cout << 100 - cnt << endl;
    
    return 0;
}