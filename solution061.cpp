#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int n;

    cin >> n;

    if (n < 100 && n % 2 == 1)
    {
        cout << n <<" is an odd number less than 100.";
    }
    else if (n >= 100 && n % 2 == 1)
    {
        cout << "This is a number greater than or equal to 100.";
    }
    else
    {
        cout << "NO";
    }
    cout << endl;

    return 0;
}