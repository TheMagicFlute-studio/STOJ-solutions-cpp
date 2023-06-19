#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    long long n, ans = 1;

    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        ans *= i;
    }
    cout << ans << endl;
    
    return 0;
}