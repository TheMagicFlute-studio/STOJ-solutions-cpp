#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int n, cnt = 0;

    cin >> n;

    while (n >= 1)
    {
        n /= 2;

        cnt++;
    }
    cout << cnt << endl;
    
    return 0;
}