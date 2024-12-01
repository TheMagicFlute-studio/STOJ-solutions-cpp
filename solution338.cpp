#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int n, cnt = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << (char)((cnt++) % 26 + 'A');
        }
        cout << endl;
    }

    return 0;
}