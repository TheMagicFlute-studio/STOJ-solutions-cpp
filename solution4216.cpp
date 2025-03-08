#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int n, oddcnt = 0, evencnt = 0;
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;
        if (x & 1)
        {
            oddcnt++;
        }
        else
        {
            evencnt++;
        }
    }
    cout << oddcnt << " " << evencnt << endl;
    
    return 0;
}