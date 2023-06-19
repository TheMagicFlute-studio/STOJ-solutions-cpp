#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    char a;

    cin >> a;

    if (a >= 'A' && a <= 'Z')
    {
        cout << "upper" << endl;
    }
    if (a >= 'a' && a <= 'z')
    {
        cout << "lower" << endl;
    }
    
    return 0;
}