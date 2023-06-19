#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int a;

    cin >> a;

    if (a % 10 == 0)
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "no" << endl;
    }
    
    return 0;
}