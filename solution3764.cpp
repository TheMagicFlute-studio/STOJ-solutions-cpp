#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int n, cnt = 0;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << (char)((cnt++) % 26 + 'A');
        }
        cout << endl;
    }
    
    return 0;
}