#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int a;

	cin >> a;

    while(a)
    {
        cout << a % 10;
        a /= 10;
    }
    
    return 0;
}