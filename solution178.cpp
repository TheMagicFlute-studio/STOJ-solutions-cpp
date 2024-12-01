#include <iostream>

using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main(int argc, char *argv[])
{
    int a, b, ans, n;
    cin >> n;
    n -= 2;
    cin >> a >> b;
    ans = gcd(a, b);

    while (n--)
    {
        cin >> b;
        a = ans;
        ans = gcd(a, b);
    }
    cout << ans << endl;

    return 0;
}