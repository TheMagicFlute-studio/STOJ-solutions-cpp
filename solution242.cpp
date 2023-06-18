#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char *argv[])
{
    int n, ans = 0;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        ans += pow(2, i);
    }

    cout << ans << endl;
    
    return 0;
}