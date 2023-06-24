#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int total, cnt = 0;

    cin >> total;

    while (total)
    {
        if (total >= 200)
        {
            total -= 200;
        }
        else if (total >= 100)
        {
            total -= 100;
        }
        else if (total >= 20)
        {
            total -= 20;
        }
        else if (total >= 10)
        {
            total -= 10;
        }
        else if (total >= 5)
        {
            total -= 5;
        }
        else if (total >= 1)
        {
            total -= 1;
        }
        cnt++;
    }
    cout << cnt << endl;
    
    return 0;
}