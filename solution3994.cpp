#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int n;
    const int price = 13;
    cin >> n;
    cout << n / price << endl;
    cout << n % price << endl;
    
    return 0;
}