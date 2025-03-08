#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int n;
    cin >> n;

    for (int i = 1; i * i * i <= n; i++)
    {
        if (i * i * i == n)
        {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    
    return 0;
}