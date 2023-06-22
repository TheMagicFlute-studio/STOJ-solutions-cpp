#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int n;

    cin >> n;
    
    if (n < 100 && n % 2 == 1)
    {
        cout << n << "为小于100的奇数";
    }
    else
    {
        cout << "NO";
    }
    cout << endl;
    
    return 0;
}