#include <iostream>

using namespace std;

int solve(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return solve(n - 1) + n;
}

int main(int argc, char *argv[])
{
    int n;
    cin >> n;
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        ans += solve(i);
    }
    cout << ans << endl;
    
    return 0;
}
