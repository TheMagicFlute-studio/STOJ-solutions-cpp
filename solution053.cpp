#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int a, b;

    cin >> a >> b;

    if (a % b == 0)
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "no" << endl;
    }
    
    return 0;
}