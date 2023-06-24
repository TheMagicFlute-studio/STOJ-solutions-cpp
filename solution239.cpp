#include <iostream>
#include <vector>

using namespace std;

int climbStairs(int n)
{
    if (n <= 2)
    {
        return n;
    }
    vector<int> dp(n + 1);

    dp[1] = 1;
    dp[2] = 2;

    for (int i = 3; i <= n; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    return dp[n];
}

int main(int argc, char *argv[])
{
    int n[30], i = 0;

    while(cin >> n[i])
    {
        cout << climbStairs(n[i]) << endl;
        i++;
    }

    return 0;
}