#include <iostream>

int main(int argc, char **argv)
{
    using namespace std;
    
    long long n, ans = 1;

    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        ans *= i;
    }
    cout << ans << endl;
    
    return 0;
}