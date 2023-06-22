#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int n;

    cin >> n;

    if (n >= 1 && n <= 10)
    {
        cout << "yes";
    }
    else
    {
        cout << "no";
    }
    cout << endl;
    
    return 0;
}