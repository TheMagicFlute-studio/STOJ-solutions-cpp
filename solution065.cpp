#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    long long int n;

    cin >> n;

    if (n % 3 == 0 && n % 5 == 0 && n % 7 == 0)
    {
        cout << "3,5,7";
    }
    else if (!(n % 3 == 0) && !(n % 5 == 0) && !(n % 7 == 0))
    {
        cout << "-1";
    }
    cout << endl;
    
    return 0;
}