#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int days, coins = 0, n = 1, count = 0;

    cin >> days;

    while (count < days)
    {
        for (int i = 0; i < n && count < days; i++)
        {
            coins += n;
            
            count++;
        }
        n++;
    }
    cout << coins << endl;
    
    return 0;
}