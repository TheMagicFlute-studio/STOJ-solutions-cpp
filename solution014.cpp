#include <iostream>

int main(int argc, char **argv)
{
    using namespace std;

    int a;

    cin >> a;

    if (a % 2 == 0)
    {
        cout << "Even" << endl;
    }
    else
    {
        cout << "Odd" << endl;
    }

    return 0;
}