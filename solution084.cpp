#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int n;

    cin >> n;

    bool result = true;

    for (int i = 2; i <= n - 11; i++)
    {
        if (n % i == 0)
        {
            result = false;
        }
    }
    if (result == true)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
    cout << endl;

    return 0;
}